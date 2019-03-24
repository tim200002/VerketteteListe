#pragma once
#include "forwarditerator.h"

template <typename T>
class bidirectional_iterator :
	public forwarditerator<T>
{
private:
	node<T>* previous;
public:
	bidirectional_iterator(node<T>* actual, node<T>* previous);
	~bidirectional_iterator();

	void operator--();

	bool operator!=(bidirectional_iterator<T> other);
};
