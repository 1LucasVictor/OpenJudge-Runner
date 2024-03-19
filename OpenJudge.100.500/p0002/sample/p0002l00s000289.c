#include<stdio.h>
int main(void){
	int a=0,b=0,c=0,n=0,i=0;

	scanf("%d",&n);

	for(i=0;i<n;i++){
		scanf("%d %d %d",&a,&b,&c);

		if(a>=b&&a>=c){
			if(b*b+c*c==a*a){
				printf("YES\n");
			}else{
				printf("NO\n");
			}
		}else if(b>=a&&b>=c){
			if(a*a+c*c==b*b){
				printf("YES\n");
			}else if(c>=a&&c>=b){
				printf("NO\n");
			}
		}else{
			if(b*b+a*a==c*c){
				printf("YES\n");
			}else{
				printf("NO\n");
			}



		}
	}
}

