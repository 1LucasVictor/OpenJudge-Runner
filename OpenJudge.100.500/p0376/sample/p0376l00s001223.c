#include<stdio.h>

int main(void){

int a;
int n[1000];

scanf("%d",&a);
for(int i = 1; i <= a; i++){
scanf("%d",&n[i]);
}

for(int i = a; i >= 2; i--){
printf("%d ",n[i]);
}
printf("%d\n",n[1]);

return 0;
}
