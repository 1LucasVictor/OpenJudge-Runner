#include<stdio.h>
 
main(){
 
	char c[3];
  	int i,count=0;
  	for(i=0;i<3;i++){
      	scanf("%c",&c[i]);
      	if(c[i]=='1'){
        	count ++;
        }
    }
  printf("%d",count);
 
}