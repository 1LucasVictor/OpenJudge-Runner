#include <stdio.h>

int main(){
	int n,flag=0;
	int a[1005];
	
	scanf("%d",&n);
	
	for (int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
	for (int i=0;i<n;i++){
		if(a[i]%2==0){
//			printf("guusuu hantei %d \n",a[i]);
			if(a[i]%3!=0 && a[i]%5!=0){
//				printf("3 amari %d \n",a[i]%3);
//				printf("5 amari %d \n",a[i]%5);
				flag = 1;
			}
		}
	}
	
	if (flag!=1){
		printf("APPROVED");
	}
	else printf("DENIED");
	
	return 0;
}
