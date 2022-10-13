import java.util.Scanner;
import java.util.Arrays;

public class Main{
    public static void main(String[] args){
        Scanner keyin = new Scanner(System.in);
        int arr[] = new int[26];
        int num = keyin.nextInt();
        int max = 0;
        keyin.nextLine();
        
        for(int i=0; i<num; i++){
            String str = keyin.nextLine();
            str = str.toUpperCase();

            for(int j=0; j<str.length(); j++){
                if(str.charAt(j) >= 'A' && str.charAt(j) <= 'Z'){
                    arr[(int)str.charAt(j)-65]++;
                    if(arr[(int)str.charAt(j)-65] > max){
                        max = arr[(int)str.charAt(j)-65];
                    }
                }
            }
        }

        while(max > 0){
            for(int i=0; i<arr.length; i++){
                if(arr[i] == max){
                    System.out.println((char)(i+65) + " " + max);
                }
            }
            max--;
        }
    }
}
