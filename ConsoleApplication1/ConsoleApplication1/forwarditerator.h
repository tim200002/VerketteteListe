#pragma once


#include "node.h"
#include <iostream>


template<typename T>
class forwarditerator
{
private:
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

	T operator*() {
		return actual->get_content();
	}
};

