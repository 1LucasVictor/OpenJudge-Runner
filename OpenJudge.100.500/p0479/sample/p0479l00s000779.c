#include<stdio.h>

#include<string.h>

#include<math.h>

int main(){

long long m;

scanf("%lld ",&m);



int a[m],c[m];
int b;
for(b=0;b<m;b++){

 scanf("%d",&a[b]);
 c[b]=0;

 }


int x,y;
for(x=0;x<m;x++){
 for(y=0;y<m;y++){
  if(a[x]==y+1){c[y]++;break;}
}
}

for(b=0;b<m;b++)
 printf("%d\n",c[b]);

return 0;}