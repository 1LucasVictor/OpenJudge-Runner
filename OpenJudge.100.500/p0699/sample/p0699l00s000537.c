#include <stdio.h>
int main(){
	int A;
	int B;
	int C;
	//A,B,Cの入力を受ける
  	scanf("%d %d %d",&A,&B,&C);
  	if(A+B+C==17){
      if((A==7&&B==C)||(B==7&&A==C)||(C==7&&A==B)){
      	printf("YES");
      }
    }else{
    	printf("NO");
    }
  return 0;
}
