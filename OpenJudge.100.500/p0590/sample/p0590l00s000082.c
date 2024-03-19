#include<stdio.h>
int main(){
  int a,b,c,d,e,k;
  scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&k);
  if(e - a > k ){
    printf(":(");
  }else if(d-a > k){
     printf(":(");
  }else if(c-a > k){
     printf(":(");
  }else if(b-a > k){
     printf(":(");
  }else if(c-b > k){
     printf(":(");
  }else if(d-b > k){
     printf(":(");
  }else if(e-b > k){
     printf(":(");
  }else if(d-c > k){
     printf(":(");
  }else if(e-c > k){
     printf(":(");
  }else if(e-d > k){
     printf(":(");
  }else{
    printf("Yay!");
  }
}