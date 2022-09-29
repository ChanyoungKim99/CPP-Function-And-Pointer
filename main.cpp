#include <iostream>

int Sigma(int (* f)(int x), int start, int end)
{
	// 실제 f의 정체가 바로 *f, 
	// 즉 함수도 포인터로 작용한다.

	// int * f(int x) 와는 다르다

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

// &이 없어도 주소가 제대로 나온다
// 함수도 포인터처럼 작용한다 (배열과 비슷)