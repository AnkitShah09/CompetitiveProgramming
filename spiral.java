//This program prints spiral Matrix.
import java.util.*;
class spiral
{
	public static void main(String[] args) 
	{
		Scanner sc = new Scanner(System.in);
		int i,j,k;
		System.out.print("Enter Matrix elements:");
		int n = sc.nextInt();
		n = (int)Math.sqrt(n);
		int x = n;
		int count = n*n;
		int a[][] = new int[x][x];
		for(i=0;i<n;i++)
		{
			for(j=n-1;j>=i;j--)//right->left
				a[i][j] = count--;
			j++;

			if(count==0)
				break;			

			for(k=i+1;k<n;k++)//top->bottom
				a[k][j] = count--;
			k--;

			for(j=j+1;j<n;j++)//right->left
				a[k][j] = count--;
			j--;

			for(k=k-1;k>i;k--)//bottom->top
				a[k][j] = count--;

			n--;
		}
		for(i=0;i<x;i++)	
		{
			for(j=0;j<x;j++)
				System.out.printf("%3d   ",a[i][j]);
			System.out.println();
		}
	}
}
