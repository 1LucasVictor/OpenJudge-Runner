#define z 1000000
a[z],b[z],n,i=1,x,c;main(){for(;i++<z;)a[i]=i;for(i=0;i++<z;)if(a[i])for(b[x++]=i,c=i;c<z;c+=i)a[c]=0;for(;~scanf("%d",&n);){c=0;while(b[c]<=n&&b[c++]);printf("%d\n",c);}exit(0);}