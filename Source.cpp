#include <iostream>
using namespace std;

int main() {
	// ���� ������
	/*cout << "Lets play the game!\n";
	cout << "Enter pirates number -> ";

	unsigned int pirates;
	cin >> pirates;

	cout << "Let the battle bedgins!\n";
	cout << "Enter loot -> ";
	unsigned int lost;
	cin >> lost;

	cout << "Thter loot -> ";
	unsigned int gold;
	cin >> gold;

	pirates -= lost;

	unsigned int p_gold = gold / (pirates + 1);
	unsigned int c_gold = p_gold + gold % (pirates + 1);

	cout << "Usual pirat gold " << p_gold << "\n";
	cout << "Captain gold " << c_gold << "\n\n";*/

	// ��������� � ������� if
	/*cout << "Enter number -> ";
	int num;
	cin >> num;

	if (num > 10) //���� ������� � ������� ������ �� ����������� ��������� ������ . ����� ������ .
		cout << num << " greater then 10\n";
	else // ���� ������� � ������� if() ������ �� ����������� ��������� ����� else �������.
		cout << num << " no great then 10\n";

		cout << "The end\n";*/
	// ������ �������������

	cout << "Enter width -> ";
	int width, height;
	cin >> width;
	cout << "Enter height -> ";
	cin >> height;

	if (width == 0 && height == 0)
		cout << "Input error\n";
	else
	
		if (width == 0 || width == height)
			cout << "Area of the square = " << height * height << "\n";
		else
		   if (height ==0)
			cout << "Area of the rectangle = " << width * width << "\n";
	
		   else
			cout << "Area = " << width * height << "\n";

	
	return 0;
}