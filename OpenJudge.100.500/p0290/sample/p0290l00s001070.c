#include<stdio.h>

int main(void){

int a[10000],i,k,n;
int b[10000]={0},ans=0;

scanf("%d",&n);

for(i=0;i<n;i++){
scanf("%d",&a[i]);

for(k=2;k<a[i];k++){
 if(a[i]%k==0)
  break;
 else 
 b[i]++;
}

if(b[i]==a[i]-2)
ans++;
}

printf("%d\n",ans);

}


 

