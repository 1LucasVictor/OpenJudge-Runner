#include <stdio.h>
int main(){
  int a,b,c;
  scanf("%d%d%d",&a,&b,&c);
  int five = 0,seven = 0;
  switch (a) {
    case 5:five++; break;
    case 7:seven++; break;
    default : break;
  }
  switch (b) {
    case 5:five++; break;
    case 7:seven++; break;
    default : break;
  }
  switch (c) {
    case 5:five++; break;
    case 7:seven++; break;
    default : break;
  }
  if(five == 2 && seven == 1){
    printf("YES");
  }
  else{
    printf("NO");
  }
  return 0;
}