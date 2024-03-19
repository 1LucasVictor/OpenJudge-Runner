#include<stdio.h>
#include<string.h>
int main(){
char str[21],c;
int i,length;
scanf("%s",str);
length=strlen(str);
if(length%2==0){
for(i=0;i<length/2;i++){
c=str[i];
str[i]=str[length-i-1];
str[length-i-1]=c;
}
}else{
for(i=0;i<(int)length/2;i++){
c=str[i];
str[i]=str[length-i-1];
str[length-i-1]=c;
}
}
printf("%s\n",str);
return 0;
}