#include <iostream>
#include <vector>
#include <algorithm>

void isElemExist(const std::vector<int>& _array, int _elem)
{
	return std::find(_array.cbegin(), _array.cend(), _elem) != _array.cend();
}

int main(int argc, char** argv)
{
	return 0;
}
