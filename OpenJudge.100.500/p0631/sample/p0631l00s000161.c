#include<stdio.h>
int main(){
 int a,b,c;
scanf ("%d%d%d",&a,&b,&c);
if (c<a || c>a+b){
printf ("NO");
}
 else{
 printf ("YES");
 }
return 0;
}
