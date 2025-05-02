#include <string.h>

// https://leetcode.com/problems/longest-substring-without-repeating-characters/?envType=problem-list-v2&envId=sliding-window
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
