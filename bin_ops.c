#include <stdio.h>

int set_bit(int i, int n)
{
  int res = 0;
  res = i | (1 << n);
  return res;
}
// -1
// 0000 0000 0000 0000 0000 0000 0000 0001
// 1111 1111 1111 1111 1111 1111 1111 1110
// 1111 1111 1111 1111 1111 1111 1111 1111
// 4 = 100   git1100 
int main()
{
    int i = 0;
    int n = 0;
    scanf("%d%d", &i, &n);
    printf("result = \"%d\"\n", set_bit(i, n));

    return 0;
}

// escape seq - \a \b \t \n \v

/*
int main()
{
    int i, n; 
    cin >> i >> n;
    int result = i & ~(1 << n);
    cout << result;
}

int main()
{
    int i, m;
    cin >> i >> m;
    int n = pow(2, m);
    int result = i & n; 
    cout << result;
}

int main()
{
    int i, n; 
    cin >> i >> n;
    int result = i ^ (1 << n);
    cout << result;
}

int main()
{
    int i; 
    cin >> i;
    int result = i >> 1;
    cout << result;
}

int main()
{
    int i, m;
    cin >> i >> m;
    int result = (i >> m); 
    cout << result;
}

int main()
{
    int i;
    cin >> i;
    if (i & (1 << 0))
        cout << "нечетно";
    else 
        cout << "четно";
}


int main()
{
    int i, n;
    cin >> i >> n;
    if (i & (1 << n))
        cout << 1;
    else 
        cout << 0;
}

int main()
{
    int i, n, m;
    cin >> i >> n >> m; 
    int zamena = (i & (1 << n));
    if ( zamena == 1 and m == 0)
        int i = i & ~(1 << n);
    else if (zamena == 0 and m == 1)
        int i = i | (1 << n);
    cout << i;
}

int main()
{
    int i, n = 0;
    cin >> i;
    int ans = 0;
    for (; n <= 7; n++)
        if (i & (1 << n))
            ans++;
    cout << ans;
}*/