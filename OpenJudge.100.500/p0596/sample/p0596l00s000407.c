/* ex9_2
   nabe9393 */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 100001
//キュー内の各データの定義
typedef struct node{
  int elem;
  struct node *next;
}node;

//データを追加
void push(node **first, char elem){
  //追加する分の領域を確保
  node *new = calloc(1, sizeof(node));
  if(new == NULL) exit(1);
  new->elem = elem;
  //追加
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
}
 
 
int main(void){
  //最終的な答え
  int count=0, i;
  char cube[SIZE];
  //ノードの先頭
  node *first=NULL;
  scanf("%s",cube);

  for(i=0;i<strlen(cube);i++){
    if(first==NULL || cube[i]==first->elem){
      //スタックにノードを追加
      push(&first,cube[i]);
    }
    else{
      //スタックからデータを取り出す
      pop(&first);
      //2追加
      count=count+2;
    }
  }
  //答えの出力
  printf("%d\n",count);
  return 0;
}
