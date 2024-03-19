#include<stdio.h>
#include<math.h>
 
int main(){
 
  int n,i,j,x,judge,count = 0;
  int a[10000] = {0};
 
   scanf("%d",&n);
 
  for(i = 0; i < n; i++){
 
     scanf("%d",&a[i]);

   }

   for(i = 0; i < n; i++){

    x = sqrt(a[i]);
    
    judge = 0;

    for(j = 2; j <= x; j++){

      if(a[i] % j == 0){

       judge = 1;

 }

      if(judge == 1){

       break;

       }

  }
   
       if(judge == 0){
       
       count++;
 
   }

}

 
    
     printf("%d\n",count);
 
    
       return 0;

}