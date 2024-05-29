#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct point
{
    double x;
    double y;
};

// https://informatics.msk.ru/mod/statements/view.php?id=279&chapterid=322#1
void point_on_coordinate()
{
    int n;
    struct point max = {0, 0};
    struct point p;
    
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%lf%lf", &p.x, &p.y);
        
        if (sqrt(p.x * p.x + p.y * p.y) > sqrt(max.x * max.x + max.y * max.y))
        {
            max.x = p.x;
            max.y = p.y;
        }
    }
    printf("%d %d", (int)max.x, (int)max.y);
}

// https://informatics.msk.ru/mod/statements/view.php?id=279&chapterid=323#1
void mid_num()
{
    int n;
    struct point mid = {0, 0};
    struct point p;
    
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%lf%lf", &p.x, &p.y);
        mid.x += p.x;
        mid.y += p.y;
    }
    printf("%lf %lf", mid.x / n, mid.y / n);
}

struct student
{
    char surname[100];
    char name[100];
    int mark[3];
};

// https://informatics.msk.ru/mod/statements/view.php?id=279&chapterid=328#1
void marks()
{
    int n;
    double mid_mark[3] = {0};
    struct student s;

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%s%s%d%d%d", s.surname, s.name, &s.mark[0], &s.mark[1], &s.mark[2]);
        mid_mark[0] += s.mark[0];
        mid_mark[1] += s.mark[1];
        mid_mark[2] += s.mark[2];
    }
    printf("%lf %lf %lf", mid_mark[0] / n, mid_mark[1] / n, mid_mark[2] / n);
}

// https://informatics.msk.ru/mod/statements/view.php?id=279&chapterid=329#1
void mark_3()
{
    int n;
    struct student s;
    
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%s%s%d%d%d", s.surname, s.name, &s.mark[0], &s.mark[1], &s.mark[2]);
        if (s.mark[0] > 3 && s.mark[1] > 3 && s.mark[2] > 3)
            printf("%s %s", s.surname, s.name);
    }
}

// https://informatics.msk.ru/mod/statements/view.php?id=279&chapterid=330#1
void best_marks()
{
    int n;
    double max_mid = 0;
    struct student s;
    
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%s%s%d%d%d", s.surname, s.name, &s.mark[0], &s.mark[1], &s.mark[2]);
        if ((s.mark[0] + s.mark[1] + s.mark[2]) / 3 > max_mid)
        {
            max_mid = (s.mark[0] + s.mark[1] + s.mark[2]) / 3;
            printf("%s %s", s.surname, s.name);
        }
    }
}

int main()
{
    marks();
    return 0;
}