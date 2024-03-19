#include <stdio.h>

int main(int argc,char* argv[]){
  int furui[1000000];
  int f,tmp;
  int n,count;

  for(tmp = 0;tmp < 1000000;++tmp){
    furui[tmp] = 1; 
  }
  furui[0] = furui[1] = 0;
  
  for(f = 2;f <= 100; ++f){
    if(furui[f] == 0){continue;}
    for(tmp = 0;tmp < 1000000;++tmp){
      if(furui[tmp] == 0){continue;}
      if(tmp%f == 0 && tmp!= f){
	furui[tmp] = 0;
      }
    }
  }
  
  while(scanf("%d",&n) != EOF){
    count = 0;
    for(tmp = 0;tmp <= n;++tmp){
      if(furui[tmp] == 1){++count;}
    }
    
    printf("%d\n",count);
  }
  
  return 0;
}