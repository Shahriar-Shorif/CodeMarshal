#include<stdio.h>
int main()
{
    int x;
    int i;
    scanf("%d",&x);
    for(i = 0; i<x; i++)
    {
        int a;
        scanf("%d",&a);
         printf("Case %d:",i+1);
        for(int row = 0; row< 2*a; row++)
        {
            int total = row>a? 2*a-row:row;

            for(int col = 0; col<total; col++)
            {
                printf("*");

            }
             printf("\n");
        }

    }
    return 0;
}
