#include<stdio.h>
int main()
{
    int i,n,j,l=1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=n;j>i;j--)
            printf(" ");
        if(i%2==0)
        {
            for(j=0;j<i;j++)
                printf("01");
            printf("0");
        }
        else
        {
            for(j=0;j<l;j++)
                printf("01");
            printf("1");
            for(j=1;j<l;j++)
                printf("01");
                    l++;
        }
        printf("\n");
    }
    return 0;
}
