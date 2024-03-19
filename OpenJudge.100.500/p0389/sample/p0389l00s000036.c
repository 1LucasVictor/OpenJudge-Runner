#include<stdio.h>
#include<string.h>
int main(){
char moji[201],temp[201];
int m,i,n;
while(1){
scanf("%s",moji);
if(strcmp(moji,"-")==0) break;
scanf("%d",&m);
for(i=0;i<m;i++){
scanf("%d",&n);
strcpy(temp,&moji[n]);
strncat(temp,moji,n);
strcpy(moji,temp);
}
printf("%s\n",moji);
}
return 0;
}

