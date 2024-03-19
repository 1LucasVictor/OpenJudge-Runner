/*  ex9_2
	masaaki52	*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//リストのノード（スタック内の各データ）の定義
typedef  struct stack{
  char elem;
  struct node *next;
}node;

//スタックにデータを追加
void push(node **first,char elem){
  //追加する分の領域を確保
  node *new = calloc(1,sizeof(node));
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
  char string[100001];
  node *cube = NULL;//最初のノードの指す先
  int i,count = 0;
  scanf("%s",string);
  for(i=0;i<strlen(string);i++){
    //cubeが空ならstring[i]をcubeに入れる
    if(cube == NULL){
      push(&cube,string[i]);
    }
    //cubeが空でない場合
    //cubeに入った一番新しい文字とstring[i]が同じなら,string[i]をcubeに入れる
    else if(string[i] == cube->elem){
      push(&cube,string[i]);
    }
    //そうでないなら、cubeから一つ取り出して2個分カウントする
    else{
      pop(&cube);
      count += 2;
    }
  }
  printf("%d",count);
  return 0;
}