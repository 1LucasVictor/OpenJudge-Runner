#include<stdio.h>
main(){
	unsigned long a[1000],b[1000],tmp_a[1000],tmp_b[1000];
	int i,j;
	for(j=0;scanf("%ld %ld",&a[j],&b[j])!=EOF;j++);
	
	for(i=0;i<j;i++){
		tmp_a[i]=a[i];
		tmp_b[i]=b[i];
	}
	//gcd
	unsigned long r[1000],tmp,gcd[1000],lcm[1000];
	for(i=0;i<j;i++){
		while(abs(a[i]-b[i])!=0){
			//aとbの大小判定
			if(a[i]<b[i]){
				tmp=a[i];
				a[i]=b[i];
				b[i]=tmp;
			}
			//ユークリッド
			r[i]=a[i]-b[i];
			a[i]=b[i];
			b[i]=r[i];
		}
		gcd[i]=b[i];
	}
	//lcm
	for(i=0;i<j;i++){
		lcm[i]=(tmp_a[i]*tmp_b[i])/gcd[i];
	}
	
	for(i=0;i<j;i++){
		printf("%ld %ld\n",gcd[i],lcm[i]);
	}
	return 0;
}