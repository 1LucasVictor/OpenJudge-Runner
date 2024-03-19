#include <stdio.h>
int main(void){
 int H,N;
 scanf("%d%d",&H,&N);
 float hp[N];
 for(int i=0;i<N;i++){
     scanf("%f", &hp[i]);
 }
 int sum = 0;
 for(int j=0;j<N;j++){
     sum += hp[j];
 }
 if (H<sum){
     printf("Yes\n");
 }
 else{
     printf("No\n");
 }
 return 0;
}
