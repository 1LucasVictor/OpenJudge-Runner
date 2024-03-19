int main(void)
{
	int skin=100000;
	int skin2;
	int shu;
	int i;
	scanf("%d",&shu);
	for(i=0;shu>i;i++){
		skin=skin*1.05;
	if(skin%1000!=0){
		skin2=skin%1000;
		skin=skin-skin2+1000;
	}
	}
		printf("%d\n",skin);
	return 0;
}