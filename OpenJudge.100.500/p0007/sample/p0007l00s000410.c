#include <stdio.h>
int main(){
int a,b,c,d,x,y=0;
while(scanf ("%d\n",&x)!=EOF){
for (a=0;a<10;a++){
for (b=0;b<10;b++){
for (c=0;c<10;c++){
for (d=0;d<10;d++){
if (a+b+c+d==x){
y+=1;
}
}
}
}
}
printf ("%d\n",y);
y=0;
}
return 0;
}
