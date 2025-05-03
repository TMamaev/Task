#include <stdio.h>
#include <string.h>

// https://leetcode.com/problems/valid-anagram/
int isAnagram(const char* s1, const char* s2)
{
    int ASCII[127] = {0};
    int pos;

    for (int i = 0; i < strlen(s1); i++)
    {
        pos = (int)s1[i];
        ASCII[pos]++;
    }
    for (int i = 0; i < strlen(s2); i++)
    {
        pos = (int)s2[i];
        ASCII[pos]--;
    }
    for (int i = 0; i < 127; i++)
    {
        if (ASCII[i] != 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    typedef struct s_input_data
    {
        const char* s1;
        const char* s2;
        int expected;
    } t_input_data;

    int answer;
    t_input_data data[] = {
        {"", "", 1},
        {"cdc", "cdf", 1}
    };

    for (int i = 0; i < sizeof(data) / sizeof(data[0]); i++)
    {
        answer = perm(data[i].s1, data[i].s2);
        if (answer != data[i].expected)
            printf("ERROR:\n"
                   "s1: \"%s\"\n"
                   "s2: \"%s\"\n"
                   "Output: %d\n"
                   "Expected: %d\n\n",
                   data[i].s1,
                   data[i].s2,
                   answer,
                   data[i].expected);
    }
    return 0;
}
