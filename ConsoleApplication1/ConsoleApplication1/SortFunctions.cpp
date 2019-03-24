#include "stdafx.h"
#include "SortFunctions.h"
#include "bidirectional_iterator.h"



template <typename T, typename var>
void Swap(T begin, T end, var a) {
	--end;
	while (1) {
		std::cout << "Durchgang" << std::endl;
		var temp = *begin;
		*begin = *end;
		*end = temp;
		--end;
		if (begin == end) break;
		++begin;
	}
}

template void Swap<bidirectional_iterator<int>, int>(bidirectional_iterator<int>, bidirectional_iterator<int>, int);