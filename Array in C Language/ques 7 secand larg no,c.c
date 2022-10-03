#include<stdio.h>
int main()
{
    int n[10],i,l,p,sl;
    printf("Enter the number \n");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&n[i]);
    }
    l=n[0];
    sl=l;
    for(i=0;i<=9;i++)
    {
        if(l<n[i])
        {
            l=n[i];
            sl=n[i];
            p=i;

        }
    }
    printf("The second largest number is = %d\n",sl);
    printf("The Index position of smallest number is = %d",p);
    return 0;
}





