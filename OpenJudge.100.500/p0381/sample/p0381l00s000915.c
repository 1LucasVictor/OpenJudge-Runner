#include<stdio.h>

int main()
{
 int kosuu, goukeiti, counter=0, i, j, k, end1, end2;

 scanf("%d %d", &kosuu, &goukeiti);
 scanf("%d %d", &end1, &end2);

 if( (end1 == 0) && (end2 == 0)){
 for(i = 1; i <= kosuu ; i++){
   for(j = i + 1 ; j <= kosuu  ; j++){
     for(k = j + 1 ; k <= kosuu  ; k++){
       if(i + j + k == goukeiti){
         counter++;
       }
     }
   }
 }
}
 printf("%d\n", counter);

 return 0;
}