#include <stdio.h> 
 int main(void){
 int n,debt =100000;
 double tem;
 scanf("%d",&n);  
 for(;n>0;n--){      
  tem = debt*1.05;
  if((int)tem%1000==0)     
     debt = tem;
  else{
       tem=tem/1000;
       debt =tem+1;
       debt = debt*1000;   
    }  
    } 
  printf("%d\n",debt);     
 return 0;
}