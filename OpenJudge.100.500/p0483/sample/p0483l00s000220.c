#include <stdio.h>

int main(void)
{
  	int N=0;
  	int N1=0,N2=0,N3=0;
  
  	scanf("%d",&N);
  	N1=N/100;
  	N2=(N%100)/10;
  	N3=(N%100)%10;
  
  	if(N1==7){
    puts("Yes");
    }else if(N2==7){
    puts("Yes");
    }else if(N3==7){
    puts("Yes");
    }else{
    puts("No");
    }
  
  	return 0;
  
}
