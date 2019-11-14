#include<stdio.h>

static b = 0;

void sub()
{
	static int scount = 0;
	int acount = 0;
	printf("scount = %d\t", scount);
	printf("acount = %d\t", acount);
	printf("static global variable = %d\n", b);
	scount++;
	acount++;
	b++;
}

int main()
{
	sub();
	sub();
	sub();
	return 0;
}
