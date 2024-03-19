#include <stdio.h>
int main (){
int a,b,c,d,e,k;
scanf ("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&k);
  k=k+1;
if ((a-b)<k && (a-c)<k && (a-d) < k  && (a-e) < k && (b-c) < k && (b-d) < k && (b-e) < k && (c-d) < k && (c-e) < k && (d-e) < k){
printf ("Yay!");
}
else{
printf (":(");
}
return 0;
}