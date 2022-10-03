#include<stdio.h>
int main()
{
    int n[10],i,l,p;
    printf("Enter the number \n");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&n[i]);
    }
    printf("Array in Reverse order \n ");
    for(i=9;i>=0;i--)
    {
        printf("%d ",n[i]);
    }
    return 0;
}






