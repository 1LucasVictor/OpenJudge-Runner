#include <stdio.h>
#include <stdlib.h>
int main(int argv, char *argc[]){
    int num;
    int x;
    int array[255], max, min, sum;
        
    scanf("%d", &num);
    
    
    for(x=0; num>x; x++){
        scanf(" %d", &array[x]);
        
    
        sum += array[x];
        
        if((max < array[x]) || (0 == x)) max = array[x];
        if((min > array[x]) || (0 == x)) min = array[x];
    }
    
    printf("%ld %ld %ld\n", min, max, sum);
    
    return 0;
}