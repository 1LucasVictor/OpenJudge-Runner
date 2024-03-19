#include <stdio.h>
int main(void){
    char box[256];
    int count = 0;
    int i,j;
    scanf("%s",box);

    
   for (i = 0; i < 4; i++){
       for (j = 0; j < 4; j++){
            if (box[i] == box[j]){
                count ++;
            }
       }
   }
   if (count == 8){
        printf("Yes");   
   }else{
       printf("No");
   }

    return 0;
}