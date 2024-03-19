#include <stdio.h>

int main(){
	int data_num;
	int rec_a, rec_b, rec_c;

	scanf("%d", &data_num);

	int i;
	int temp;
	for(i = 0; i < data_num; ++i){
		scanf("%d %d %d", &rec_a, &rec_b, &rec_c);
		if(rec_a > rec_c){
			temp = rec_a;
			rec_a = rec_c;
			rec_c = temp;
		}
		if(rec_b > rec_c){
			temp = rec_b;
			rec_b = rec_c;
			rec_c = temp;
		}
		if(rec_a*rec_a + rec_b*rec_b == rec_c*rec_c){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
	return 0;
}