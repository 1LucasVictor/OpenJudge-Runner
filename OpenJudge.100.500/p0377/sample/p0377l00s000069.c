#include<stdio.h>
int main(){
    int S[13]={},H[13]={},C[13]={},D[13]={};
    int s[13]={},h[13]={},c[13]={},d[13]={};
    int i;
    int n,m;
    char a,b;
    
    scanf("%d",&n);
    for(i=0;i<n;i++){
        
            scanf("%c",&a);
        
        scanf("%c %d",&b,&m);
        if(b=='S'){
            S[m-1]=m;
        }
        else if(b=='H'){
            H[m-1]=m;
        }
        else if(b=='C'){
            C[m-1]=m;
        }
        else if(b=='D'){
            D[m-1]=m;
        }
    }
    
    int j=0,k=0,l=0;
    m=0;
    for(i=0;i<13;i++){
        if(S[i]!=i+1){
            s[j]=i+1;
            j++;
        }
         if(H[i]!=i+1){
            h[k]=i+1;
            k++;
        }
         if(C[i]!=i+1){
            c[l]=i+1;
            l++;
        }
         if(D[i]!=i+1){
            d[m]=i+1;
            m++;
        }
    }
    
    for(i=0;i<j;i++){
        printf("S %d\n",s[i]);
    }
    for(i=0;i<k;i++){
        printf("H %d\n",h[i]);
    }
    for(i=0;i<l;i++){
        printf("C %d\n",c[i]);
    }
    for(i=0;i<m;i++){
        printf("D %d\n",d[i]);
    }
    
    return 0;
}
