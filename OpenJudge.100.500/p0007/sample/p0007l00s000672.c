#include<stdio.h>

int main(){
  int n;

  while(scanf("%d",&n)!=EOF){
    int a,b,c,d;
    int count=0;
    for (a=0;a<10;a++){
      for (b=0;b<10;b++){
	for (c=0;c<10;c++){
          for (d=0;d<10;d++){
            if ((a+b+c+d)==n){
              count+=1;
            }
          }
	}
      }
    }
    printf("%d\n",count);
  }


  return 0;
}