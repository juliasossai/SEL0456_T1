#include "func1.h"

#include "func2.h"

double func3(double x){
	return x*func1(x)*func2(x);
}
