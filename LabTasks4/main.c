#include <stdio.h>
#include <math.h>

void my_inpt(double* p_a, double* p_b, double* p_c, double* p_d) {
	printf("Number a: ");
	scanf_s("%lf", p_a);
	printf("Number b: ");
	scanf_s("%lf", p_b);
	printf("Number c: ");
	scanf_s("%lf", p_c);
	printf("Number d:");
	scanf_s("%lf", p_d);
}


int my_calc(double a, double b, double c, double d, double* p_f_1, double* p_f_2, double* p_f_3) {
	if (a == 0) {
		printf("a cant be 0!\n");
		return -1;
	}
	if (c - d == 0) {
		printf("c - d cant be 0!\n");
		return -1;
	}
	*p_f_1 = (a + b) / (c - d) - (c + d) / a + b;
	
	if (c == 0) {
		printf("c cant be 0!\n");
		return -1;
	}
	*p_f_2 = a - sin(b / c + d);

	if (b - c == 0) {
		printf("b - c cant be 0!\n");
		return -1;
	}

	if (a / (b - c) <= 0) {
		printf("a / (b-c) cant be <= 0!\n");
		return -1;
	}
	*p_f_3 = log10(a / (b - c)) + d;

	return 0;
}

void my_outpt(
			double a, double b, double c, double d,
			double f_1, double f_2, double f_3
			) 
{
	printf("For: \n\ta = %lf\n\tb = %lf\n\tc = %lf\n\td = %lf\n\n", a, b, c, d);
	printf("f_1 = %lf\nf_2 = %lf\nf_3 = %lf\n", f_1, f_2, f_3);
}

int main() {
	double a = 0, b = 0, c = 0, d = 0;
	double f_1 = 0, f_2 = 0, f_3 = 0;

	my_inpt(&a, &b, &c, &d);
	if (my_calc(a, b, c, d, &f_1, &f_2, &f_3) == -1) {
		return -1;
	}
	my_outpt(a, b, c, d, f_1, f_2, f_3);
	return 0;
}
