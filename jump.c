#include<stdio.h>
int getjumpcount(int input1,int input2,int input3_size,int* input3)
{
    int i=0,count=0;;
    for(i=0;i<input3_size;i++)
    {
        while(input3[i]>0)
            {
                count++;
                input3[i]=input3[i]-input1;
                if(input3[i]==0)
                    break;
                else
                    input3[i]=input3[i]+input2;
            }
    }
    return count;
}
int main()
{
    int ip1,ip2,ip3_size,i,output;
    scanf("%d",&ip1);
    scanf("%d",&ip2);
    scanf("%d",&ip3_size);
    int ip3[ip3_size];
    for(i=0;i<ip3_size;scanf("%d\n",&ip3[i++]));
    output=getjumpcount(ip1,ip2,ip3_size,ip3);
    printf("\n%d",output);
    return 0;
}
