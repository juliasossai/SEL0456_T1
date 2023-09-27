#include <stdio.h>
#include <math.h>

#include "func1.h"
#include "func2.h"
#include "func3.h"


int main() {
	printf("SEL0456 Exercicio 1\n");
	double f[3] = {1.234, 2.345, 3.456};
	for(int i = 0; i<3; i++){
		printf("func1 de %f = %f\n", f[i], func1(f[i]));
		printf("func2 de %f = %f\n", f[i], func2(f[i]));
		printf("func3 de %f = %f\n", f[i], func2(f[i]));
	}

	return 0;
}

// standard output = 1
// standard error = 2
// standard input = 0
