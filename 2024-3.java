class Printer{
  void print(Integer a){
    System.out.print("A" + a);
  }
  void print(Object a){
    System.out.print("B" + a); //따라서 최종 정답은 B0가 출력된다. 
  }
  void print(Number a){
    System.out.print("C" + a);
  }//오버로딩: 메소드를 만들 때 파라미터가 다른 것 
}

public class Main{ //메인함수
  public static void main(String[] args){
    new Container<>(0).print; //제너릭 
  }//Container라는 제너릭 클래스를 사용해서 0을 전달. 과연 Integer로 인식할 것인가? 

  public static class Container<T>{ //여기서 0은 int로 Integer로 바뀌기는 하는데 (박싱)
    T value; //하지만 제너릭 타입으로 들어가는 순간 컴파일 타임에 타입이 소거된다.
    public Container(T t){
      value=t;
    }public void print(){ //타입 소거.
      new Printer().print(value); //구체적으로 타입을 작성하지 않고 T로 하면 object로 바뀐다. (상위 타입)
    }
  }
}
