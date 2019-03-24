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

	bidirectional_iterator<T> operator-(int index);

	void operator++();
	bidirectional_iterator<T> operator+(int index);

	bool operator!=(bidirectional_iterator<T> other);

	bool operator==(bidirectional_iterator<T> other);
};

