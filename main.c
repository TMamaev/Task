#include <stdio.h>
#include <unistd.h>
#include <getopt.h>
#include <stdlib.h>
#include <math.h>

// Написать функцию, которая считывает символы с экрана
// возвращает целое число
// число может быть задано так:
// 1234
// -1234
// +1234
// 0001 = 1

int main(int argc, char **argv)
{
    int sum = 0;
    int num = getchar();
    int sign = 1;
    if (num == '-')
        sign = -1;
    else if (num >= '0')
    {
        sum = (num - '0');
    }
    while ((num = getchar()) != EOF && num >= '0')
    {
        sum = sum * 10 + (num - '0');
    }
    printf("\n%d", sign * sum);
    return 0;
}
