#include <stdbool.h>

bool target1(int x, int y, int target)
{
    if (x - y == target || y - x == target || x + y == target)
        return true;
    if (x == 0 || y == 0)
        return false;

    if (x > y)
        return target1(x, x % y, target);
    return target1(y % x, y, target);
}

bool canMeasureWater(int x, int y, int target) {
    if (target > x + y)
        return false;
    return target1(x, y, target);
}