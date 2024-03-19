#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct number{
	int n;
	struct number *up;
	struct number *down;
};

int insert(struct number**,struct number*);

int main(){
	char *q;
	char *buf = (char *)malloc(sizeof(char)*2200000);
	int N,temp,flag=1;
	fgets(buf,10,stdin);
	q = strtok(buf," ");
	N = atoi(q);
	fgets(buf,11*N,stdin);
	struct number *top = NULL;
	for(int i=0;i<N;i++){
		struct number *data = (struct number *)malloc(sizeof(struct number));
		if( i==0 ){
			q = strtok(buf," ");
		}else{
			q = strtok(NULL," ");
		}
		data->n = atoi(q);
		data->up = NULL;
		data->down = NULL;
		flag = insert(&top,data);
		if( flag==0 ) break;
	}
	if( flag ) printf("YES");
	else printf("NO");
	return 0;
}

int insert( struct number **top,struct number *data){
	if( *top == NULL ){
		*top = data;
		return 1;
	}
	struct number *t = *top;
	while(1){
		if( (t->n) == (data->n) ){
			return 0;
		}else if( (t->n) > (data->n) ){
			if( t->down == NULL ){
				t->down = data;
				return 1;
			}else{
				t = t->down;
			}
		}else if( (t->n) < (data->n) ){
			if( t->up == NULL ){
				t->up = data;
				return 1;
			}else{
				t = t->up;
			}
		}
	}
	return 0;
}
