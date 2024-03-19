#include<stdio.h>
int main(){
char a[21];
int i=0;
while(1){
scanf("%c",&a[i]);
if(a[i]=='\n'){
break;
}
else{
i++;
}
}
i=i-1;
for(;i>=0;i--){
printf("%c",a[i]);
}
printf("\n");
return 0;
}

