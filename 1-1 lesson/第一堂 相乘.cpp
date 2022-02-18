#include<stdio.h>
double area(double x, double y) {
	return x*y;
}

int main() {
	double w,h;
	double c;
	w=100.1;
	h=200.1;
	c=area(w,h);
	printf("%f",c);

	return 0;

}


