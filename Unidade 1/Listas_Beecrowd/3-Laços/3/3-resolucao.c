#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int a, n;
        scanf("%d", &n);
        if(n<2015)
        {
            a = 2015 - n;
            printf("%d D.C.\n", a);
        }
        else
        {
            a = n - 2014;
            printf("%d A.C.\n", a);
        }
    }
    return 0;
}
