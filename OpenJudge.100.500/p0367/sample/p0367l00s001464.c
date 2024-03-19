int main(){
	int a,b,c,i,count=0;
	
	scanf("%d%d%d",&a,&b,&c);
	for(i=0;i+a<=b;i++){
		if(c%(i+a)==0)count++;
	}
	printf("%d\n",count);
	return 0;
}