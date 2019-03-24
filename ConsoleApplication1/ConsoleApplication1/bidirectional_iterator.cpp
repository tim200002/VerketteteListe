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

	forwarditerator<T>::actual = forwarditerator<T>::actual->get_previous();
	// TODO: hier Rückgabeanweisung eingeben
}

template<typename T>
bool bidirectional_iterator<T>::operator!=(bidirectional_iterator<T> other)
{
	return forwarditerator<T>::actual != other.actual;
}


template class bidirectional_iterator<int>;