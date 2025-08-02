#include<stdio.h>
int Find_distinct_numbers(int A[],int n);
int Find_distinct_numbers(int A[],int n)
{
    int i,count=0;
    for(i=0;i<n-1;i++)
    {
        if(A[i]==A[i+1])
                count++;
        else
                continue;
    }
    return count;
}
int main()
{
    int A[]={1,2,3,3,4,4,5,5,6,6,6,6,6,6};
    printf("%d",Find_distinct_numbers(A,14));
    return 0;
}