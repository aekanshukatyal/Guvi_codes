import java.util.*;
class Even
{
	public static void main(String args[])
	{
		System.out.println("Enter your number");
		Scanner scan=new Scanner(System.in);
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
}
