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

	/// <summary>	Equality operator. Returns true if both iterators point to same node </summary>
	///
	/// <remarks>	Tim Lindenau, 24/03/2019. </remarks>
	///
	/// <param name="it">	[in,out] The iterator. </param>
	///
	/// <returns>	True if the parameters are considered equivalent. </returns>
	bool operator==(forwarditerator<T>& it);

	/// <summary>	Inequality operator. Returns true if both iterators dont't show to same node </summary>
	///
	/// <remarks>	Tim Lindenau, 24/03/2019. </remarks>
	///
	/// <param name="it">	The iterator. </param>
	///
	/// <returns>	True if the parameters are not considered equivalent. </returns>
	bool operator!=(forwarditerator<T> it);

	/// <summary>	Increment operator. Jumps to next node </summary>
	///
	/// <remarks>	Tim Lindenau, 24/03/2019. </remarks>
	void operator++() {
		actual = actual->get_next();
	}

	/// <summary>	Addition operator. Moves iterator index steps in positive driection </summary>
	///
	/// <remarks>	Tim Lindenau, 24/03/2019. </remarks>
	///
	/// <param name="index">	How many steps. </param>
	///
	/// <returns>	The same object </returns>
	forwarditerator& operator+(int index) {
		for (int i = 0; i < index; ++i) {
			if(actual!=nullptr)
			++(*this);
		}
		return (*this);
	}

};

