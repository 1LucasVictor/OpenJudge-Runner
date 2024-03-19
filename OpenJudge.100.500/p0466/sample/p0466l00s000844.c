#include<stdio.h>
int main()
{
char s[12];
char t[12];
int i;
int flagone=1;
int flagtwo=0;


scanf("%s",s);
scanf("%s",t);

for(i=0;s[i]!='\0';i++){
if(s[i]!=t[i]){flagone=0;break;}
}

if(flagone==1){
if(t[i]!='\0'){flagtwo=1;}
}

if(flagtwo==1){
printf("Yes");
}else{
printf("No");
}

return 0;
}