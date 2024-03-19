# include<stdio.h>
# include<string.h>
int main(){
char str[22];
while(scanf("%s",str)==1){
for(int i=strlen(str)-1;i>=0;i--)
printf("%c",str[i]);
puts("");
}
return 0;
}