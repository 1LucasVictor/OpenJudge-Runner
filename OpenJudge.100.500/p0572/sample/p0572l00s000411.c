#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int compare(const void *a, const void *b){return *(long *)a - *(long *)b;}
int sqs(long a[],long n,long s){
    if(s==4){qsort(a,n,sizeof(long),compare);}
    return 0;
}


long mod(long a,long b){
    while(1){if(a<b) break;a%=b;}
    return a;
}
long comb(long a,long b){
    if(a==1) return 1;
    if(b==0 || b==a) return 1;
    return comb(a-1,b-1)+comb(a-1,b);}

int main(void){
    long l,r,i,j,c,ju;
    scanf("%ld%ld",&l,&r);
    //printf("%ld\n",l);
    if(r-l>=2019){
        printf("0\n");
        return 0;
    }
    if(l<=r/2019*2019){
        printf("0\n");
        return 0;
    }
    l=mod(l,2019);
    r=mod(r,2019);
    long by[2019],k=0;
    for(i=0;i<2019;i++){
        by[i]=10000;
    }
    for(i=0;i<r-l;i++){
        for(j=i+1;j<r-l+1;j++){
            ju=0;
            if(k>0){
                for(c=0;c<k;c++){
                    if(by[c]== mod((l+i)*(l+j),2019)){
                        ju=1;
                        break;
                    }
                }
            }
            if(ju==1) continue;
            by[k] = mod((l+i)*(l+j),2019);
            k++;
            if(k==2019) break;
        }
    }
    sqs(by,c,4);
    printf("%ld\n",by[0]);
    return 0;
}
