#include<stdio.h>
int main(){
  int a,b,c,n,N;
       scanf("%d",&N);
    for(n=1;n<=N;n++){

     scanf("%d %d %d",&a,&b,&c);

    if((a*a)+(b*b)==(c*c)){
      printf("YES\n");
    }
    else{
      printf("NO\n");
    }
    }
    return 0;
}