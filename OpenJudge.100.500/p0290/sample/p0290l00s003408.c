#include<stdio.h>
#include<math.h>
int main(){
int n,num,kazu,i,j;
int A[10000];
double b;

scanf("%d",&n);

kazu=0;

for(i=0;i<n;i++){
 scanf("%d",&A[i]);
 num=0;
 b=sqrt(A[i]);

 for(j=1;j<=b;j++){
  if(A[i]%j==0){ num++;}
 }
 
 if(num==1){ kazu++;}

}


printf("%d\n",kazu);

return 0;
}