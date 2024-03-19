/* ex 9_2
   yy8332 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//リストのノード（スタック内の各データ）の定義
typedef struct node{
  char elem;
  struct node *next;
} node;

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
char pop(node **first){
  char elem;
  node *tmp = *first;
  if(tmp == NULL) exit(1);
  elem = tmp->elem;
  *first = tmp->next;
  //取り出したノードのメモリを解放
  free(tmp);
  return elem;
}

int main(void){
  char input[100001], tmp;
  int len, i, count;

  //最初のノードの指す先
  node *first = NULL;

  //入力読み取り
  scanf("%s", input);
  //入力文字列の長さ取得
  len = strlen(input);

  for(i = 0; i < len; i++){
    if(first != NULL){
      //スタックからノードを取り出す
      tmp = pop(&first);
      //2つのキューブの色で場合分け
      if(tmp != input[i]){
        count++;
      }
      else{
        //スタックにノードを追加
        push(&first, tmp);
        push(&first, input[i]);
      }
    }
    else{
      //スタックにノードを追加
      push(&first, input[i]);
    }
  }

  count = count * 2;

  //出力
  printf("%d\n", count);

  return 0;
}
