#pragma once
#include "stdafx.h"
#include <iostream>

/**********************************************************************************************//**
 * <summary> Swaps an List works only with bidirectional iterator.</summary>
 *
 * <typeparam name="T">   Parameter of type of iterators.</typeparam>
 * <typeparam name="var"> Type of the variable.</typeparam>
 * <param name="begin"> The begin, first iterator.</param>
 * <param name="end">   The end. last iterator.</param>
 **************************************************************************************************/

template <typename T, typename var>
void Swap(T begin, T end, var a) {
	--end;
	while(1) {
		std::cout << "Durchgang" << std::endl;
		var temp = *begin;
		*begin = *end;
		*end = temp;
		--end;
		if (begin == end) break;
		++begin;
	}
}

/**********************************************************************************************//**
 * <summary> Bubble sorts with order greater, nees bidirectional iterator</summary>
 *
 * <typeparam name="T">   Generic type parameter. Type of Iterators</typeparam>
 * <typeparam name="var"> Type of the variable.</typeparam>
 * <param name="begin"> The begin. Iterator on front</param>
 * <param name="end">   The end. Iterator one after last ELement</param>
 **************************************************************************************************/

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