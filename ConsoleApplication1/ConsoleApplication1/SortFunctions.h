#pragma once
#include "stdafx.h"
#include <iostream>

/** @file */


/// <summary>	Easy Swap function </summary>
///
/// <typeparam name="T">  	Generic type parameter. </typeparam>
/// <typeparam name="var">	Type of the variable. </typeparam>
/// <param name="begin">	The begin. </param>
/// <param name="end">  	The end. </param>
/// <param name="a">		A var to process. </param>
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

/// <summary>	Bubble sort. Algorithm </summary>
///
/// <typeparam name="T">  	Generic type parameter. </typeparam>
/// <typeparam name="var">	Type of the variable. </typeparam>
/// <param name="begin">	The begin. </param>
/// <param name="end">  	The end. </param>
/// <param name="a">		A var to process. </param>
template <typename T, typename var>
void bubble_sort(T begin, T end, var a) {
	--end;
	bool is_Swapped = true;
	while (is_Swapped) {
		is_Swapped = false;
		for (auto it = begin; it != end; ++it) {
			if (*it > *(it + 1)) {
				var temp = *it;
				*it = *(it + 1);
				*(it + 1) = temp;
				is_Swapped = true;
			}
		}
	}

}