#include <stdio.h>

bool findElem(int[] _array, size_t _size, int _elem)
{
	for(int indx = 0; indx < _size; ++indx)
	{
		if(_array[indx] == _elem)
			return true;
	}

	return false;
}

int main(int argc, char** argv)
{

	int[] array = {1, 2, 3, 5, 6, 4 2, 3};
	int searchable = 10;
	printf("%d %s in array",
			searchable,
			findElem(array, sizeof(array), searchable) ? "exist" : "doesn't exist");

	return 0;
}
