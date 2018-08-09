#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int getMissingValue(char* input1)
{
    int i=0,z=0,diff=0;
    while(input1[i]!='x')
    {
        i=i+2;
    }
    diff=abs(input1[i-2]-input1[i-4]);
    if(diff==0)
    {
        z=input1[0];
    }
    else
    {
        z=input1[i-2]>input1[i+2]?input1[i-2]-diff:input1[i+2]-diff;
    }
    z=z-'0';
    return z;
}
int main()
{
    int output = 0;
    char* ip1;
    ip1 = (char *)malloc(512000 * sizeof(char));
    scanf("\n%[^\n]",ip1);
    output = getMissingValue(ip1);
    printf("%d\n", output);
    return 0;
}
