#include<stdio.h>
#define N 2000000   
int main(){
   
  int n,i,max=-100,min,r[N];
   
 scanf("%d",&n);
 
 for(i=0;i<n;i++){
 scanf("%d",&r[i]);
 }
   
 min=r[0];
   
  
   
for(i=1;i<n;i++){
  if(min>r[i]){
  min=r[i];
  }
  else if(r[i]-min>max){
  max=r[i]-min;
  }
 
}
   
printf("%d\n",max);
   
return 0;
}