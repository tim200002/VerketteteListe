#include "stdafx.h"
#include "bidrectional_list.h"

template <typename T>
bidrectional_list<T>::bidrectional_list()
{
}

template <typename T>
bidrectional_list<T>::~bidrectional_list()
{
}

template<typename T>
void bidrectional_list<T>::push_back(T content)
{
	if (forward_list<T>::first == nullptr) {
		forward_list<T>::first = new node<T>(content, nullptr, nullptr);
		end = forward_list<T>::first;
	}

	else {
		node<T>* temp = end;
		end = new node<T>(content, nullptr, temp);
		temp->set_next(end);
	}
}

template<typename T>
bidirectional_iterator<T> bidrectional_list<T>::end_of_list()
{
	bidirectional_iterator<T> temp(nullptr, end);
	return temp;
}

template<typename T>
bidirectional_iterator<T> bidrectional_list<T>::begin()
{
	bidirectional_iterator<T> temp(forward_list<T>::first, nullptr);
	return temp;
	
}

template class bidrectional_list<int>;