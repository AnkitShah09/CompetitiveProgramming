#include<stdio.h>
int main()
{
    int T,i,j;
    long long int N;
    scanf("%d",&T);
    long long unsigned inp[10000][3];
    int arr[10][3][30];
    for(i=0;i<T;i++)
    {
        printf("Enter sum:");
        scanf("%d",&N);
        for(j=0;j<3;j++)
        {
            scanf("%d",&inp[i][j]);
        }
    }
    for(i=0,j=0;i<T;i++,j++)
    {
        k=0;
        for(j=1;j<=inp[i][j];j++)
        {
            if(j%N==0)
                arr[i][1][k++]=j;
        }
    }
    for(i=0;i<T;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",inp[i][j]);
        }
        printf("\n");
    }
    return 0;
}
