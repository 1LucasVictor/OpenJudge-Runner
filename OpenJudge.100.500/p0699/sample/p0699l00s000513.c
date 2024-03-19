#include<stdio.h>
int main(){
  int a, b, c;
  scanf("%d %d %d",&a,&b,&c);
  if(a==7){
    if(b==5&&c==5){printf("YES\n");}else{printf("NO\n");}
  }else if(b==7){
    if(a==5&&c==5){printf("YES\n");}else{printf("NO\n");}
  }else if(c==7){
    if(b==5&&a==5){printf("YES\n");}else{printf("NO\n");}
  }else{
    printf("NO\n");
  }
  return 0;  
}

