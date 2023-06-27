#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i = 1; i<=n; i++)
    {
        int a;
        scanf("%d",&a);
        if(a>=90)
        {
            printf("Student %d: A+\n",i);
        }else if(a>=80)
        {
            printf("Student %d: A\n",i);
        }else if(a>=70)
        {
            printf("Student %d: A-\n",i);
        }else if(a>=60)
        {
            printf("Student %d: B+\n",i);
        }else if(a>=50)
        {
            printf("Student %d: B-\n",i);
        }else if(a>=40)
        {
            printf("Student %d: C\n",i);
        }else if(a>=35)
        {
            printf("Student %d: D\n",i);
        }else
        {
            printf("Student %d: F\n",i);
        }
    }
    return 0;
}
