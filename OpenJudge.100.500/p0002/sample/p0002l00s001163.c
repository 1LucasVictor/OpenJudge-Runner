#include<stdio.h>
int main(){
int a,b,c,N,i;
scanf("%d",&N);
for(i=0;i<N;i++){
scanf("%d %d %d",&a,&b,&c);
if((a*a+b*b==c*c)||(a*a+c*c==b*b)||(b*b+c*c==a*a)){
printf("YES");
}else{
printf("NO");
}
}
return 0;
}