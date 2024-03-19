#include<stdio.h>
#include<string.h>

int checkRightAngle(a,b,c){
	if(a*a == b*b + c*c ||
	   b*b == a*a + c*c ||
	   c*c == a*a + b*b){
			return 1;
	}

	return 0;
}

int main(){
	int n,i,a,b,c;

	scanf("%d", &n);
	for(i=0; i<n; i++){
		scanf("%d %d %d",&a ,&b ,&c);
		if(checkRightAngle(a,b,c)){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}

	return 0;
}