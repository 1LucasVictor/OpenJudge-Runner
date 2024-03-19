#include <stdio.h>
int main(){
	int n, m, c, s, d, ss[3]={-1,-1,-1}, ans=0;
	scanf("%d%d",&n,&m);
	for(int i=0; i<m; i++){
        scanf("%d%d",&s,&c);
		if( ss[s-1] != -1 && ss[s-1] != c ){ printf("-1\n"); return 0; }
		if( ss[s-1] != -1 ){ continue; }
        ss[s-1] = c;
        if	   ( s==3 ){ d=  1; }
        else if( s==2 ){ d= 10; }
        else if( s==1 ){ d=100; }
      	ans += (d*c);
	}
    if	   ( n==2 && ans!=0 && ans< 10 ){ ans+= 10; }
    else if( n==3 && ans!=0 && ans<100 ){ ans+=100; }
	printf("%d\n",ans);
	return 0;
}