#include <stdio.h>
#include <math.h>
int main(){
int a,b,i=100000;
double d;
scanf ("%d",&a);
for (b=0;b<a;b++){
d=i;
d*=1.05;
i=d;
if (i%1000 > 0){
i=i/1000*1000;
i+=1000;
}
}
printf ("%d\n",i);
return 0;
}
