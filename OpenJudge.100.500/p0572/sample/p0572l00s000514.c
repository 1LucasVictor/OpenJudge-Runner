#include <stdio.h>
int main(){
int temp,L,R;
scanf("%d%d",&L,&R);
  temp = L%2019;
  if(R-L > 2019){
    printf("0");
  }
  else if(temp+R-L >= 2019){
    printf("0");
  }
  else{
    printf("%d",(L%2019)*(L%2019+1));
  }
return 0;
}