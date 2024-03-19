#include <stdio.h>

void Set(int Tri[]);

int main(void)
{
	int n;
	int i;
	int Tri[3];
	
	scanf("%d", &n);
	for (i = 1; i <= n; i++){
		scanf("%d %d %d", &Tri[0], &Tri[1], &Tri[2]);
		
		Set(Tri);
		if (Tri[0] * Tri[0] + Tri[1] * Tri[1] == Tri[2] * Tri[2]){
			printf("YES\n");
		}else {
			printf("NO\n");
		}
	}
	
	return (0);
}

void Set(int Tri[])
{
	int n[3];
	int i;
	
	for (i = 0; i < 3; i++){
		n[i] = Tri[i];
	}
	
	if (n[0] < n[1] && n[0] < n[2]){
		
		if (n[1] < n[2]){
			Tri[1] = n[1];
			Tri[2] = n[2];
		}else {
			Tri[1] = n[2];
			Tri[2] = n[1];
		}
		
		Tri[0] = n[0];
	}else if (n[1] < n[0] && n[1] < n[2]){
		
		if (n[0] < n[2]){
			Tri[1] = n[0];
			Tri[2] = n[2];
		}else {
			Tri[1] = n[2];
			Tri[2] = n[0];
		}
		
		Tri[0] = n[1];
	}else {
		
		if (n[0] < n[1]){
			Tri[1] = n[0];
			Tri[2] = n[1];
		}else {
			Tri[1] = n[1];
			Tri[2] = n[0];
		}
		
		Tri[0] = n[2];
	}
}