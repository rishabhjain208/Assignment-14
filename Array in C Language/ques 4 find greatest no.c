#include<stdio.h>
int main()
{
    int n[10],i,l,p;
    printf("Enter the number \n");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&n[i]);
    }
    l=n[0];
    for(i=0;i<=9;i++)
    {
        if(l<n[i])
        {
            l=n[i];
            p=i;

        }
    }
    printf("The greatest number is = %d\n",l);
    printf("The Index position of greatest number is = %d",p);
    return 0;
}



