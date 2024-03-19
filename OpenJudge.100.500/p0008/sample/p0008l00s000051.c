#include <stdio.h> 
int main(void) 
{ 
  int n ,i, j; 
  while(scanf("%d",&n)!=EOF){
  int count=0;
  int flag;
  for( i=2;i<=n;++i ) { 
    flag = 0; 
    for( j=2;j<i;++j ){ 
      if( i%j==0 ) { 
        flag = 1; 
        break; 
      } 
    } 
    if( flag==0 ) 
      count++; 
  } 
  printf("%d\n",count);
}
  return 0; 
} 

