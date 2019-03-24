#include "stdafx.h"
#include "bidirectional_iterator.h"


template <typename T>
bidirectional_iterator<T>::bidirectional_iterator(node<T>* actual, node<T>* previous)
	:forwarditerator<T>::forwarditerator(actual)
{
	this->previous = previous;
}

template <typename T>
bidirectional_iterator<T>::~bidirectional_iterator()
{
}

/**********************************************************************************************//**
 * <summary> Decrement operator. Jumps to one node in front</summary>
 *
 * <remarks> Timli, 24/03/2019.</remarks>
 **************************************************************************************************/

template<typename T>
void bidirectional_iterator<T>::operator--()
{
	if (previous != nullptr) {
		//forwarditerator<T>::actual = forwarditerator<T>::actual->get_previous();
		forwarditerator<T>::actual = previous;
		//Falls wir nicht am ersten sind
		previous = previous->get_previous();
	}
	// TODO: hier Rückgabeanweisung eingeben
}

template<typename T>
bidirectional_iterator<T> bidirectional_iterator<T>::operator-(int index)
{
	bidirectional_iterator<T> temp(forwarditerator<T>::actual, previous);
	for (int i = 0; i < index; ++i) {
		--temp;
	}
	return temp;
}

template<typename T>
void bidirectional_iterator<T>::operator++()
{
	if (forwarditerator<T>::actual != nullptr) {
		previous = forwarditerator<T>::actual;
		forwarditerator<T>::actual = forwarditerator<T>::actual->get_next();
	}
	else {
		std::cout << "zu spät" << std::endl;
	}

}

template<typename T>
bidirectional_iterator<T> bidirectional_iterator<T>::operator+(int index)
{
	bidirectional_iterator<T> temp(forwarditerator<T>::actual, previous);
	for (int i = 0; i < index; ++i) {
		++(temp);
	}
	return temp;
}

template<typename T>
bool bidirectional_iterator<T>::operator!=(bidirectional_iterator<T> other)
{
	return forwarditerator<T>::actual != other.actual;
}

template<typename T>
bool bidirectional_iterator<T>::operator==(bidirectional_iterator<T> other)
{
	return  forwarditerator<T>::actual == other.actual;
}


template class bidirectional_iterator<int>;