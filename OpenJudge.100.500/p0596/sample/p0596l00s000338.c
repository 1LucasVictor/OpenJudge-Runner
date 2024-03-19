/* h-ex9_2
   Ohshima */

#include <stdio.h>
#include <stdlib.h>

//リストのノード（スタック内の各データ）の定義
typedef struct node{
  char elem;
  struct node *next;
}node;

//スタックにデータを追加
void push(node **first, char elem){
  //追加する分の領域を確保
  node *new = calloc(1, sizeof(node));
  if(new == NULL) exit(1);
  new->elem = elem;
  new->next = *first;
  *first = new;
}

//スタックからデータを取り出す
void pop(node **first){
  node *tmp = *first;
  if(tmp == NULL) exit(1);
  *first = tmp->next;
  //取り出したノードのメモリを解放
  free(tmp);
}

int main(void){
  char tmp;
  //最初のノードの指す先
  node *first = NULL;
  int ans = 0;
  //1文字ずつ標準入力から受け取り以下を実行
  while(scanf("%c", &tmp) != EOF && tmp != '\n'){
    //まずスタックにノードを追加
    push(&first, tmp);
    //2個以上のキューブが積まれており、かつ、上から2個のキューブの色が異なるとき
    if((first->next != NULL) && (first->elem != first->next->elem)){
      //スタックから2つのデータを取り出し、取り除いたキューブの個数をカウントする
      pop(&first);
      pop(&first);
      ans += 2;
    }
  }
  printf("%d\n", ans);
  return 0;
}
