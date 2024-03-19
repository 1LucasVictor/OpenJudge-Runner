#include <stdio.h>
int main(){
	int A,B,T,i=1,sum=0;
 	scanf("%d",&A);
  	scanf("%d",&B);
  	scanf("%d",&T);

  	while((float)i*A<(float)T +0.5){
      sum=sum+B;
      i++;
    }
  	printf("%d\n",sum);
  	return 0;
}
