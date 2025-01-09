#include <stdbool.h>

int gcd(int x, int y)
{
    if (x < y)
    {
        int help = x;
        x = y; 
        y = help;
    }
    if (y == 0)
        return x;
    else
        return gcd(y, x - y);
}

bool canMeasureWater(int x, int y, int target) {
    if (target > x + y)
        return false;

    return ((target % gcd(x, y)) == 0);
}
