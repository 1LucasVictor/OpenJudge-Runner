#include <stdio.h>
#include <string.h>
int main(){
int i;
char a[100];
char b[100];
if(fgets(a,sizeof(a),stdin)==NULL){
a[0]='\0';
}
if(fgets(b,sizeof(b),stdin)==NULL){
b[0]='\0';
}
for(i=0;i<strlen(a);i++){
a[i]==b[i];
}
if(i==strlen(a)){
printf("Yes");
}
else{
printf("No");
}
}
