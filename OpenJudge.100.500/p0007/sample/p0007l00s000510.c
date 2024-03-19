#include<stdio.h>

int main(){
  int a,b,c,d;
  int count,n;

  while(scanf("%d",&n) != EOF){
    if(n>36){
      printf("0\n");
    }
    else{
      count = 0;
      for(a=0;a<10;a++){
        if (a>n){
          break;
        }
        else{
          for(b=0;b<10;b++){
            if (a+b>n){
              break;
            }
            else{
              for(c=0;c<10;c++){
                if (a+b+c>n){
                  break;
                }
                else{
                  for(d=0;d<10;d++){
                    if (a+b+c+d>n){
                      break;
                    }
                    else if (a+b+c+d==n){
                      count++;
                    }
                  }
                }
              }
            }
          }
        }
      }
      printf("%d\n",count);
    }
  }

  return 0;
}
