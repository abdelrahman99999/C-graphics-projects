#include"ccc_time.h"
#include<iostream>
#include<Windows.h>
using namespace std;
void main()
{
	for (; ;) {
		Time now;
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n \t\t\t\t\t\t";
		int x;
		if (now.get_hours() > 12)
			x = (now.get_hours()) - 12;
		else
			x = now.get_hours();
		system("Color 0B");
		cout << x << " : " << now.get_minutes() << " : " << now.get_seconds() << endl;
		Sleep(1000);
		system("CLS");
	}
}
