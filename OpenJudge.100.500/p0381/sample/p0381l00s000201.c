#include<stdio.h>
 
int main()
{
 int kosuu, goukeiti, counter=0, i, j, k;
  
 scanf("%d %d", &kosuu, &goukeiti);
 
 while((kosuu != 0)&&(goukeiti != 0)){
   counter=0;  
   for(i = 1; i <= kosuu ; i++){
     for(j = i + 1 ; j <= kosuu  ; j++){
       for(k = j + 1 ; k <= kosuu  ; k++){
         if(i + j + k == goukeiti){
           counter++;
         }
       }
     }
   }


   
   scanf("%d %d", &kosuu, &goukeiti);
   printf("%d\n", counter);
  
}
 return 0;
}