#include <stdio.h>
#include <stdlib.h>
int main(void){

    int num;
    int *line;
    int i;
    int min,max = 0;

    scanf("%d",&num);

    line = (int *)malloc( num * sizeof(int) );
    
    for( i = 0 ; i < num ; i++ ){
        scanf("%d",&line[i]);
    }

    min = line[0];

    for( i = 0 ; i < num ; i++ ){
        
        if( max < line[i]-min )
            max = line[i]-min;
        
        if( min > line[i] )
            min = line[i];

    }

    printf("%d\n",max);




    return 0;

}