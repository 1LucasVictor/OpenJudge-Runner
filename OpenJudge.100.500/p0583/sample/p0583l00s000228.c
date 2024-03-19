// @zekkiyoumachine
#include <stdio.h>

int max( int x, int y ){
	return x>y ? x : y;
}

int main()
{
	int N, A, B, C, D;
	scanf("%d %d %d %d %d", &N, &A, &B, &C, &D);
    A--; B--; C--; D--;
	char S[N];
	scanf("%s", S);
	
	int k;
	int hs = 0;
	int hsr = 0;
	int pn = 0;
	int pnr = 0;
	
    // 元コード: for(k=0; k<N; k++) ...
	for(k=A; k<=max(C, D); k++){
		if(S[k] == '#'){
			hs++;
			if(hs > hsr) hsr = hs;
		}
		else hs=0;
	}
	
	if(hsr >= 2) printf("No");
	else if(C < D) printf("Yes");
  
	else{
		// 元コード: for(k=0; k<N; k++) ...
      	for(k=B; k<=C; k++){
			if(S[k] == '.'){
				pn++;
				if(pn > pnr) pnr = pn;
			}
			else pn=0;
		}
      
		if( pnr >= 3 ){
            // if(S[B] == '#' && S[D-2] == '#') printf("No");
            printf("Yes");
		} else printf("No");		
    
    }
		
		return 0;
}
