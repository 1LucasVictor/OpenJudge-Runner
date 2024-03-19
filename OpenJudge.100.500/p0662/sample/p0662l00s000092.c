#include <stdio.h>
int main(){
  int a,b,c,d;
  scanf("%d%d%d%d",&a,&b,&c,&d);
  if(c>=a&&c<=b&&d>=b){
      printf("%d",b-c);
  }
  else if(d>=a&&d<=b&&c<=a){
      printf("%d",d-a);
  }
  else if(a<c&&b>=c&&b<=d){
      printf("%d",b-c);
  }
  else if(b>=d&&a>=c&&a<=d){
      printf("%d",d-a);
  }
  else if(a<=c&&a<=d&&b>=c&&b>=d){
      printf("%d",d-c);
  }
  else if(c<=a&&c<=b&&d>=a&&d>=b){
      printf("%d",b-a);
  }
  else printf("0");    
  return 0;
}