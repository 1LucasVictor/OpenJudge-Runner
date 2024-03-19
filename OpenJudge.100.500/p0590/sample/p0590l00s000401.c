#include <stdio.h>

int main(){
    
    int antennas[5] = {};
    int k;
    
    scanf("%d",&antennas[0]);
    scanf("%d",&antennas[1]);
    scanf("%d",&antennas[2]);
    scanf("%d",&antennas[3]);
    scanf("%d",&antennas[4]);
    scanf("%d",&k);
    
    for(int i = 0;i < 4;i++){
        
        for(int j = i + 1;j < 5;j++){
            
            if((antennas[j] - antennas[i]) > 15){
                
                printf(":(");
                return 0;
            }
        }
    }
    
    printf("Yay!");
    
    return 0;
}
