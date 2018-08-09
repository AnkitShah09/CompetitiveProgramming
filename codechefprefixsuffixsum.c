#include<stdio.h>
int summation(long int *A,long int *sum)
{
    long int i,j,k,l,N,min=0;
    scanf("%ld",&N);
    for(i=0;i<N;i++)
    {
        scanf("%ld",&A[i]);
    }
    for(i=0;i<N;i++)
    {
        k=l=0;
        for(j=0;j<=i;j++)
        {
            k=k+A[j];
        }
        for(j=N-1;j>=i;j--)
        {
            l=l+A[j];
        }
        sum[i]=l+k;
        if(sum[min]>sum[i])
        {
            min=i;
        }
    }
    return(min+1);
}
int main(void)
{
    long int A[100000],sum[100000];
    int i,T,output[10];
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
        output[i]=summation(A,sum);
    }
    for(i=0;i<T;i++)
    {
        printf("%d\n",output[i]);
    }
    return 0;
}
