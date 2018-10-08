import java.util.*;
class Number
{
	public static void main(String args[])
	{ 
	Scanner scan=new Scanner(System.in);
	double a=scan.nextDouble();
	if( a > 0.0)
	{
		System.out.println("Positive");
	}
	else if( a == 0.0)
	{
		System.out.println("Zero");
	}
	else
	{
		System.out.println("Negative");
	}
	}
}