#include <stdio.h>

int main(void)
{
	int h, m;
	scanf("%d %d", &h, &m);
	int num;
	scanf("%d", &num);

	m += num;
	if (m >= 60) {
		h += (m / 60);
		m %= 60;
	}
	if (h > 23) {
		h -= 24;
	}
	printf("%d %d", h, m);

	return 0;
}