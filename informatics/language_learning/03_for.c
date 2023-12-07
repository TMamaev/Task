#include <stdio.h>
#include <math.h>
#include <stdbool.h>

 // https://informatics.msk.ru/mod/statements/view.php?id=280&chapterid=333#1
void even_odd()
{
    int a;
    int b;

    scanf("%d%d", &a, &b);
    a += a % 2;
    for (; a <= b; a += 2)
        printf("%d ", a);
}

// https://informatics.msk.ru/mod/statements/view.php?id=280&chapterid=334#1
void remain()
{
    int a;
    int b;
    int c;
    int d;

    scanf("%d%d%d%d", &a, &b, &c, &d);
    a += a % d + c;
    for (; a <= b; a += d)
        printf("%d ", a);
}

// https://informatics.msk.ru/mod/statements/view.php?id=280&chapterid=335#1
void square()
{
    int a;
    int b;

    scanf("%d%d", &a, &b);
    for (int i = 1; i < b / 2; i ++)
        if (i * i >= a && i * i <= b)
            printf("%d ", a);
}

// https://informatics.msk.ru/mod/statements/view.php?id=280&chapterid=339#1
void min_divider()
{
    int x;

    scanf("%d", &x);
    for (int i = 2; i < x / 2; i++)
    {
        if (x % i == 0)
        {
            printf("%d", i);
            break;
        } 
    }
}

// https://informatics.msk.ru/mod/statements/view.php?id=280&chapterid=340#1
void dividers()
{
    int x;

    scanf("%d", &x);
    for (int i = 1; i <= x / 2; i++)
        if (x % i == 0)
            printf("%d ", i);
}

// https://informatics.msk.ru/mod/statements/view.php?id=280&chapterid=341#1
void num_dividers()
{
    int x;
    int num = 0;

    scanf("%d", &x);
    for (int i = 1; i <= x; i++)
        if (x % i == 0)
            num++;
    printf("%d", num);
}

// https://informatics.msk.ru/mod/statements/view.php?id=280&chapterid=342#1
void sum_100()
{
    int sum = 0;
    int k;

    for (int i = 0; i < 100; i++)
    {
        scanf("%d", &k);
        sum += k;
    }
    printf("%d", sum);
}

// https://informatics.msk.ru/mod/statements/view.php?id=280&chapterid=343#1
void sum_num()
{
    int sum = 0;
    int n;
    int k;

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &k);
        sum += k;
    }
    printf("%d", sum);
}

// https://informatics.msk.ru/mod/statements/view.php?id=280&chapterid=345#1
void sum_null()
{
    int sum = 0;
    int n;
    int k;

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &k);
        if (k == 0)
            sum += 1;
    }
    printf("%d", sum);
}

// https://informatics.msk.ru/mod/statements/view.php?id=280&chapterid=346#1
void count_num()
{
    int sum_null = 0;
    int sum_pos = 0;
    int sum_neg = 0;
    int n;
    int k;

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &k);
        if (k == 0)
            sum_null++;
        else if (k < 0)
            sum_neg++;
        else if (k > 0)
            sum_pos++;
    }
    printf("%d %d %d", sum_null, sum_pos, sum_neg);
}

// https://informatics.msk.ru/mod/statements/view.php?id=280&chapterid=347#1
void check_null()
{
    bool check = false;
    int n;
    int k;

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &k);
        if (k == 0)
            check = true;
    }
    if (check)
        printf("YES");
    else 
        printf("NO");
}

// https://informatics.msk.ru/mod/statements/view.php?id=280&chapterid=348#1
void equat_up()
{
    int a;
    int b;
    int c;
    int d;
    int x = 0;

    scanf("%d%d%d%d", &a, &b, &c, &d);
    for (; x <= 1000; x++)
    {
        if ((a * x * x * x + b * x * x + c * x + d) == 0)
            printf("%d ", x);
    }
}

// https://informatics.msk.ru/mod/statements/view.php?id=280&chapterid=349#1
void equat_down()
{
    int a;
    int b;
    int c;
    int d;
    int x = 1000;

    scanf("%d%d%d%d", &a, &b, &c, &d);
    for (; x >= 0; x--)
    {
        if ((a * x * x * x + b * x * x + c * x + d) == 0)
            printf("%d ", x);
    }
}

// https://informatics.msk.ru/mod/statements/view.php?id=280&chapterid=350#1
void num_sol()
{
    int a;
    int b;
    int c;
    int d;
    int e;
    int num = 0;
    int x = 0;

    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
    for (; x <= 1000; x++)
        if ( x != e && (a * x * x * x + b * x * x + c * x + d) == 0)
            num++;
    printf("%d", num);
}

// https://informatics.msk.ru/mod/statements/view.php?id=280&chapterid=1430#1
void GNCE()
{
    int sec;
    int num = 1;

    scanf("%d", &sec);
    for (int i = 0; i < sec; i += 0)
    {
        for (int i1 = num; i1 > 0 && i < sec; i1--)
        {
            printf("%d ", num);
            i++;
        }
        num++;
    }
}


#ifdef MAIN

int main()
{
    remain();
    return 0;
}

#endif
