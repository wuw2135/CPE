import java.util.Scanner;
import java.lang.Math;

public class Main {
    public static void main(String[] args){
        Scanner keyin = new Scanner(System.in);

        while(keyin.hasNextLong()){
            long a = keyin.nextLong();
            long b = keyin.nextLong();

            System.out.println(Math.abs(b - a));
        }
    }
}
