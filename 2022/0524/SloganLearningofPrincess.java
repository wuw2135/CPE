import java.util.Scanner;
import java.util.ArrayList;

public class SloganLearningofPrincess{
	public static void main(String[] args){
		Scanner keyin = new Scanner(System.in);
		int rep = keyin.nextInt();
		keyin.nextLine();
		ArrayList<String> ans = new ArrayList<String>();
		for (int i = rep; i > 0; i--){
			ans.add(keyin.nextLine());
			ans.add(keyin.nextLine());
		}
		
		rep = keyin.nextInt();
		keyin.nextLine();
		for (int i = rep; i > 0; i--){
			String ask = keyin.nextLine();
			for (int j = 0; j < ans.size(); j+=2){
				if (ans.get(j).equals(ask)){
					System.out.println(ans.get(j+1));
					break;
				}
			}
		}
		
		keyin.close();
	}
}