#include<stdio.h>

int main(){
int i,j,k,l,a,cnt;
while(scanf("\n%d",&a)!=EOF){
 cnt=0;
 for(i=0;i<10;i++){
 for(j=0;j<10;j++){
 for(k=0;k<10;k++){
 for(l=0;l<10;l++){

  if(i+j+k+l==a){
   cnt++;
  }
 }
 }
 }
 }
 printf("%d\n",cnt);
}
return 0;
}