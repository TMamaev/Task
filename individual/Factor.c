#include <stdio.h>
#include <math.h>

void factorization(int n)
{
    int l = sqrt(n);
    
    for (int i = 1; i < sqrt(n); i++)
    {
        if (n % i == 0)
        {
            printf("%d %d ", i, n / i);
        }
    }
    if (n % l == 0)
        printf("%d", l);
}

int main()
{
    int n = 30;

    factorization(n);
    return 0;
}
