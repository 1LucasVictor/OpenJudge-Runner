#include <stdio.h>
#include <stdlib.h>
 
int main(){
    int a,b,c;
	scanf("%d",&a);
  	scanf("%d",&b);
	scanf("%d",&c);
  
    int one_nokori = a-b;
    if(one_nokori<=0){
      one_nokori=0;
    }
    int two_nokori =c-one_nokori;
    if(two_nokori>=0){
      printf("%d",two_nokori);
    }else{
      printf("0");
    }
}