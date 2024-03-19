#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define mymalloc(p,n) {p = malloc((n)*sizeof(*p));if ((p)==NULL) {printf("not enough memory?\n"); exit(1);};}

typedef struct obj{
	int value;
	struct obj *next;
	struct obj *prev;
}obj;

typedef struct{
	obj *root;
}stack;

obj *createObj(int v,obj *pre,obj *nex){
	obj *ob;
	mymalloc(ob,1);
	ob->value=v;
	ob->prev=pre;
	ob->next=nex;
	return ob;
}

int pop(stack *S){
	int value;
  obj *temp;
	value=S->root->next->value;
	temp=NULL;
	if(S->root->next->next!=NULL){
		temp=S->root->next->next;
	}
	free(S->root->next);
	S->root->next=temp;
	if(S->root->next!=NULL){
		S->root->next->prev=S->root;
	}
	return value;
}

void push(stack *S,int v){
	obj *ob;
	ob=createObj(v,S->root,S->root->next);
	if(S->root->next!=NULL){
		S->root->next->prev=ob;
	}
	S->root->next=ob;
}

stack *createStack(){
	stack *S;
	mymalloc(S,1);
	S->root=createObj(0,NULL,NULL);
	return S;
}


void calcPoland(stack *S,char *v){
	int i,j,value;
	if(isdigit(v[0])){
		i=atoi(v);
		push(S,i);
	}
	else{
		j=pop(S);
		i=pop(S);
		switch(v[0]){
			case '+':
				value=i+j;break;
			case '-':
				value=i-j;break;
			case '*':
				value=i*j;break;
		}
		push(S,value);
	}
}

main(){
	char v[10];
	stack *S;
	S=createStack();
	while(scanf("%s",v)!=EOF){
		calcPoland(S,v);
	}
	printf("%d\n",pop(S));
	free(S);
	return 0;
}