#include<stdio.h>
int main(){
int a[100000];
int b,i=0;
while(scanf("%d\n",&b)!=EOF){
if(b==0){
i--;
printf("%d\n",a[i]);
}
else{
a[i]=b;
i++;
}
}
return 0;
}

