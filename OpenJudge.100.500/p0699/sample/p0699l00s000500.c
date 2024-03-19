///  5 7 5 5 7 5 5 7 5
///  5 5 7 5 5 7          7 5 5 7 5 5
#include<stdio.h>

int main(){
  int a,b,c;
  int count;
  int format[7];
  scanf("%d%d%d",&a,&b,&c);
  for(int i = 0;i < 6;i++){
     if(i % 3 == 0)
        format[i] = a;
     else if(i % 3 == 1)
        format[i] = b;
     else format[i] = c;
  }
  count = 0;

  for(int i = 0;i < 6;i++){
    //printf("format[%d]:%d\n",i,format[i]);
    if(format[i] == 5&&format[i+1] == 7&&format[i+2] == 5){
        count = 1;
    }
  }
  if(count == 1)
    printf("YES\n");
  else
    printf("NO\n");

 return 0;
}
