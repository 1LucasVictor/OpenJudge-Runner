#include<stdio.h>
int main(void){
	
	int a, b, c;
    
    scanf("%d", &a);
    scanf("%d%d", &b, &c);
    
    if(c-b-a > 0){
    	printf("OK");
    	return 0;
    }
    
    for(int i=b;i=c;i++){
    	if(i%a == 0){
            printf("OK");
    		return 0;
        }
    }
       
    printf("NG");
    return 0;
}
