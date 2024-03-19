#include<stdio.h>
#define MAX 100001

int maximum(int a,int b){
 if(a>b)return a;
return b;
}

/*xは容量 kは台数*/
int check(int x,int W[],int n,int k){
int i,j,temp;
int cnt=0;
i=0;

while(1){
j=i;
temp=0;

 for(i=j;i<n;i++){
  temp+=W[i];
  if(temp>x){
   cnt++;
   break;
  }
 }
 if(i==n-1&&W[i]<=x)cnt++;
 if(cnt>k)break;
 if(cnt==k&&i==n-1)return 1;

}


return 0;


}



int main(){
int n,i,k;
int W[MAX];
int sum=0;
int large=-1;

scanf("%d %d",&n,&k);

for(i=0;i<n;i++){
 scanf("%d",&W[i]);
 sum+=W[i];
 large=maximum(large,W[i]);
}

large=maximum(large,sum/k);


for(i=large;i<=sum;i++){

if(check(i,W,n,k)==1)break;

}/*for end*/

printf("%d\n",i);

return 0;
}
