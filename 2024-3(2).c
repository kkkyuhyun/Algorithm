/* 링크드리스트 알고리즘 문제 */ 
structNode(
  int value;
  struct Node*next;
};

void func(struct Node*node){ // 지금 노드가 가리키는 것의 value에 t에 넣어라 
  while(node!=NULL&&node->next!=NULL){
    int t=node->value; //t가 A이고 value가 B
    node->value=node->next->value; //value가 B이고 next가 C
    node->next->value=t; //value가 C이고 t가 A -> 이전 기출에서 출제되었던 전형적인 패턴. temp 세워놓고 스왑하는 코드와 같다.  
    node=node->next->next; 
  }
}

int main(){
  structNode n1={1,NULL};
  structNode n2={2,NULL};
  structNode n3={3,NULL);

  n1.next=&n3; //n1이 가지고 있는 next 노드 포인터는 n3의 주소를 가리킨다.
  n3.next=&n2; //n3이 가지고 있는 next 노드 포인터는 n2의 주소를 가리킨다.

  /*내가 착각한 부분 : n3.next=&n2는 링크드 리스트 (노드) 간의 연결 관계를 설정한 것이지 value를 설정한게 아니다. 
  
  func(&n1); //매개 변수에 n1의 주소를 넣는다. 그러면 n1 기준으로 while 조건 수행

  struct Node*current=&n1;//뜬금없이 아예 새로운 Node 형태로 포인터를 만들어서 n1을 가리킨다. 

  while(current!=NULL){
  printf("%d", current->value);
  current=current->next; //리스트를 순회하면서 각 노드의 값을 출력한다.
  } //func에서 값이 교환되었기 때문에 n1 -> n3 -> n2가 되고 3-1-2으로 출력된다.
}

/* 다시 한번 정리해서 풀어보면 
 int t = node->value;               // t = 1 (n1의 값 저장)
node->value = node->next->value;   // n1.value = n3.value = 3
node->next->value = t;             // n3.value = t = 1 첫번째 반복(node=&n1)

두번째 반복에서 (node=&n2)
  node ->next = NULL이므로 조건 node->next!=NULL을 만족하지 않는다. 반복 종료. 
따라서 func 함수 실행 후 n1의 value값은 3, n3의 value값은 1이 되고 n2가 NULL이 된다.. 
연결관계는 그대로 유지되고, 값은 교환된 상태다. n1.value=3, n3.value=1, n2.value=2가 된다. */
