#include<stdio.h>
int main(void){
	int a,b;
	char str[1];
	while(scanf("%d %c %d",&a,str,&b)){
		if(str[0]=='?'){
			break;
		}
		else if(str[0]=='+'){
			printf("%d\n",a+b);
		}
		else if(str[0]=='-'){
			printf("%d\n",a-b);
		}
		else if(str[0]=='*'){
			printf("%d\n",a*b);
		}
		else if(str[0]=='/'){
			printf("%d\n",a/b);
		}
	}
	return 0;
}