#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUFMAX 200000

int main(){
  int n,a,b,c,d; 
  int i,flag;
  //n:number of grid
  //a:initial pos of A
  //b:initial pos of B
  //c:goal pos of A
  //d:goal pos of B
  char str[BUFMAX];
  scanf("%d %d %d %d %d",&n,&a,&b,&c,&d);
  scanf("%s",str);
  //printf("%d %d %d %d %d\n",n,a,b,c,d);
  //printf("%s\n",str);
  flag = 0;
  if(a<b && c>d){
    str[d-1] = '#';
  }else if(a>b && c<d){
    str[c-1] = '#';
  }
  for(i=1;i<n;++i){
    if(str[i-1] == '#' && str[i] == '#'){
      flag = 1;
      break;
    }
  }
  if(a<b){
    i=b;
  }else{
    i=a;
  }
  for(i=2;i<n;++i){
    if(str[i-2] == '.' && str[i-1] == '.' &&str[i] == '.'){
      flag = 0;
      break;
    }
  }
  flag == 0 ? printf("Yes\n") : printf("No\n");
  return 0;
}