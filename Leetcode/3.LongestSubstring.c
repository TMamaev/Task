#include <string.h>

int lengthOfLongestSubstring(char* s) 
{
    int max = 1;
    int size = strlen(s);
    int left = 0;
    int right = 0;
    int ASCII[127];
    memset(ASCII, 0xFF, 127 * sizeof(int));
    int r_ASCII_pos;

    if (size == 0)
        return 0;
    
    for (; right < size; right++)
    {
        r_ASCII_pos = (int)s[right];
        if (ASCII[r_ASCII_pos] != -1 || ASCII[r_ASCII_pos] >= left)
        {
            if (right - left > max)
            {
                max = right - left;
            }
            left = ASCII[r_ASCII_pos] + 1;
        }
        ASCII[r_ASCII_pos] = right;
    }
    if (right - left > max)
    {
        max = right - left;
    }
    return max;
}

// abba
//   ||

// 1. Что делать, если встретили символ повторно? -
// Рассчитываем длину подстроки до right (не включительно) -> right - left ? max
// Подтянуть левую границу

// 2. Куда подтягиваем левую границу?
// На 1 правее первого символа из повторяющихся

// 3. Как мы понимаем, что символ, стоящий на правой границе окна уже встречался?
// Создать массив размером 127 и записывать туда встречающиеся символы.

// 

// abdebcccbab
// |  | 
