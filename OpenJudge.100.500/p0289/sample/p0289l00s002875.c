#include<stdio.h>
#include<math.h>

int main(){
	int a,b,g;
	int i;
	scanf("%d %d",&a,&b);
	if(a>b){
		a=a%b;
		b=b%a;
		for(i=1;i<=b;i++){
			if(a%i==0&&b%i==0){
				g=i;
			}
		}
	}
	else if(a<b){
		b=b%a;
		a=a%b;
		for(i=1;i<=a;i++){
			if(a%i==0&&b%i==0){
				g=i;
			}
		}
	}
	else if(a==b){
		g=a;

	}
	
	
	printf("%d\n",g);
	return 0;
}