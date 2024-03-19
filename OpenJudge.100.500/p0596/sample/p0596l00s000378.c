/* ex 9_2
   tomatokan */

#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int color;
    struct node *next;
}node;

void push(node **first,int elem){
    node *new=calloc(1,sizeof(node));
    if(new==NULL){
        printf("calloc failed\n");
        exit(1);
    }
    new->color=elem;
    new->next=*first;
    *first=new;
}

int pop(node **first){
    int elem;
    node *temp=*first;
    if(temp==NULL){
        printf("stack underflow");
        exit(1);
    }
    elem=temp->color;
    *first=temp->next;
    free(temp);
    return elem;
}

int get_tail(node **first){//最後の要素を得る
    return (*first)->color;
}

void add_cube(node **first,int *count,int color){
    //キューブの追加(異なる色が繋がると自動で消える)
    if(*first==NULL){
        push(first,color);
        return;
    }
    int tail_color=get_tail(first);
    if(tail_color!=color){
        *count+=2;
        pop(first);
    }else{
        push(first,color);
    }
}

int main(void){
    char input[100002];
    char *ptr;
    node *first=NULL;
    int count;
    ptr=input;
    fgets(input,100002,stdin);//入力の読み取り
    while(*ptr!='\0'&&*ptr!='\n'){
        if(*ptr=='0'){
            add_cube(&first,&count,0);
        }else{
            add_cube(&first,&count,1);
        }
        ptr++;
    }
    printf("%d\n",count);//出力
    return 0;
}