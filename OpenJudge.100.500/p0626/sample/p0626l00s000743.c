#include<stdio.h>
int main(){
int D;
int N;
scanf("%d %d",&D,&N);
int A=1;
for(int i=0;i<D;i++)A*=100;
if(N<=99){printf("%d",A*N);
}else{printf("%d",A*101);}
}