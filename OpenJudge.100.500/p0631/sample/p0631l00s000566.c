#include	<stdio.h>
void main(){
int a=0,b=0,c=0;
scanf("%d",&a);
scanf("%d",&b);
scanf( "%d",&c);
if(a+b>c){
if(a<c){
printf("YES");
}else{
printf("NO");
}
}else{printf("NO");}
}