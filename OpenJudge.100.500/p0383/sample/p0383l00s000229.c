#include <stdio.h>
#define mx 101
int main()
{
   int arows, acolumns,brows,bcolumns;
    long long int a[mx][mx],b[mx][mx];
    long long int prod[mx][mx];
    int i,j,k;
    long long int sum=0;
scanf("%d%d%d",&arows,&acolumns,&bcolumns);
for (i=0;i<arows;i++){
    for (j=0;j<acolumns;j++){
        scanf("%lld",&a[i][j]);
    }
}


for (i=0;i<acolumns;i++){
    for (j=0;j<bcolumns;j++){
        scanf("%lld",&b[i][j]);
    }
}


for(i=0;i<arows;i++){
        for(j=0;j<bcolumns;j++){
                for(k=0;k<acolumns;k++){
                    sum+=a[i][k]*b[k][j];
                } prod[i][j]=sum;
                sum=0;

        }
}

  for(i=0;i<arows;i++){
            for(j=0;j<bcolumns;j++){
                    printf("%lld",prod[i][j]);
                    if(j+1 == bcolumns)
        printf("\n");
      else
        printf(" ");
            }
    }




return 0;}

