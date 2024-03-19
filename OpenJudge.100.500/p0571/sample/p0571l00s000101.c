#include<stdio.h>
main(){
int N,A,B;
scanf("%d",&N);
scanf("%d",&A);
scanf("%d",&B);
if( A*N < B ){
printf("%d",A*N);
}else{
printf("%d",B);
}

}