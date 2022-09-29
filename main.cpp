#include <iostream>

int Sigma(int (* f)(int x), int start, int end)
{
	// ���� f�� ��ü�� �ٷ� *f, 
	// �� �Լ��� �����ͷ� �ۿ��Ѵ�.

	// int * f(int x) �ʹ� �ٸ���

	int sum{};

	for (int i = start; i <= end; i++)
	{
		sum += f(i);
	}

	return sum;
}

int f(int x)
{
	return x;
}

int main()
{
	std::cout << &f << std::endl;
	std::cout << f << std::endl;
	
	std::cout << Sigma(f, 1, 10) << std::endl;
}

// &�� ��� �ּҰ� ����� ���´�
// �Լ��� ������ó�� �ۿ��Ѵ� (�迭�� ���)