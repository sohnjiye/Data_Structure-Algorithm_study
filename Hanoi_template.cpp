#include <iostream> 
using namespace std;

int cnt = 0; // 이동 횟수에 이용.

void Hanoi(int n, char from, char temp, char to)
// n : 원반개수, from : 원래 위치, temp : 임시 장소, to :목적지
{

	if (n == 1)
		cout << from << " " << to << endl;
	else
	{
		Hanoi(n - 1, from, to, temp);
		cout << from << " " << to << endl;
		Hanoi(n - 1, temp, from, to);
	}

}


void main()
{
	int n; //원반의 수

	cout << "원반의 갯수를 입력하세요 : ";
	cin >> n;
	cnt = pow(2, n) - 1;

	Hanoi(n, 'A', 'B', 'C');    // n개의 원반을 'A'에서 'C'로 이동

	cout << "전체 원반 이동 수(원반수 : " << n << ") = " << cnt << endl;
}