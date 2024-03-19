#include <stdio.h>
int main (void){
  
  int i,len;
  int a[10];
  int per = 0;
  
  scanf("%d",&len);
  if(len < 1 || len > 100){
    return 1;
  }
  
  for(i=0;i < len;i++){
  	scanf("%d",&a[i]);
    	if(a[i] < 1 || a[i] > 1000){
        return 1;
        }
    if(a[i] % 2 == 0){
    	if(a[i] % 3 != 0 && a[i] % 5 != 0){
        	per = 1;
          break;
  		}
  	}
  }
    
    if(per == 0){
    	printf("APPROVED");
    }else if(per == 1){
    	printf("DENIED");
    }
    
	return(0);
}

