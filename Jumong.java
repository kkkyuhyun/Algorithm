import java.io.*;
import java.util.*;

public class Jumong{
    public static void main(String[] args) throws IOException{
     BufferedReader bf = new BufferedReader(new InputStreamReader(System.in));
     int N = Integer.parseInt(bf.readLine()); //N은 재료의 개수
     int M = Integer.parseInt(bf.readLine()); //M은 갑옷이 되는 번호 
     int []A = new int[N];
     StringTokenizer st = new StringTokenizer(bf.readLine());
     for (int i=0;i<N;i++){
      A[i] = Integer.parseInt(st.nextToken());
     }
     Arrays.sort(A);
     int count=0;
     int i=0;
     int j =N-1;
     while(i<j){ //투 포인터 이동 원칙에 따라 포인터 이동하며 처리 -> 두개의 포인터가 같아지는 순간 탐색 끝.
         if(A[i]+A[j]<M)i++;
         else if(A[i]+A[j]>M)j--;
         else{
             count++;
             i++;
             j--;
         }
     }
     System.out.println(count);
    }
}

// compile 실행할 때 현재 상황이 인코딩도 깨지고 ClassNotFoundException 걸리므로 powershell에서 javac 클래스명.java  입력 -> java 클래스명 입력 ->  코드에서 입력 받을 코드 입력 후 실행 compile 
