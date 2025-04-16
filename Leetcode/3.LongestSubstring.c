int lengthOfLongestSubstring(char* s) 
{
    int size;
    for (int i = 0; s[i]; i++)
        size++;
    int ASCII[256]  = {0};
    int max = 0;

    int left = 0;
    int right = 0;
    int ASCII_value = (int)s[right];
    if (ASCII_value > 0)
        max = 1;
    for (; right < size;)
    {
        int ASCII_value = (int)s[right];
        printf("%d %d %d %d\n", left, right, ASCII_value, max);
        if (ASCII[ASCII_value] == 0)
        {
            ASCII[ASCII_value] = 1;
            right++;
        }
        else if (ASCII[ASCII_value] == 1)
        {
            if (right - left > max)
                max = right - left;
            char *s1 = &s[right];
            char *s2 = &s[left];
            while (strcmp(s1, s2) != 0)
            {
                int AS_value = (int)s[left];
                ASCII[AS_value] = 0;
                left++;
                char *s2 = &s[left];
            }
            left++;
        }
    }
    if (right - left > max)
                max = right - left;
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
