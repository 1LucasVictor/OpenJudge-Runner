#include<stdio.h>

#define N 100

int calculate(int a,int b,char op);

int main(void)
{
	int a,b,count=0,ans[N];
	char op;
	
	while(1){
		scanf("%d %c %d",&a,&op,&b);
		
		if(op=='?'){
			break;
		}
		
		ans[count]=calculate(a,b,op);;
		count++;
	}
	
	for(int i=0;i<count;i++){
		printf("%d\n",ans[i]);
	}
	
	return 0;
}

int calculate(int a,int b,char op)
{
	switch(op){
		case '+':
			return a+b;
			break;
		case '-':
			return a-b;
			break;
		case '*':
			return a*b;
			break;
		case '/':
			return a/b;
			break;
		default:
			printf("無効な演算子です\n");
			break;
	}
}
