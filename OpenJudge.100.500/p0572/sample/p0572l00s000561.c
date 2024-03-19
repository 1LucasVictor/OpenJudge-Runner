#include <stdio.h>
#include <math.h>

#define MIN 0
#define MAX 2*pow(10.0,9.0)

int main(void){
  int L,R,i,j,n;
  int nmin=2018;
  scanf("%d%d",&L,&R);
  if(L>=MIN && R<=MAX && L<R){
    if((R-1)/2019!=L/2019){
      printf("%d",0);
    } else{
      j=L+1;
      for(i=L;i<j;i++){
	for(j=i+1;j<R;j++){
	  if(i*j<2019){
	    n=i*j;
	  } else{
	    n=(i*j)%2019;
	  }
	  if(nmin>n)
	    nmin=n;
	}
      }	  
      printf("%d",nmin);
    }
  }
  return 0;
}
