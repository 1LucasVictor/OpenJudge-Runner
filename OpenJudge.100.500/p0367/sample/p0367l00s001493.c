#include<stdio.h>
int main(){
	int i,a,b,c,sum=0;
	
	scanf("%d %d %d",&a,&b,&c);
	if(1<=a && a<=b && b<=c && c<=10000 && a<=b){
		for(i=1;i<=c;i++){
			if(c%i==0){
				if(a<=i && i<=b) 
					sum++;
			}
		}
	}
	printf("%d\n",sum);
	return 0;
}