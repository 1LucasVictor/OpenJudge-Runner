#include <stdio.h>

int main(void){
	
int b,n;
int a[100]={0};
scanf("%d",&n);

for(b=1;b<=n;b++){
scanf("%d",&a[b]);
}

for(b=n;b>=1;b--){
printf("%d",a[b]);
if(!(b==1)){
printf(" ");
}
}
printf("\n");
return 0;
}