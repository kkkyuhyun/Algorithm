public class String rf(String str, int index, boolean[] seen){
  if(index<0) return ""; 
  char c= str.charAt(index);//해당 인덱스에 있는 문자를 반환해서 c로 저장하라는 뜻이다.
  String result = rf(str, index-1, seen); //재귀함수, 재귀호출해서 이전 문자를 처리하라는 뜻이다.
  if(!seen[c]){
    seen[c] = true;  //문자가 이전에 본 적이 없으면
    return c + result; //문자를 본 것으로 처리해라
  } //문자끼리 더하면 붙는다. 
  return result;
}
//재귀함수는 가장 마지막에 리턴된 것이 result에 담기게 되고 그 result가 뒤로 더해지는 꼴이다.
public static void main(String[] args){
  String str ="abacabcd";
  int length = str.length(); 
  boolean[] seen = new boolean[256]; //length = 8
  System.out.print(rf(str, length-1, seen));
  } //중복을 제거하여 불린 d c b a 문자열 역순 출력 -> 뒤에 c a b a는 이미 출력이 되었으므로 추가하지 않는다.
} 
 /*소문자 a의 아스키코드 문자는 97이다. b는 98, c는 99, d는 100이다. */
/* 함수 rf호출       char c        result      seen[c]       !seen[c]     반환값
  rf(str,7,seen)     d              cba       seen[100]=f      true        dcba
  rf(str,6,seen)     c              cba       seen[100]=t      false       cba
  rf(str,5,seen)     b              cba       seen[100]=t      false       cba
  rf(str,4,seen)     a              cba       seen[100]=t      false       cba
  rf(str,3,seen)     c              cba       seen[99]=f       true        cba
  rf(str,2,seen)     a               ba       seen[97]=t       false        ba
  rf(str,1,seen)     b               a        seen[98]=f       true         ba
  rf(str,0,seen)     a                        seen[97]=f       true          a
  rf(str,-1,seen)    */

