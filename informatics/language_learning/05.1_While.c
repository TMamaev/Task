#include <stdio.h>

// https://informatics.msk.ru/mod/statements/view.php?id=2587&chapterid=114#1
int SumOfDigits(int n)
{
    int t = 0;

    while (n != 0)
    {
        t += n % 10;
        n /= 10;
    }
    return t;
}

// https://informatics.msk.ru/mod/statements/view.php?id=2587&chapterid=115#1
int NumberOfZeroes(int n)
{
    int t = 0;

    while (n != 0)
    {
        if (n % 10 == 0)
            t++;
        n /= 10;
    }
    return t;
}

// https://informatics.msk.ru/mod/statements/view.php?id=2587&chapterid=116#1
void MinMaxDigit(int n)
{
    int min = n % 10;
    int max = n % 10;

    while (n != 0)
    {
        if (n % 10 > max)
            max = n % 10;
        if (n % 10 < min)
            min = n % 10;
        n /= 10;
    }
    printf("%d %d", min, max);
}

//https://informatics.msk.ru/mod/statements/view.php?id=2587&chapterid=117#1
void bin_sys(int n)
{
    while (n != 0)
    {
        printf("%d", n % 2);
        n /= 2;
    }
}

// https://informatics.msk.ru/mod/statements/view.php?id=2587&chapterid=118#1
void reverse(int n)
{
    int res = 0;

    while (n != 0)
    {
        res += res * 10 + n % 10;
        n /= 10;
    }
    printf("%d", res);
}

int main()
{
    int n;

    scanf("%d", &n);
    printf("%d", SumOfDigits(n));
    return 0;
}