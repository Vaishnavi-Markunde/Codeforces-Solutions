import java.io.*;
public class TwoElevators {
	public static void main(String[] args) throws IOException{
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		int t = Integer.parseInt(br.readLine());
		        String[] strNums;
		
		while (t-->0) {
			
			            strNums = br.readLine().split(" ");
			
			int a = Integer.parseInt(strNums[0]);
			int b = Integer.parseInt(strNums[1]);
			int c = Integer.parseInt(strNums[2]);
			
			a = a-1;
			
			b = b-c;
			if (b<0)
			b = b*-1;
			b = b+(c-1);
			
			if (a<b) {
				System.out.println("1");
			} else if (a>b) {
				System.out.println("2");
			} else if (a==b) {
				System.out.println("3");
			}
		}
		
	}
}