#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#include<string.h>

struct node {
    int color;
    struct node *next;
};

struct node* make(){
    struct node *n = (struct node*)malloc(sizeof(struct node));
    return n;
}

int main(){
    struct node *t= (struct node*)malloc(sizeof(struct node));
    struct node *head = (struct node*)malloc(sizeof(struct node));
    char c;
    int ans=0;
    head->next = t;
    t->next=NULL;
    scanf("%c",&c);
    t->color = (c-'0');
    scanf("%c",&c);
    while(c=='0' || c=='1'){
        t->next = make();
        t = t->next;
        t->color = (c-'0');
        t->next=NULL;
        scanf("%c",&c);
    }
    t = head;
    while(t!=NULL && t->next!=NULL && t->next->next!=NULL){
        if(t->next->color != t->next->next->color){
            ans+=2;
            t->next = t->next->next->next;
            t=head;
        }else t=t->next;
    }
    printf("%d",ans);
    return 0;
}