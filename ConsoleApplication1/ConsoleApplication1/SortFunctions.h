#pragma once
#include "stdafx.h"
#include <iostream>
template <typename T>
void Swap(T begin, T end) {
	while (1) {
		//std::cout << 1 << std::endl;
		--end;
		int temp = *begin;
		*begin = *end;
		*end = temp;
		++begin;
		if (begin == end) break;
		--end;
	}
}