#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int* getJoinedPipes(int input1_size, int* input1,int* output_size)
{
    int i,j,sum=0,ans[input1_size];
    for(i=0;i<input1_size;i++)
    {
        for(j=0;j<input1_size-1;j++)
        {
            if(input1[j]>input1[j+1])
            {
                int temp;
                temp=input1[j];
                input1[j]=input1[j+1];
                input1[j+1]=temp;
            }
        }
        sum=input1[0];
        for(i=1;i<input1_size;i++)
        {
            sum=sum+input1[i];
            ans[i-1]=sum;
        }
        return(ans);
    }
}
int main()
{
    int output_size,i;
    int* output;
    int ip1_size = 0;
    int ip1_i;
    scanf("%d\n", &ip1_size);
    int ip1[ip1_size];
    for(ip1_i = 0; ip1_i < ip1_size; ip1_i++) {
        int ip1_item;
        scanf("%d", &ip1_item);

        ip1[ip1_i] = ip1_item;
    }
    output = getJoinedPipes(ip1_size,ip1,&output_size);
    /*for(i=0;i<ip1_size;i++)
    {
        printf("%d  ",output[i]);
    }*/
    int output_i;
    for(output_i=0; output_i < output_size; output_i++)
    {
        printf("%d\n", output[output_i]);
    }
    return 0;
}
