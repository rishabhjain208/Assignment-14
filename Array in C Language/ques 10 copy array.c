#include<stdio.h>
int main()
{
    int n[10],i,m[10];
    printf("Enter the number \n");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&n[i]);
    }
    printf("First Array \n ");
    for(i=0;i<=9;i++)
    {
        printf("%d ",n[i]);
    }
    printf("\nCopy Array \n");
    for(i=0;i<=9;i++)
    {
        m[i]=n[i];
        printf("%d ",m[i]);
    }
    return 0;
}







