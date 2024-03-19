int main(int argc, const char * argv[]) {
    int n,m,i,j,s,k,w;
    scanf("%d %d",&n,&m);
    int a[100][100]={0};
    for (i=0;i<n; i++) {
        for (j=0; j<m; j++) {
            scanf("%d ",&a[i][j]);
        }
    }
    int b[100]={0};
    for (s=0; s<m; s++) {
        scanf("%d", &b[s]);
    }
    int c[100] = {0};
    for (k=0; k<n; k++) {
        for (w=0; w<m; w++) {
            c[k]+=a[k][w]*b[w];
            
        }
        
        printf("%d\n", c[k]);
        
    }
    
    
   
    return 0;
}