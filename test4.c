#include <stdio.h>
#include <stdlib.h>
int main() {
	for (int i = 0;i < 5;i++) {
		printf("%d ", rand() % 100 + 1);
	}
	return 0;
}
