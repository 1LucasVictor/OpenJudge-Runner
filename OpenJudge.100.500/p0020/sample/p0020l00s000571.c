#include <stdio.h>

#define NPOINT 4
#define NVEC 2

int calc_gcd(int a, int b);

int main(){
   int n, i, j, gcd;
   double x[NPOINT], y[NPOINT];
   int vecx[NVEC], vecy[NVEC], orix[NVEC], oriy[NVEC];
   scanf("%d",&n);
   for(i=0;i<n;i++){
      scanf("%lf %lf %lf %lf %lf %lf %lf %lf",x,y,x+1,y+1,x+2,y+2,x+3,y+3);
      for(j=0;j<NVEC;j++){
         vecx[j]=100000*(x[2*j]-x[2*j+1]);
         vecy[j]=100000*(y[2*j]-y[2*j+1]);
         if(vecx[j]>0) orix[j]=1;
         else if(vecx[j]<0){ orix[j]=-1; vecx[j]=-vecx[j]; }
         else orix[j]=0;
         if(vecy[j]>0) oriy[j]=1;
         else if(vecy[j]<0){ oriy[j]=-1; vecy[j]=-vecy[j]; }
         else oriy[j]=0;
      }
// printf("(%d,%d) %+1d %+1d <=> (%d,%d) %+1d %+1d\n",vecx[0],vecy[0],orix[0],oriy[0],vecx[1],vecy[1],orix[1],oriy[1]);
      if(orix[0]!=orix[1]){ printf("NO\n"); continue; }
      if(oriy[0]!=oriy[1]){ printf("NO\n"); continue; }
      if(orix[0]==0){ printf("YES\n"); continue; }
      if(oriy[0]==0){ printf("YES\n"); continue; }
      for(j=0;j<NVEC;j++){
         gcd=calc_gcd(vecx[j],vecy[j]);
// printf("%d %d -> gcd=%d\n",vecx[j],vecy[j],gcd);
         vecx[j] /= gcd;
         vecy[j] /= gcd;
      }
      if(vecx[0]==vecx[1]&&vecy[0]==vecy[1]) printf("YES\n");
      else printf("NO\n");
   }
   return 0;
}

int calc_gcd(int a, int b){
   int tmp;
   if(a<b){ tmp=a; a=b; b=tmp; }
   if(b==0) return a;
   a=a%b;
   return calc_gcd(b,a);
}