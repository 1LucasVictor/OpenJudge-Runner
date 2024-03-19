#include<stdio.h>

int main(){
  int a,b,c,sum;
  scanf("%d %d %d",&a,&b,&c);
  sum=a+b+c;
  
  if(sum!=17)
    printf("NO");
  else{
    if(a==7 || b==7 || c==7){
      if((a==5 && b==5) || (a==5 && c==5) || (b==5 && c==5)){
        printf("YES");
      }
      else{
        printf("NO");
      }
    }
    else{
      printf("NO");
    }
  }
  return 0;
}