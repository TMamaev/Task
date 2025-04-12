int lengthOfLongestSubstring(char* s) 
{
    int size = sizeof(s);
    int *ASCII[127] = {0};
    int max = 0;

    int left = 0;
    int right = 1;
    for (; right < size; right++)
    {
        if (ASCII[s[right]] == 1)
        {
            if (right - left > max)
                max = right - left;
            while (strcmp(&s[right], &s[left]) != 0)
            {
                ASCII[s[left]] = 0;
                left++;
            }
            left++;
        }
        else 
        {
            ASCII[s[right]] = 1;
        }
    }
    
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
