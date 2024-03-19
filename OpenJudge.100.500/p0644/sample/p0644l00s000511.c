#include<stdio.h>
int main(){
  	int count=0,i;
	char a[3];
  
  	for(i=0;i<3;i++){
    	scanf("%c",&a[i]);
      	if(a[i]=='1')count++;
    }
  	printf("%d",count);
  	return 0;
}