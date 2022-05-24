#include <iostream>
#include "SeaBattle.h"
int main()
{
	setlocale(LC_ALL, "Russian");
	Igrok a;
	Protiv b;
	a.create_pole();
	if (a.proverka())
	{
		cout << "Неверно расставлены корабли" << '\n';;
		return 0;
	}
	b.pole = { {1, 2, 1, 1, 2, 1, 1, 1, 2, 1}, {1, 1, 1, 1, 1, 1, 1, 1, 1, 1}, {1, 1, 2, 1, 1, 1, 1, 1, 1, 2},
	{2, 1, 1, 1, 1, 1, 1, 2, 1, 1}, {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},{1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
	{1, 1, 1, 1, 1, 1, 1, 1, 1, 1},{1, 1, 1, 1, 1, 1, 1, 1, 1, 1}, {1, 1, 1, 1, 2, 1, 1, 1, 1, 1},
	{1, 2, 1, 1, 1, 1, 1, 1, 2, 1} };
	while (true)
	{
		a.hod_igroka(b.pole);
		b.hod(a);
		if (a.fin())
		{
			cout << "Вы проиграли" << '\n';;
			break;
		}
		else if (b.fin())
		{
			cout << "Вы выиграли" << '\n';;
			break;
		}
	}
}