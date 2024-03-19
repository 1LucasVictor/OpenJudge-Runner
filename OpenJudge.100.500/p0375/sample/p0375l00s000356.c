#include <stdio.h>
int main (void){
    int i=1;
    int n;
    int x;
    int z;
    int f;
    int k;
    int o;
    int p;
    scanf("%d",&n);
    for (i=1; i<=n; i++){
        x=i;
        if(x%3==0){printf(" %d",x);}
        else while(1){
            z=i;
            f=z%10;
            if(f==3){printf(" %d",z); break;}
            k=f%10;
            if(k==3){printf(" %d",z); break;}
            o=k%10;
            if(o==3){printf(" %d",z); break;}
            p=o%10;
            if(p==3){printf(" %d",z); break;}
            break;


        }
      }printf("\n");
return 0;
    }