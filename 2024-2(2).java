interface Number {
    int sum(int[] a, boolean odd);
}

public class Gisafirst {
    public static void main(String[] args) {
        int[] a = {1, 2, 3, 4, 5, 6, 7, 8, 9};
        OENumber OE = new OENumber();
        System.out.print(OE.sum(a, true) + "," + OE.sum(a, false));
    }
}

class OENumber implements Number {
    @Override
    public int sum(int[] a, boolean odd) {
        int result = 0;
        for (int i = 0; i < a.length; i++) {
            if ((odd && a[i] % 2 != 0) || (!odd && a[i] % 2 == 0)) {
                result += a[i];
            }
        }
        return result;
    }
}

// 인터페이스 Number는 sum메서드를 정의하는 인터페이스로 매개변수로 정수배열 a와 boolean odd 
//sum 메서드는 배열 내 홀수 혹은 짝수의 합계를 반환한다. 
//OENumber 클래스 Number 인터페이스를 구현하는 클래스
//sum메서드는 다음 로직으로 동작한다. 
//odd가 true일 경우 배열에서 a[i]%2!=0을 합산한다.
//odd가 false일 경우 배열에서 a[i]%2==0를 합산한다.

//배열 a는 {1,2,3,4,5,6,7,8,9}
//OE.sum(a,true)는 배열 a 에서 홀수의 합계, OE.sum(a,false)는 배열 a에서 짝수의 합계: 25,20
