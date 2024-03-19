#include<stdio.h>
#include<string.h>
int main(void){
int a[6],i;
char A[5] = {"Yay!"};
  

  for(i=0;i<=5;i++){
  	scanf("%d",&a[i]);
  }
  
    for(i=1;i<=4;i++){
    	if((a[i+1]-a[1])>a[5]){
        	strcpy(A,":(");
        }
    }
  	printf("%s",A);
	return 0;
}