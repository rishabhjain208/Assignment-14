#include<stdio.h>
int main()
{
    int n[10],i;
    int sum=0;
    printf("Enter the number \n");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&n[i]);
    }
    for(i=0;i<=9;i++)
    {
        sum=sum+n[i];
    }
    printf("Sum of Given 10 number is = %d",sum);
    return 0;
}
