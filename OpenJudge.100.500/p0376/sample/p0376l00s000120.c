main(){
    int n,a[128],tmp;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n/2;i++){
        tmp=a[i];
        a[i]=a[n-i-1];
        a[n-i-1]=tmp;
    }
    for(int i=0;i<n-1;i++){
        printf("%d ",a[i]);
    }
    printf("%d\n",a[n-1]);
}
