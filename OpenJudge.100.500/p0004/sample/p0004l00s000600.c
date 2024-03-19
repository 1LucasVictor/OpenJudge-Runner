#include<stdio.h>

int main(){
	
	long int a,b,x,y;
	long int a1,a2,i,j;
	
	while (1) {
		
	scanf("%ld %ld",&a,&b);
		if (getchar() == EOF)break;
		if(a>b){
			a1=a;
			a2=b;
		}else{
			a1=b;
			a2=a;
		}
		
		for(i=a2;i>1;i--){
			if(a1%i==0&&a2%i==0)break;
		}
		x=i;
		
		for(i=1;i<=a1;i++){
			for(j=1;j<=a2;j++){
				if(a2*i==a1*j){
					y=a2*i;
					goto label;
				}
				if(a2*i<a1*j)break;
			}
		}
	label:
		
		printf("%ld %ld\n",x,y);
	}
	return 0;
}