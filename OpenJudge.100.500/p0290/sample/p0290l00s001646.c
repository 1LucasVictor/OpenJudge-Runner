#include <stdio.h>

int main(){

int n[100000],count[100000],k,s,i,j;

for(i=0;i<100000;i++){
 count[i] = 0;
}


k=0;

scanf("%d\n",&s);

for(i=0;i<s;i++){
 scanf("%d\n",&n[i]);
}


for(i=0;i<s;i++){
 for(j=1;j<=n[i];j++){
   if(n[i]%j == 0){
    count[i] = count[i]+1;
    }
   }
 if(count[i]==2){
  k=k+1;
   }
}

printf("%d\n",k);

return 0;
}

