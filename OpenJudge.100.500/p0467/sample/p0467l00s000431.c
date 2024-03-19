#include<stdio.h>
int main(){
int a,b,c,k;
scanf("%d%d%d%d", &a, &b, &c, &k);
  
  if(a>=k){
    printf("%d\n",k);
    return 0;
  }
  else{
    if(a+b>=k){
      printf("%d\n",a);
      return 0;
    }
    else{
      printf("%d\n",a-(k-a-b));
    return 0;
    }
  }

}
