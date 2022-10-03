#include<stdio.h>
int main()
{
    int n[10],i;
    int se=0,so=0;
    printf("Enter the number \n");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&n[i]);
    }
    for(i=0;i<=9;i++)
    {
        if(n[i]%2==0)
        {
            se=se+n[i];
        }
        else
            so=so+n[i];
    }
    printf("Sum of even number is = %d\n",se);
    printf("Sum of odd number is = %d",so);
    return 0;
}


