#include <stdio.h>
#include <math.h>
#include <stdbool.h>

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

void squart_3()
{
    bool check = false;
    int n;
    int i = 2;

    scanf("%d", &n);
    while (i <= n)
    {
        if (i == n)
            check = true;
        i *= 2;
    }
    if (check)
        printf("YES");
    else
        printf("NO");
}

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

void run()
{
    double x;
    double y;

    int day = 1;

    scanf("%lg%lg", &x, &y);
    while (x <= y)
    {
        x += x * 0.1;
        day += 1;
    }
    printf("%d", day);
}

#ifdef MAIN

int main()
{
    run();
    return 0;
}

#endif