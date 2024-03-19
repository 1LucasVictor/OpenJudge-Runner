#include <stdio.h>
int main(void){
	int a,op,b,c,d,e,f;
	for(;;){
		scanf("%d %s %d",&a,&op,&b);
		if(op == '+'){
			c=a+b;
			printf("%d\n",c);
		}else if(op == '-'){
			d=a-b;
			printf("%d\n",d);
		}else if(op == '*'){
			e=a*b;
			printf("%d\n",e);
		}else if(op == '/'){
			f=a/b;
			printf("%d\n",f);
		}else if(op == '?'){
			break;
		}
	}
	return 0;
}