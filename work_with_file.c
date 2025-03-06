#include <stdio.h>
#include <unistd.h>
#include <getopt.h>
#include <stdlib.h>

// - вывести содержимое файла на экран !!!
// - узнать размер файла !!!
// - вывести файл начиная с середины до конца !!!
// - заменить все символы (взять произвольный, например "d" на "l") !!!
// - вписать какое-либо предложение в середину файла !!!

void work_with_file()
{
    int i = 0;
    FILE *fp = fopen("main.c", "r");
    fseek(fp, 0, SEEK_END);
    long size = ftell(fp);
    fseek(fp, size / 2, SEEK_SET);
    fseek(fp, 0, SEEK_SET);
    //fseek(fp, size / 2, SEEK_SET);
    char *pr = malloc(size * sizeof(char));
    
    fread(pr, 1, size, fp);
    for (; i < size / 2; i++)
    {
        if (pr[i] == 'f')
            pr[i] = 'l';
        printf("%c", pr[i]);
    }
    for (; i < size; i++)
    {
        if (pr[i] == 'f')
            pr[i] = 'l';
        printf("%c", pr[i]);
    }
    fclose(fp);
    printf("%d", size);

    FILE *f = fopen("test.c", "wb");
    fseek(f, 0, SEEK_END);
    size = ftell(f);
    fseek(f, size / 2, SEEK_SET);
    fprintf(f, "\n\n Today 16.02.2025 \n\n");
    fclose(f);
}
