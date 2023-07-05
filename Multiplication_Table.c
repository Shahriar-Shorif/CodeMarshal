#include<stdio.h>
int main()
{
    int x;
    int i;
    scanf("%d",&x);
    for(int i = 0; i<x; i++)
    {
        int a;
        scanf("%d",&a);
        printf("Case %d:\n",i+1);
        for(int j = 1; j<=10; j++)
        {
            printf("%d * %d = %d\n",a,j,a*j);
        }
    }
    return 0;
}
