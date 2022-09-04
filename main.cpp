#include<iostream>
#include<map>
#include<string>
#include<vector>
#include<list>

int fibonacci(const int n)
{
	if (n == 0)
	{
		return 1;
	}

	std::vector<int64_t> table(n + 1);
	table[1] = 1;

	for(int i = 2; i <= n; ++i)
	{
		table[i] = table[i - 1] + table[i - 2];
	}

	return table[n];
}

int Fibonacci(int num, std::map<int,int>& answer)
{
	if (answer[num] == 1)
		return answer[num];

	if (num < 3)
		return 1;

	answer[num] = Fibonacci(num - 1,answer) + Fibonacci(num - 2,answer);

	return answer[num];
}

int main()
{

	std::map<int, int> Answer;
	
	std::cout << Fibonacci(6, Answer) << std::endl;
	std::cout << fibonacci(9);

}
