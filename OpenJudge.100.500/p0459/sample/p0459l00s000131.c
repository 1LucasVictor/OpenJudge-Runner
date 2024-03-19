#include<stdio.h>
int main(){
int x=0;
int y=0;
int fl=0;

scanf("%d %d",&x,&y);

if(y%2==1){

printf("No\n");

}else if(4*x<y){

printf("No\n");

}else if(2*x>y){

printf("No\n");

}else{

printf("Yes\n");

}
return 0;

}