int main(){
	int n, num;
	int ans[200000];
  
	scanf("%d",&n);
	for(int i=2;i<=n;i++){
      scanf("%d",&num);ans[num]++;
    }
	for(int i=1;i<=n;i++)printf("%d\n",ans[i]);
}
