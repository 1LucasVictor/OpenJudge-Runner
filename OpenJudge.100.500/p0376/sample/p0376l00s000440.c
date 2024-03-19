#include<stdio.h>
int main(){
int a,b;
int c[101];
scanf("%d\n",&a);
for(b=0;a>b;b++){
scanf("%d",&c[b]);
}
b=b-1;
while(b>=0){
if(b!=0){
printf("%d ",c[b]);
b=b-1;
}
else{
printf("%d",c[b]);
b=b-1;
}
}
printf("\n");
return 0;
}

