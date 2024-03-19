#include <stdio.h>

int main(void){
char op;
int a,b;
//cin >> 1 >> 2 >> 3;
while(1){
scanf("%d %c %d",&a,&op,&b);
if(op=='?')break;
if(op=='+'){
printf("%d\n",a+b);
}else if(op=='-'){
printf("%d\n",a-b);
}else if(op=='*'){
printf("%d\n",a*b);
}else{
printf("%d\n",a/b); 
}
}
}



