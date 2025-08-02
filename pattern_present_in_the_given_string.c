#include<stdio.h>
int pattern(char [],char []);
int pattern(char srr[],char prr[])
{
    int i,j,k,l,len1,len2;
    for(k=0;srr[k];k++);
    len1=k;
    for(l=0;prr[l];l++);
    len2=l;
    for(i=0,j=-1;i<len1;i++)
    {
        j++;
        if(srr[i]==prr[j])
        {
            if(j==len2-1)
                return (i-j);
        }
        else
            j=-1;
    }
    return 0;

}
int main()
{
    char srr[50];
    char prr[50];
    printf("enter string\n");
    scanf("%s",srr);
    printf("enter pattern which is search in the list\n");
    scanf("%s",prr);
    int result=pattern(srr,prr);
    if(result)
        printf("pattern found in index of %d",result);
    else
        printf("pattern not found");
    return 0;
}