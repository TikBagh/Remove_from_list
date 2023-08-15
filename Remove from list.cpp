#include <iostream>
#include <list>


void check(std::list<int>& List, int n)
{
	auto it = List.begin();

	while (it != List.end())
	{

		if (*it < n)
		{
			it = List.erase(it);

		}
		else {
			++it;
		}
	}
}


int main()
{
	std::list<int> List = { 10, 5, 8, 3, 12, 7 };
	int n = 7;

	check(List, n);

	for (int element : List) {
		std::cout << element << " ";
	}

	return 0;

}