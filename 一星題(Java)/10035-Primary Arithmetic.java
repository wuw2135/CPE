import java.util.Scanner;

public class Main{
    public static void main(String[] args){
        Scanner keyin = new Scanner(System.in);
        
        
        while(keyin.hasNextInt()){
            int num1 = keyin.nextInt();
            int num2 = keyin.nextInt();

            if(num1 == 0 && num2 == 0) break;
            int count = 0, carry = 0;
            while(num1 > 0 || num2 > 0){
                if(num1 % 10 + num2 % 10 + carry >= 10){
                    carry = 1;
                    count++;
                }else{
                    carry = 0;
                }
                num1 /= 10;
                num2 /= 10;
            }

            if(count == 0){
                System.out.println("No carry operation.");
            }else if(count == 1){
                System.out.println("1 carry operation.");
            }else{
                System.out.println(count + " carry operations.");
            }
        }
        
    }
}
