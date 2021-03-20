#include"ccc_win.h"

#include<Windows.h>
int ccc_win_main() {
	cwin.coord(-30, 30, 30, -30);

	for (int i = 0; i <= 50; i++)

	{
		Sleep(150);
		cwin.clear();
		//med
		Line l1(Point(-15 + i, 0), Point(-20 + i, 0));
		Line l2(Point(-12.5 + i, 0), Point(-7.5 + i, 0));
		Line l3(Point(-5 + i, 0), Point(0 + i, 0));
		//down
		Line l4(Point(-15 + i, -5), Point(-20 + i, -5));
		Line l5(Point(-12.5 + i, -5), Point(-7.5 + i, -5));
		Line l6(Point(-5 + i, -5), Point(0 + i, -5));
		//up 
		Line l7(Point(-13.25 + i, 5), Point(-6.75 + i, 5));
		//circles
		Point pp(-6.3 + i, -5);
		Point pp1(-13.7 + i, -5);
		Circle c1(pp, 1.25);
		Circle c3(pp, 1);
		Circle c2(pp1, 1.25);
		Circle c4(pp1, 1);
		//side
		Line l8(Point(-20 + i, 0), Point(-20 + i, -5));
		Line l9(Point(0 + i, 0), Point(0 + i, -5));
		//extra
		Line l12(Point(-13.25 + i, 5), Point(-12.5 + i, 0));
		Line l13(Point(-13.25 + i, 5), Point(-15 + i, 0));
		Line l14(Point(-6.75 + i, 5), Point(-7.5 + i, 0));
		Line l15(Point(-6.75 + i, 5), Point(-5 + i, 0));
		//line under
		Line lll(Point(-30, -6.25), Point(30, -6.25));
		///////////trees
		Line q(Point(15, -6.5), Point(15, 5));
		Line q1(Point(20, -6.5), Point(20, 5));
		Circle w(Point(17.5, 10), 6);
		Circle w1(Point(12, 10), 5);
		Circle w2(Point(22, 10), 5);
		///////////tree small
		Line qu(Point(-15, -6.5), Point(-15, 0));
		Line q1u(Point(-18, -6.5), Point(-18, 0));
		Circle wu(Point(-16.5, 3), 4);
		Circle w1u(Point(-20, 3), 2);
		Circle w2u(Point(-12, 3), 2);
		//bird
		Line r(Point(-20 + 2 * i, 18), Point(-20 + 2 * i, 20));
		Line r1(Point(-22 + 2 * i, 18), Point(-22 + 2 * i, 20));
		Line r2(Point(-22 + 2 * i, 20), Point(-20 + 2 * i, 20));
		Line r3(Point(-22 + 2 * i, 18), Point(-20 + 2 * i, 18));
		Line r4(Point(-21 + 2 * i, 20), Point(-23 + 2 * i, 22));
		Line r5(Point(-21 + 2 * i, 18), Point(-23 + 2 * i, 16));
		Line gg(Point(-18 + 2 * i, 19), Point(-20 + 2 * i, 19.5));
		Line gg1(Point(-18 + 2 * i, 19), Point(-20 + 2 * i, 18.5));
		cwin << gg << gg1;
		//bird
		Line or (Point(-20 - 2 + i, 22 + 2), Point(-20 - 2 + i, 24 + 2));
		Line r1o(Point(-22 - 2 + i, 22 + 2), Point(-22 - 2 + i, 24 + 2));
		Line r2o(Point(-22 - 2 + i, 22 + 2), Point(-20 - 2 + i, 22 + 2));
		Line r3o(Point(-22 - 2 + i, 24 + 2), Point(-20 - 2 + i, 24 + 2));
		Line r4o(Point(-21 - 2 + i, 24 + 2), Point(-23 - 2 + i, 26 + 2));
		Line r5o(Point(-21 - 2 + i, 22 + 2), Point(-23 - 2 + i, 20 + 2));
		Line ggr(Point(-20 + i, 25), Point(-22 + i, 25.5));
		Line gg1r(Point(-20 + i, 25), Point(-22 + i, 24.5));
		cwin << ggr << gg1r;


		cwin << l1 << l2 << l3 << l4 << l5 << l6 << l7;
		cwin << c1 << c2 << c3 << c4 << pp << pp1;
		cwin << l8 << l9;

		cwin << l12 << l13 << l14 << l15;
		cwin << lll;
		//tree
		cwin << q << q1 << w << w1 << w2;
		//bird
		cwin << r << r1 << r2 << r3;
		cwin << r4 << r5;
		cwin << qu << q1u << wu << w1u << w2u;
		cwin << or << r1o << r2o << r3o;
		cwin << r4o << r5o;


	}

	///////////////////////////////////////////////////////////////////////////////////////////////////////
	for (int i = 0; i <= 80; i++)

	{
		Sleep(150);
		cwin.clear();
		Line l1(Point(-15 + 50 - i, 0), Point(-20 + 50 - i, 0));
		Line l2(Point(-12.5 + 50 - i, 0), Point(-7.5 + 50 - i, 0));
		Line l3(Point(-5 + 50 - i, 0), Point(0 + 50 - i, 0));
		//down
		Line l4(Point(-15 + 50 - i, -5), Point(-20 + 50 - i, -5));
		Line l5(Point(-12.5 + 50 - i, -5), Point(-7.5 + 50 - i, -5));
		Line l6(Point(-5 + 50 - i, -5), Point(0 + 50 - i, -5));
		//up up
		Line l7(Point(-13.25 + 50 - i, 5), Point(-6.75 + 50 - i, 5));
		//circles
		Point pp(3.7 - 10 + 50 - i, -5);
		Point pp1(-3.7 - 10 + 50 - i, -5);
		Circle c1(Point(3.7 - 10 + 50 - i, -5), 1.25);
		Circle c3(Point(3.7 - 10 + 50 - i, -5), 1);
		Circle c2(Point(-3.7 - 10 + 50 - i, -5), 1.25);
		Circle c4(Point(-3.7 - 10 + 50 - i, -5), 1);
		//add
		Line l8(Point(-20 + 50 - i, 0), Point(-20 + 50 - i, -5));
		Line l9(Point(0 + 50 - i, 0), Point(0 + 50 - i, -5));

		Line l12(Point(-13.25 + 50 - i, 5), Point(-12.5 + 50 - i, 0));
		Line l13(Point(-13.25 + 50 - i, 5), Point(-15 + 50 - i, 0));
		Line l14(Point(3.25 - 10 + 50 - i, 5), Point(-7.5 + 50 - i, 0));
		Line l15(Point(3.25 - 10 + 50 - i, 5), Point(-5 + 50 - i, 0));
		//line under
		Line lll(Point(-30, -6.25), Point(30, -6.25));
		///////////trees
		Line q(Point(15, -6.5), Point(15, 5));
		Line q1(Point(20, -6.5), Point(20, 5));
		Circle w(Point(17.5, 10), 6);
		Circle w1(Point(12, 10), 5);
		Circle w2(Point(22, 10), 5);
		///////////tree small
		Line qu(Point(-15, -6.5), Point(-15, 0));
		Line q1u(Point(-18, -6.5), Point(-18, 0));
		Circle wu(Point(-16.5, 3), 4);
		Circle w1u(Point(-20, 3), 2);
		Circle w2u(Point(-12, 3), 2);




		//bird
		Line r(Point(20 - i, -18), Point(20 - i, -20));
		Line r1(Point(22 - i, -18), Point(22 - i, -20));
		Line r2(Point(22 - i, -20), Point(20 - i, -20));
		Line r3(Point(22 - i, -18), Point(20 - i, -18));
		Line r4(Point(21 - i, -20), Point(23 - i, -22));
		Line r5(Point(21 - i, -18), Point(23 - i, -16));
		Line bb(Point(19 - i, -19), Point(20 - i, -18.5));
		Line bb1(Point(19 - i, -19), Point(20 - i, -19.5));
		cwin << bb << bb1;


		cwin << l1 << l2 << l3 << l4 << l5 << l6 << l7;
		cwin << c1 << c2 << c3 << c4 << pp << pp1;
		cwin << l8 << l9;
		//cwin<<l10<<l11 ;
		cwin << l12 << l13 << l14 << l15;
		cwin << lll;
		//tree
		cwin << q << q1 << w << w1 << w2;
		//bird
		cwin << r << r1 << r2 << r3;
		cwin << r4 << r5;
		cwin << qu << q1u << wu << w1u << w2u;

	}

	return 0;
}
