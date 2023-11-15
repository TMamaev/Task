#include <stdio.h>
#include <math.h>

// https://informatics.msk.ru/mod/statements/view.php?id=2296#1
void hyp()
{
    int a;
    int b;

    scanf("%d%d", &a, &b);
    printf("%lf", sqrt(a * a + b * b));
}

// https://informatics.msk.ru/mod/statements/view.php?id=2296&chapterid=2937#1
void next_and_prev()
{
    int a;
    
    scanf("%d", &a);
    printf("The next number for the number %d is %d.\n"
        "The previous number for the number %d is %d.", a, a + 1, a, a - 1);
}


void apple_1()
{
    int n, k;
    scanf("%d%d", &n, &k);
    printf("%d", k / n);
}


void apple_2()
{
    int n, k, pol;
    scanf("%d%d", &n, &k);
    pol = k / n;
    printf("%d", k - pol * n);
}


void MKAD()
{
    int v;
    int t;
  
    scanf("%d%d", &v, &t);
    printf("%d", ((v * t) % 109 + 109) % 109);
}


void last_num()
{
    int n;

    scanf("%d", &n);
    printf("%d", n % 10);
}


void num_of_tens()
{
    int n;

    scanf("%d", &n);
    printf("%d", n / 10);
}


void num_of_tens2()
{
    int n;
  
    scanf("%d", &n);
    printf("%d", n / 10 % 10);
}


void sum_dig()
{
    int n;
    int n_1;
    int n_10;
    int n_100;
    
    scanf("%d", &n);
    n_1 =  n % 10;
    n_10 = n / 10 % 10;
    n_100 = n / 10 / 10 % 10;
    printf("%d", n_1 + n_10 + n_100);
}


void next_parity()
{
    int n;
  
    scanf("%d", &n);
    printf("%d", n + 2 - n & 1);
}


void electric_watch1()
{
    int n;
    const int minutes_in_day = 1440;
  
    scanf("%d", &n);
    n %= minutes_in_day;
    printf("%d %d", n / 60, n % 60);
}


void electric_watch2()
{
    int n;

    scanf("%d", &n);
    n %= 86400;

    // %[flags][width][.precision][length]<type>
    printf("%d:%02d:%02d", n / 3600, n % 3600 / 60, n % 60);
}


void replace_values()
{
    int a;
    int b;
    int c;

    scanf("%d%d", &a, &b);
    c = a;
    a = b;
    b = c;
    printf("%d %d", a, b);
}


//////////////////////////////////////////
void lesson_time()
{
    int les;
    int time15;
    int time5;
    
    scanf("%d", &les);
    time5 = les / 2 + les % 2;
    time15 = les / 2;
    printf("%d %d",
        (540 + 5 * time5  + 15 * time15) / 60,
        (540 + 5 * time5 + 15 * time15) % 60);
}


void price()
{
  int a; 
  int b;
  int n; 
  
  scanf("%d%d%d", &a, &b, &n);
  a *= n;
  b *= n;
  printf("%d %d", a + b / 100, b % 100);
}


void apple_3()
{
    int n;
    int k;

    scanf("%d%d", &n, &k);
    printf("%d", (n - k % n) % n);
}


void snail()
{
    int a;
    int b;
    int h;

    scanf("%d%d%d", &h, &a, &b);
    printf("%d", (h - b) / (a - b) + ((h - b) % (a - b)) % 2);
}


void check_divisibility()
{
    int n;
    int m;
    
    scanf("%d%d", &n, &m);
    printf("%d", n % m + 1);
}
