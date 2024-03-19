#include<stdio.h>
#include<string.h>
int main(void){
int l,i,n,k,sum=0;
char a[110];
while(1){
scanf("%s",a);
l=strlen(a);
if(a[0]=='-'){break;}
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%d",&k);
sum+=k;
}
for(i=0;i<l;i++){
printf("%c",a[(sum+i)%l]);
}
printf("\n");
sum=0;
}
return 0;
}