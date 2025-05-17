class Connection {
private static Connection _inst; //변수 —— prviate은 내부 생성 내부 접근` 

private int count; //클래스명 정적메서드 이름()
private Connection(){ //생성자
count = 0;
}

public static Connection getinstance(){ //메서드
if(_inst == null){ //정적 변수 초기화 null이면 참 -> new라는 연산자 클래스 객체를 만들어준다.
_inst = new Connection(); //생성자 호출
}
return _inst; 
}
public void count(){
count ++;
}

public int getCount(){
return count;
}

}
public class Main{
public static void main(String[] args){
Connection conn1 = Connection.getInstance(); //첫 getInstance 
conn1.count();
Connection conn2 = Connection.getInstance();
conn2.count();
Connection conn3 = Connection.getInstance();
conn3.count();
conn1.count();
System.out.print(conn1.getCount());
}
}
