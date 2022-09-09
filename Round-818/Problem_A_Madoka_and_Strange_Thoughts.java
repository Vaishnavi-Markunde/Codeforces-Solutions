/*
 Logic : For a given n = x, only the following pairs of numbers are possible: (x,x),(x,2x), and (x,3x)
 The number of the pairs of the first kind is n, 
 of the second kind is 2*(n/2),   (the factor 2 arises cause the pairs are ordered ex: (x,2x),(2x,x) )
 and of the third kind is 2*(n/3)      (ex: (x,3x),(3x,x) )
 Therefore, the answer to the problem is n + (2*(n/2)) + (2*(n/3))


 */

import java.util.Scanner;

public class Problem_A_Madoka_and_Strange_Thoughts {
	public static void main(String args[]) {
		Scanner sc = new Scanner(System.in);
		long t = sc.nextLong();
		while(t-->0) {
			long n = sc.nextLong();
			long ans = n+2*(n/2+n/3);
			System.out.println(ans);
		}
	}
}
