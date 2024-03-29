#include <math.h>
#include <stdio.h>

int long1 (int n)
{
    int l = 0;
    while (n != 0)
    {
        n /= 10;
        l++;
    }
    return l;
}

int isPalindrome(int n) {
    int check = 1;

    for (double first = 1, last = long1(n); first <= last; first++ && last--)
    {
        if (n % pow(10, first) == n / pow(10, last))
        {
            check = 1;
        }
        else
        {
            return 0;
        }
    }

    return check;
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
