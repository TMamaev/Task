#include <stdio.h>
#include <math.h>

// https://informatics.msk.ru/mod/statements/view.php?id=208#1
void even()
{
    int n;
    int A[100];

    scanf("%d", &n);
    for(int i = 0; i < n; i++)
        scanf("%d", &A[i]);
    
    for(int i = 0; i < n; i++)
        if (i % 2 == 0)
            printf("%d ", A[i]);
}


#ifdef MAIN

int main()
{
    even();
    return 0;
}

#endif