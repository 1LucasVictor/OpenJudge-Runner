#include<stdio.h>
int main()
{
      int n,m,k;
      scanf("%d%d%d",&n,&m,&k);
      int a[n],b[m],i;
      for(i=0;i<n;i++){
            scanf("%d",&a[i]);
      }
      for(i=0;i<m;i++){
            scanf("%d",&b[i]);
      }
      long long int sum=0;
      int j,c;
     /* if(n>m)
      {
            for(i=0,j=0;i<n; ){
                  if(j==m){
                        k=k-a[i];
                        if(k<0) break;
                        i++;
                        sum++;
                  }
                  else if(a[i]<=b[j]){
                        k=k-a[i];
                        if(k<0) break;
                        i++;
                        sum++;
                  }
                  else{
                        k=k-b[j];
                        if(k<0) break;
                        j++;
                        sum++;
                  }
            }
      }*/
      ///else if(n==m){
            for(i=0,j=0,c=1;c<=(n+m);c++){
                  if(j==m){
                        k=k-a[i];
                        if(k<0) break;
                        i++;
                        sum++;
                  }
                  else if(i==n){
                        k=k-b[j];
                        if(k<0) break;
                        j++;
                        sum++;
                  }
                  else if(a[i]<=b[j]){
                        k=k-a[i];
                        if(k<0) break;
                        i++;
                        sum++;
                  }
                  else{
                        k=k-b[j];
                        if(k<0) break;
                        j++;
                        sum++;
                  }
                  ///printf("%d %d %d %d\n",i,j,sum,k);
            }
     /// }
    /*  else
      {
            for(i=0,j=0;j<m; ){
                  if(i==n){
                        k=k-b[j];
                        if(k<0) break;
                        j++;
                        sum++;
                  }
                  else if(a[i]<=b[j]){
                        k=k-a[i];
                        if(k<0) break;
                        i++;
                        sum++;
                  }
                  else{
                        k=k-b[j];
                        if(k<0) break;
                        j++;
                        sum++;
                  }
                  ///printf("%d %d %d %d\n",i,j,sum,k);
            }

      }*/
      printf("%lld\n",sum);


      return 0;
}
