
#include <stdio.h>

int main(void) {
    int pointN, scanNumber;
    int result = 0;
    
    if(scanf("%d", &pointN)==1 && pointN<=100 && pointN>=1){
        for(int i=0; i<pointN; i++){
            if(scanf("%d", &scanNumber)==1 && scanNumber<=1000 && scanNumber>=1){
                if(scanNumber%2==0){
                    if(scanNumber%3!=0 && scanNumber%5!=0){
                        result = 1;                    }
                }
            }else{
                result = 1;
            }
        }
    }else{
        result = 1;
    }
    
    if(result==0){
        printf("APPROVED");
    }else{
        printf("DENIED");
    }

    return 0;
    
}
