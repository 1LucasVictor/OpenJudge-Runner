#include <stdio.h>
 
int    main( void )
{
    int N, maisu;
    
    scanf("%d",&N);
    
    maisu=N/2;
    if(N%2!=0){
    printf("%d", maisu+1);
    }else{
        printf("%d", maisu);
    }
    return 0;
}
