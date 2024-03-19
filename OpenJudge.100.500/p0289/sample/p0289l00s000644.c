#include<stdio.h>

int main(){
	long int a,b,c,i;
	char input[32];
	
	fgets(input,sizeof input,stdin);
	sscanf(input,"%ld %ld",&a,&b);
	if(a<=b){
		c=b%a;
		for(i=a;i>0;i--){
			if(c%i==0){
				printf("%ld\n",i);
				break;
			}
		}
	}else{
		c=a%b;
		for(i=b;i>0;i--){
			if(c%i==0&&b%i==0){
				printf("%ld\n",i);
				break;
			}
		}
	}
	
	
	
	return 0;
}