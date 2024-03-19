#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int i,j,a,b,a2,b2;
int gcm=1,lcm;

int main(){
	while(scanf("%d %d",&a,&b)!=EOF){
		for(i=2;i<=a && i<=b;i+=0){
			
			if(a%i==0 && b%i==0){
				gcm=gcm*i;
				a/=i;b/=i;
			}else i++;
			
		}
		lcm=a*b*gcm;
		printf("%lld %lld\n",gcm,lcm);
		gcm=1;
	}
	
	return 0;
}