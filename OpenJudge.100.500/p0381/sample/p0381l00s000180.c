#include <stdio.h>
int main(void){   
// Your code here!   
int n,x,i,j,k,c;   
c=0;   
while(1){    
   scanf("%d %d",&n,&x);    
   if(n == 0 && x == 0)break;   
    for(i =1;i <n+1;i++){ 
          for(j=1;j < n+1;j++){  
             for(k=1;k<n+1;k++){
                   if(j !=k && i != j&& i != k&& i+j+k==x){
                    c=c+1;
                   }
               }
           }
       }
       printf("%d\n",c/6);
   c = 0;
   }
       
return 0;
}
