#include<stdio.h>
int main(){ int n;
scanf("%d",&n);
for(int a=1;a<=9;a++)for(int b=1;b<=9;b++){ if(a*b==n){
 puts("Yes");
 return 0;
}
 }
 puts("No");
 }
