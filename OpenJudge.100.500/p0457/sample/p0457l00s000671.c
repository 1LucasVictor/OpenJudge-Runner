#include<stdio.h>
int main()
{
long long int n,m,k,i,l,j,ans;
ans=0;
i=0;
j=0;
scanf("%lld %lld %lld",&n,&m,&k); 

long long int a[n],b[m],sum;
sum=0;
 
 for(l=0;l<n;l++)
 {
 scanf("%lld",&a[l]);
 }

 for(l=0;l<m;l++)
 {
 scanf("%lld",&b[l]);
 }
  
  while(i<n || j<m || sum<k)
 { 
     if(a[i]<b[j] && sum+a[i]<=k){
       ans++;
       sum=sum+a[i];
       i++;
       
       }
  else if(a[i]>b[j] && sum+b[j]<=k){
       ans++;
        sum=sum+b[j];
       j++;
       }
  else if(a[i]==b[j] && sum+a[i]<=k && i<n-1 && j<n-1)
    {
    if(a[i+1]<b[i+1]){
      sum=sum+a[i];
      i++;
      ans++;
     }
    else {
     sum=sum+a[i];
     j++;
     ans++;
     }
    }
  
  else if(a[i]==b[j] && sum+a[i]<=k && i<n-1 && j==m-1)
  {
  sum=sum+a[i];
   i++;
   ans++;
  }
    
   else if(a[i]==b[j] && sum+a[i]<=k && j<m-1 && i==n-1)
  {
  sum=sum+a[j];
   j++;
   ans++;
  } 
  
  else{break;}
  }
  
if(i<n && j<n) printf("%lld",ans);
else if(i<n) {
  while(j<m && sum+b[j]<=k){
  sum=sum+b[j];
  ans++;
  j++;
  }
 printf("%lld",ans);
 }

else {
  while(i<n && sum+a[i]<=k){
  sum=sum+a[i];
  ans++;
  i++;
  }
  printf("%lld",ans);
 }

return 0;
}