#include <stdio.h>
#include <string.h>
int main(){
int i;
char a[100];
char b[100];
fgets(a,sizeof(a),stdin);
fgets(b,sizeof(b),stdin);
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
