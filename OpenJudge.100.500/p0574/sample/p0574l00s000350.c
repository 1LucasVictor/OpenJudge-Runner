int main(void) {

	char S[4];

	scanf("%s", S);

	for (int i = 0; i < 3; ++i) {
		for (int j = i + 1; j < 3; ++j) {
			if (S[i] == S[j]) {
				puts("Good");
				goto loop_end;
			}
          	else if(!(S[i] == S[j])) {
				puts("Bad");
				goto loop2_end;
			}
		}
	}
	loop_end:
    loop2_end:
	return 0;
}
