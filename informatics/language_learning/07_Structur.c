#include <stdio.h>
#include <stdlib.h>

struct point
{
    int x;
    int y;
};

// https://informatics.msk.ru/mod/statements/view.php?id=279&chapterid=322#1
void point_on_coordinate()
{
    int n;
    int max_x = 0;
    int max_y = 0;
    struct point p = {p.x, p.y};
    
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d%d", &p.x, &p.y);
        
        if (abs(p.x) + abs(p.y) > abs(max_x) + abs(max_y))
        {
            max_x = p.x;
            max_y = p.y;
        }
    }
    printf("%d %d", max_x, max_y);
}

// https://informatics.msk.ru/mod/statements/view.php?id=279&chapterid=323#1
void mid_num()
{
    int n;
    double mid_x = 0;
    int mid_y = 0;
    struct point p = {p.x, p.y};
    
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d%d", &p.x, &p.y);
        mid_x += p.x;
        mid_y += p.y;
    }
    printf("%f %f", mid_x / n, mid_y / n);
}

struct student
{
    char surname;
    char name;
    int mark1;
    int mark2;
    int mark3;
};

// https://informatics.msk.ru/mod/statements/view.php?id=279&chapterid=328#1
void marks()
{
    int n;
    double mid_mark1 = 0;
    int mid_mark2 = 0;
    int mid_mark3 = 0;
    struct student s = {s.surname, s.name, s.mark1, s.mark2, s.mark3};

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%s%s%d%d%d", &s.surname, &s.name, &s.mark1, &s.mark2, &s.mark3);
        mid_mark1 += s.mark1;
        mid_mark2 += s.mark2;
        mid_mark3 += s.mark3;
    }
    printf("%f %f %f", mid_mark1 / n, mid_mark2 / n, mid_mark3 / n);
}

// https://informatics.msk.ru/mod/statements/view.php?id=279&chapterid=329#1
void mark_3()
{
    int n;
    struct student s = {s.surname, s.name, s.mark1, s.mark2, s.mark3};
    
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%s%s%d%d%d", &s.surname, &s.name, &s.mark1, &s.mark2, &s.mark3);
        if (s.mark1 > 3 && s.mark2 > 3 && s.mark3 > 3)
            printf("%s %s", s.surname, s.name);
    }
}

// https://informatics.msk.ru/mod/statements/view.php?id=279&chapterid=330#1
void best_marks()
{
    int n;
    double max_mid = 0;
    struct student s = {s.surname, s.name, s.mark1, s.mark2, s.mark3};
    
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%s%s%d%d%d", s.surname, s.name, &s.mark1, &s.mark2, &s.mark3);
        if ((s.mark1 + s.mark2 + s.mark3) / 3 > max_mid)
        {
            max_mid = (s.mark1 + s.mark2 + s.mark3) / 3;
            printf("%s %s", s.surname, s.name);
        }
    }
}
