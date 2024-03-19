#include<stdio.h>

int main(){
	int n;
	int a,b,c;
	int i;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %d %d",&a,&b,&c);
		if(a*a == b*b + c*c || b*b == c*c + a*a || c*c == a*a + b*b){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}
	return 0;
}