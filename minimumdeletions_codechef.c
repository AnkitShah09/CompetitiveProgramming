#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,k,T,N,A[50000],ans[10];
    printf("Enter no of test cases:");
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
        ans[i]=0;
        printf("Enter %d details:\n",i);
        printf("Enter N:");
        scanf("%d",&N);
        printf("Enter A[i]:");
        for(j=0;j<N;j++)
        {
            scanf("%d",&A[j]);
        }
        for(j=0;j<N;j++)
        {
            for(k=2;k<=(int)sqrt(A[j]);k++)
            {
                if((A[j]%k)==0)
                {
                    ans[i]++;
                    break;
                }
            }
        }
        if(ans[i]==N)
            ans[i]=-1;
        else if(ans[i]==0)
            ans[i]=0;
    }
    printf("Ans is:\n");
    for(i=0;i<T;i++)
    {
        printf("%d\n",ans[i]);
    }
    return 0;
}
