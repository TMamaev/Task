#include <math.h>

void solve_quad_eq()
{
    double a, b, c, x1, x2;
    double d;

    // 6 * 8 = 48 byte = 0x30
    
    scanf("%lf%lf%lf", &a, &b, &c);// cin>>a>>b>>c;

// 0 0 c
    
    // a (x ^ 2) + b * x + c = 0
    // a == 0
    // b * x + c = 0 => x = -c / b
    // b == 0
    // c = 0
    // c != 0
    
    d = b * b - 4 * a * c;
    if (a == 0)
    {
        if (b == 0 && c == 0)
            printf("any roots\n");
        else if (b == 0 && c != 0)
            printf("no roots\n");
        else if (b != 0)
            printf("x = %lf\n", -c / b);
    }
    else if (d < 0)
        printf("no roots\n");
    else if (d == 0)
    {
        printf("x = %lf\n", (-b + sqrt(d)) / (2 * a));
    }
    else
    {
        x1 = (-b + sqrt(d)) / (2 * a);
        x2 = (-b - sqrt(d)) / (2 * a);

        printf("x1 = %lf\nx2 = %lf\n", x1, x2);
    }
}