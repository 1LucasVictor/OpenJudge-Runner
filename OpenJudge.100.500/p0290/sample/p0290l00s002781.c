#include<stdio.h>
#include<math.h>
 
int main(int argc, char* argv[])
{
  int n, x, p;
  int i, j, sq, f;
 
  scanf("%d", &n);
  p = 0;
  for(i = 0; i < n; i++){
    scanf("%d", &x);
	if(0 < (x % 2)){
      sq = (int)sqrt((double)x);
	  f = 1;
      for(j = 3; j <= sq; j += 2){
       if(0 == (x % j)){
		 f = 0;
         break;
       }
     }
     if(f==1){
       p++;
     }
	}else if(2 == x){
	  p++;
	}
  }
  printf("%d\n", p);

  return(0);
}