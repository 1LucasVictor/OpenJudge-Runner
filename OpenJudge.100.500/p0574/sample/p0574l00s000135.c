#include<stdio.h>
#include<math.h>
int main (void){
int S,i,s[5];
scanf("%d",&S);
for(i=0;i<4;i++){
s[i]=S%10;
S=(int)S/10;
}
if(s[0]==s[1]||s[1]==s[2]||s[2]==s[3]){
printf("Bad");
}else{
printf("Good");
}
return 0;

}