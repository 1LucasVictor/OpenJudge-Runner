#include <stdio.h>

int main(){
long int a,b,aa,bb;
long int x,y,i;

while(scanf("%ld %ld",&a,&b) != EOF){
aa=a;
bb=b;
while((x=a%b)!=0){
a=b;
b=x;
}
y=aa*bb/b;
printf("%ld %ld\n",b,y);
}
return 0;
}