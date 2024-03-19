#include <stdio.h>
#include <ctype.h>
	int data[100];
	int sp=0;
	
	int empty(){
		return sp <= 0;
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
		int v, t;
		while(scanf("%d",&v) !=EOF){
			if(v!=0){
				push(v);
			} else{
				t=top();
				printf("%d\n",t);
				pop();
			}
		}
	}