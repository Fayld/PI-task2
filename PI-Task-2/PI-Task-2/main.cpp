#include "task-2.h"
int main()
{
	setlocale(0, "");
	while (true)
	{
		std::string s;
		std::cout << "������� ������ (������ �����) : ";
		std::cin >> s;
		int b;
		std::cout << "������� ��������� ������� ��������� : ";
		std::cin >> b;
		std::cout << "��������� �������� � 10 ������� ��������� : " << Return_To_System_Of_Num(s,b) << std::endl;
	}
}