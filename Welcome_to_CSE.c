#include<stdio.h>
int main()
{
    int x,y,z,result;
    scanf("%d%d%d",&x,&y,&z);
    int first = x - z;
    int last = y - z;
    result = first+last+z;
    printf("%d\n",result);
    return 0;
}
