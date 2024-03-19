#include<stdio.h>

int main(){
	int a[100];
	int i=0;
	while(scanf("%d",&a[i])!=EOF){
		if(a[i]==0){
			i--;
			printf("%d\n",a[i]);
		}else{
			i++;
		}
	}
	return 0;
}