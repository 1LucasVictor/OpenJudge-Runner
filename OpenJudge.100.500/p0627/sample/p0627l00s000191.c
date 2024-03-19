#include <stdio.h>
int large(int a,int b){
int c;
if(a<b){
    return b;
}
else {
    return a;
}
}
int main(){
 int x,y,a,s,m,l1,l2;
 scanf("%d %d",&x,&y);
 a=x+y;
 s=x-y;
 m=x*y;
 l1=large(a,s);
 l2=large(l1,m);
 printf("%d\n",l2);
return 0;

}

