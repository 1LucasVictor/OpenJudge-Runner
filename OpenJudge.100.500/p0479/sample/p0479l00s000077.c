int a[200010];
int ans[200010];
 int main(){
 int n;
 scanf("%d",&n);
 for(int i=2;i<=n;i++)scanf("%d",&a[i]);
 for(int i=2;i<=n;i++)ans[a[i]]++;
 for(int i=1;i<=n;i++)printf("%d\n",ans[i]);
 }