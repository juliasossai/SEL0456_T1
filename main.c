#include <stdio.h>


double func1(double x){
	return x+x;
}


double func2(double x){
	return x*func1(x);
}

double func3(double x){
	return x*func1(x)*func2(x);
}

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
