#include "stdafx.h"
#include "forward_list.h"


template <typename T>
forward_list<T>::forward_list()
{
}

template <typename T>
forward_list<T>::~forward_list()
{
}

template <typename T>
void forward_list<T>::push_front(T newOne) {
	node<T>* temp = new node<T>(newOne, first);
	first = temp;
}

template<typename T>
void forward_list<T>::delete_first()
{
	node<T>* temp = first->get_next();
	delete first;
	first = temp;
}

template<typename T>
forwarditerator<T> forward_list<T>::begin()
{
	forwarditerator<T> a(first);
	return a;
}

template class forward_list<int>;