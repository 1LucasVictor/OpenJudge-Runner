#include <stdio.h>

int main(){
    int data[3];
    int i,j;
    int tmp;
    
    scanf("%d %d %d",&data[0],&data[1],&data[2]);
    
    for ( i = 0; i < 2; i++){
        
        for ( j = 2; j > i; j--){
            if ( data[j] < data[j-1] ){
                tmp = data[j];
                data[j] = data[j-1];
                data[j-1] = tmp;
            }
        }
    }
    printf("%d %d %d\n",data[0],data[1],data[2]);
    return 0;
}