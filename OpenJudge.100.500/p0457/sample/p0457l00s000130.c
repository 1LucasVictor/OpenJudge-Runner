#include<stdio.h>
int main()
{
      long long int n,m,k;
      scanf("%lld%lld%lld",&n,&m,&k);
      long long int a[n],b[m],i,d[3]={0},x=0;
      for(i=0;i<n;i++){
            scanf("%lld",&a[i]);
      }
      for(i=0;i<m;i++){
            scanf("%lld",&b[i]);
      }
      for(i=0;i<n;i++){
            x+=a[i];
            if(x<=k) d[0]++;
            else break;
      }
      if(x<k && i==n-1){
            for(i=0;i<m;i++){
                  x+=b[i];
                  if(x<=k) d[0]++;
                  else break;
            }
      }
      x=0;
      for(i=0;i<m;i++){
            x+=b[i];
          ///  printf("%lld ",x);
            if(x<=k) d[1]++;
            else break;
      }
      ///printf("\n");
      if(x<k && i==m-1){
            for(i=0;i<n;i++){
                  x+=a[i];
                  ///printf("%lld ",x);
                  if(x<=k) d[1]++;
                  else break;
            }
      }
      ///printf("\n");
      long long int sum=0;
      long long int  j,c;
      for(i=0,j=0,c=1;c<=(n+m);c++){
            if(j==m){
                  if(k>=a[i]) k=k-a[i];
                  else break;
                  i++;
                  sum++;
            }
            else if(i==n){
                  if(k>=b[j]) k=k-b[j];
                  else break;
                  j++;
                  sum++;
            }
            else if(a[i]<b[j]){
                  if(k>=a[i]) k=k-a[i];
                  else break;
                  i++;
                  sum++;
            }
            else if(a[i]==b[j]){
                  if(a[i+1]<b[j+1]){
                        if(k>=a[i]) k=k-a[i];
                        else break;
                        i++;
                        sum++;
                  }
                  else{
                        if(k>=b[j]) k=k-b[j];
                        else break;
                        j++;
                        sum++;
                  }
            }
            else{
                  if(k>=b[j]) k=k-b[j];
                  else break;
                  j++;
                  sum++;
            }
            ///printf("%d %d %d %d\n",i,j,sum,k);
      }
      d[2]=sum;
      long long int min=d[0];
     /* for(i=0;i<3;i++){
            printf("%lld ",d[i]);
      }
      printf("\n");*/
      for(i=1;i<3;i++){
            if(d[i]>min) min=d[i];
      }

      printf("%lld\n",min);

      return 0;
}
