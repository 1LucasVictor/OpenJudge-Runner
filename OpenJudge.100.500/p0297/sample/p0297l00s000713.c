#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct{
  char name[10];
  int time;
}set;
struct node{
  set data; 
  struct node *next;
};
struct node* insert(set);
struct node* finditem(set);
struct node* make_1node(set,struct node*);
void delnode(struct node*);
struct node *head;

int main(){
  int n, q, time=0, i; //n->?????° q->??????????????? time->????????????
  set input={{1,1},0}; //head??????????????¨??\???????????¨
  struct node *m, *lastnode;
  head = make_1node(input,NULL);
    scanf("%d%d",&n,&q);
  for(i=0; i<n; i++){
    scanf("%s%d",input.name,&input.time);
    lastnode = insert(input);
  }
  while(n){
    m = head->next;
      if(m->data.time > q){
	time += q;
	m->data.time -= q;
	//???????????????-->???????°??????????
	lastnode->next = m;
	lastnode = m;
	head->next = m->next;
	m->next = NULL;
      }
      else{
	time += m->data.time;
	m->data.time = 0;
	printf("%s %d\n",m->data.name,time);
	head->next = m->next;
	free(m);
	n--;
      }
  }


  for(m=head->next; m!=NULL; m=m->next)
    printf("%s %d\n",m->data.name,m->data.time);
  return 0;

}

struct node* insert(set keydata)
{
  struct node *newnode;
  struct node *n;
  if (finditem(keydata) == NULL) {
    n = head;
    while(n->next != NULL)
      n = n->next;
    newnode = make_1node(keydata, n);
    n->next = newnode;
    newnode->next = NULL;
    return newnode;
  }
  else return NULL;
}

struct node* finditem(set keydata)
{
  struct node *n;
  int flag;
  for (n = head; n->next != NULL; n = n->next) {
    if (strcmp(n->next->data.name, keydata.name) == 0) return n;
  }
  return NULL;
}

struct node* make_1node(set keydata, struct node *p)
{
  struct node *n;
  n = (struct node*)malloc(sizeof(struct node));
  n->data = keydata;
  n->next = p;
  return n;
}