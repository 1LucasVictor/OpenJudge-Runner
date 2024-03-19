#include<stdio.h>
int main(){
int k,a,b,c,d,e,f,g,h,i,j;
scanf("%d",&a);
for(k=0;k<a;k++){
scanf("%d",&b);
scanf("%d",&c);
scanf("%d",&d);
if((b*b+c*c)/d/d==1||(d*d+c*c)/b/b==1||(d*d+b*b)/c/c==1)
printf("YES\n");
else
printf("NO\n");
}
return 0;
}