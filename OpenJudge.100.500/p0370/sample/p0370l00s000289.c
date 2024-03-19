#include <stdio.h>
#include <math.h>


int main(void) {

	// 1_4-C Simple Calculator

	int a,b;
	char op;
	int ans;
	
	scanf("%d %c %d",&a,&op,&b);
	
	while(op != '?'){
		if(op=='+'){
			ans = a+b; 
		}else if(op=='-'){
			ans = a-b;
		}else if(op=='*'){
			ans = a*b;
		}else if(op=='/'){	
			ans = a/b;
		}
		printf("%d\n",ans);
		scanf("%d %c %d",&a,&op,&b);
	}
        return 0;
}