#include <stdio.h>
#include <unistd.h>
#include <getopt.h>
#include <stdlib.h>

void work_with_file()
{
    FILE *fp = fopen("main.c", "r");
    fseek(fp, 0, SEEK_END);
    long size = ftell(fp);
    fseek(fp, size / 2, SEEK_SET);
    fprintf(fp, "/n Today 15.02.2025 /n");
    fseek(fp, 0, SEEK_SET);
    //fseek(fp, size / 2, SEEK_SET);
    char *pr = malloc(size * sizeof(char));
    
    fread(pr, 1, size, fp);
    for (int i = 0; i < size; i++)
    {
        printf("%c", pr[i]);
    }
    fclose(fp);
    printf("%d", size);
}

// errno

int main(int argc, char **argv)
{
    int opt = getopt(argc, argv, "oh");
    while (opt != -1)
    {
        switch (opt)
        {
            case 'h':
                printf("HELP");

                break;

            case 'o':
                printf("%s ", argv[0]);
                break;

            default:
                break;
        }
        opt = getopt(argc, argv, "oh");
    }
    work_with_file();
    
    return 0;
}
