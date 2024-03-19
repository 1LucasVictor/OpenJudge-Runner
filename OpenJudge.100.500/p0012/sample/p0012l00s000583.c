#include<stdio.h>
int main(){
  int a[10],b,i=0,j=0,t[100]={0};
  while(scanf("%d",&b)!=EOF){
    if(b!=0){
      i++;
      a[i]=b;
    }
  
    else{
     
      t[j]=a[i];
      i--;
      j++;
    } 
  }
  for(i=0;t[i]!=0;i++){
    printf("%d\n",t[i]);
  }
  return 0;
}
    