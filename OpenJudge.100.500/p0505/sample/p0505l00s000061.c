#include <stdio.h>

int main() {
    
    long int h, t = 0, n, temp;
    
  	scanf("%ld%ld", &h, &n);
  	
  	
  	for(long int i=0; i<n; i++) {
  	    scanf("%ld", &temp);
  	    t += temp;
  	}
  	
  	if(t<h) {
  	    printf("No");
  	} else {
  	    printf("Yes");
  	}
  
  return 0;
}