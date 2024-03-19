#include<stdio.h>
int main(){
  int x,y,i,v,temp,max=0,yakusuu=1,flag=0;
  scanf("%d%d",&x,&y);
  if(x<=y){temp=y; y=x; x=temp;}
   v=x%y;
   if(x==y){max=x;flag=1;}
   if(flag==0){
  for(i=1;i<=v;i++){
    if(v%i==0){
      yakusuu=i;
      if(y%yakusuu==0){ if(yakusuu>max)max=yakusuu; }
    }
  }
   }
    printf("%d\n",max);
    return 0;
}
     
  

