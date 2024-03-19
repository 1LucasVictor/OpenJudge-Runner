/* ex 9_2
   KitamoriFumiya */

#include <stdio.h>
#include <stdlib.h>
#define SIZE 100001
// リストのノード（スタック内の各データ）の定義
typedef struct node{
	char elem;
	struct node *next;
} node;

void push(node **first, char elem);
char pop(node **first);

int main(void){
	node *first = NULL; // リストの先頭
	char cube[SIZE], *ptr; 
	int count = 0;
	ptr = cube;
	scanf("%s", cube); // キューブの色を入力
	while(*ptr){
		// 空または色が先頭の要素と同じならノードを追加
		if(first == NULL || first->elem == *ptr){
			push(&first, *ptr);
		}
		// 色が異なればスタックから先頭のノードを取り出す
		else{
			pop(&first);
			count += 2; // キューブを2個取り出したことになるから取り出した個数を2増やす
		}
		ptr++;
	}
	printf("%d\n", count); // 取り出したキューブの個数を出力
	return 0;
}

//スタックにデータを追加
void push(node **first, char elem){
	// 追加する分の領域を確保
	node *new = calloc(1, sizeof(node));
	if(new == NULL) exit(1);
	new->elem = elem;
	new->next = *first;
	*first = new;
}
//スタックからデータを取り出す
char pop(node **head){
	char elem;
	node *tmp = *head;
	if(tmp == NULL){
		exit(1);
	}
	elem = tmp->elem;
	*head = tmp->next;
	// 取り出したノードのメモリを開放
	free(tmp);
	return elem;
}