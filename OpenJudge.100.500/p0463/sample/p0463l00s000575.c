#include<stdio.h>
int main()
{
int N, lastdig;
scanf("%d",&N);
lastdig=N%10;
if(lastdig==2||lastdig==4||lastdig==5||lastdig==7||lastdig==9){
printf("hon");}
else if(lastdig==0||lastdig==1||lastdig==6||lastdig==8){
printf("pon");}
else{
printf("bon");}
return 0;
}