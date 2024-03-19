#include <stdio.h>
int main (void){
char a[100];
int b=0;
for(int  i=0;i<4;i++){
    scanf("%s",&a[i]);
if(a[i]==a[i+1]){
    b=1;
}
}
printf("%s",(b==1)?"Bad":"Good");
}
