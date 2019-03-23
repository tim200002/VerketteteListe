#include "stdafx.h"
#include "forwarditerator.h"
#include <iostream>

template <typename T>
forwarditerator<T>::forwarditerator(node<T>* actual)
	:actual(actual)
{
}

template <typename T>
forwarditerator<T>::~forwarditerator()
{
}
template <typename T>
void forwarditerator<T>::plus_one() {
	//if(actual->get_next!=nullptr)  //evtl. glaube aber nicht
	actual = actual->get_next();
}

template<typename T>
node<T>* forwarditerator<T>::at_pos(int index)
{
	node <T>* temp = actual;
	for (int i = 0; i < index; ++i) {
		if (temp->get_next() != nullptr) temp = temp->get_next();
		else {
			std::cout <<" Fehler" << std::endl;
			return temp;
		}
	}
	return temp;
}

template<typename T>
T& forwarditerator<T>::get_value()
{
	return actual->get_content();
}

template<typename T>
bool forwarditerator<T>::operator==(forwarditerator<T>& it)
{
	return actual == it.actual;
}

template<typename T>
bool forwarditerator<T>::operator!=(forwarditerator<T> it)
{
	return actual != it.actual;
}

template class forwarditerator<int>;