#include<stdio.h>
#include<stdlib.h>

typedef struct _Node{
  int a,b,c,d,e,f;
  double x,y;
  struct _Node *next;
}Node;

int main(){
  int i;
  Node *head,*p;
  p=(Node *)malloc(sizeof(Node));
  head=p;
  while(scanf("%d %d %d %d %d %d",&p->a,&p->b,&p->c,&p->d,&p->e,&p->f)!=EOF){
    p->next=(Node *)malloc(sizeof(Node));
    p=p->next;  
  }
  p->next=NULL;
  p=head;
  while(p->next!=NULL){
    p->y=(p->c-(p->a*(double)(p->f/p->d)))/(p->b-(p->a*(double)(p->e/p->d)));
    p->x=(p->c-(p->b*p->y))/p->a;
    printf("%.3f %.3f\n",p->x,p->y);
    p=p->next;      
  }
  return 0;
}