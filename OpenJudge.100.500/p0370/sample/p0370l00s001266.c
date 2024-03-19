#include <stdio.h>
int main(){
	/*???????¨????*/
	int a,b;
	char op;
	int answer[100];
	int i,t;
	
	/*??\???*/
	for(i=0;i<100;i++){
		do{
			printf("");
			scanf("%d %c %d",&a,&op,&b);
		}while(!(a>=0 && a<=20000 && b>=0 && b<=20000) || (b==0 && op=='/'));
		if(op=='+'){
			answer[i]=a+b;
		}else if(op=='-'){
			answer[i]=a-b;
		}else if(op=='*'){
			answer[i]=a*b;
		}else if(op=='/'){
			answer[i]=a/b;
		}else if(op=='?')break;
	}
	
	/*??????*/
	for(t=0;t<i;t++){
		printf("%d\n",answer[t]);
	}
	return 0;
}