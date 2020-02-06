import java.util.*;
import java.io.*;
import java.math.*;
import java.lang.*;


public class Main{
	public static void main(String[] args) {

		BigInteger fact = BigInteger.ONE;

		Scanner input = new Scanner(System.in);
		int n = input.nextInt();
		

		for(int i=2;i<n;i++){
			fact = fact.multiply(new BigInteger(String.valueOf(i)));
		}

		System.out.println(fact);

	}
}