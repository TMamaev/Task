#include <stdio.h>
#include <unistd.h>
#include <getopt.h>
#include <stdlib.h>

// usage: hexview [OPTIONS] file...
// -h print this help\n
// -c count\tbytes amount per line\n
// -n count\tbytes amount per print\n
// -s off\t\tstart offset in the file\n
// -o filename\toutput filename\n
// -a\t\tprint ASCII characters\n
// -f\t\toff row numbers\n
// -b base\t\tbase for output (should be 2, 8, 10, 16)

// objdump - for binary files
// hexdump -C main.c

// r w a
// r+ w+ a+
// t b
struct settings
{
    int base;
    int byte_per_line;
    int byte_per_print;
    int offset;
    char *filename;
    int rows_number;
    int ASCII;
};

void print_ASCII(int start_line, int size, int i)
{
    FILE *fp = fopen("main.c", "r");
    char *pr = malloc(size * sizeof(char));
    fread(pr, 1, size, fp);

    for (; start_line < i; start_line++)
    {
        printf("%5c ", pr[start_line]);
    }
    fclose(fp);
}

int print_per_line(int i, int size, int bpl, int bpp)
{
    FILE *fp = fopen("main.c", "r");
    char *pr = malloc(size * sizeof(char));
    
    fread(pr, 1, size, fp);
    for (int k = 0; pr[i] != ';' && k < bpl && k < bpp; k++, i++)
    {
        printf("%5x ", pr[i]);
    }
    fclose(fp);
    return i;
}

int main(int argc, char **argv)
{
    const char *options = "hc:afn:b:s:o:";
    int opt = getopt(argc, argv, options);
    struct settings wwf;
    int i = 0;
    wwf.byte_per_line = 15;

    while (opt != -1)
    {
        switch (opt)
        {
            case 'h':
                printf("HELP");
                break;

            case 'c':
                wwf.byte_per_line = atoi(optarg);
                break;

            case 'a':
                wwf.ASCII = 1;
                break;

            case 'f':
                wwf.rows_number = -1;
                break;

            case 'n':
                wwf.byte_per_print = atoi(optarg);
                break;

            case 'b':
                wwf.base = atoi(optarg);
                break;

            case 's':
                wwf.offset = atoi(optarg);
                break;

            case 'o':
                printf("%s \n", optarg);
                break;

            default:
                printf("Don't find option");
                break;
        }
        opt = getopt(argc, argv, options);
    }

    int rows = 0;
    FILE *fp = fopen("main.c", "r");
    fseek(fp, 0, SEEK_END);
    long size = ftell(fp);
    fseek(fp, 0, SEEK_SET);
    for (int i = 0; i < size && i < wwf.byte_per_print;)
    {
        if (wwf.offset != 0)
        {
            i++;
            wwf.offset--;
        }
        else
        {
            if (wwf.rows_number != -1)
            {
                printf("%x ", rows);
                rows += wwf.byte_per_line;
            }
            int start_line = i;
            i = print_per_line(i, size, wwf.byte_per_line, wwf.byte_per_print);
            if (wwf.ASCII == 1)
                print_ASCII(start_line, size, i);
            printf("\n");
        }
    }

    return 0;
}
