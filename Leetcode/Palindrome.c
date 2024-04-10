#include <math.h>
#include <stdio.h>

int isPalindrome(int n)
{
    long long res = 0;
    long long n1 = n;
    while(n1 != 0)
    {
        res = res * 10 + n1 % 10;
        n1 /= 10;
    }
    if (res == n && res >= 0)
        return 1;
    else
        return 0;
}

int main()
{
    int n;

    scanf("%d", &n);
    if (n < 0)
        printf("false");
    else if (n == 0)
        printf("true");
    else if (isPalindrome(n))
        printf("true");
    else
        printf("false");
}
