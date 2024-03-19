#include<stdio.h>
int main(void){
int i,a,b,c;
while (scanf("%d %d", &a, &b) != EOF){
c=a+b;
for(i=1;c>=10;i++){
c=c/10;
}
printf("%d\n",i);
}
return(0);
}