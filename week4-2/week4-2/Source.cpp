#include<iostream>

struct
{
	char apr = 65;
}ch;
using namespace std;
int main()
{
	int i;
	cin >> i;
	if (i <= 0)
	{
		cout << "Out of range";
	}
	else
	for (int x = 1; x <= i; x++)
	{
		cout << ch.apr++<<" ";
		if (ch.apr > 90)
			ch.apr = 65;
	}
	


}