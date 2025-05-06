import java.io.IOException;
import java.util.Scanner;

public class BinoCo{
    public static void main(String[] args)throws Exception{
        Scanner sc = new Scanner(System.in);
        int N,K;
        N = sc.nextInt();
        K = sc.nextInt();
        int[][] D;

        D = new int[11][11];
        //initialize 
        for(int i=0;i<=N;i++){
            D[i][1] = i;
            D[i][0] = 1; 
            D[i][1] = 1;
        }
        //arrange
        for(int i=2;i<=N;i++){
            for(int j=1;j<=i;j++){
                D[i][j] = D[i-1][j] + D[i-1][j-1];
            }
        }
        System.out.println(D[N][K]);
    }
}
    

