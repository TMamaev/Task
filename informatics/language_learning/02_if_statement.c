#include <stdio.h>
#include <math.h>

// https://informatics.msk.ru/mod/statements/view.php?id=276&chapterid=292#1
void max_1()
{
    int a;
    int b;
    
    scanf("%d%d", &a, &b);
    if (a > b)
        printf("%d", a);
    else 
        printf("%d", b);
}

// https://informatics.msk.ru/mod/statements/view.php?id=276&chapterid=253#1
void big_year()
{
    int year;
    
    scanf("%d", &year);
    if (year % 4 == 0 && year % 100 != 0 && year % 400 == 0)
        printf("YES");
    else
        printf("NO");
}

// https://informatics.msk.ru/mod/statements/view.php?id=276&chapterid=2960#1
void test_sistem()
{
    int a;
    int b;

    scanf("%d%d", &a, &b);
    if ((a == b && a == 1) || (a != b && a != 1 && b != 1))
        printf("YES");
    else
        printf("NO");
}

// https://informatics.msk.ru/mod/statements/view.php?id=276&chapterid=2959#1
void sign()
{
    int a;

    scanf("%d", &a);
    if (a > 0)
        printf("1");
    else if (a == 0)
        printf("0");
    else 
        printf("-1");
}

// https://informatics.msk.ru/mod/statements/view.php?id=276&chapterid=293#1
void max_2()
{
    int a;
    int b;

    scanf("%d%d", &a, &b);
    if (a > b)
        printf("%d", a);
    else if (a == b)
        printf("0");
    else
        printf("%d", b);
}

// https://informatics.msk.ru/mod/statements/view.php?id=276&chapterid=294#1
void max_3()
{
    int a;
    int b;
    int c;
    int max;
    
    scanf("%d%d%d", &a, &b, &c);
    max = a;
    if (b > max)
        max = b;
    else if (c > max)
        max = c;
    printf("%d", max);
}


// https://informatics.msk.ru/mod/statements/view.php?id=276&chapterid=254#1
void chess_1()
{
    int x1;
    int y1;
    int x2;
    int y2;

    scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
    if (x1 == x2 || y1 == y2)
        printf("YES");
    else 
        printf("NO");
}


// https://informatics.msk.ru/mod/statements/view.php?id=276&chapterid=255#1
void chess_2()
{
    int x1;
    int x2;
    int y1;
    int y2;

    scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
    if (x1 % 2 == x2 % 2 && y1 % 2 == y2 % 2)
        printf("YES");
    else
        printf("NO");
}

// https://informatics.msk.ru/mod/statements/view.php?id=276&chapterid=256#1
void chess_3()
{
    int x1;
    int x2;
    int y1;
    int y2;

    scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
    if (x1 % 2 == x2 % 2 || y1 % 2 == y2 % 2)
        printf("YES");
    else
        printf("NO");
}

// https://informatics.msk.ru/mod/statements/view.php?id=276&chapterid=298#1
void chess_4()
{
    int x1;
    int x2;
    int y1;
    int y2;

    scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
    if ((x1 + 1 == x2 && y1 + 1 == y2) ||
        (x1 + 1 == x2 && y1 == y2) ||
        (x1 + 1 == x2 && y1 - 1 == y2) ||
        (x1 == x2 && y1 + 1 == y2) ||
        (x1 == x2 && y1 == y2) ||
        (x1 == x2 && y1 - 1 == y2) ||
        (x1 - 1 == x2 && y1 + 1 == y2) ||
        (x1 - 1 == x2 && y1 == y2) ||
        (x1 - 1 == x2 && y1 - 1 == y2))
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}


// https://informatics.msk.ru/mod/statements/view.php?id=276&chapterid=298#1
void chess_6()
{
    int x1;
    int x2;
    int y1;
    int y2;

    scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
    if ((x1 + 2 == x2 && y1 + 1 == y2) ||
        (x1 + 2 == x2 && y1 - 1 == y2) ||
        (x1 + 1 == x2 && y1 - 2 == y2) ||
        (x1 + 1 == x2 && y1 + 2 == y2) ||
        (x1 - 2 == x2 && y1 + 1 == y2) ||
        (x1 - 2 == x2 && y1 - 1 == y2) ||
        (x1 - 1 == x2 && y1 + 2 == y2) ||
        (x1 - 1 == x2 && y1 - 2 == y2))
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}

// https://informatics.msk.ru/mod/statements/view.php?id=276&chapterid=260#1
void find_x()
{
    int a;
    int b;

    scanf("%d%d", &a, &b);
    if (((-1 * b) % a) == 0)
        printf("%d", (-1 * b) / a);
    else if (a == 0 && b == 0)
        printf("INF");
    else 
        printf("NO");
}

// https://informatics.msk.ru/mod/statements/view.php?id=276&chapterid=261#1
void find_x_2()
{
    int a;
    int b;
    int c;
    int d;

    scanf("%d%d%d%d", &a, &b, &c, &d);
    if (a == 0 && b == 0)
        printf("INF");
    else if (a == 0 || b * c == a * d)
        printf("NO");
    else if (b % a == 0)
        printf("%d", -d / a);
    else
        printf("NO");
}

// https://informatics.msk.ru/mod/statements/view.php?id=276&chapterid=262#1
void money()
{
    int a;
    int b;
    int c;
    int d;
    int e;
    int f;

    scanf("%d%d%d%d", &a, &b, &c, &d);
    if (d < b)
    {
        d++;
        c--;
    }
    else
    {
        e = c - a;
        f = d - b;
    }
    printf("%d %d", e, f);
}

// https://informatics.msk.ru/mod/statements/view.php?id=276&chapterid=264#1
void ice_cream()
{
    int k;

    scanf("%d", &k);
    
    if (k % 5 == 3 ||
        k % 5 == 0 ||
        k % 3 == 0 ||
        k % 3 == 2 ||
        (k % 3 == 1 && k % 5 == 1))
    {
        printf("YES");
    }
    else 
    {
        printf("NO");
    }
}

// https://informatics.msk.ru/mod/statements/view.php?id=276&chapterid=265#1
void meat()
{
    int k;
    int m;
    int n;

    scanf("%d%d%d", &k, &m, &n);
    if (n >= k)
        printf("%d", 2 * m);
    else if ()
}

// https://informatics.msk.ru/mod/statements/view.php?id=276&chapterid=1451#1
void even_odd()
{
    int a;
    int b;
    int c;

    scanf("%d%d%d", &a, &b, &c);
    if ((a % 2 == 0 && (b % 2 != 0 || c % 2 != 0)) ||
        (b % 2 == 0 && (a % 2 != 0 || c % 2 != 0)) ||
        (c % 2 == 0 && (b % 2 != 0 || a % 2 != 0)))
        printf("YES");
    else
        printf("NO");
}

// https://informatics.msk.ru/mod/statements/view.php?id=276&chapterid=295#1
void triangle()
{
    int a;
    int b;
    int c;

    scanf("%d%d%d", &a, &b, &c);
    if (a + b > c)
        printf("YES");
    else if (b + c > a)
        printf("YES");
    else if (a + c > b)
        printf("YES");
    else
        printf("NO");
}

// https://informatics.msk.ru/mod/statements/view.php?id=276&chapterid=1459#1
void roman_number_system()
{
    int n;

    scanf("%d", &n);
    if (n / 10 < 4)
        printf("%X*c", n / 10, 'X');
    else if (n / 10 == 4)
        printf("LX");
    else if (n / 10 > 4 && n / 10 < 9)
        printf("L%0*c", (n - 50) / 10, 'X');
    else if (n / 10 == 9)
        printf("XC");
    else 
        printf("C");

    if (n % 10 < 4)
        printf("%0*c", n / 10, 'I');
    else if (n % 10 == 4)
        printf("IV");
    else if (n % 10 > 4 && n % 10 < 9)
        printf("%0*c", (n - 5) % 10, 'I');
    else if (n % 10 == 9)
        printf("IX"); 
}



// https://informatics.msk.ru/mod/statements/view.php?id=276&chapterid=2961#1
void arrange()
{
    int a;
    int b;
    int c;

    scanf("%d%d%d", &a, &b, &c);
    if (a <= b && b <= c)
        printf("%d %d %d", a, b, c);
    else if (a <= c && c <= b)
        printf("%d %d %d", a, c, b);
    else if (b <= a && a <= c)
        printf("%d %d %d", b, a, c);
    else if (b <= c && c <= a)
        printf("%d %d %d", b, c, a);
    else if (c <= a && a <= b)
        printf("%d %d %d", c, a, b);
    else if (c <= b && b <= a)
        printf("%d %d %d", c, b, a);
}

// https://informatics.msk.ru/mod/statements/view.php?id=276&chapterid=266#1
void coordinate_system()
{
    int x1;
    int y1;
    int x2;
    int y2;

    scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
    if (x1 > 0 && x2 > 0 && y1 > 0 && y2 > 0)
        printf("YES");
    else if (x1 < 0 && x2 < 0 && y1 > 0 && y2 > 0)
        printf("YES");
    else if (x1 < 0 && x2 < 0 && y1 < 0 && y2 < 0)
        printf("YES");
    else if (x1 > 0 && x2 > 0 && y1 < 0 && y2 < 0)
        printf("YES");
    else
        printf("NO");
}


    

#ifdef MAIN

int main()
{
    coordinate_system();
    return 0;
}

#endif

