#include<iostream>
#include<math.h>
using namespace std;
double tri(double x, double y)
{
	double ans = 0.5 * x * y;
	cout << "Area = " << ans;
	return ans;
}

double rec(double x, double y)
{
	double ans = x * y;
	cout << "Area = " << ans;
	return ans;
}

int main()
{
	double i;
	cout << "Tri or Rec?? = ";
	cin >> i;
	if (i == 3)
	{
		int x, y;
		cout << "input heigth = ";
		cin >> x;
		cout << "input Base = ";
		cin >> y;
		tri(x, y);
	}
	else if (i == 4)
	{
		int x, y;
		cout << "input length = ";
		cin >> x;
		cout << "input width = ";
		cin >> y;
		tri(x, y);


	}
	else
	{
		cout << "On working";

	}
	return 0;

}
