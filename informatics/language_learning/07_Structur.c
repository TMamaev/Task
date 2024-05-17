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
    int n, max_x = 0, max_y = 0;
    
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        struct point p = {p.x, p.y};
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
    double mid_x = 0, mid_y = 0;
    
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        struct point p = {p.x, p.y};
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
  int m1;
  int m2;
  int m3;
};

// https://informatics.msk.ru/mod/statements/view.php?id=279&chapterid=328#1
void marks()
{
    int n;
    double mid_m1 = 0, mid_m2 = 0, mid_m3 = 0;
    
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        struct student s = {s.surname, s.name, s.m1, s.m2, s.m3};
        scanf("%s%s%d%d%d", &s.surname, &s.name, &s.m1, &s.m2, &s.m3);
        mid_m1 += s.m1;
        mid_m2 += s.m2;
        mid_m3 += s.m3;
    }
    printf("%f %f %f", mid_m1 / n, mid_m2 / n, mid_m3 / n);
}

// https://informatics.msk.ru/mod/statements/view.php?id=279&chapterid=329#1
void mark_3()
{
    int n;
    
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        struct student s = {s.surname, s.name, s.m1, s.m2, s.m3};
        scanf("%s%s%d%d%d", &s.surname, &s.name, &s.m1, &s.m2, &s.m3);
        
        if (s.m1 > 3 && s.m2 > 3 && s.m3 > 3)
            printf("%s %s", s.surname, s.name);
    }
}

// https://informatics.msk.ru/mod/statements/view.php?id=279&chapterid=330#1
void best_marks()
{
    int n;
    double max_mid = 0;
    
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        struct student s = {s.surname, s.name, s.m1, s.m2, s.m3};
        scanf("%s%s%d%d%d", s.surname, s.name, &s.m1, &s.m2, &s.m3);
        
        if ((s.m1 + s.m2 + s.m3) / 3 > max_mid)
        {
            max_mid = (s.m1 + s.m2 + s.m3) / 3;
            printf("%s %s", s.surname, s.name);
        }
    }
}


