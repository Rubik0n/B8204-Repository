#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;

void translit(char* str)
{
	int i = 0;

	while (str[i] != '\0')
	{

		switch (str[i])
		{
		case '�': cout << "�"; break;
		case '�': cout << "B"; break;
		case '�': cout << "V"; break;
		case '�': cout << "G"; break;
		case '�':
		{
			if (str[i + 1] == '�')
			{
				cout << "J";
				i++;
			}
			else
				cout << "D";
		} break;
		case '�': cout << "E"; break;
		case '�': cout << "Yo"; break;
		case '�': cout << "Zh"; break;
		case '�': cout << "Z"; break;
		case '�': cout << "I"; break;
		case '�': cout << "Y"; break;
		case '�': cout << "K"; break;
		case '�': cout << "L"; break;
		case '�': cout << "M"; break;
		case '�': cout << "N"; break;
		case '�': cout << "O"; break;
		case '�': cout << "P"; break;
		case '�': cout << "R"; break;
		case '�': cout << "S"; break;
		case '�': cout << "T"; break;
		case '�': cout << "U"; break;
		case '�': cout << "F"; break;
		case '�': cout << "H"; break;
		case '�': cout << "Ts"; break;
		case '�': cout << "Ch"; break;
		case '�': cout << "Sh"; break;
		case '�': cout << "Sch"; break;
		case '�': cout << ""; break;
		case '�': cout << "Yi"; break;
		case '�': cout << ""; break;
		case '�': cout << "E"; break;
		case '�': cout << "Yu"; break;
		case '�': cout << "Ya"; break;

		case '�': cout << "a"; break;
		case '�': cout << "b"; break;
		case '�': cout << "v"; break;
		case '�': cout << "g"; break;
		case '�': {
			if (str[i + 1] == '�')
			{
				cout << "j";
				i++;
			}
			else
				cout << "d";
		} break;
		case '�': cout << "e"; break;
		case '�': cout << "yo"; break;
		case '�': cout << "zh"; break;
		case '�': cout << "z"; break;
		case '�': cout << "i"; break;
		case '�': cout << "y"; break;
		case '�': cout << "k"; break;
		case '�': cout << "l"; break;
		case '�': cout << "m"; break;
		case '�': cout << "n"; break;
		case '�': cout << "o"; break;
		case '�': cout << "p"; break;
		case '�': cout << "r"; break;
		case '�': cout << "s"; break;
		case '�': cout << "t"; break;
		case '�': cout << "u"; break;
		case '�': cout << "f"; break;
		case '�': cout << "h"; break;
		case '�': cout << "ts"; break;
		case '�': cout << "ch"; break;
		case '�': cout << "sh"; break;
		case '�': cout << "sch"; break;
		case '�': cout << ""; break;
		case '�': cout << "y"; break;
		case '�': cout << ""; break;
		case '�': cout << "e"; break;
		case '�': cout << "yu"; break;
		case '�': cout << "ya"; break;

		case 'A': cout << "�"; break;
		case 'B': cout << "�"; break;
		case 'C': {
			if (str[i + 1] == 'h')
			{
				cout << "�";
				i++;
			}
			else
				cout << "�";
		} break;
		case 'D': cout << "�"; break;
		case 'E': cout << "�"; break;
		case 'F': cout << "�"; break;
		case 'G': cout << "�"; break;
		case 'H': cout << "�"; break;
		case 'I': cout << "�"; break;
		case 'J': cout << "��"; break;
		case 'K': cout << "�"; break;
		case 'L': cout << "�"; break;
		case 'M': cout << "�"; break;
		case 'N': cout << "�"; break;
		case 'O': cout << "�"; break;
		case 'P': cout << "�"; break;
		case 'Q': cout << "�"; break;
		case 'R': cout << "�"; break;
		case 'S': {
			if (str[i + 1] == 'h')
			{
				cout << "�";
				i++;
			}
			else
				if ((str[i + 1] == '�') || (str[i + 2] == 'h'))
				{
					cout << "�";
					i += 2;
				}
				else
					cout << "�";
		} break;
		case 'T':
		{
			if (str[i + 1] == 's')
			{
				cout << "�";
				i++;
			}
			else
				cout << "�";
		} break;
		case 'U': cout << "�"; break;
		case 'V': cout << "�"; break;
		case 'W': cout << "�"; break;
		case 'X': cout << "��"; break;
		case 'Y':
		{
			if (str[i + 1] == 'o')
			{
				cout << "�";
				i++;
			}
			else
				if (str[i + 1] == 'i')
				{
					cout << '�';
					i++;
				}
				else
					if (str[i + 1] == 'u')
					{
						cout << '�';
						i++;
					}
					else
						if (str[i + 1] == 'a')
						{
							cout << '�';
							i++;
						}
						else
							cout << "�";
		} break;
		case 'Z':
		{
			if (str[i + 1] == 'h')
			{
				cout << '�';
				i++;
			}
			else
				cout << "�"; } break;


		case 'a': cout << "�"; break;
		case 'b': cout << "�"; break;
		case 'c': {
			if (str[i + 1] == 'h')
			{
				cout << "�";
				i++;
			}
			else
				cout << "�";
		} break;
		case 'd': cout << "�"; break;
		case 'e': cout << "�"; break;
		case 'f': cout << "�"; break;
		case 'g': cout << "�"; break;
		case 'h': cout << "�"; break;
		case 'i': cout << "�"; break;
		case 'j': cout << "��"; break;
		case 'k': cout << "�"; break;
		case 'l': cout << "�"; break;
		case 'm': cout << "�"; break;
		case 'n': cout << "�"; break;
		case 'o': cout << "�"; break;
		case 'p': cout << "�"; break;
		case 'q': cout << "�"; break;
		case 'r': cout << "�"; break;
		case 's': {
			if (str[i + 1] == 'h')
			{
				cout << "�";
				i++;
			}
			else
				if ((str[i + 1] == '�') || (str[i + 2] == 'h'))
				{
					cout << "�";
					i += 2;
				}
				else
					cout << "�";
		} break;
		case 't': {
			if (str[i + 1] == 's')
			{
				cout << "�";
				i++;
			}
			else
				cout << "�";
		} break;
		case 'u': cout << "�"; break;
		case 'v': cout << "�"; break;
		case 'w': cout << "�"; break;
		case 'x': cout << "��"; break;
		case 'y': {
			if (str[i + 1] == 'o')
			{
				cout << "�";
				i++;
			}
			else
				if (str[i + 1] == 'i')
				{
					cout << '�';
					i++;
				}
				else
					if (str[i + 1] == 'u')
					{
						cout << '�';
						i++;
					}
					else
						if (str[i + 1] == 'a')
						{
							cout << '�';
							i++;
						}
						else
							cout << "�";
		}break;
		case 'z':
		{
			if (str[i + 1] == 'h')
			{
				cout << '�';
				i++;
			}
			else
				cout << "�"; } break;


		default:  cout << str[i];

		}
		i++;
	}
};

int main()
{
	// ������������ ������
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(0, "Russian");

	const int size_t = 10;
	char* str = new char[size_t];
	cout << "������� ����� �������� �� "<<size_t<<" ��������: \n";
	cin >> str;
	cout << endl;
	if (strlen(str) > 10)
	{
		cout << "������� ����� ��������.";
		_getch();
		return 0;
	}

	cout << "��������������: \n";
	translit(str);

	_getch();
	return 0;
}
