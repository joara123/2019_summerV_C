#include <stdio.h>

void main(int argc, char* argv)
{
	const int MAX = 15;
	int i;

	printf("1���� %d���� ���� �߿��� 3���� ������ �������� �ʴ� �� \n", MAX);
	for (i = 1; i <= MAX; i++) {
		if (i % 3 == 0)
			continue;
		printf("%d ", i);
	}
	puts("");

	return 0;
}