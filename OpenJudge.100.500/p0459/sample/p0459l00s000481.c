#include <stdio.h>

int main(){
	int animal, leg;
    
    scanf("%d", &animal);
    scanf("%d", &leg);
    
    if (leg % 2 == 1){
        printf("No");
    }else if (animal * 2 > leg){
    	printf("No");
    }else if (animal * 4 < leg){
        printf("No");
    }else{
        printf("Yes");
    }
}