#include<stdio.h>
#define MAX 5001

int max(int a,int b){
 if(a >b)return a;
 return b;
}


int f(int a[],int n){
 int t=a[0]; int s=a[0];
 for(int k=1;k<n;k++){
     t=max(t+a[k],a[k]);
     s=max(s,t);
 }
 return s;
}

int main(){
 int n;
 int a[MAX];

 while(1){

       scanf("%d",&n);
       if(n==0)break;

       for(int i=0;i<n;i++)scanf("%d",&a[i]);

       printf("%d\n",f(a,n));

 }

return 0;
}
