#include<stdio.h>
int main()
{
int a,b,i,f=0;
scanf("%d",&a);
for(i=1;i<10;i++){
b=a/i;
if(b<10 && (b*i)==a){
f=1;
}
}
if(f==1){
printf("Yes\n");
} else{
printf("No\n");
}
return 0;
}