public class Gisafirst {
	public static void check ( int [] x, int [] y) {
		if(x==y) System.out.print("O");
		else System.out.print("N");
	}
	public static void main(String[] args){
		int a = new int[] { 1, 2, 3, 4 };
		int b = new int[] { 1, 2, 3, 4 };
		int c = new int[] { 1, 2, 3 };
		check (a,b);
		check (b,c);
		check (a,c);
		}
	}

//==은 주소연산자 a는 100번지, b는 200번지, c는 300번지에 저장된다.
//정답: NNN
