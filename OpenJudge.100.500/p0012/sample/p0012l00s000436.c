#include <stdio.h>
	const int SIZE = 100;
	int data[SIZE];
	int sp=0;
	
	int empty(){
		return sp <=0;
	}
	
	int top(){
		return data[sp-1];
	}
	
	void pop(){
		sp--;
	}
	
	void push(int v){
		data[sp] = v;
		sp++;
	}
	
	int main(){
		while(1){
			int v;
			scanf("%d",&v);
			if(v==0 && empty()) break;
			if(v!=0){
				push(v);
			} else{
				printf("%d\n",top());
				pop();
			}
		}
	}