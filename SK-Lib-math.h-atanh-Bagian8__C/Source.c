// crt_atanh.c
// This program displays the hyperbolic tangent of pi / 4
// and the arc hyperbolic tangent of the result.
//

#include <math.h>
#include <stdio.h>
#include <conio.h>

/*	Source by Microsoft
	Modified For Learn by Rizky Khapidsyah
	I.D.E : VS2019 */

int main() {
	double pi = 3.1415926535;
	double x, y;

	x = tanh(pi / 4);
	y = atanh(x);

	printf("tanh( %f ) = %f\n", pi / 4, x);
	printf("atanh( %f ) = %f\n", x, y);

	_getch();
	return 0;
}