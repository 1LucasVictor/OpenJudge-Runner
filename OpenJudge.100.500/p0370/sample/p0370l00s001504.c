#include <stdio.h>
#include <math.h>
int main(){
	int a,b,d,i,sum;
	char op;
	double r,area,syu;
	while(1){
		scanf("%d %c %d",&a,&op,&b);
		if(op == '+'){
			sum = a+b;
		}else if (op == '-')
		{
			sum = a-b;
		}else if (op == '*')
		{
			sum = a*b;
		}else if (op == '/')
		{
			sum = a/b;
		}else{
			break;
		}
		printf("%d\n",sum);
	}
	return 0;
}