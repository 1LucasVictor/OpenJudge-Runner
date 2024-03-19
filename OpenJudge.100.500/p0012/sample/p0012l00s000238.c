#include<stdio.h>
#include <string.h>
#include<math.h>

int main(){
	int a[1000],b[1000];
	int i=0,j=0;
	
	while(scanf("%d",&a[i])!=EOF){
		if(a[i]==0){
			printf("%d\n",a[i-1]);
			i--;
			j++;
		}else{
			i++;
		}
	}
	return 0;
}