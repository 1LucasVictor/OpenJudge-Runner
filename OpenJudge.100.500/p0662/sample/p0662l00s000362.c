#include<stdio.h>

int main(){
		int a,b,c,d;
		scanf("%d%d%d%d",&a,&b,&c,&d);
		if(b<=c){
				puts("0");
				return 0;
		}
		if(a>c){
				if(b<d)printf("%d",b-a);
				else printf("%d",d-a);
		}
		else {	
				if(b<d)printf("%d",b-c);
				else printf("%d",d-c);
		}
		puts("");
		return 0;
}
