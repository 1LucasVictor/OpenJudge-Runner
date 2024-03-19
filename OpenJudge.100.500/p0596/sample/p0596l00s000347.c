/* ex 9_2
   hangan2020 */

#include <stdio.h>
#include <stdlib.h>
#define SIZE 1000001

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
void pop(node **first){
   char elem;
   node *tmp = *first;
   if(tmp == NULL) exit(1);
   elem = tmp->elem;
   *first = tmp->next;
   //取り出したノードのメモリを解放
   free(tmp);
}

int main(void){
   char cube_input[SIZE]; 
   int i = 0;
   int remove_count = 0;
   node *first = NULL;
   //printf("%p\n", first);

   scanf("%s", &cube_input);

   while(cube_input[i] != '\0'){
      //printf("cube_input[%d]: %c\n", i, cube_input[i]);
      if(first == NULL){
         push(&first, cube_input[i]);
         i++;
      }else{
         push(&first, cube_input[i]);
         //printf("%p\n", first);
         //printf("first elem: %c", first->elem);
         if(first->elem != first->next->elem){
            //printf("got here\n");
            //printf("first->elem: %c\n", first->elem);
            //printf("first>next>elem: %c\n", first->next->elem);
            pop(&first);
            pop(&first);
            remove_count++;
            remove_count++;
         }
         i++;
      }
      //printf("got through if\n");
   }

   printf("%d", remove_count);

   return 0;

}
