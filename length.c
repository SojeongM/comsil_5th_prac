#include <stdio.h>
#include <string.h>
#include <stdio.h>

int length(int n) {
	int l = 0, i = 1;
	do {
		n = (int)(n / 10);
		l++;
	} while (n > 0);
	return l;
}

