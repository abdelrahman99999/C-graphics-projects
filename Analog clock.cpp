#include "ccc_win.h"
#include "cmath"
int ccc_win_main()
{
	Point pp(0, 0);
	cwin << pp;
	Circle c1(pp, 7);
	cwin << c1;
	Circle c2(pp, 8);
	cwin << c2;
	///////////////////////////////////////////////////////////////////////
	//points
	Point p1(0, 7); //12
	Point p4(7, 0);  //3
	Point p7(-7, 0); //9
	Point p10(0, -7); //6
	//Q1
	Point p2(0.5 * 7, (sqrt(3) / 2) * 7); //1
	Point p3((sqrt(3) / 2) * 7, 0.5 * 7); //2
	//Q2
	Point p5(-0.5 * 7, (sqrt(3) / 2) * 7);  //11
	Point p6(-(sqrt(3) / 2) * 7, 0.5 * 7); //10
	//Q3
	Point p11(-0.5 * 7, (-sqrt(3) / 2) * 7); //7
	Point p12(-(sqrt(3) / 2) * 7, -0.5 * 7); //8
	//Q4
	Point p8(0.5 * 7, (-sqrt(3) / 2) * 7); //5
	Point p9((sqrt(3) / 2) * 7, -0.5 * 7); //4
	//output
	cwin << p1 << p2 << p3 << p4 << p5 << p6 << p7 << p8 << p9 << p10 << p11 << p12;
	
	///////////////////////////////////////////////////////////////////////////////////////
	//numbers
	Message m1(Point(-0.25, 7.75), "12");
	Message m2(Point(7.5, 0.5), "3");
	Message m3(Point(0, -7.25), "6");
	Message m4(Point(-7.5, 0.5), "9");
	cwin << m1 << m2 << m3 << m4;
	//1
	Message m5(Point(0.5 * 7.5, (sqrt(3) / 2) * 7.5), "1");
	Message m6(Point((sqrt(3) / 2) * 7.5, 0.5 * 7.5), "2");
	cwin << m5 << m6;
	//2
	Message m11(Point(-0.5 * 8.5, (sqrt(3) / 2) * 7.5), "11");
	Message m12(Point(-(sqrt(3) / 2) * 8, 0.5 * 7.5), "10");
	cwin << m11 << m12;
	//3
	Message m9(Point(-0.5 * 7.5, (-sqrt(3) / 2) * 7.5), "7");
	Message m10(Point(-(sqrt(3) / 2) * 7.5, -0.5 * 7.5), "8");
	cwin << m9 << m10;
	//4
	Message m7(Point(0.5 * 7.5, (-sqrt(3) / 2) * 7), "5");
	Message m8(Point((sqrt(3) / 2) * 7, -0.5 * 7), "4");
	cwin << m7 << m8;
	for (int i = 0; ; i++) {

		cwin << pp;
		cwin << c1 << c2;
		cwin << p1 << p2 << p3 << p4 << p5 << p6 << p7 << p8 << p9 << p10 << p11 << p12;
		cwin << m1 << m2 << m3 << m4 << m5 << m6 << m7 << m8 << m9 << m10 << m11 << m12;

		//sec
		Point q(6.5 * sin(i*3.14 / 180), 6.5* cos(i*3.14 / 180));
		Line sec(pp, q);
		cwin << sec;
		
		//min
		Point q1(5 * sin(i*0.01666666666666666666666666666667*  3.14 / 180), 5 * cos(i*0.01666666666666666666666666666667* 3.14 / 180));
		Line minu(q1, pp);
		cwin << minu;

		//hours
		Point q2(3 * sin(i*2.7777777777777777777777777777778e-4* 3.14 / 180), 3 * cos(i*2.7777777777777777777777777777778e-4* 3.14 / 180));
		Line hour(q2, pp);
		cwin << hour;

		Sleep(500 / 3);
		cwin.clear();
	}
	

	return 0;
}
