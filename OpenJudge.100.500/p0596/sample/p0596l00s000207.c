/* ex9_2
   bonbonc    */

#include <stdio.h> 
#include<stdlib.h>
#include<string.h>
#define SIZE 100000

typedef struct _entry{
    int key;//キー
    char token;//文字（0や1)
    struct _entry *next;//次の要素のポインタ
} entry;

void initialize_pool(entry *pool, int size);//プールの初期化関数
entry* insert_list(entry *head, int key, char character);//リストの先頭に要素を挿入する関数
entry* delete_head(entry *head);//リストの先頭を削除する関数

entry pool[SIZE];//メモリ確保用のentry配列
entry *freelist;//未使用のリスト

int main(void){
    entry *head;//リストの先頭を示すポインタ
    int count=0,i;//ブロックを消した回数を記録する変数とループ変数
    char string[SIZE];//入力を受け取る変数

    initialize_pool(pool,SIZE);//プールを初期化

    scanf("%s",string);//入力を受け取る
    head =NULL;//先頭のポインタをNULLで初期化
    
    for(i=0;i<strlen(string);i++){//一文字ずつ見ていく
        if(head==NULL){//先頭ポインタがNULLだったら、リストにstring[i]を挿入
            head = insert_list(head,i,string[i]);
        }else if(head->token != string[i]){
            head = delete_head(head);//リストの先頭と、string[i]が違ったら先頭を取り出す
            count++;//先頭を取り出した分のカウント
            count++;//string[i]を入れて取り出した分のカウント（実際には入れていない)
        }else{
            head = insert_list(head, i, string[i]);//リストの先頭とstring[i]が同じだったらそのまま先頭に挿入
        }
        
    }
    printf("%d\n",count);//答えを出力
    return 0;
}

void initialize_pool(entry *pool, int size){
    int i;//ループ変数
    if(size<1){//sizeが1より小さいときの例外処理
        fprintf(stderr, "Illegal pool size %d.\n",size);
        exit(1);
    }
    for(i=0;i<(size-1);i++){//pool[i]の次のポインタをpool[i+1]につなげる
        pool[i].next = &(pool[i+1]);
    }
    pool[size-1].next = NULL;//末尾の次のポインタをNULLにする
    freelist = pool;//freelistにpoolを渡す
}

entry* insert_list(entry *head, int key, char character){
    entry *new;

    if(freelist == NULL){//freelistが空いていないときの処理
        fprintf(stderr, "out of free space.\n");
        exit(1);
    }else{
        new = freelist;//freelistを一つ持ってくる
        freelist = freelist->next;//freelistを次の要素にずらす
    }
    //それぞれのメンバ変数を渡す
    new -> key = key;
    new -> token = character;
    new -> next = head;
    
    return new;//newポインタを返す
}

entry* delete_head(entry *head){
    entry *ptr;
    ptr=head;//先頭のポインタをコピー
    head = head->next;//先頭のポインタを次のポインタにずらす
    ptr->next = freelist;//元先頭のポインタをfreelistにつなげる
    freelist = ptr;//freelistの先頭のポインタを元先頭ポインタにする

    return head;//新しい先頭ポインタを返す
}