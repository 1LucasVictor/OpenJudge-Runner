#include<stdio.h>
int main(void){
int k,a,b;
int tf=0;
scanf("%d",&k);
scanf("%d %d",&a,&b);
if(scanf("%d",&k)!=0 && scanf("%d %d",&a,&b)!=0){
    for(int i=0;k*i<b;i++){
      if((a<k*i)&&(k+i<b)){
        tf=1;
        break;
      }
    }
    if(tf==0){
    printf("NG");
    }else{
    printf("OK");
    }
}
return 0;
}