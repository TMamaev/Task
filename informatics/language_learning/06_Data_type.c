#include <stdio.h>
#include <math.h>

// https://informatics.msk.ru/mod/statements/view.php?id=1120&chapterid=1433#1
void rabbit()
{
    int n, m;

    scanf("%d%d", &n, &m);
    if (n < m)
    {
        printf("%d", m % n + m / n);
    }
    else
    {
        printf("%d", 1);
    }
}

// https://informatics.msk.ru/mod/statements/view.php?id=1120&chapterid=1466#1
void find_sum()
{
    long long n;
    
    scanf("%lli", &n);
    if (n > 0)
        printf("%lli", ((1 + n) * n) / 2);
    else if (n < 0)
        printf("%lli", (n + 1) * (llabs(n) + 2) / 2);
    else 
        printf("1");
}

// https://informatics.msk.ru/mod/statements/view.php?id=1120&chapterid=1475#1
void time_1()
{
    int s, m, h;
    
    scanf("%d", &s);
    printf("It is %d hours %d minutes.", s / 3600, s / 60 % 60);
}

// https://informatics.msk.ru/mod/statements/view.php?id=1120&chapterid=1476#1
void time_2()
{
    int d;
    
    scanf("%d", &d);
    d %= 360;
    printf("It is %d hours %d minutes.", d / 30, d % 30);
}

// https://informatics.msk.ru/mod/statements/view.php?id=1120&chapterid=1479#1
void text()
{
    int n, k;
    
    scanf("%d%d", &k, &n);
    if (n > k)
        printf("%d %d", n / k + 1, n % k);
    else
        printf("1 %d", n);
}

// https://informatics.msk.ru/mod/statements/view.php?id=1120&chapterid=1483#1
void seconds()
{
    int s1, s2, m1, m2, h1, h2;
    
    scanf("%d%d%d%d%d%d", &h1, &m1, &s1, &h2, &m2, &s2);
    s1 = s1 + m1 * 60 + h1 * 3600;
    s2 = s2 + m2 * 60 + h2 * 3600;
    printf("%d", s2 - s1);
}