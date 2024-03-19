#include <stdio.h>

int main(){
   int l,r,i,j,m;
    
   scanf("%d %d",&l,&r);
   i=l/2019;
   if (l==0 || l%2019==0 || r>=(i+1)*2019)
      puts("0");
   else {
      m=2019;
      for (i=l;i<r;i++)
         for (j=i+1;j<=r;j++)
            if (((i%2019)*(j%2019))%2019<m) m=((i%2019)*(j%2019))%2019;
      printf("%d\n",m);
   }
   return 0;
}
