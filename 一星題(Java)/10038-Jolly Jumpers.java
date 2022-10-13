import java.util.Scanner;
import java.lang.Math;
import java.util.ArrayList;

public class Main{
    public static void main(String[] args){
        Scanner keyin = new Scanner(System.in);
      
        while(keyin.hasNextInt()){
            Boolean flag = true;
            int num = keyin.nextInt();
            ArrayList<Integer> arr = new ArrayList<>();

            for(int i=0; i<num; i++){
                arr.add(keyin.nextInt());
            }

            for(int i=1; i<num; i++){
                flag = false;
                for(int j=0; j<num-1; j++){
                    if(Math.abs(arr.get(j) - arr.get(j+1)) == i){
                        flag = true;
                        break;
                    }
                    else if(Math.abs(arr.get(j) - arr.get(j+1)) > num-1){
                        flag = false;
                        break;
                    }
                }

                if(!flag){
                    System.out.println("Not jolly");
                    break;
                }
            }

            if(flag) System.out.println("Jolly");
        }
    }
}
