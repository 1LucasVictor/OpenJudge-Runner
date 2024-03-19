#include <stdio.h>
const int SIZE = 100; 
int data[100]; 
int sp= 0;
int empty(){ 
	return sp<= 0;
}
int size(){ 
	return sp; 
}
int isfull(){
	return sp>= SIZE; 
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
	int n,i,cnt=0,out[100];
	while(scanf("%d",&n)!=EOF){
  		if(! isfull()) {
			if(n!=0){
   				push(n);
			}else{
				out[cnt]=top();
				pop();
				cnt++;
			}
  		}
 	}
	for(i=0;i<cnt;i++){
		printf("%d\n",out[i]);
	}
 	return 0;
}