#include <stdio.h>
int main(void){
    int m , n ;
    scanf("%d %d" , &m , &n);
    int gyo_1[100][100] ;
    int gyo_2[100] ;
    int i , j ;
    int a ;
    
    //set gyo_1
    
    for(i = 0 ; i < m ; i++){
        for(j = 0 ; j < n ; j++){
            scanf("%d" , &gyo_1[i][j]);
        }
    }
    
    //set gyo_2
    for(i = 0 ; i < n ; i++){
        scanf("%d" , &gyo_2[i]);
    }
    
    for(i = 0 ; i < m ; i++){
        a = 0;
        for(j = 0 ; j < n ; j++){
            a += gyo_1[i][j] * gyo_2[j];
        }
        printf("%d\n" , a);
    }
    return 0;
}
