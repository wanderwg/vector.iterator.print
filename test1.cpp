#include <iostream>
#include <vector>
using namespace std;

void PrintVector(const vector<int>& v)
{
	vector<int>::const_iterator it = v.begin();
	while (it != v.end())
	{
		cout << *it << " ";
		++it;
	}
	cout << endl;
}

int main2()
{
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);

	//ʹ�õ��������б�����ӡ
	vector<int>::iterator it = v.begin();
	while (it != v.end())
	{
		cout << *it << " ";
		++it;
	}
	cout << endl;

	//ʹ�õ����������޸�
	it = v.begin();
	while (it != v.end())
	{
		*it *= 2;
		++it;
	}

	//ʹ�÷�����������б����ٴ�ӡ
	vector<int>::reverse_iterator rit = v.rbegin();
	while (rit != v.rend())
	{
		cout << *rit << " ";
		++rit;
	}
	cout << endl;

	PrintVector(v);

	return 0;
}