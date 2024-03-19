#include <stdio.h>
int main(){
 int K,A,B;
 int flag=0;
 scanf("%d",&K);
 scanf("%d %d",&A,&B);
 for(int i=A;i<=B;i++){
 if(i%K==0)flag=1;
 }
 if(flag==1)printf("OK");
  else printf("NG");
 return 0;
}