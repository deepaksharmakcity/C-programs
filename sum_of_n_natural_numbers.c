#include<stdio.h>
int main()
{
    int sum=0;
    int n;
    printf("enter number\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("total is %d",sum);
    return 0;
}