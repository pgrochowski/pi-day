#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	if (argc < 2) {
		printf("Usage: %s <iterations>\n", argv[0]);
		return -1;
	}
	
	/* massive ints here */
	unsigned long long i;
	unsigned long long iter = strtoull(argv[1], argv[2], 10);
	
	printf("Doing %llu iterations.\n", iter);
	
	/*
	 * long double gave me some weird results on mingw, works fine on 
	 * gcc in linux though
	 */
	
	long double sum = 0.0;
	
	for (i = 0; i < iter; i++) {
		sum = sum + 2.0L/((4*i+1)*(4*i+3));
	}
	
	printf("The calculated value of pi is: %.20Lf\n", 4.0L*sum);
	return 0;
}
