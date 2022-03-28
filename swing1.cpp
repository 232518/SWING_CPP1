#include <iostream>
using namespace std;

int main() {
	int coke, sam, fanta; 
	int c_n, s_n, f_n;
	int price;

	cout << "당신의 이름은 무엇입니까? ";
	char name0[11]; //공백을 포함한 문자열을 입력받을 수 있도록 11byte의 크기를 부여
	cin.getline(name0, 11); //이름을 입력받아 name0에 저장
	cout << "반갑습니다. " << name0 << "님\n\n"; //name0에 입력받은 내용을 출력할 수 있도록 함

	cout << "----------SWING 30----------\n";
	cout << "음료의 가격 입력을 시작합니다.\n\n";

	cout << "콜라의 가격 : ";
	cin >> coke;

	cout << "삼다수의 가격 : ";
	cin >> sam;

	cout << "환타의 가격 : ";
	cin >> fanta;

	cout << "\n개수를 입력해주세요. \n\n";

	cout << "콜라 수량 : ";
	cin >> c_n;

	cout << "삼다수 수량 : ";
	cin >> s_n;

	cout << "환타 수량 : ";
	cin >> f_n;

	cout << "----------------------------" << endl;

	price = coke * c_n + sam * s_n + fanta * f_n; //가격과 수량을 곱하고 각각 더해 price에 값을 저장

	cout << "500원을 할인받아 총 " << price-500 << "원 입니다.\n"; //저장된 price 값에서 할인된 값 500을 빼는 연산을 사용해 최종값 출력

	return 0;
}