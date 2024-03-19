#include<stdio.h>
#include<string.h>
int main(void){
int n,h,m;
char mozi[200],cmozi[200],hmozi[200];
while(1){
scanf("%s",mozi);
if(mozi[0]=='-')break;
n=strlen(mozi);
scanf("%d",&m);
for(int a=0;a<m;a++){
scanf("%d",&h);
strncpy(cmozi,mozi,h);
cmozi[h]='\0';
for(int b=h,c=0;b<=n;b++,c++)hmozi[c]=mozi[b];
strcat(hmozi,cmozi);
strcpy(mozi,hmozi);
}
printf("%s\n",mozi);
}
return 0;
}
