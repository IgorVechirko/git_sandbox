#include <iostream>
#include <vector>
#include <algorithm>

void isElemExist(const std::vector<int>& _array, int _elem)
{
	auto findIt = std::find(_array.cbegin(), _array.cend(), _elem);
	return findIt != _array.cend();
}

int main(int argc, char** argv)
{
	return 0;
}
