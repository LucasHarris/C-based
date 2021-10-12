using System;				
public class Program
{
	public static void Main(){
		string x=Console.ReadLine();
		double sum=0;
		for(int i=0;i<x.Length;i++){
			double a=x[i]-'0';
			a=Math.Pow(a,x.Length);
			sum+=a;
		}
		Console.WriteLine(sum);
	}
}
