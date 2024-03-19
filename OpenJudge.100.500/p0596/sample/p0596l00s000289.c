#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct node{
    char elem;
    struct node *next;
}node;

void push(node **first,char elem){
    node *new=calloc(1,sizeof(node));
    if(new==NULL)exit(1);
    new->elem=elem;
    new->next=*first;
    *first=new;
}

char pop(node **first){
    char elem;
    node *tmp=*first;
    if(tmp==NULL){
        printf("stackend\n");
        return 'a';   
    }
    elem=tmp->elem;
    *first=tmp->next;
    free(tmp);
    return elem;
}
void printStack(node *first){
    node *tmp=first;
    char ret[12]={'\0'};
    int len,pt=0;
    while(tmp!=NULL){
        ret[pt++]=tmp->elem;
        tmp=tmp->next;
    }
    for(int i=pt;i>=0;i--){
        printf("%c",ret[i]);
    }
    printf("\n");
}

int main(void){
    char inseq[100001];
    node *first=NULL;
    int stlen,ans=0;
    char dmp;
    scanf("%s",inseq);
    stlen=strlen(inseq);
    for(int i=0;i<stlen;i++){
        if(first==NULL){
            push(&first,inseq[i]);
        }else{
            if(first->elem==inseq[i]){
                push(&first,inseq[i]);
            }else{
                dmp=pop(&first);
                ans+=2;
            }
        }
    }
    while(first!=NULL){
        dmp=pop(&first);
    }
    printf("%d\n",ans);
    return 0;
}