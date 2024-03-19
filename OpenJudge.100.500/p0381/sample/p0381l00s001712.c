#include<stdio.h>

int main()
{
 int kosuu, goukeiti, counter=0, i, j, k, end1, end2;
 
 scanf("%d %d", &kosuu, &goukeiti);
 while((kosuu != 0)&&(goukeiti != 0)){
 for(i = 1; i <= kosuu ; i++){
   for(j = i + 1 ; j <= kosuu  ; j++){
     for(k = j + 1 ; k <= kosuu  ; k++){
       if(i + j + k == goukeiti){
         counter++;
       }
     }
   }
 }

 printf("%d\n", counter);
 counter=0;
 scanf("%d %d", &kosuu, &goukeiti);
}
 return 0;
}