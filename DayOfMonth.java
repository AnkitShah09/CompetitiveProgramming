/*This program takses Total no of days in a month,first day of the month and gives no of each week days in a month.
This program was asked in Code Chef.
Fomat is:
T=no of test cases
W=No of days in month
s=strings*/
import java.util.Scanner;
public class dayofmonth 
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int n;
        int ans[][]=new int[1000][7];
        String day[]={"mon","tues","wed","thurs","fri","sat","sun"};
        int T=sc.nextInt();
        for(int i=0;i<T;i++)
        {
            n=0;
            int W=sc.nextInt();
            String s=sc.next();
            for(int j=0;j<7;j++)
            {
                if(s.equals(day[j]))
                {
                    n=j;
                    break;
                } else {
                }
            }
            int x=n;
            ans[i][n]=((W!=28)?W/7+1:W/7);
            W--;
            n=((n==6)?n=0:n+1);
            while(x!=n)
            {
                ans[i][n]=((W!=28)?W/7+1:W/7);
                W--;
                n=((n==6)?n=0:n+1);
            }
        }
        for(int i=0;i<2;i++)
        {
            for(int j=0;j<7;j++)
            {
                System.out.print(ans[i][j]+" ");
            }
            System.out.println("");
        }
    }
}
