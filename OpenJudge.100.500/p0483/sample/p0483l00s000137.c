#include <stdio.h>
 
int main(){
int N;
int pro1 , pro2 , pro3;
  
  scanf("%d" , &N);
 
	pro3 = N % 10;
	pro2 = (N % 100 - pro3)/10;
	pro1 = (N - pro2)/100;
 
if ((pro1==7)||(pro2==7)||(pro3==7))	printf("Yes\n");
else printf("No\n");
 
return 0 ;
 
}