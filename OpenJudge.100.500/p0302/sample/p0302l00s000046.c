#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node{
  char string[13];
  struct node *next;
  struct node *prev;
};

typedef struct node * NodePointer;

NodePointer head;
int count=0;

void init(){
  head = malloc(sizeof(struct node));
  head->next = head;
  head->prev = head;
  return;
}

void insert(char key[13]){
  NodePointer new;
  new = malloc(sizeof(struct node));
  strcpy(new->string,key);
  new->next = head;
  new->prev = head->prev;
  head->prev->next = new;
  head->prev = new;
  count++;
  return;
}

void find(char key[13]){
  NodePointer p,q;
  strcpy(head->string,key);
  if(count == 1){
    if(strcmp(head->next->string,key) == 0){
      printf("yes\n");
      return;
    }
    else{  
      printf("no\n");
      return;
    } 
  }
  for(p = head->next,q = head->prev;strcmp(p->string,key) != 0 && strcmp(q->string,key) != 0 && (p != q || q->next != p);p=p->next,q=q->prev);
  if(p == q) {
    printf("no\n");
    return;
  }
  else{
    printf("yes\n");
    return;
  }
}

int main(){
  int i,n;
  char sstring[10];
  char skey[13];
  
  init();
  
  scanf("%d",&n);
  
  for(i=0;i<n;i++){
    scanf("%s%s",sstring,skey);
    if(sstring[0] == 'i') insert(skey);
    if(sstring[0] == 'f') find(skey);
  }
  
  return 0;
}