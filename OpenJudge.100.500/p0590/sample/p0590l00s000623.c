#include <stdio.h>

int main(){
    
    int antennas[6] = {};
    
    for(int i = 0;i < 6;i++){
        
        do{
            
            scanf("%d",&antennas[i]);
            
        }while(antennas[i] < 0 || antennas[i] > 123);
    }
    
    for(int i = 0;i < 4;i++){
        
        for(int j = i + 1;j < 5;j++){
            
            if((antennas[j] - antennas[i]) > antennas[5]){
                
                printf(":(");
                return 0;
            }
        }
    }
    
    printf("Yay!");
    
    return 0;
}
