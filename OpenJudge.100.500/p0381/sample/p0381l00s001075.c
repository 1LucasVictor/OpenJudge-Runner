#include<stdio.h>
int main(){
 int i,j,k,l,m;
 int n[1000],x[1000];
 int sum;
 int num[1000];

 for(i=0;i<=1000;i++){
  scanf("%d %d",&n[i],&x[i]);
  if(n[i]==0 && x[i]==0){
   l=i;
   break;
  }
 }

for(m=0;m<l;m++){

 for(i=1;i<=n[m]-2;i++){

  for(j=i+1;j<=n[m]-1;j++){

   for(k=j+1;k<=n[m];k++){
    sum=0;
    sum+=i+j+k;
    if(sum==x[m]){
     num[m]+=1;
    }
   }
  
  }

 }
}

for(m=0;m<l;m++){
 printf("%d\n",num[m]);
}

return 0;
}