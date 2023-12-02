#include <stdio.h>
#include <math.h>

 // https://informatics.msk.ru/mod/statements/view.php?id=280&chapterid=333#1
void even_odd()
{
    int a;
    int b;

    scanf("%d%d", &a, &b);
    for (;a <= b; a++)
        if (a % 2 == 0)
            printf("%d ", a);
}


#ifdef MAIN

int main()
{
    even_odd();
    return 0;
}

#endif
