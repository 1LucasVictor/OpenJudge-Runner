#include <stdio.h>
#include <string.h>
int main(){
	int a,b,c,k,i,ans;
	scanf("%d %d %d %d",&a,&b,&c,&k);
	if(k<=a){
		printf("%d\n",k);
	}else if(k<=a+b){
		printf("%d\n",a);
	}else{
		printf("%d\n",a-(k-a-b));
	}
	
	return 0;
}