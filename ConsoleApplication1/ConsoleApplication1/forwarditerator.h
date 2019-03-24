#pragma once


#include "node.h"
#include <iostream>


template<typename T>
class forwarditerator
{
protected:
	node<T>* actual;
public:
	forwarditerator(node<T>* actual);
	~forwarditerator();
	void plus_one();
	node<T>* at_pos(int index);
	T& get_value();
	node<T>* get_Actual() {
		return actual;
	}

	T& operator*() {
		return actual->get_content();
	}

	/**********************************************************************************************//**
	 * <brief> Equality operator</brief>
	 *
	 * <remarks> Timli, 23/03/2019.</remarks>
	 *
	 * <param name="it"> [in,out] The iterator.</param>
	 *
	 * <returns> True if both iterators point so the same node.</returns>
	 **************************************************************************************************/

	bool operator==(forwarditerator<T>& it);

	/**********************************************************************************************//**
	 * <brief> Inequality operator</brief>
	 *
	 * <remarks> Timli, 23/03/2019.</remarks>
	 *
	 * <param name="it"> [in,out] The iterator.</param>
	 *
	 * <returns> True if both iteratorsa point to different nodes.</returns>
	 **************************************************************************************************/

	bool operator!=(forwarditerator<T> it);

	/**********************************************************************************************//**
	 * <brief> Increments operator so actual is next Element</brief>
	 *
	 * <remarks> Timli, 23/03/2019.</remarks>
	 **************************************************************************************************/

	void operator++() {
		actual = actual->get_next();
	}

	/**********************************************************************************************//**
	 * <brief> Moves iterator index places in positive direction stops at last node</brief>
	 *
	 * <remarks> Timli, 23/03/2019.</remarks>
	 *
	 * <param name="index"> Zero-based index of the.</param>
	 *
	 * <returns> The result of the operation.</returns>
	 **************************************************************************************************/

	forwarditerator& operator+(int index) {
		for (int i = 0; i < index; ++i) {
			if(actual!=nullptr)
			++(*this);
		}
		return (*this);
	}

};

