#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <unistd.h>

using namespace std;

int main()
{
	int h, m, s;
	h = 0;
	m = 0;
	s = 0;
	
	for (int i = 1; i > 0; i++)
{
	cout << h << ":" << m << ":" << s << endl;
sleep(1);
	system("cls");
	s = s + 1;
	if (s > 59)
	{
		m = m + 1;
		s = 0;
	}
	if (m > 59)
	{
		h = h + 1;
		m = 0;
	}
	}	
	
	return 0;
}
