#include<stdio.h>
int main(void){
char m;
while(1){
scanf("%c",&m);
if(m=='\n')break;
if(m>='A'&&m<='Z')m+=0x20;
else if(m>='a'&&m<='z')m-=0x20;
printf("%c",m);
}
printf("\n");
return 0;
}
