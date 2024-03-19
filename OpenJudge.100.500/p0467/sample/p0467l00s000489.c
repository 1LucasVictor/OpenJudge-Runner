#include <stdio.h>

void main(void){

    long a,b,c,k, cou, i,res=0;

    scanf("%ld %ld %ld %ld", &a,&b,&c,&k);

    for(i=0;i<k;i++){
        if(a>0){
            res+=1;
            a--;
        }else if (b>0){
            b--;
        }else{
            res-=1;
            c--;
        }
    }

    printf("%ld\n", res);
}