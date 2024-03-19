#include<stdio.h>
int main(){
int x,y,z,i;
i=0;
scanf("%d",&i);
while(i!=0){
scanf("%d %d %d",&x,&y,&z);
z=z*z-y*y-x*x;
if(z==0){
printf("YES");
}
else{
printf("NO");
}
i=i-1;
}
return 0;
}