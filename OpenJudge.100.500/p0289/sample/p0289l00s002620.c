#include <stdio.h>
int gcd(int,int);
int gcd(int x,int y){
  int d;
    
    d=x%y;
    while(d!=0){
        x=y;
        y=d;
        d=x%y;
      
    }
    return y;
}
int main(){
    int x,y,z;
    scanf("%d%d",&x,&y);
    if(x>y){
    z=gcd(x,y);
    }else{
      z=gcd(y,x);
    }
    printf("%d\n",z);
    return 0;
}
