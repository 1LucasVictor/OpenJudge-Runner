#include <stdio.h>

int main(){

    
    long a[10000],i,n,min,max,sum;
 	 
 	  scanf("%ld",&n);

 	 for(i=0;i < n;++i){
 	  scanf("%ld",&a[i]);
      }
  
      
      min=a[0];
      max=a[0];
      sum=a[0];
      
      for(i=1;i < n;++i){
 	   if(min>a[i]){
		   min=a[i];
	     }else if(max<a[i]){
		   max=a[i];
		 }
	    sum+=a[i];
 	   }  
 	  
 	  printf("%ld %ld %ld\n",min,max,sum);
    
	return 0;
}