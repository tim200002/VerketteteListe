#pragma once
#include "node.h"
#include "forwarditerator.h"
template <typename T>
class forward_list
{
private:
	node<T>* first = nullptr;

public:
	forward_list();
	~forward_list();
	void push_front(T newOne);
	void delete_first();
	forwarditerator<T> begin();
	/*node<T>& operator[](int index) {
		forwarditerator<T> it = this->begin();
		node<T>* temp = it.at_pos(index);
		return *temp;
	}*/

	T& operator[](int index) {
		forwarditerator<T> it = this->begin();
		T& temp = it.get_value();
		return temp;
	}
};

