#include<stdio.h>
int main(){
int a,b,c;
  scanf("%d %d %d",&a,&b,&c);
  if(a==5){
    if(b==5){
      if(c==7){
      printf("YES\n");
        }
      }
    }
  if(a==5){
    if(c==5){
      if(b==7){
      printf("YES\n");
        }
      }
    }
  if(b==5){
    if(c==5){
      if(a==7){
      printf("YES\n");
        }
      }
    }
  else if(a,b,c<5,a,b,c>7)
    printf("NO\n");
  
  return 0;
     


}