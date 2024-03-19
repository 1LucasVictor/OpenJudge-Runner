#include<stdio.h>
int main(){
  int i,a,b,c;
  int max=0;
  int min=10000;
  int box=0;
  scanf("%d %d %d",&a,&b,&c);
  for(i=0;i<2;i++){
    if(max<a){
      max=a;
    }
    if(a<min){
      min=a;
    }
    if(min<a&&a<max){
      box=a;
    }
    if(max<b){
      max=b;
    }
    if(b<min){
      min=b;
    }
    if(min<b&&b<max){
      box=b;
    }
    if(max<c){
      max=c;
    }
    if(c<min){
      min=c;
    }
    if(min<c&&c<max){
      box=c;
    }
  }
  printf("%d",min);
  printf(" %d",box);
  printf(" %d\n",max);
  return(0);
}