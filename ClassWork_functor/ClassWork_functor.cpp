
#include <iostream>
#include <vector>

class Min
{
private:
	int min;
public:
	Min()
	{
		min = INT_MAX;
	}

	void operator()(int obj)
	{
		if (obj < min)
		{
			min = obj;
		}
	}
	int getMin()
	{
		return min;
	}
};

int main()
{
	std::vector<int> test = { 1, 2, 3, 4, 5, 6, 7, 8, 9, -9 };
	Min min;
	for (auto it : test)
	{
		min(it);
	}
	std::cout << min.getMin() << '\n';
}