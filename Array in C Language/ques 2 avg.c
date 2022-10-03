#include<stdio.h>
int main()
{
    int n[10],i;
    int sum=0;
    float av;
    printf("Enter the number \n");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&n[i]);
    }
    for(i=0;i<=9;i++)
    {
        sum=sum+n[i];

    }
    av=sum/10;
    printf("Average of Given 10 number is = %.2 f",av);
    return 0;
}

