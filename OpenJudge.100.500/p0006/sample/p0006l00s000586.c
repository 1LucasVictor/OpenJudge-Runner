#include<stdio.h>
#include <string.h>
#include<math.h>

int main(){
	int n,i,a=100000;
	
	scanf("%d",&n);
	for(i=0;i<n;i++){
		a=a*1.05;
		if(a%1000!=0){
			a=((a/1000)*1000)+1000;
		}
	}
	printf("%d\n",a);
	return 0;
}