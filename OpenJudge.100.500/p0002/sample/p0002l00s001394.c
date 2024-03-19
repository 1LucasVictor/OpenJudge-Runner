#include<stdio.h>
int main(void){
        int a,b,c,n,i,j,k;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a);
		scanf("%d",&b);
		scanf("%d",&c);
		if(a<b){
			k=a;
			a=b;
			b=k;
		}
		if(a<c){
			k=a;
			a=c;
			c=k;
		}
		if(a*a==b*b+c*c){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}
	return 0;
}
