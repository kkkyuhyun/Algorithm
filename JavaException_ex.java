public class ThrowExample1 {
  public static void main(String[] args){
    try{
      checkAge(15);
    } catch(IllegalArgumentException e){
      System.out.println(e.getMessage());
    }
  }

public staic void checkAge(int Age){
  if(age<19){
    throw new IllegalArgumentExeption("나이는 19세 이상이어야 합니다.");
  }
  System.out.println("나이가 적합합니다.");
  }
}

//출력값: 나이는 19세 이상이어야 합니다. 

/* try 밑 블럭에서 오류가 발생하면 catch라는 곳으로 이동하여 어떻게 처리할 것인지 정의한다.
그리고 마지막에 finally라는 키워드를 작성할 수도 있고 안 할수도 있다.(선택)
finally가 작성될 경우 에러와 발생 상관없이 무조건 실행되어야 한다. */
