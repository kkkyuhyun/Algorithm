class Base{ //부모
  int x=3;

  int getX(){
    return x*2;
  }
}

class Derivate extends Base{
  int x=7; 

  int getX(){//자식 재정의(오버라이딩)
    returnx*3;
  }
}

public class Main(
  public static void main(String[]args){
    Base a=new Derivate(); //업캐스팅 형태로 a 생성
    Derviate b=new Derivate(); //Only 자식 형태로 b 생성

    System.out.print(a.getX()+a.x+b.getX()+b.x);//a.getX()는 업캐스티의 getX 재정의했으므로 21
  }//a.x는 부모타입이므로 3이고 b.getX()는 재정의했으므로 21, b.x도 자기자신 7
}//따라서 정답은 52
