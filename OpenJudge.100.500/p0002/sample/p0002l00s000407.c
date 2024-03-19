#include<stdio.h>

int max(int a,int b,int c){
  int max;
  if(a>b){
    if(a>c) max=a;
    else max=c;
  }
  else if(b>c) max=b;
  else max=c;
  return max;
}

int main(void){
  int i,n,a,b,c;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d %d %d\n",&a,&b,&c);
    if(max(a,b,c)==a){
      if(a*a==b*b+c*c) printf("YES\n");
      else printf("NO\n");
    }
    else if(max(a,b,c)==b){
      if(b*b==a*a+c*c) printf("YES\n");
      else printf("NO\n");
    }
    else{
      if(c*c==a*a+b*b) printf("YES\n");
      else printf("NO\n");
    }
  }
  return 0;
}
