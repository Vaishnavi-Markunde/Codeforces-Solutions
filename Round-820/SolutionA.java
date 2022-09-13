/**
    https://codeforces.com/contest/1729/problem/A

    Approach to solution:
        count time to get elevator by both A and B.
        compare A and B. 
 */

import java.util.Scanner;

public class SolutionA{

    static int twoElevators(int a,int b,int c){

        int counta=a-1;
        int countb=Math.abs(b-c)+(c-1); //java.lang.Math

        if(counta<countb) return 1;
        if(counta>countb) return 2;
        return 3;
    }

    public static void main(String args[]){

        Scanner input=new Scanner(System.in);

        int n=Integer.parseInt(input.nextLine());

        for(int i=0;i<n;i++){
            System.out.println(twoElevators(input.nextInt(),input.nextInt(),input.nextInt()));
            input.nextLine();
        }
    }
}