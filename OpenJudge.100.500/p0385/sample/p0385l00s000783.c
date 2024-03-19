#include<stdio.h>
int main(void){
char s[1001];
int i,sum;
scanf("%s",s);
while(s[0] != '0'){
i=0;
sum=0;
while(s[i]){
sum+=s[i]-'0';
i++;
}
printf("%d\n",sum);
scanf("%s",s);
}
return 0;
}