//This program finds the all posible occurence of Sub string in Super String.
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int appearanceCount(int input1,int input2,char* input3,char* input4)
{
        int i,j,k,count=0,x,y;
        for(i=0;i<input2;i++)
        {
            y=0;
            for(j=0;j<input1;j++)
            {
                x=input1;
                k=i;
                while(x!=0)
                {
                    if(input3[j]==input4[k++])
                    {
                        y++;
                        break;
                    }
                    x--;
                }
            }
            if(y==input1)
                count++;
        }
        return count;
}

int main()
 {
    int output = 0;
    int ip1;
    scanf("%d", &ip1);//Input1=sub string length
    int ip2;
    scanf("%d", &ip2);//Input 2=Main String Length
    char* ip3;
    ip3 = (char *)malloc(512000 * sizeof(char));
    scanf("\n%[^\n]",ip3);//Input 3=Sub string
    char* ip4;
    ip4 = (char *)malloc(512000 * sizeof(char));
    scanf("\n%[^\n]",ip4);//Input 4=Main String
    output = appearanceCount(ip1,ip2,ip3,ip4);
    printf("%d\n", output);
    return 0;
}
