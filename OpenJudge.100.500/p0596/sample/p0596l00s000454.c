/*ex9_2
  kt125 */

#include<stdio.h>
#define SIZE 100001

//キューブを格納する単方向リスト
typedef struct _cube{
    char num;
    struct _cube *next;
}cube;

void push(cube **head, char num); //キューブの追加をする関数
void pop(cube **head); //キューブの取り出しをする関数

int main(void){
    cube *head = NULL;
    char string[SIZE], *ptr;
    int count =0; //取り除く個数をカウントする変数
    scanf("%s", string);
    ptr = string; //文字列の先頭アドレスを渡す

    while(*ptr){
        //キューブが何もない場合と、同色のものしかない場合は追加
        if(head == NULL || head->num == *ptr){
            push(&head, *ptr);
        }else{ //それ以外では異色のペアができるので取り除いてカウント+2
            pop(&head);
            count+=2;
        }
        ptr++;
    }
    
    printf("%d", count);
    return 0;
}

void push(cube **head, char num){
    cube *new = calloc(1, sizeof(cube)); //追加する分の領域確保
    if(new == NULL) exit(1);
    new->num = num;
    new->next = *head;
    *head = new;
}

void pop(cube **head){
    cube *tmp = *head;
    if(tmp == NULL) exit(1);
    *head = tmp->next;
    free(tmp); //メモリ解放
}