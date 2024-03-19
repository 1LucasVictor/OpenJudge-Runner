#include <stdio.h>
#include <stdlib.h>

int main(){
int a,b,c;
scanf("%d%d%d",&a,&b,&c);
int d;
d=c-b;

if(d<=0) puts("delicious");
else
if(d>0){
if(a>abs(d))
puts("safe");
else
puts("dangerous");
}


return 0;
}
