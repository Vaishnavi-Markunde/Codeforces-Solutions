/**
    https://codeforces.com/contest/1729/problem/B
    
    Approach to solution
        begin with end of string 
            if last character is 0 
                then get two previous digits
            else 
                get that digit only

            you will get digit in range 1-26
            you are said to get character so do,
                digit+96
            prepend this char to to ans string.

  */

import java.util.Scanner;

public class SolutionB{

    static String decodeString(int n,String number){

        String ans="";
        for(int i=n-1;i>=0;i--){

            int last=number.charAt(i)-'0';

            if(last!=0){
                ans=(char)(last+96)+ans;
            }else{
                ans=(char)(Integer.parseInt(number.substring(i-2,i))+96)+ans;
                i-=2;
            }
        }
        return ans;
    }

    public static void main(String args[]){

        Scanner input=new Scanner(System.in);

        int n=Integer.parseInt(input.nextLine());

        for(int i=0;i<n;i++){
            System.out.println(decodeString(Integer.parseInt(input.nextLine()),input.nextLine()));
        }
    }
}