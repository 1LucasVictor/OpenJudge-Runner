#include<stdio.h>
int train[100]={},idx=0,num;
void pop(){
	printf("%d\n",train[idx-1]);
	idx--;
}
void push(){
	train[idx]=num;
	idx++;
}
int main(){
	while(scanf("%d",&num)!=EOF){
		if(num==0)	pop();
		else		push();
	}
	return 0;
}
 