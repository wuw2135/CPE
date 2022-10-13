import java.util.Scanner;
import java.util.Arrays;

public class Main {
    public static void main(String[] args){
        Scanner keyin = new Scanner(System.in);

        int test = keyin.nextInt();
        while(test-- > 0){
            int day = keyin.nextInt(), poli = keyin.nextInt();

            int[] dayarr = new int[day];
            for(int i=0; i<poli; i++){
                int poliday = keyin.nextInt();
                int temp = poliday;
                while(poliday <= day){
                    dayarr[poliday-1] = 1;
                    poliday += temp;
                }
            }

            int count = 0;
            for(int i=0; i<day; i++){
                if((i-5)%7 == 0 || (i-6)%7 == 0) continue;
                else if(dayarr[i] == 1) count++;
            }

            System.out.println(count);
        }
    }
}
