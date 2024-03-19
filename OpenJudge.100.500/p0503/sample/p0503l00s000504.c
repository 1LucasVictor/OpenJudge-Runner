#include <stdio.h>
 
int    main( void )
{
    int N, str[1000000], i, j, c=0;
    
    scanf("%d", &N);
    
    for(i=0; i<N; i++){
        scanf("%d", &str[i]);
    }
    
    for(i=0; i<N; i++){
        for(j=i+1; j<N; j++){
            if(str[i]==str[j]){
                c=c+1;
            }else{
                break;
            }
        }
    }
    
    if(c==0){
        printf("YES");
    }else{
        printf("NO");
    }
    
    return 0;
}
