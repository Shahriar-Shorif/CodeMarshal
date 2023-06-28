#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    for(int i = 1; i<=x; i++)
    {
        int a,b,c,max;
        scanf("%d%d%d",&a,&b,&c);
        if(a>=b && a>=c)
        {
            max = a;
        }else if(b>=a && b>=c)
        {
            max = b;
        }else if(c>=a && c>=b)
        {
            max = c;
        }
        if(c == b == a)
        {
            max = c;
        }

        printf("Case %d: %d\n",i,max);

    }
    return 0;
}
