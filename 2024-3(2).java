public class Main{
  static String[] s =new String[3]:

  static void func(String[] s,int size){
    for(int i=1;i<size;i++){
      if(s[i-1].equals(s[i])){ //s[0].equals(s[1]) -> "A".equals("A"):true이다. equals는 내용을 비교하기 때문에 "O"출력된다. 
        System.out.print("O"); //s[1].equals(s[2]) -> "A".equals(new String("A")): true 똑같이 "O"출력된다. 
      }else{
        System.out.print("N");
      }
    }

    for(String m:s){ //advance for문을 통해 전체 s String의 배열을 가지고 오게 된다. 
      System.out.print(m); //OOAAA
    }
  }

public static void main(String[] args){ //main 함수 먼저 살필 것. 
  s[0] = "A"; //s[0], s[1]은 둘 다 "A"가 문자 리터럴 형태로 간다.
  s[1] = "A"; 
  s[2] = new String("A");//s[2]는 새로운 문자열 객체가 할당이 되었다.

  func(s,3); // 따라서 정답은 OOAAA
  }
}
