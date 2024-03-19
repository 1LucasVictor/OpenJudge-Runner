//
//  How_many_Divisors.c
//  AOJ
//
//  Created by admin on 2014/07/12.
//
//

#include <stdio.h>

main(){
    int a,b,c;
    int i;
    
    scanf("%d %d %d",&a,&b,&c);
    
    for(i=0;a<=b;a++){
        if(c % a == 0){
            i++;
        }
    }
    printf("%d\n",i);
    return 0;
}