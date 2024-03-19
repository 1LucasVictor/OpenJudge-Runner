#include<stdio.h>

int main(){
	int a,b;
	int result=0;
	char op;
	while(1){
		
		scanf("%d %c %d",&a,&op,&b);
		
		if(op=='+'){
			result=a+b;
		}else if(op =='-'){
			result=a-b;
		}else if(op=='/'){
			result=a/b;
		}else if(op=='*'){
			result=a*b;
		}
		else if(op=='?') break;
		printf("%d\n",result);
	}
	//printf("%c", op);
	return 0;
	
}
