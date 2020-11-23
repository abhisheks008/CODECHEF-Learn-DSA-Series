using System;

public class Test
{
	public static void Main()
	{
	    int t = Convert.ToInt32(Console.ReadLine());
	    for(int i = 0; i < t; i++) 
	    {
	        int n = Convert.ToInt32(Console.ReadLine());
	        Console.WriteLine(ReverseNumber(n));
	    }
	}
	
	public static int ReverseNumber(int n)
	{
	    int reverse = 0;
	    while(n != 0)
	    {
	        reverse = reverse * 10 + (n % 10);
	        
	        n = n/10;
	    }
	    
	    return reverse;
	}
}
