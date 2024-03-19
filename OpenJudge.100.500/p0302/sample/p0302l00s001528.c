#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define N 1000000
#define M 1000001

typedef struct card{
	char key[15];
	struct card *next;
}card;

card *a[M];

long long convert(char str[]){
	int x=0;
	long p=1;
	
	for(int i=0;i<strlen(str);i++){
		x+=(str[i]-'A')*p;
		p*=5;
	}
	
	return x%M;
}

void insert(char str[]){
	card *new=malloc(sizeof(card));
	new->next=NULL;
	strcpy(new->key,str);
	
	card **p=&a[convert(str)];
	
	while((*p)!=NULL)
		p=&((*p)->next);
	
	(*p)=new;
	
	return;
	
}

int find(char str[]){
	long long hash=convert(str);
	card *p=a[hash];
	
	while(p!=NULL){
		if(strcmp(p->key,str)==0)
			return 1;
		p=p->next;
	}
	
	return 0;
	
}


int main(){
	int n,i;
	char com[10];
	char str[15];
	
	for(i=0;i<M;i++)
		a[i]=NULL;
	
	scanf("%d",&n);
	
	for(int i=0;i<n;i++){
		scanf("%s %s",com,str);
		
		if(com[0]=='i'){
			insert(str);
		}
		
		else {
			if(find(str))
				printf("yes\n");
			else 
				printf("no\n");
		}
		
	}
	
	return 0;
	
}
