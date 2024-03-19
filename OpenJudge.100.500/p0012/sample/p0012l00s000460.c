#include<stdio.h>

struct stack{
	int num;
	int data[10];
};

void push(struct stack *st, int n){
	st->data[st->num] = n;
	st->num++;
	return;
}
int pop(struct stack *st){
	return st->data[--(st->num)];
}

int main(void){
	struct stack st;
	int n;
	st.num=0;
	while(scanf("%d", &n) != EOF){
		if(n == 0){
			printf("%d\n", pop(&st));
		}else{
			push(&st, n);
		}
	}
	return 0;
}