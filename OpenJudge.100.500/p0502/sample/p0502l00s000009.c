#include <stdio.h>

int main(void) {
    
    int i;
    int num;
  
    scanf("%d", &num);
  
    int su[num];
    int judge =0;
  
    for(i=0; i<num; i++){
        scanf("%d", &su[i]);
        
        if(su[i]%2==0){
            if(su[i]%3!=0 && su[i]%5!=0)
                judge=1;
        }
    }
    
    if(judge==0)
        printf("APPROVED");
    else
        printf("DENIED");
    
	return 0;
}

