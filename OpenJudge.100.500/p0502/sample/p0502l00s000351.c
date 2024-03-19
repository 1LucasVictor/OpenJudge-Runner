#include <stdio.h>
int main(void){
	int i,a[100];
 	int n,flag=0;
  	scanf("%d",&n);
	for(i=0;i<n;i++){
  		scanf("%d",&a[i]);
    }
  	for(i=0;i<n;i++){
   		if(a[i]%2==0){
         	if(a[i]%3!=0&&a[i]%5!=0){
              printf("DENIED");
              return 0;
            }
        }
    }
  	printf("APPROVED");
}