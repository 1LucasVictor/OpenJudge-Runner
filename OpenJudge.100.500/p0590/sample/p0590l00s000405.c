#include <stdio.h>
#include <stdlib.h>
int main (){
int a,b,c,d,e,k;
scanf ("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&k);
  k=k+1;
if (abs(a-b) < k && abs(a-c) < k && abs(a-d) < k  && abs(a-e) < k && abs(b-c) < k && abs(b-d) < k && abs(b-e) < k && abs(c-d) < k && abs(c-e) < k && abs(d-e) < k){
printf ("Yay!");
}
else{
printf (":(");
}
return 0;
}