#include <stdio.h>

long n, k;
long w[100000];
 
long check(long a){
    long ret=0,i,s;
    for(i=0; i<k; ++i){
        s=0;
        while(s+w[ret]<=a){
            s+=w[ret++];
            if(ret==n) return n;    
        }   
    }
    return ret;
}
 
 
int main(){
	long i;
    scanf(" %ld %ld", &n, &k);
    for(i=0; i<n; ++i) scanf(" %ld", &w[i]);
     
    long left=0, right=100000*10000;
    long p;
     
    while(right-left>1){
        p=(left+right)/2;   
        long v=check(p);
         
        if(v>=n) right=p;
        else left=p;
    }
     
    printf("%ld\n", right);
}