public class ExceptionHandling{
  public static void main(String[] args){
    int sum=0;
    try{
      func();//2. 시도
    }catch(NullPointerException e){//3. 강제로 에러를 실행(에러가 담긴다.)
      sum+=1; //int sum=0이므로 +=1이니까 1 sum에 1을 더하고 
    }catch(Exception e){
      sum+=10; //catch(Exception e)는 더 상위 클래스(Exception)로 모든 예외를 처리할 수 있지만, 
      //이미 NullPointerException이 첫 번째 catch 블록에서 처리되었기 때문에 실행되지 않는다.
    }finally{//오류의 유무에 상관없이 finally는 무조건 실행한다.
      sum+=100;
    }System.out.print(sum);
  } //정답: 101

static void func(){
  throw new NullPointerException(); //1. 강제로 에러를 발생시키는 코드
  }
}
