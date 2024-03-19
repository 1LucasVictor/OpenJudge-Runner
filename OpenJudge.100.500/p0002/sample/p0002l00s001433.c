#include <stdio.h>

int main(int argc,char* argv[]){
  int num;
  int a,b,c;
  int count = 0;
  int ans;

  scanf("%d",&num);

  for(;count < num;++count){
    scanf("%d %d %d",&a,&b,&c);

    
    ans = ((a*a == (b*b + c*c)) 
	   ? 1 
	   : ((b*b == (a*a + c*c)) 
	      ? 1 
	      : (((a*a + b*b) == c*c) 
		 ? 1 
		 : 0)));

    printf("%s\n",(ans == 1) ? "YES" : "NO");
  }

  return 0;
  
}