/* ex9_2
   UMAboogie */
#include <stdio.h>
#include <stdlib.h>
#define SIZE 100000

//リストのノードの定義
typedef struct node{
  char elem;
  struct node *next;
} node;

//スタックにデータを追加
void push(node **first, char elem){
  //追加する分の領域を確保
  node *new = calloc(1, sizeof(node));
  if(new == NULL){
    exit(1); //確保できなかったら終了
  }
  new->elem = elem; //新しいノードの中身を追加
  new->next = *first;
  *first = new;
}

//スタックからデータを取り出す
char pop(node **first){
  char elem;
  node *tmp = *first;
  if(tmp == NULL){
    exit(1);
  }
  elem = tmp->elem;
  *first = tmp->next;
  //取り出したノードのメモリを解放
  free(tmp);
  return elem;
}

int main(void){
  int count = 0,i = 0;
  node *first = NULL; //最初のノードの指す先
  char str[SIZE+1]; //入力を一時的に保存する配列を宣言
  scanf("%s",str); //入力
  while(str[i] != '\0'){
    if(first == NULL || str[i] == first->elem){ //最初のキューブか前の色と同じ時
      push(&first,str[i]); //リストに追加
    }else{ //前の色と違う時
      pop(&first); //リストから取り出す
      count += 2; //取り除いた数を2加算
    }
    i ++;
  }

  printf("%d\n",count); //結果を出力
  return 0;
}