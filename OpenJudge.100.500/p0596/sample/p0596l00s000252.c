/* ex9_2
   moka223711 */

#include <stdio.h>
#include <stdlib.h>

#define SIZE 100005 // キューブの数の上限

typedef struct cube{ // キューブの色('0','1')を格納するための単方向リストを用いたスタック
    char color; // キューブの色を格納する
    struct cube *next; // 一つ上に積まれているキューブのアドレスを格納する
}cube;

void push(cube **head, char color); // キューブの色を格納するための関数
char pop(cube **head); // キューブを取り除くための関数

int main(void){
    cube *head; // スタックの先頭アドレスを表すポインタ
    char cube_color[SIZE], color, *ptr;
    int ans = 0;
    
    head = NULL; // スタックの中はまだ空なのでNULLを格納しておく
    scanf("%s", cube_color); // キューブの色の入力を受け取る
    ptr = cube_color; // キューブの色の配列の先頭アドレスをptrに格納する
    
    // まずは配列の先頭の要素をスタックに加える。次にキューブの色の配列cube_color
    // を調べていって、スタックの先頭のキューブの色と異なる色を探す。先頭の要素と同じ色の
    // キューブであればスタックに加えていくが、異なる色であったときはそのキューブをスタック
    // には加えず、同時にスタックの先頭のキューブも取り除く。今スタックの中には同じ色の
    // キューブが連続して並んでおり、隣り合うキューブを取り除いても先頭のキューブを
    // 取り除いてもスタックの中の要素はどちらも同じものになるからである。
    while(*ptr != '\0'){
        if(head == NULL)push(&head, *ptr); // スタックに最初の要素を加えるとき
        else if(head->color != *ptr){ // スタックの先頭のキューブの色と異なる色が見つかったとき
            color = pop(&head); // スタックの先頭の要素を取り除く
            ans += 2; // このときキューブは2つ分取り除いたことになるのでansに2を足す
        }
        else push(&head, *ptr); // スタックの要素がなくなったとき
        ptr++; // 配列のすべてのキューブについて調べていく
    }
    printf("%d\n", ans); // 調べ終わったらansを出力する
    return 0;
}

// スタックの先頭に要素を加えるための関数
void push(cube **head, char color){
    cube *new;
    if((new = malloc(sizeof(cube))) == NULL)exit(1); // スタックの領域を動的確保する
    new->color = color; // 加わるキューブの色を代入
    new->next = *head; // それまで先頭だったところを指すようにする
    *head = new; // newを新たにスタックの先頭の要素にする
}

// スタックの先頭の要素を削除するための関数
char pop(cube **head){ 
    char color;
    cube *garbage = *head; // スタックの先頭の要素のメモリを解放する
    if(garbage == NULL)exit(1);
    color = garbage->color; // スタックの先頭の要素の色を代入
    *head = garbage->next; // スタックの次の要素を先頭として指すようにする
    free(garbage); // メモリを解放する
    return color; // 先頭の要素に入っていた色を返す
}