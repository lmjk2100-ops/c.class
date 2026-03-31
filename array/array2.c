#include <stdio.h>
int main(void)
{
	char s[] = "ABCD";
	int a = 0, b = 3;
	char t;
	while (a < b)
	{
		t = s[a];
		s[a] = s[b];
		s[b] = t;
		a++;
		b--;
	}

	printf("%s\n", s);
	return 0;
}