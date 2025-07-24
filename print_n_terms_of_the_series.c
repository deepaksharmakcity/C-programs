//1 3 6 10 15...
#include<stdio.h>
int main()
{
    int i,s,n;
    printf("entr a number\n");
    scanf("%d",&n);
    for(i=1,s=0;i<=n;i++)
    {
        s=s+i;
        printf("%d",s);
    }
    return 0;
}