#include<stdio.h>

int main(){
  int n=0;
  int i=0;
  int a=0;
  int b=0;
  int c=0;
  int max=0;

  scanf("%d",&n);

  for(i=0;i<n;i++){
    scanf("%d %d %d",&a,&b,&c);
    max=a;
    if(max<b){
      max=b;
    }
    if(max<c){
      max=c;
    }

    if(max==a){
      if( (a*a) == ((b*b)+(c*c)) ){
	printf("YES\n");
      }
      else{
	printf("NO\n");
      }
    }
    else if(max==b){
     if( (b*b) == ((a*a)+(c*c)) ){
       printf("YES\n");
     }
      else{
	printf("NO\n");
      }
    }
    else{
      if( (c*c) == ((a*a)+(b*b)) ){
	printf("YES\n");
      }
      else{
	printf("NO\n");
      }
    }
  }

  return 0;

}