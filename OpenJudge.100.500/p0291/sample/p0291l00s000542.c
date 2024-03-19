#include <stdio.h>
int main(){
int r,n[2000],max,new,i,d,c;
scanf("%d\n",&r);
max=-1000000;
for (i=1;i<=r;i++){scanf("%d\n",&n[i]);};
for (d=r;d>1;d--){
for (c=1;c<=r;c++){new=n[d]-n[c];
if (new>max){max=new;};};};
printf("%d\n",max);
return 0;
}