#include <stdio.h>

void push(int d,int *p,int x[]){
	*p = *p + 1;
	x[*p] = d;
}

int pop(int *p,int x[]){
	*p = *p - 1;
	return x[(*p)+1];
}

int main(void) {
	int x,a,d[16]={0},p=0,r;
	while(scanf("%d",&a) != EOF){
		if(a != 0){push(a,&p,d);}
		else{r = pop(&p,d);printf("%d\n",r);}
	}
	return 0;
}