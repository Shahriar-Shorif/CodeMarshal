#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i = 1; i<=n; i++)
    {
        int s,mark,sum = 0;
        int avg;
        scanf("%d",&s);
        for(int i = 1; i<=s; i++)
        {
            scanf("%d",&mark);
            sum+=mark;
            avg = (int)sum/s;
        }
        printf("Case %d: %d\n",i,avg);
    }
    return 0;
}

