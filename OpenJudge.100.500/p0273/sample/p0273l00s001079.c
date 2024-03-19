#include<stdio.h>
 
int main(){
   
  int x,i,fibonacci[44];
    scanf("%d",&x);
    for(i=0;i<=x;i++){
      if(i==0) fibonacci[i]=1;
      if(i==1) fibonacci[i]=1;
      if(i>1) fibonacci[i]=fibonacci[i-1]+fibonacci[i-2];
      if(i==x) printf("%d\n", fibonacci[i]);
    }
    return 0;
}