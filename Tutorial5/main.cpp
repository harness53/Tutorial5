#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
	int b = 0;
	int max = 0;
	cout << "enter max value: ";
	cin >> max;
/*
	int i = 0;
loop:
	if (!(i < max))
		goto end_loop;
	int input;
	cin >> input;
	b += input;
	i += 5;
	goto loop;
end_loop:
*/
	for (int i = 0; i < max; i += 1)
	{
		int input;
		cin >> input;
		b += input;
	}
	SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_INTENSITY);
	cout << b << endl;
	system("pause");
		return 0;
}