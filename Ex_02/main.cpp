#include <iostream>
#include <ctime>
#include <array>

using namespace std;

inline double calc_volume(double radius)
{
	return (4.0 / 3.0 * 3.14 * pow(radius, 3));
}

int main()
{
	// p.160, 2�� ����
	double r;
	cout << "�������� �Է��Ͻÿ�: ";
	cin >> r;
	cout << "���� ���Ǵ� " << calc_volume(r) << endl;
	return 0;

	// p.162, 9�� ����
	srand(time(NULL));
	int dice1 = rand() % 6 + 1;
	int dice2 = rand() % 6 + 1;
	int sum = dice1 + dice2;
	cout << "������� �ֻ���:  " << dice1 << "+" << dice2 << "=" << sum << endl;
	if (sum == 7 || sum == 11)
		cout << "����ڰ� �̰���ϴ�." << endl;
	else if (sum == 2 || sum == 3 || sum == 12)
		cout << "����ڰ� �����ϴ�." << endl;
	return 0;


	// p.164, 13�� ����
	char password[100];
	bool upper = false, lower = false, number = false;
	cout << "��ȣ�� �Է��Ͻÿ�: ";
	cin >> password;

	for (int i = 0; i < size(password); i++)
	{
		if (password[i] >= 65 && password[i] <= 90)				// �빮�� �ƽ�Ű�ڵ�
			upper = true;
		else if (password[i] >= 97 && password[i] <= 122)		// �ҹ��� �ƽ�Ű�ڵ�
			lower = true;
		else if (password[i] >= 48 && password[i] <= 57)		// ���� �ƽ�Ű�ڵ�
			number = true;
	}
	if (upper && lower && number)
		cout << "�����մϴ�." << endl;
	else
		cout << "�������� �ʽ��ϴ�." << endl;
	return 0;
}