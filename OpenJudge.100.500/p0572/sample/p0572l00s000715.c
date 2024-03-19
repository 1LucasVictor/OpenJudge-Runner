#include <stdio.h>

int main(){
 
    long long int l,r;
    long long int i,j;
    int min = 2020;
 
    scanf("%lld %lld",&l,&r);
 
    
    if(r/2019 -l/2019 >= 1){
        min = 0;           
    }else{
        for(i = l; i < r; i++){
         for(j = i+1 ; j <= r ; j++){
               if((i*j)%2019 < min){
                 min = (i*j)%2019;
               }
               if(min == 0)
                break;
           }
           if(min == 0)
            break;
       }
    }
 
    printf("%d\n",min);
    return 0;
}
