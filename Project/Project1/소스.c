#include <stdio.h>

void main(int argc, char* argv)
{
	const int MAX = 15;
	int i;

	printf("1에서 %d까지 정수 중에서 3으로 나누너 떨어지지 않는 수 \n", MAX);
	for (i = 1; i <= MAX; i++) {
		if (i % 3 == 0)
			continue;
		printf("%d ", i);
	}
	puts("");

	return 0;
}