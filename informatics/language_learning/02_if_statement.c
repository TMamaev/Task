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
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
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
    if (c > max)
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
    if (abs(x1 - x2) == abs(y1 - y2))
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
    if (abs(x1 - x2) == abs(y1 - y2) ||
        x1 == x2 && y1 == y2)
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
    if (abs(x1 - x2) <= 1 && abs(y1 - y2) <= 1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}


// https://informatics.msk.ru/mod/statements/view.php?id=276&chapterid=298#1
void chess_5()
{
    int x1;
    int x2;
    int y1;
    int y2;

    scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
    if (abs(x1 - x2) * abs(y1 - y2) == 2)
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
    if (a == 0)
        printf("NO");
    else if (-b % a == 0)
        printf("%d", -b / a);
    else if (a == 0 && b == 0)
        printf("INF");
}

// https://informatics.msk.ru/mod/statements/view.php?id=276&chapterid=261#1
void find_x_2()
{
    int a;
    int b;
    int c;
    int d;

    scanf("%d%d%d%d", &a, &b, &c, &d);
    if (c == 0 && d == 0)
        printf("NO");
    else if (-b % a == 0)
        printf("%d", -b / a);
    else if (a == 0 && b == 0)
        printf("INF");
}

// https://informatics.msk.ru/mod/statements/view.php?id=276&chapterid=262#1
void money()
{
    int a;
    int b;
    int c;
    int d;
    int e;


    scanf("%d%d%d%d", &a, &b, &c, &d);
    b += a * 100;
    c += d * 100;
    e = c - b;
    printf("%d %d", e / 100, e % 100);
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
// FIXME: wrong solution
void meat()
{
    int k;
    int m;
    int n;

    scanf("%d%d%d", &k, &m, &n);
    if (n >= k)
        printf("%d", 2 * m);
}

// https://informatics.msk.ru/mod/statements/view.php?id=276&chapterid=1451#1
void even_odd()
{
    int a;
    int b;
    int c;

    scanf("%d%d%d", &a, &b, &c);
    int s = (a % 2 + b % 2 + c % 2) % 3;
    if (s)
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
    if (b + c > a)
        printf("YES");
    if (a + c > b)
        printf("YES");
    else
        printf("NO");
}

// https://informatics.msk.ru/mod/statements/view.php?id=276&chapterid=1459#1
void roman_number_system()
{
    int n;
    if (n == 1)
        printf("I");
    if (n == 2)
        printf("II");
    if (n == 3)
        printf("III");
    if (n == 4)
        printf("IV");
    if (n == 5)
        printf("V");
    if (n == 6)
        printf("VI");
    if (n == 7)
        printf("VII");
    if (n == 8)
        printf("VIII");
    if (n == 9)
        printf("IX");
    if (n == 10)
        printf("X");
    if (n == 11)
        printf("XI");
    if (n == 12)
        printf("XII");
    if (n == 13)
        printf("XIII");
    if (n == 14)
        printf("XIV");
    if (n == 15)
        printf("XV");
    if (n == 16)
        printf("XVI");
    if (n == 17)
        printf("XVII");
    if (n == 18)
        printf("XVIII");
    if (n == 19)
        printf("IXX");
    if (n == 20)
        printf("XX");
    if (n == 21)
        printf("XXI");
    if (n == 22)    
        printf("XXII");
    if (n == 23)    
        printf("XXIII");
    if (n == 24)    
        printf("XXIV");
    if (n == 25)    
        printf("XXV");
    if (n == 26)    
        printf("XXVI");
    if (n == 27)    
        printf("XXVII");
    if (n == 28)    
        printf("XXVIII");
    if (n == 29)
        printf("XXIX");
    if (n == 30)
        printf("XXX");
    if (n == 31)
        printf("XXXI");
    if (n == 32)
        printf("XXXII");
    if (n == 33)
        printf("XXXIII");
    if (n == 34)
        printf("XXXIV");
    if (n == 35)
        printf("XXXV");
    if (n == 36)
        printf("XXXVI");
    if (n == 37)
        printf("XXXVII");
    if (n == 38)
        printf("XXXVIII");
    if (n == 39)
        printf("XXXIX");
    if (n == 40)
        printf("XL");
    if (n == 41)
        printf("XLI");
    if (n == 42)
        printf("XLII");
    if (n == 43)
        printf("XLIII");
    if (n == 44)
        printf("XLIV");
    if (n == 45)
        printf("XLV");
    if (n == 46)
        printf("XLVI");
    if (n == 47)
        printf("XLVII");
    if (n == 48)
        printf("XLVIII");
    if (n == 49)
        printf("XLIX");
    if (n == 50)
        printf("L");
    if (n == 51)
        printf("LI");
    if (n == 52)
        printf("LII");
    if (n == 53)
        printf("LIII");
    if (n == 54)
        printf("LIV");
    if (n == 55)
        printf("LV");
    if (n == 56)
        printf("LVI");
    if (n == 57)
        printf("LVII");
    if (n == 58)
        printf("LVIII");
    if (n == 59)
        printf("LIX");
    if (n == 60)
        printf("LX");
    if (n == 61)
        printf("LXI");
    if (n == 62)
        printf("LXII");
    if (n == 63)
        printf("LXIII");
    if (n == 64)    
        printf("LXIV");
    if (n == 65)
        printf("LXV");
    if (n == 66)
        printf("LXVI");
    if (n == 67)
        printf("LXVII");
    if (n == 68)
        printf("LXVIII");
    if (n == 69)
        printf("LXIX");
    if (n == 70)
        printf("LXX");
    if (n == 71)
        printf("LXXI");
    if (n == 72)    
        printf("LXXII");
    if (n == 73)
        printf("LXXIII");
    if (n == 74)
        printf("LXXIV");
    if (n == 75)
        printf("LXXV");
    if (n == 76)
        printf("LXXVI");
    if (n == 77)
        printf("LXXVII");
    if (n == 78)
        printf("LXXVIII");
    if (n == 79)
        printf("LXXIX");
    if (n == 80)
        printf("LXXX");
    if (n == 81)
        printf("LXXXI");
    if (n == 82)
        printf("LXXXII");
    if (n == 83)
        printf("LXXXIII");
    if (n == 84)
        printf("LXXXIV");
    if (n == 85)
        printf("LXXXV");
    if (n == 86)
        printf("LXXXVI");
    if (n == 87)
        printf("LXXXVII");
    if (n == 88)
        printf("LXXXVIII");
    if (n == 89)
        printf("LXXXIX");
    if (n == 90)
        printf("XC");
    if (n == 91)
        printf("XCI");
    if (n == 92)
        printf("XCII");
    if (n == 93)
        printf("XCIII");
    if (n == 94)
        printf("XCIV");
    if (n == 95)
        printf("XCV");
    if (n == 96)
        printf("XCVI");
    if (n == 97)
        printf("XCVII");
    if (n == 98)
        printf("XCVIII");
    if (n == 99)
        printf("XCIX");
    if (n == 100)
        printf("C");
}



// https://informatics.msk.ru/mod/statements/view.php?id=276&chapterid=2961#1
void arrange()
{
    int a;
    int b;
    int c;
    int max;
    int min;
    int mid;

    scanf("%d%d%d", &a, &b, &c);
    max = a;
    min = c;
    mid = b;
    if (b > max)
        max = b;
    if (c > max)
        max = c;
    if (b < min)
        min = b;
    if (a < min)
        min = a;
    if (a != max && a != min)
        mid = a;
    if (c != max && c != min)
        mid = c;
    printf("%d %d %d", min, mid, max);
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

void trungle()
{
    int a;
    int b;
    int c;

    scanf("%d%d%d", &a, &b, &c);
    if ((c * c) > (b * b + a * a))
        printf("obtuse");
    else if ((c * c) == (b * b + a * a))
        printf("right");
    else if ((c * c) < (b * b + a * a))
        printf("acute");
    else
        printf("impossible");
}

void korovy()
{
    int n;

    scanf("%d", &n);
    if (n % 10 == 1)
        printf("На лугу пасется %d корова.", n);
    else if (n % 10 > 1 && n % 10 < 5)
        printf("На лугу пасется %d коровы.", n);
    else if (n % 10 >= 5 || n % 10 == 0)
        printf("На лугу пасется %d коров.", n);
}

void coordinate()
{
    int M, N, x, y;

    scanf("%d%d%d%d", M, N, x, y);
    if (x == 0 && y == 0)
        printf("%d %d \n %d %d", x + 1, y, y + 1, x);
    else if (x == 0 && y == N)
        printf("%d %d \n %d %d", x + 1, y, y - 1, x);
    else if (x == 0 && y == N)
        printf("%d %d \n %d %d", x + 1, y, y - 1, x);
}

// https://informatics.msk.ru/mod/statements/view.php?id=276&chapterid=253#1
void leap_year()
{
    int year;

    scanf("%d", &year);
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        printf("YES");
    else
        printf("NO");
}

// https://informatics.msk.ru/mod/statements/view.php?id=276&chapterid=2959#1
void sign_x()
{
    int x;

    scanf("%d", &x);
    if (x > 0)
        printf("1");
    else if (x == 0)
        printf("0");
    else
        printf("-1");
}

// https://informatics.msk.ru/mod/statements/view.php?id=276&chapterid=294#1
void max_of_3()
{
    int a, b, c, max = 0;

    scanf("%d%d%d", &a, &b, &c);
    if (a > max)
        max = a;
    if (b > max)
        max = b;
    if (c > max)
        max = c;
    printf("%d", max);
}

// https://informatics.msk.ru/mod/statements/view.php?id=276&chapterid=254#1
void rook()
{
    int x1, y1, x2, y2;

    scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
    if (x1 == x2 || y1 == y2)
        printf("YES");
    else
        printf("NO");
}

//https://informatics.msk.ru/mod/statements/view.php?id=276&chapterid=262#1
void change()
{
    int a, b, c, d;

    scanf("%d%d%d%d", &a, &b, &c, &d);
    b = a * 100 + b;
    d = c * 100 + d;
    printf("%d %d", (d - b) / 100, (d - b) % 100);
}
#ifdef MAIN

int main()
{
    coordinate_system();
    return 0;
}

#endif
