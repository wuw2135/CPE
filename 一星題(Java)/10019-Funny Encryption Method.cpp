import java.util.Scanner;

public class Main{
    public static int hex(int num){
        int total = 0;
        int index = 1;
        while(num > 0){
            total += (num%10)*index;
            num /= 10;
            index *= 16;
        }

        return total;
    }
    public static void main(String[] args){
        Scanner keyin = new Scanner(System.in);
        int count = keyin.nextInt();

        for(int i=0; i<count; i++){
            int num = keyin.nextInt();
            String bin = Integer.toBinaryString(num);
            int hexnum = hex(num);
            String hex = Integer.toBinaryString(hexnum);

            int bincount = 0;
            for(int j=0; j<bin.length(); j++){
                if(bin.charAt(j) == '1') bincount++;
            }

            int hexcount = 0;
            for(int j=0; j<hex.length(); j++){
                if(hex.charAt(j) == '1') hexcount++;
            }

            System.out.println(bincount + " " + hexcount);
        }
        
        
    }
}
