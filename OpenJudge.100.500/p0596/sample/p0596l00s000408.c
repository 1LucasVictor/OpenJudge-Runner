/* ex8_2 
melo */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 1000001
typedef struct node{
    char elem;//文字
    struct node *next;//次のノードへのパス
} node;
void push(node **first,char elem);//スタックにelemを格納
char pop(node **first);//スタックの一番上から取り出す

int main(void){
    int i,count=0;//for文用,キューブの数
    char color[SIZE];//キューブの色の配列
    node *first=NULL;//最初のノードのさす先
    scanf("%s",color);//
    for(i=0;i<strlen(color);i++){//
        if(first==NULL){//スタックに何も入っていないとき
            push(&first,color[i]);//スタックにcolor[i]を格納
        }
        else if(color[i]==first->elem){//真上の色と一緒だった場合
            push(&first,color[i]);//スタックにcolor[i]を格納
        }
        else{//色が違った場合
            pop(&first);//取り除く
            count+=2;//キューブを二つ取り除く
        }
    }
    printf("%d\n",count);//何個キューブを取り除いたか
    return 0;//正常終了
}

void push(node **first,char elem){
    node *new =calloc(1,sizeof(node));//追加する分の領域を確保
    if(new==NULL)exit(1);//確保できなかった場合
    new->elem=elem; //要素を一番上に追加
    new->next=*first;
    *first=new;
}
char pop(node **first){
    char elem;//取り出す要素
    node *tmp =*first;//一番上
    if(tmp==NULL)exit(1);//何も入っていなかったとき
    elem=tmp->elem;//
    *first=tmp->next;//一番上を一つ下げる
    free(tmp);//取り出したノードのメモリを解放
    return elem;//取り出した要素を返す
}