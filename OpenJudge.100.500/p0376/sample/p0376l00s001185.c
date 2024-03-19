#include<stdio.h>
int main(void){
int i,j,n,a[100],b[100];
scanf("%d",&n);
for(i=0;i < n;i++){
scanf("%d",&a[i]);
}
for(j=0;j < n;j++){
b[j]=a[((n-1)-j)];
printf("%d",b[j]);
if (j != (n-1)){
printf(" ");
}
}
printf("\n");
return 0;
}