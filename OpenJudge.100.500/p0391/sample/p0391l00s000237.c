#include<stdio.h>
#include<string.h>
int main(void){
int q,a,b;
char str[1000],p[1000],mei[10],RL[]="replace",RV[]="reverse",PR[]="print",cp;
scanf("%s",str);
scanf("%d",&q);
for(int aa=0;aa<q;aa++){
scanf("%s",mei);
if(strcmp(mei,RL)==0){
scanf("%d %d %s",&a,&b,p);
for(int d=a,c=0;d<=b;d++,c++)str[d]=p[c];
}
if(strcmp(mei,RV)==0){
scanf("%d %d",&a,&b);
for(int d=0,c=0;d<(b-a+1)/2;d++,c++){
cp=str[a+c];
str[a+c]=str[b-c];
str[b-c]=cp;
}
}
if(strcmp(mei,PR)==0){
scanf("%d %d",&a,&b);
for(int d=a;d<=b;d++)printf("%c",str[d]);
printf("\n");
}
}
return 0;
}
