int main(int argc ,const char *argv[])
{
    int n,m,a[100][100],c[100],b;
    //input
    scanf("%d %d",&n,&m);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<m;i++){
        c[i]=0;
    }
    for(int i=0;i<m;i++){
        scanf("%d",&b);
        for(int j=0;j<n;j++){
            c[j]+=a[j][i]*b;
        }
    }
    for(int i=0;i<n;i++){
        printf("%d\n",c[i]);
    }
    return 0;
}
