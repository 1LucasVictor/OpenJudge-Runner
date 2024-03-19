#include <stdio.h>
#include <string.h>
int main(void){


    long int desk1, desk2, limit;
    scanf("%ld%ld%ld", &desk1, &desk2, &limit);
    
    
    long int now1 = 0, now2 = 0, sum = 0;
    long int read1[desk1], read2[desk2];
    
    for(long int i = 0; i < desk1; i++){
        scanf("%ld", &read1[i]);
    }
   
    for(long int i = 0; i < desk2; i++){
        scanf("%ld", &read2[i]);
    }
   
   for(long int i = 0; ; i++){
       if(now1 < desk1 && now2 < desk2){
           if(read1[now1] < read2[now2]){
               sum += read1[now1];
               now1++;
           } else if (read1[now1] > read2[now2]){
               sum += read2[now2];
                   now2++;
           } else {
               if(read1[now1 + 1] < read2[now2 + 1]){
               sum += read1[now1];
                       now1++;
               } else if (read1[now1 + 1] > read2[now2 + 1]){
                   sum += read2[now2];
                   now2++;
               }
           }
       } else if (now1 == desk1){
           if(read2[now2] + sum <= limit){
               sum += read2[now2];
               now2++;
           } else {
               break;
           }
       } else if (now2 == desk2){
           if(read1[now1] + sum <= limit){
               sum += read1[now1];
               now1++;
           } else {
               break;
           }
       }
           
       if(read1[now1] + sum > limit && read2[now2] + sum > limit ){
           break;
       }
       
   }
   
   printf("%ld\n", now1 + now2);
   
    return 0;
}