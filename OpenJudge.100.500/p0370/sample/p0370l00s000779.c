#include<stdio.h>
#include<math.h>

int main(){
	int i;
	int a,b;
	int num;
	char op;
	
	for(i=0;op!="?";i++){
		scanf("%d %c %d",&a,&op,&b);
		
		switch(op){
			case '+':
				num = a + b;
				break;
			case '-':
				num = a - b;
				break;
			case '*':
				num = a * b;
				break;
			case '/':
				num = a / b;
				break;
			case '?':
				return 0;
			default:
				break;
		}
		
		printf("%d\n",num);
	}

return 0;
}
