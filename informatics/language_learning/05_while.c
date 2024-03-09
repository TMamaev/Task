#include <stdio.h>
#include <math.h>
#include <stdbool.h>

// https://informatics.msk.ru/mod/statements/view.php?id=249#1
void squart()
{
    int n;
    int n1 = 1;

    scanf("%d", &n);
    while (n1 * n1 <= n)
    {
        printf("%d ", n1 * n1);
        n1++;
    }
}

// https://informatics.msk.ru/mod/statements/view.php?id=249&chapterid=3058#1
void min_div()
{
    int n;
    int i = 2;

    scanf("%d", &n);
    while (i <= n / 2)
    {
        if (n % i == 0)
        {
            printf("%d", i);
            break;
        }
        i++;
    }
}

// https://informatics.msk.ru/mod/statements/view.php?id=249&chapterid=3059#1
void squart_2()
{
    int n;
    int i = 2;

    scanf("%d", &n);
    while (i <= n)
    {
        printf("%d ", i);
        i *= 2;
    }
}

// https://informatics.msk.ru/mod/statements/view.php?id=249&chapterid=3060#1
void squart_3()
{
    int check = 0;
    int n;
    int i = 1;

    scanf("%d", &n);
    while (i <= n)
    {
        if (i == n)
            check = 1;
        i *= 2;
    }
    if (check)
        printf("YES");
    else
        printf("NO");
}

// https://informatics.msk.ru/mod/statements/view.php?id=249&chapterid=3061#1
void log_1()
{
    int n;
    int i = 2;
    int ans = 1;

    scanf("%d", &n);
    while (i < n)
    {
        ans++;
        i *= 2;
    }
    printf("%d", ans);
}

// https://informatics.msk.ru/mod/statements/view.php?id=249&chapterid=3062#1
void run()
{
    double x;
    double y;
    int day = 1;
    
    scanf("%lg%lg", &x, &y);
    while (x < y)
    {
        x *= 1.1;
        day++;
    }
    printf("%d", day);
}

// https://informatics.msk.ru/mod/statements/view.php?id=249&chapterid=3063#1
void bank()
{
    double x;
    double p;
    double y;
    int years = 0;

    scanf("%lg%lg%lg", &x, &p, &y);
    p = p / 100;
    while (x < y)
    {
        years++;
        x += x * p;
        trunc(x);
    }
    printf("%d", years);
}



#ifdef MAIN

int main()
{
    run();
    return 0;
}

#endif
