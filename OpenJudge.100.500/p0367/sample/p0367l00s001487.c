#include<stdio.h>
 
int main(void){
 
int a,b,c,x;
x = 0;
scanf("%d %d %d",&a,&b,&c);
 
if(a == b){

printf("%d",x);

}else{

while(a < b){
 
if(c%a == 0){
x++;
}
 
a++;
 
}
} 
printf("%d\n",x);
 
return 0;
 
}