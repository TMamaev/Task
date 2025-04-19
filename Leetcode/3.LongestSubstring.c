int Size(char* s)
{
    int size = 0;
    while(s[size])
    {
        size++;
    }
    return size;
}

void makeone(int* ASCII, int left, int right, char *s)
{
    for (; left <= right; left ++)
    {
       int l = (int)s[left];
        ASCII[l] = 1;
    }
}

int lengthOfLongestSubstring(char* s) 
{
    int max = 0;
    int size = Size(s);
    int left = 0;
    int right = 0;
    int ASCII[127] = {0};
    int r_ASCII_pos;
    int l_ASCII_pos = (int)s[left];
    int change = 0;

    if (strcmp(s, "") == 0)
        return 0;

    for (; right < size; right++)
    {
        printf("%d %d %d\n", left, right, max);
        r_ASCII_pos = (int)s[right];
        if (ASCII[r_ASCII_pos] == 0)
        {
            ASCII[r_ASCII_pos] = 1;
        }
        else
        {
            if (right - left > max)
                max = right - left;
            ASCII[r_ASCII_pos] = 2;
            for (;  r_ASCII_pos != l_ASCII_pos; left++)
            {
                ASCII[l_ASCII_pos] = 0;
                l_ASCII_pos = (int)s[left];
                change++;
            }
            if (change == 0)
                left++;
            change = 0;
            makeone(ASCII, left, right, s);            
        }
    }
    if (ASCII[r_ASCII_pos] == 1 && right - left > max)
        return right-left;
        
    if (max == 0 && l_ASCII_pos > 0)
        return 1;
    return max;
}

// 1. Что делать, если встретили символ повторно? -
// Рассчитываем длину подстроки до right (не включительно) -> right - left ? max
// Подтянуть левую границу

// 2. Куда подтягиваем левую границу?
// На 1 правее первого символа из повторяющихся

// 3. Как мы понимаем, что символ, стоящий на правой границе окна уже встречался?
// Создать массив размером 127 и записывать туда встречающиеся символы.

// 

// abdebcccbab
// |   | 
