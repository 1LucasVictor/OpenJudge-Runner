#include <stdio.h>
int main(){
 int X;
 int sum=0;
 scanf("%d",&X);
 sum+=(X/500)*1000;
 sum+=(X-(X/500)*500)/5*5;
 printf("%d",sum);
 return 0;
}