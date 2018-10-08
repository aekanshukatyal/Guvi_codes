import java.util.*;
class Even
{
	public static void main(String args[])
	{
		System.out.println("Enter your number");
		Scanner scan=new Scanner(System.in);
		try
		{
			int a=scan.nextInt();
			if ( a%2 == 0)
			{
				System.out.println("Even");
			}
			else
			{
				System.out.println("Odd");
			}
		}
		catch(Exception e)
		{
			System.out.println("Invalid");
		}	
	}
}
