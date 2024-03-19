#include <stdio.h>
#define MAX 11
#define NONE -1

void push(int n, int stack[], int* counter){
	stack[*counter] = n;
	(*counter)++;
}

void pop(int stack[], int* s_counter, int pop_log[], int* p_counter){
	int n;
	n = stack[(*s_counter)-1];
	(*s_counter)--;
	push(n, pop_log, p_counter);
}

int main(void){
	int stack[MAX];
	int pop_log[MAX];
	int i,n;
	int s_counter= 0;
	int p_counter = 0;
	for(i = 0; i < MAX; i++){
		stack[i] = -i;
	}
	while(1){
		if(scanf("%d",&n) == EOF){break;}
		if(n == 0){pop(stack,&s_counter,pop_log,&p_counter);}
		else{push(n,stack,&s_counter);}
	}
	for(i = 0; i < p_counter; i++){
		printf("%d\n",pop_log[i]);
	}
	return 0;
}