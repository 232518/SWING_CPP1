#include <iostream>
using namespace std;

int main() {
	int coke, sam, fanta; 
	int c_n, s_n, f_n;
	int price;

	cout << "����� �̸��� �����Դϱ�? ";
	char name0[11]; //������ ������ ���ڿ��� �Է¹��� �� �ֵ��� 11byte�� ũ�⸦ �ο�
	cin.getline(name0, 11); //�̸��� �Է¹޾� name0�� ����
	cout << "�ݰ����ϴ�. " << name0 << "��\n\n"; //name0�� �Է¹��� ������ ����� �� �ֵ��� ��

	cout << "----------SWING 30----------\n";
	cout << "������ ���� �Է��� �����մϴ�.\n\n";

	cout << "�ݶ��� ���� : ";
	cin >> coke;

	cout << "��ټ��� ���� : ";
	cin >> sam;

	cout << "ȯŸ�� ���� : ";
	cin >> fanta;

	cout << "\n������ �Է����ּ���. \n\n";

	cout << "�ݶ� ���� : ";
	cin >> c_n;

	cout << "��ټ� ���� : ";
	cin >> s_n;

	cout << "ȯŸ ���� : ";
	cin >> f_n;

	cout << "----------------------------" << endl;

	price = coke * c_n + sam * s_n + fanta * f_n; //���ݰ� ������ ���ϰ� ���� ���� price�� ���� ����

	cout << "500���� ���ι޾� �� " << price-500 << "�� �Դϴ�.\n"; //����� price ������ ���ε� �� 500�� ���� ������ ����� ������ ���

	return 0;
}