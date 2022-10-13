import java.util.Scanner;
import java.lang.Math;
import java.util.ArrayList;
import java.util.Comparator;

public class Main{
    public static void main(String[] args){
        Scanner keyin = new Scanner(System.in);

        int test = keyin.nextInt();
        while(test-- > 0){
            ArrayList<Integer> arr = new ArrayList<>();

            int rela = keyin.nextInt();
            for(int j=0; j<rela; j++){
                arr.add(keyin.nextInt());
            }

            arr.sort(Comparator.naturalOrder());

            int total = 0;
            for(int j=0; j<rela; j++){
                total += Math.abs(arr.get(j) - arr.get(rela/2));
            }

            System.out.println(total);
        }
    }
}
