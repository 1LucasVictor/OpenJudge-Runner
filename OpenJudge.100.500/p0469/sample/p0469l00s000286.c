#include <stdio.h>
int main(){
int k,a,b,i,c=0;
scanf("%d",&k);
scanf("%d%d",&a,&b);

  for(i=a;i<=b;i++){
    if(i%k==0){
       c=1;
    }
  }
if(c==1){
    printf("OK");
}
else{
    printf("NG");
}
return 0;
}