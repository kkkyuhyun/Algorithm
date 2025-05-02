import java.util.Scanner;

public class Average {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("숫자의 개수를 입력하세요: ");
        int N = sc.nextInt(); // 숫자의 개수 입력 받기
        int[] A = new int[N]; // 배열 생성

        System.out.println("숫자를 입력하세요: ");
        for (int i = 0; i < N; i++) {
            A[i] = sc.nextInt(); // 배열에 숫자 저장
        }

        long sum = 0;
        long max = 0;

        // 합과 최대값 계산
        for (int i = 0; i < N; i++) {
            if (A[i] > max) {
                max = A[i]; // 최대값 갱신
            }
            sum += A[i]; // 합 계산
        }

        // 평균 계산 후 출력
        System.out.println("평균: " + (sum * 100.0 / max / N));
        sc.close(); // Scanner 닫기
    }
}
