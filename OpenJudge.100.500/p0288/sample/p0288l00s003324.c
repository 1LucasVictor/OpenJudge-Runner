#include<stdio.h>
int main(){
int i,j,k,n,v;
int a[1000];
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%d",&a[i]);
}
for(j=0;j<n;j++){
printf("%d ",a[j]);
}
printf("\n");
for(i=1;i<n;i++){
v=a[i];
j=i-1;
while(j>=0&&a[j]>v){
a[j+1]=a[j];
j--;
a[j+1]=v;
}
for(k=0;k<n;k++){
printf("%d ",a[k]);
}
printf("\n");
}
return 0;
}

