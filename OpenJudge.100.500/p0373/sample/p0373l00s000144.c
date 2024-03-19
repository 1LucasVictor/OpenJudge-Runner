#include<stdio.h>
int main(void){

int a,b,i,n;

while(1){
scanf("%d %d",&a,&b);
if(a == 0 && b== 0)break;
for(i = 1;i <=　a;i++){
for(n=1;n<=b;n++){
if(1<i && i<a && n<b && 1<n )
    printf(".");
else printf("#");
}
    printf("\n");
}
  printf("\n");
}
return 0;
}

