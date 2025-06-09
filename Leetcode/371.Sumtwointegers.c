// https://leetcode.com/problems/sum-of-two-integers/submissions/1634946018/
int getSum(int a, int b) {
    int sum;
    unsigned shift;
    int check = 1;  
    while (b) 
    {
        shift = a & b;
        a = a ^ b;
        b = shift << 1;
    }
    return a * check;
}
