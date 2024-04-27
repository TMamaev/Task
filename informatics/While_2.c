#include <stdio.h>
#include <math.h>

// https://informatics.msk.ru/mod/statements/view.php?id=2585#1
void sequence()
{
    int n;
    int ans = 0;

    scanf("%d", &n);
    while (n != 0)
    {
        ans++;
        scanf("%d", &n);
    }
    printf("%d", ans);
}

// https://informatics.msk.ru/mod/statements/view.php?id=2585&chapterid=3065#1
void sum_sequence()
{
    int n;
    int ans = 0;

    scanf("%d", &n);
    while (n != 0)
    {
        ans += n;
        scanf("%d", &n);
    }
    printf("%d", ans);
}

// https://informatics.msk.ru/mod/statements/view.php?id=2585&chapterid=3066#1
void mid_sequence()
{
    int n;
    double ans = 0;
    int sum = 0;

    scanf("%d", &n);
    while (n != 0)
    {
        ans += n;
        ++sum;
        scanf("%d", &n);
    }
    printf("%lf", ans / sum);
}

// https://informatics.msk.ru/mod/statements/view.php?id=2585&chapterid=3067#1
void even_sequence()
{
    int n;
    int ans = 0;

    scanf("%d", &n);
    while (n != 0)
    {
        if (n % 2 == 0)
            ans++;
        scanf("%d", &n);
    }
    printf("%d", ans);
}

// https://informatics.msk.ru/mod/statements/view.php?id=2585&chapterid=3068#1
void max_sequence()
{
    int n;
    int max;

    scanf("%d", &n);
    max = n;
    while (n != 0)
    {
        if (n > max)
            max = n;
        scanf("%d", &n);
    }
    printf("%d", max);
}

// https://informatics.msk.ru/mod/statements/view.php?id=2585&chapterid=3069#1
void last_sequence()
{
    int n;
    int last;
    int ans = 0;

    scanf("%d", &n);
    last = n;
    while (n != 0)
    {
        if (n > last)
            ans++;
        last = n;
        scanf("%d", &n);
    }
    printf("%d", ans);
}

// https://informatics.msk.ru/mod/statements/view.php?id=2585&chapterid=3070#1
void second_max_sequence()
{
    int n;
    int max = 0;
    int max_2 = 0;

    scanf("%d", &n);
    while (n != 0)
    {
        if (n > max)
        {
            max_2 = max;
            max = n;
        }
        scanf("%d", &n);
    }
    printf("%d", max_2);
}

// https://informatics.msk.ru/mod/statements/view.php?id=2585&chapterid=3072#1
void num_max()
{
    int n;
    int max;
    int ans = 0;

    scanf("%d", &n);
    max = n;
    while (n != 0)
    {
        if (n > max)
        {
            max = n;
            ans = 0;
        }
        if (n == max)
            ans++;
        scanf("%d", &n);
    }
    printf("%d", ans);
}

// https://informatics.msk.ru/mod/statements/view.php?id=2585&chapterid=3073#1
void sum_sequence_2()
{
    int n;
    int last;
    int ans = 0;

    scanf("%d", &n);
    last = n;
    while (n != 0 && last != 0)
    {
        ans += n;
        last = n;
        scanf("%d", &n);
    }
    printf("%d", ans);
}

// https://informatics.msk.ru/mod/statements/view.php?id=2585&chapterid=3077#1
void sequence_equels()
{
    int n;
    int last;
    int ans = 0;
    int max = 0;

    scanf("%d", &n);
    last = n;
    while (n != 0)
    {
        if (n == last)
            ans++;
        else if (n != last && ans > max)
        {
            max = ans;
            ans = 0;
        }
        else
            ans = 0;
        scanf("%d", &n);
    }
    printf("%d", &max);
}

// https://informatics.msk.ru/mod/statements/view.php?id=2585&chapterid=3078#1
void max_length()
{
    int n;
    int last;
    int ans = 0;
    int max = 0;
    int check = 0;

    scanf("%d", &n);
    last = n;
    while (n != 0)
    {
        if (n > last)
            ans++;
        else if (ans > max)
        {
            max = ans;
            ans = 0;
        }
        last = n;

        scanf("%d", &n);
    }
    printf("%d", max);
}

int main()
{
    second_max_sequence();
    return 0;
}
