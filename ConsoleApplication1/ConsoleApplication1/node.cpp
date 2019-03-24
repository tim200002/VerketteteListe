#include "stdafx.h"
#include "node.h"

template <typename T>
node<T>::node(T content, node* next)
{
	previous = nullptr;
	T* temp = new T;
	*temp = content;
	content_ptr = temp;
	this->next = next;
}

template<typename T>
node<T>::node(T content, node * next, node * previous)
{
	T* temp = new T;
	*temp = content;
	content_ptr = temp;
	this->next = next;
	this->previous = previous;
}

template <typename T>
node<T>::~node()
{
	std::cout << "Content fri gegeben"<<std::endl;
	delete content_ptr;
}

template <typename T>
node<T>* node<T>::get_next() {
	return next;
}

template <typename T>
void node<T>::set_content(T content) {
	*content_ptr = content;
}

template<typename T>
T& node<T>::get_content()
{
	return *content_ptr;
}

template class node<int>;