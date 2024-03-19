#include <stdio.h>
int main(){
int temp,i=1,L,R;
scanf("%d%d",&L,&R);
  if(R-L > 2019){
    printf("0");
    i = 0;
  }
  temp = L%2019;
  if((temp+R-L >= 2019)*i){
    printf("0");
    i = 0;
  }
  if(i){
    printf("%d",(L%2019)*(L%2019+1));
  }
return 0;
}