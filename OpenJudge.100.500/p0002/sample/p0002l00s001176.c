#include <stdio.h>
#include <string.h>

int main(){
	int a,b,c,i,num;
	scanf("%d",&num);
	
	for(i = 0;i < num;i++){
		scanf("%d %d %d",&a,&b,&c);
		a = a * a;
		b = b * b;
		c = c * c;
		if(a == (b + c) || c == (a+b) || b == (c + a)){
			printf("YES\n");
		}else{
			printf("NO\n");
		}	
	}
	return 0;
}