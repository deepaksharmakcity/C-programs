#include<stdio.h>
void capital(char a[],int);
void capital(char a[],int length)
{
    int i;
    for(i=0;i<length;i++)
    {
        if(a[i]>=65 && a[i]<=90 || a[i]==32)
            continue;
        else
        {
            a[i]=a[i]-32;
        }
    }
}
int main()
{
    char name[]="Deepak sharmA";
    capital(name,13);
    printf("%s",name);
    return 0;
}