import java.util.Scanner;
import java.util.ArrayList;

public class Main{
	public static void main(String[] args){
		Scanner keyin = new Scanner(System.in);
		
		int i,j;
		long[] arr = new long[999999];
		for (int ind = 1; ind < 1000000; ind++){
			long temp = ind;
			long count = 1;
			while(temp != 1){
				if(temp % 2 == 1) temp = temp * 3 + 1;
				else temp /= 2;
				count++;
			}
			arr[ind-1] = count;
		}
		
		while(keyin.hasNextInt()){
			i = keyin.nextInt();
			j = keyin.nextInt();
			long max = 0;
			System.out.print(i + " " + j + " ");
			if(i > j) {
				int temp = i;
				i = j;
				j = temp;
			}
			
			for(; i<=j; i++){
				if(arr[i-1] > max) max = arr[i-1];
			}
			
			System.out.println(max);
			
		}
	}
}
