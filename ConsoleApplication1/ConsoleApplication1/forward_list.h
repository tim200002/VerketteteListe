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
	 * \author	Tim Lindenau
	 * \date	24/03/2019
	 *
	 * \param	newOne	New node is initialized with things
	 *
	 * ### remarks	Timli, 23/03/2019.
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

//comment maybe
	forwarditerator<T> begin();


	forwarditerator<T> end();

	
	///<summary>
	///This class performs important functions
	///</summary>
	T& operator[](int index) {
		forwarditerator<T> it = this->begin();
		it = it + index;
		T& temp = it.get_value();
		return temp;
	}
};

