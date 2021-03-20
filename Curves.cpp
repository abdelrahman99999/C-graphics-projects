#include"ccc_win.h"
#include<cmath>
#define pi 3.14

int ccc_win_main()
{
	cwin.coord(-5, 5, 5, -5);
	Line xaxis(Point(-5, 0), Point(5, 0));
	Line yaxis(Point(0, 5), Point(0, -5));
	cwin << xaxis << yaxis;
	
	for (int x = -5; x <= 5; x += 0.001)
	{
		
		double t1 = sin(x);
		double t2 = (sin(3*x)) / 3;
		double t3= (sin(5 * x)) / 5;
		double t4 = (sin(7 * x)) / 7;
		double t5 = (sin(9 * x)) / 9;
		double sum = (4 / pi)*(t1 + t2 + t3 + t4 + t5);
		Point p1(x, sum);
		cwin <<p1;

	}

	return 0;
}
