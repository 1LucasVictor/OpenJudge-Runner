#include <stdio.h>
  int main(){
 int a,b;
    while(scanf("%d%d",&a,&b) != EOF){
   int oa,ob;
     oa = a;
     ob = b;
     while(a%b != 0 && b%a != 0){
        if(a>b){
          while(a>b){
            a -= b;
              }
                }
               else if(b>a){
                while(b>a){
                     b -= a;
                     }
                         } 
}
int x;
if(a>b){
x = b;
}
else{
x = a;
}
int y= oa/x;
y *= ob;
printf("%d %d\n",x,y);
}
return 0;
}