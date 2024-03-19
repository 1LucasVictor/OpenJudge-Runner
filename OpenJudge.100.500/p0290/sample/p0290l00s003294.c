#include <stdio.h>


int main(){
  int i,j;

  int n,cnt=0;
  int flg;


  scanf("%10000d",&n);
  int A[n];
  for(i=0;i<n;i++){
    flg = 0;
    scanf("%d",&A[i]);


    for(j=2;j<A[i];j++){
      if( (A[i] % j) == 0 ){
	flg = 1;
	break;
      }
    }

     if( flg == 0) cnt ++;


  }
 

  printf("%d\n",cnt);


  return 0;
}

