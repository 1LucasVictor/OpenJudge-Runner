#include<stdio.h>

int main(void)
{
	int a,b;
	char o;
	while(1){
		scanf("%d %c %d",&a, &o, &b);
		if(o == '?')break;
		else if(o == '+'){
			printf("%d\n",a + b);
		}else if(o == '-'){
			printf("%d\n",a - b);
		}else if(o == '*'){
			printf("%d\n",a * b);
		}else if(o == '/'){
			printf("%d\n",a / b);
		}
		}
	return 0;
}