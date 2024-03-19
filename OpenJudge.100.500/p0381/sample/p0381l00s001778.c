#include<stdio.h>
  
int main()
{
 int max, goukei, Count=0, i, j, k;
   
 scanf("%d %d", &max, &goukei);
  
 while((max != 0)&&(goukei != 0)){
   for(i = 1; i <= max ; i++){
     for(j = i + 1 ; j <= max  ; j++){
       for(k = j + 1 ; k <= max  ; k++){
         if(i + j + k == goukei){
           Count++;
         }
       }
     }
   }
   printf("%d \n", Count);
    
   Count=0;
   scanf("%d %d", &max, &goukei);
}
 return 0;
}