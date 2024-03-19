#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node{
  struct node *prev;
  char key[13];
  struct node *next;
} D;

D *head;

void insert(char wd[]);
int find(char wd[]);

int main()
{
  int i,n;
  char cmd[7],wd[13];

  head=malloc(sizeof(D));
  strcpy(head->key,"ZZZ");
  head->prev=head;
  head->next=head;

  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%s",cmd);
    if(cmd[0]=='i'){
      scanf("%s",wd);
      insert(wd);
    }
    else{
      scanf("%s",wd);
      find(wd);
      if(find(wd)) printf("yes\n");
      else printf("no\n");
    }
  }
  return 0;
}

void insert(char wd[]){

  D *temp;

  temp=malloc(sizeof(D));
  strcpy(temp->key,wd);  
  //temp->key=wd;
  temp->next=head->next;
  temp->prev=head;

  head->next=temp;
  temp->next->prev=temp;
}

int find(char wd[]){

  D *temp;
  temp=head;
  
  while(strcmp(temp->next->key,head->key)!=0){
    temp=temp->next;
    if(strcmp(temp->key,wd)==0){ 
      //if(temp->key==wd){
      return 1;
      break;char key[10];
    }
  }
  return 0;
}