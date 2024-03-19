
#define w 200001
main(){
    int n,m,j;
    long int k,a[w],A[w],b[w],B[w];
    int p=0;
    
    
    scanf("%d%d%ld",&n,&m,&k);
    
   
    for(int i=0;i<n;i++){
        scanf("%ld",&a[i]);
        if(i==0){
            A[i]=0;
        }
        A[i+1]=A[i]+a[i];
        
    }
    
    
    for(int i=0;i<m;i++){
        scanf("%ld",&b[i]);
        if(i==0){
            B[i]=0;
        }
        B[i+1]=B[i]+b[i];
        
    }
    int mo=m;
    
    for(int i=0;i<=n;i++){
        if(A[i]>k)break;
        
        for(j=mo;j>=0;j--){
            if(A[i]+B[j]<=k){
                if(i+j>p)p=i+j;
                mo=j;
                break;
            }
        }
        
    }
    
    
    printf("%d",p);
}