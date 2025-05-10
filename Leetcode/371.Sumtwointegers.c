int getSum(int a, int b) {
    int sum, shift;
    int check = 1;
    
    if (a < 0 && b < 0)
    {
        a *= -1;
        b *= -1;
        check *= -1;

        while (b) 
        {
        shift = a & b;
        a = a ^ b;
        b = shift << 1;
        }
    }
    else if (a > 0 && b > 0)
    {   
        while (b) 
        {
        shift = a & b;
        a = a ^ b;
        b = shift << 1;
        }
    }
    else
    {

    }
    return a * check;
}