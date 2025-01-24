#include <stdio.h>
#include <unistd.h>
#include <getopt.h>

// usage: hexview [OPTIONS] file...
// -h print this help\n
// -c count\tbytes amount per line\n
// -n count\tbytes amount per print\n
// -s off\t\tstart offset in the file\n
// -o filename\toutput filename\n
// -a\t\tprint ASCII characters\n
// -f\t\toff row numbers\n
// -b base\t\tbase for output (should be 2, 8, 10, 16)

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
                printf("nothing");
                break;
        }
        opt = getopt(argc, argv, "oh");
    }
    return 0;
}
