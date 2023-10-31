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
    int v, t;
    scanf("%d%d", &v, &t);
    if (v * t > 0)
        printf("%d", (v * t) % 109);
    if (v * t < 0)
        printf("%d", (109 + (v * t)) % 109);
}


void last_num()
{
    int n;
    int k = 0;
    scanf("%d", &n);
    for (int n1 = n; n1 != 0; n1 /= 10)
        k+=1;
    for (; k != 0; k--)
        n %= 10;
    printf("%d", n);
}


void num_of_tens()
{
    int n, n1;
    scanf("%d", &n);
    n1 = n;
    n1 %= 10;
    printf("%d", (n - n1) / 10);
}


void num_of_tens2()
{
    int n, n1, n2, result = 0, k = 0;
    scanf("%d", &n);
    n1 = n;
    while (n1 > 10) 
        n1 %= 10;
    n -= n1;
    n2 = n;
    for (int n3 = n; n3 != 0; n3 /= 10)
        k += 1;
    while (n != pow(10, k-1)){
        result += 1;
        n -= 10;
    }
    printf("%d", result);
}



void sum_dig()
{
    int n, ans1 = 0;
    scanf("%d", &n);
    int ans2 = n;
    while (ans2 > 10) 
        ans2 %= 10;
    n -= ans2;
    int n2 = n;
    int k = 0;
    for (int n3 = n; n3 != 0; n3 /= 10)
        k += 1;
    while (n != pow(10, k-1)){
        ans1 += 1;
        n -= 10;
    }
    int ans3;
    while (n != 0){
        ans3 ++;
        n -= 100;
    }
    printf("%d", ans3 + ans1 + ans2);
}



void next_parity()
{
    int n, n1;
    scanf("%d", &n);
    n1 = n;
    n1 %= 2;
    printf("%d", n + n1 + ((n1 + 2) % 3));
}



void electric_watch1()
{
    int n, k = 0;
    scanf("%d", &n);
    n %= 1440;
    for (; n > 60;)
    {
        k ++;
        n -= 60;
    }
    printf("%d %d", k, n);
}


void electric_watch2()
{
    int n, h = 0, m = 0, s = 0;
    scanf("%d", &n);
    if (n > 86400)
        n %= 86400;
    if (n > 3600)
        for (; n > 3600;)
        {
            h ++;
            n -= 3600;
        }
    if (n > 60)
        for (; n > 60;)
        {
            m ++;
            n -= 60;
        }
    s = n;
    printf("%d:", h);
    if ( m < 10)
        printf("0%d:", m);
    else 
    printf("%d:", h);

    if (s<10)
        printf("0%d", s);
    else 
        printf("%d", s);
}



void replace_values()
{
    int a, b, c;
    scanf("%d%d", &a, &b);
    c = a;
    a = b;
    b = c;
    printf("%d %d", a, b);
}



void lesson_time()
{
    int les;
    scanf("%d", les);
    )
    int time1 = 540;
    for (int i = 1; i <= les; i++ )
    {
        time1 += 45;
        if (i < les)
        {
            if ( i%2 == 0)
                time1 += 15;
            else 
                time1 +=5;
        }
    }
    int h, m;
    h = time1 / 60;
    m = time1 % 60;
    printf("%d %d", h, m);
}




void price()
{
    int a, b, n;
    scanf("%d%d%d", &a, &b, &n);
    a *= n;
    b *= n;
    for (; b >= 100; b -= 100)
        a++;
    printf("%d %d", a, b);
}



void apple_3()
{
    int n, k;
    scanf("%d%d", &n, &k);
    printf("%d", (n - k % n) % n);
}


void snail()
{
    int a, b, h;
    scanf("%d%d%d", &h, &a, &b);
    printf("%d", (h - b) / (a - b) + ((h - b) % (a - b)) % 2);
}


void check_divisibility()
{
    int n, m;
    scanf("%d%d", &n, &m);
    printf("%d", n % m + 1);
}