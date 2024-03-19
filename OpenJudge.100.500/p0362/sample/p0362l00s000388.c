#include <stdio.h>

int main(){
 int a,b,c =0;
 scanf("%d %d %d",&a,&b,&c);
 if(b-a>0 && c-b>0){
     printf("Yes\n");
 }else{
     printf("No\n");
 }
 return 0;
}