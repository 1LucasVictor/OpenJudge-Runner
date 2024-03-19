#include <stdio.h> 

int main() {
  int n,x;
  int b,i,j,k,a;
  b = 0;

  while(1) {
    scanf("%d %d",&n,&x);
    
    if( n == 0 && x == 0){
      break;
    }
    for(k = 3; k <= n-2 ; k++) {


      for(j = 2; j <= n-1 ; j++) {

	for(i = 1; i <= n; i++) {
	  
	  
	  if(i == j || j == k || i ==k) {
	    
	  }else{
	    a = i + j + k;
	    if(a == x) {
	      b += 1;
 
	    }
	  }
	  
	}//i
	
      }//j

    }//k
    printf("%d\n",b);
  }


  return 0;
}  
      