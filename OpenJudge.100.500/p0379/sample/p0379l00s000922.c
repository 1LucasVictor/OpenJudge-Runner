#include<stdio.h>
int main(){
int a,c,d,e,f=0,g;
int b[10000],A[100][100];
scanf("%d %d",&a,&c);
for(d=0;d<a;d++){
for(e=0;e<c;e++){
scanf("%d",&A[d][e]);
}
}
for(d=0;d<c;d++)
scanf("%d",&b[d]);

for(d=0;d<a;d++){
for(e=0;e<c;e++){
f+=A[d][e]*b[e];
}
printf("%d\n",f);
f=0;
}
return 0;
}