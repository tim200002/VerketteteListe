#pragma once


#include "forward_list.h"
#include "bidirectional_iterator.h"


template <typename T>
class bidrectional_list :
	public forward_list<T>
{
private:
	node<T> * end=nullptr;
public:
	bidrectional_list();
	~bidrectional_list();

	/**********************************************************************************************//**
	 * <summary> Adds a new node at the end of the list</summary>
	 *
	 * <remarks> Timli, 24/03/2019.</remarks>
	 *
	 * <param name="content"> The content.</param>
	 **************************************************************************************************/

	void push_back(T content);

	/**********************************************************************************************//**
	 * <summary> Gets the end of the list, returns iterator with nullptr as actual</summary>
	 *
	 * <remarks> Timli, 24/03/2019.</remarks>
	 *
	 * <returns> A bidirectional_iterator&lt;T&gt;</returns>
	 **************************************************************************************************/

	bidirectional_iterator<T> end_of_list();

	bidirectional_iterator<T> begin();

};

