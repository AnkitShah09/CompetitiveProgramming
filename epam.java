/*This question was asked in a one of the job interviews.
Here We have to pass Matrix Size and Operations which we want to perform on the elements of the Matrix.
Different Operations are: LEFT RIGHT UP DOWN
Elements of the matrix are:(row*size)+column
*/
import java.util.*;
public class epam
{
	
	static int val(int matrixSize,List<String> arr)
	{
		int i,j,count=0;
		int ar[][] = new int[matrixSize][matrixSize];
		for(i=0;i<matrixSize;i++)
		{
			for(j=0;j<matrixSize;j++)
				ar[i][j] = count++;
		}
		count = 0;
		System.out.println(arr.get(0));
		for(i=0;i<arr.size();i++)
		{
			if(arr.get(i).equals("UP") && (count/matrixSize)!=0)
				count -= matrixSize;

			else if(arr.get(i).equals("DOWN") && (count/matrixSize+1)!=matrixSize)
				count += matrixSize;

			else if(arr.get(i).equals("RIGHT") && ((count+1)%matrixSize)!=0)
				count += 1;

			else if(arr.get(i).equals("LEFT") && (count%matrixSize)!=0)
				count -= 1;
		}
		return count;
	}

	public static void main(String[] args) throws Exception
	{
		java.io.BufferedReader br = new java.io.BufferedReader (new java.io.InputStreamReader (System.in));		
		List<String> m = new ArrayList<String>();
		System.out.print("Enter Square Matrix Size:");
		int n = Integer.parseInt(br.readLine());
		System.out.print("Enter Operations:");
		String oper = br.readLine();
		String op[] = oper.split(" ");
		for(String i:op)
			m.add(i);
		int ans = val(n,m);
		System.out.println("Ans is:"+ans);
	}
}