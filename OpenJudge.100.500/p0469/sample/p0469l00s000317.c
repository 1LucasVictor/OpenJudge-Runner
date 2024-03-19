#include <stdio.h>

int main (){
	
    int k,a,b;
    int bisa = 0;
    
    scanf("%d", &k);
    
    scanf("%d %d", &a, &b);

    for(int i=a; i<=b; i++){
        if(i%k==0){
          bisa = 1;  
        }
        
    }
    if(bisa == 1){
        printf("OK\n");
    }
	else if(bisa == 0) {
        printf("NG\n");
    }
    
	return 0;
}