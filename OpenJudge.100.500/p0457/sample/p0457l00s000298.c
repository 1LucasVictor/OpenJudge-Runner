#include <stdio.h>
#include <string.h>
int main(void){


    long int desk1, desk2, limit;
    scanf("%ld%ld%ld", &desk1, &desk2, &limit);
    
    
    long int now1 = 0, now2 = desk2;
    long int sum1 = 0, sum2 = 0, max = 0;
    long int read1[desk1 + 1], read2[desk2 + 1];
    
    for(long int i = 0; i < desk1; i++){
        scanf("%ld", &read1[i]);
        //sum1 += read1[i];
    }
   
    for(long int i = 0; i < desk2; i++){
        scanf("%ld", &read2[i]);
        sum2 += read2[i];    
    }
   
    //printf
   
    for(long int i = 0; i <= desk1; i++){
        if(sum1 > limit){
            break;
        } else {
            for(int j = 0; j < desk2; j++){
                
                if(sum1 + sum2 > limit && now2 > 0){
                    now2--;
                    //printf("%ld\n", now2);
                    //printf("%ld\n", read2[now2]);
                    sum2 -= read2[now2];
                } else {
                    if(max < now1 + now2){
                        max = now1 + now2;
                    }
                    break;
                }
            }
            
            sum1 += read1[now1];
            now1++;

        }
    }

  
   printf("%ld\n", max);
   
    return 0;
}
