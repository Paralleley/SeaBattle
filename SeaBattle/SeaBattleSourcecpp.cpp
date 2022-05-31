#include "SeaBattle.h"
void Igrok::get_pole_vraga()
{
	for (int i = 0; i < 10;i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cout << pole_vraga[i][j];
		}
		cout << '\n';
	}
}
void Boy::get_pole()
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cout << pole[i][j];
		}
		cout << '\n';
	}
}
bool Boy::fin()
{
	int count = 0;
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cout << pole[i][j];
			if (pole[i][j] == 2)
			{
				count += 1;
			}
		}
	}
	if (count == 0)
	{
		return true;
	}
	return false;
}
void Protiv::hod(Igrok& igrok)
{
	cout << "ход врага" << '\n';
	Igrok* p = &igrok;
	Igrok a;
	a = igrok;
	char stop = false;
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			switch (pole_vraga[i][j])
			{
			case 0:
			{

				switch (a.pole[i][j])
				{
				case 1:
				{
					pole_vraga[i][j] = 1;
					stop = true;
					break;
				}
				case 2:
				{
					pole_vraga[i][j] = 3;
					a.pole[i][j] = 3;
					if ((i == 0) & (j == 0))
					{
						a.pole[i + 1][j] = 3;
						pole_vraga[i + 1][j] = 3;
						a.pole[i + 1][j + 1] = 3;
						pole_vraga[i + 1][j + 1] = 3;
						a.pole[i][j + 1] = 3;
						pole_vraga[i][j + 1] = 3;
					}
					else if ((i == 0) & (j != 9))
					{
						a.pole[i + 1][j] = 3;
						pole_vraga[i + 1][j] = 3;
						a.pole[i + 1][j + 1] = 3;
						pole_vraga[i + 1][j + 1] = 3;
						a.pole[i + 1][j - 1] = 3;
						pole_vraga[i + 1][j - 1] = 3;
						a.pole[i][j + 1] = 3;
						pole_vraga[i][j + 1] = 3;
						a.pole[i][j - 1] = 3;
						pole_vraga[i][j - 1] = 3;
					}
					else if ((i != 9) & (j == 0))
					{
						a.pole[i + 1][j + 1] = 3;
						pole_vraga[i + 1][j + 1] = 3;
						a.pole[i + 1][j - 1] = 3;
						pole_vraga[i + 1][j - 1] = 3;
						a.pole[i - 1][j] = 3;
						pole_vraga[i - 1][j] = 3;
						a.pole[i + 1][j] = 3;
						pole_vraga[i + 1][j] = 3;
						a.pole[i + 1][j + 1] = 3;
						pole_vraga[i + 1][j + 1] = 3;
					}
					else if ((i == 9)&(j == 9))
					{
						a.pole[i - 1][j - 1] = 3;
						pole_vraga[i - 1][j - 1] = 3;
						a.pole[i][j - 1] = 3;
						pole_vraga[i][j - 1] = 3;
						a.pole[i - 1][j] = 3;
						pole_vraga[i - 1][j] = 3;
					}
					else if ((i == 9) & (j != 0))
					{
						a.pole[i][j + 1] = 3;
						pole_vraga[i][j + 1] = 3;
						a.pole[i][j - 1] = 3;
						pole_vraga[i][j - 1] = 3;
						a.pole[i - 1][j - 1] = 3;
						pole_vraga[i - 1][j - 1] = 3;
						a.pole[i - 1][j + 1] = 3;
						pole_vraga[i - 1][j + 1] = 3;
						a.pole[i - 1][j] = 3;
						pole_vraga[i - 1][j] = 3;
					}
					else if ((i != 0) & (j == 9))
					{
						a.pole[i + 1][j] = 3;
						pole_vraga[i + 1][j] = 3;
						a.pole[i + 1][j - 1] = 3;
						pole_vraga[i + 1][j - 1] = 3;
						a.pole[i][j - 1] = 3;
						pole_vraga[i][j - 1] = 3;
						a.pole[i - 1][j - 1] = 3;
						pole_vraga[i - 1][j - 1] = 3;
						a.pole[i - 1][j] = 3;
						pole_vraga[i - 1][j] = 3;
					}
					else if ((i == 0)&(j == 9))
					{
						a.pole[i + 1][j] = 3;
						pole_vraga[i + 1][j] = 3;
						a.pole[i + 1][j - 1] = 3;
						pole_vraga[i + 1][j - 1] = 3;
						a.pole[i][j - 1] = 3;
						pole_vraga[i][j - 1] = 3;
					}
					else if ((i == 9)&(j == 0))
					{
						a.pole[i][j + 1] = 3;
						pole_vraga[i][j + 1] = 3;
						a.pole[i - 1][j + 1] = 3;
						pole_vraga[i - 1][j + 1] = 3;
						a.pole[i - 1][j] = 3;
						pole_vraga[i - 1][j] = 3;
					}
					else
					{
						a.pole[i + 1][j] = 3;
						pole_vraga[i + 1][j] = 3;
						a.pole[i + 1][j + 1] = 3;
						pole_vraga[i + 1][j + 1] = 3;
						a.pole[i + 1][j - 1] = 3;
						pole_vraga[i + 1][j - 1] = 3;
						a.pole[i][j + 1] = 3;
						pole_vraga[i][j + 1] = 3;
						a.pole[i][j - 1] = 3;
						pole_vraga[i][j - 1] = 3;
						a.pole[i - 1][j - 1] = 3;
						pole_vraga[i - 1][j - 1] = 3;
						a.pole[i - 1][j + 1] = 3;
						pole_vraga[i - 1][j + 1] = 3;
						a.pole[i - 1][j] = 3;
						pole_vraga[i - 1][j] = 3;
					}
					*p = a;
					break;
				}
				}
			}
			}
			if (stop)
			{
				break;
			}
		}
		if (stop)
		{
			break;
		}
	}
	
}
void Igrok::create_pole()
{
	vector<vector<int>> vvod;
	for (int i = 0; i < 10; i++)
	{
		vector<int> stroka;
		for (int j = 0; j < 10; j++)
		{
			int a;
			cin >> a;
			stroka.push_back(a);
		}
		vvod.push_back(stroka);
	}
	pole = vvod;
}
bool Igrok::proverka()
{
	int count = 0;
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (pole[i][j] == 2)
			{
				count += 1;
			}
		}
	}
	if (count != 10)
	{
		return true;
	}
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			if (pole[i][j] == 2)
			{
				if (pole[i][j + 1] == 2)
					return true;
			}
		}
	}
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (pole[i][j] == 2)
			{
				if (pole[i + 1][j] == 2)
					return true;
			}
		}
	}
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (pole[i][j] == 2)
			{
				if ((i < 9) & (j < 9))
				{
					if (pole[i + 1][j + 1] == 2)
					{
						return true;
					}
				}
				if ((i < 9) & (j > 0))
				{
					if (pole[i + 1][j - 1] == 2)
					{
						return true;
					}
				}
				if ((i > 0) & (j < 9))
				{
					if (pole[i - 1][j + 1] == 2)
					{
						return true;
					}
				}
				if ((i > 0) & (j > 0))
				{
					if (pole[i - 1][j - 1] == 2)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

void Igrok::hod_igroka(vector<vector<int>> protiv)
{
	setlocale(LC_ALL, "Russian");
	char z, x;
	int i, j;
	int count = 0;
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (pole_vraga[i][j] == 3)
			{
				count += 1;
			}
		}
	}
	if (count == 10)
	{
		pole = { {9} };
	}
	cout << "Введите координаты" << '\n';
	while (true)
	{
		cout << "Введите i" << '\n';
		cin >> z;
		cout << "Введите j" << '\n';
		cin >> x;
		if (not(isdigit(z) & isdigit(x)))
		{
			cout << "Неверный тип данных" << '\n';
			continue;
		}
		int i = z - 48;
		int j = x - 48;
		if ((i > 9) | (i < 0) | (j > 9) | (j < 0))
		{
			cout << "Неверные индексы" << '\n';;
		}
		else
		{
			if ((pole_vraga[i][j] != 0))
			{
				cout << "Эта клетка уже была" << '\n';;
			}
			else
			{
				if (protiv[i][j] == 2)
				{
					pole_vraga[i][j] = 3;
					protiv[i][j] = 3;
					cout << "Вы попали" << '\n';
				}
				else
				{
					pole_vraga[i][j] = 1;
					protiv[i][j] = 1;
					cout << "Промах" << '\n';
					break;
				}
			}
		}
	}
	cout << "Ваше поле" << '\n';
	get_pole();
	cout << "Поле врага" << '\n';
	get_pole_vraga();
}