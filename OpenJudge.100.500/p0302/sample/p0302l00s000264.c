#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node{
  struct node *prev;
  int key;
  struct node *next;
} D;

D *head;

void insert(int wd2);
int find(int wd2);
int getint(char wd[]);

int main()
{
  int i,n,wd2;
  char cmd[7],wd[13];

  head=malloc(sizeof(D));
  head->key=-1;
  head->prev=head;
  head->next=head;

  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%s",cmd);
    if(cmd[0]=='i'){
      scanf("%s",wd);
      wd2=getint(wd);
      insert(wd2);
    }
    else{
      scanf("%s",wd);
      wd2=getint(wd);
      if(find(wd2)) printf("yes\n");
      else printf("no\n");
    }
  }
  return 0;
}

void insert(int wd2){

  D *temp;

  temp=malloc(sizeof(D));
  temp->key=wd2;  
  //temp->key=wd;
  temp->next=head->next;
  temp->prev=head;

  head->next=temp;
  temp->next->prev=temp;
}

int find(int wd2){

  D *temp;
  temp=head;
  
  while(temp->next->key!=head->key){
    temp=temp->next;
    if(temp->key==wd2){ 
      //if(temp->key==wd){
      return 1;
    }
  }
  return 0;
}

int getint(char wd[]){
  int i,len,sum=0;
  
  len=strlen(wd);
  for(i=0;i<len;i++){
    if(wd[i]=='A') sum+=1;
    else if(wd[i]=='C') sum+=2;
    else if(wd[i]=='G') sum+=3;
    else if(wd[i]=='T') sum+=4;
    sum*=5;
  }
  return sum;
}