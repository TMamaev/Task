// https://leetcode.com/problems/divide-two-integers/?envType=problem-list-v2&envId=bit-manipulation
int divide(int dividend, int divisor) {
    int i = 0;
    int check = 1;

    if (divisor < 0)
    {
        divisor *= -1;
        check *= -1;
    }
    if (dividend < 0)
    {
        dividend *= -1;
        check *= -1;
    }
    for (int sum = divisor; sum <= dividend; sum += divisor)
    {
        i++;
    }

    return check * i;
}
