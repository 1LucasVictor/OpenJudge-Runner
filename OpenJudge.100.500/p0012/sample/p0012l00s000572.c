#include<stdio.h>
#include <math.h>   
int main(){
 
  int n,sya[1000],cnt;
  
  cnt =0;
  while(scanf("%d",&n)!=EOF){

    if(n==0){
       cnt =cnt-1;
       printf("%d\n", sya[cnt]);
       
    }else{

    sya[cnt]=n;
    cnt=cnt+1;
    }


}   
    return 0;
}