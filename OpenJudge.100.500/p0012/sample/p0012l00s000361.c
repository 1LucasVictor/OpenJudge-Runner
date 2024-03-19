#include<stdio.h>

int main(){
	int data[100];
	int sp = 0, v;
	while(scanf("%d", &v) != EOF){
		if(v != 0){
			data[sp] = v;
			sp++;
		}else{
			sp--;
			printf("%d\n",data[sp]);
		}
	}
	return 0;
}