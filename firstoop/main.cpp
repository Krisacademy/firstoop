#include<iostream>
using namespace std;

class Point
{
private: // state (����������, �������� �������)
	int x;
	int y;
public:  // interface
	void Print()
	{
		cout << "X: " << x << "  Y: " << y << endl;
	}
	void Init(int a, int b)
	{
		x = a;
		y = b;
	}
	void Init()
	{
		x = rand() % 20;
		y = rand() % 10;
	}

	///  ������ ���������

	int GetX() // getter ���������
	{
		return x;
	}
	void SetX(int a) // setter  �����������
	{
		if(a > 0)
		{
		   x = a;
		}		
	}
};
int main()
{
	Point a;
	a.Init(10, 20);
	a.Print();
	a.SetX(-5);
	cout <<"X =: "<< a.GetX() << endl;

	a.SetX(5);
	cout << "X =: " << a.GetX() << endl;
	

}