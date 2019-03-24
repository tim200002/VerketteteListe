#pragma once
#include "node.h"
#include "forwarditerator.h"
template <typename T>


class forward_list
{
protected:

	node<T>* first = nullptr;

public:

	forward_list();
	~forward_list();

	/**********************************************************************************************//**
	 * <brief> Pushes a front</brief>
	 *
	 * <remarks> Timli, 23/03/2019.</remarks>
	 *
	 * <param name="newOne"> New node is initialized with .</param>
	 *
	 * ### <author> Timli</author>
	 *
	 * ### <date> 23/03/2019</date>
	 **************************************************************************************************/

	void push_front(T newOne);

	/**********************************************************************************************//**
	 * <brief> Deletes the first node from the list</brief>
	 *
	 * <remarks> Timli, 23/03/2019.</remarks>
	 *
	 * ### <author> Timli</author>
	 *
	 * ### <date> 23/03/2019</date>
	 **************************************************************************************************/

	void delete_first();

	/**********************************************************************************************//**
	 * <brief> returns an iterator object with the adress of the beginning of the list as actual</brief>
	 *
	 * <remarks> Timli, 23/03/2019.</remarks>
	 *
	 * <returns> A forwarditerator&lt;T&gt;</returns>
	 **************************************************************************************************/

	forwarditerator<T> begin();

	/**********************************************************************************************//**
	 * <brief> returns an iterator object with the adress of the beginning of the end(nullptr) of the list as actual</brief>
	 *
	 * <remarks> Timli, 23/03/2019.</remarks>
	 *
	 * <returns> A forwarditerator&lt;T&gt;</returns>
	 **************************************************************************************************/

	forwarditerator<T> end();

	

	T& operator[](int index) {
		forwarditerator<T> it = this->begin();
		it = it + index;
		T& temp = it.get_value();
		return temp;
	}
};

