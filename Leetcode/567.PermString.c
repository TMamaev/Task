// https://leetcode.com/problems/permutation-in-string/?envType=problem-list-v2&envId=sliding-window

int checkInclusion(char* s1, char* s2) {
    int ASCII[127] = {0};
    int l1 = strlen(s1);
    int l2 = strlen(s2);
    int check = 0;

    for (int i = 0; i + l1 <= l2; i++)
    {
        bzero(ASCII, 127 * sizeof(int));
        // printf("%d %d\n", i, i + l1);
        for (int z = 0; z < l1; z++)
            ASCII[(int)s1[z]]++;
        for (int z = i; z < i + l1; z++)
            ASCII[(int)s2[z]]--;
        check = 1;
        for (int z = 0; z < 127 && check; z++)
        {
            if (ASCII[z] != 0)
            {
                check = 0;
            }
        }
        if (check == 1)
            return 1;
    }
    return 0;
}

// s1 = ab
// ASCII['a'] = 1   ASCII['b'] = 1
// s2 = acddba
//       | |
// ac =>   ASCII['a']-- ASCII['c']--
// ASCII[...] == 0 => return true
