 #include<stdio.h>
 #include<string.h>
 int nochange_bits(char* input1,int input2,int input3)
{
    int n=strlen(input1);
    if(input2==0 || input3==0)
    {
        return -1;
    }
    else if(input2==input3)
    {
        return(n);
    }
    else if(((input2%input3)==0) || ((input3%input2)==0))
    {
        int x=(input2>input3)?input2:input3;
        x=n/x;
        int m=n-((n/input2-x)+(n/input3-x));
        return m;
    }
    else
    {
        int m=(n/(input3*input2));
        return(n-((n/input2)+(n/input3))+(2*m));
    }
}
int main()
{
    int output = 0;
    char* ip1;
    ip1 = (char *)malloc(512000 * sizeof(char));
    scanf("\n%[^\n]",ip1);

    int ip2;
    scanf("%d", &ip2);
    int ip3;
    scanf("%d", &ip3);
    output = nochange_bits(ip1,ip2,ip3);
    printf("%d\n", output);
    return 0;
}
