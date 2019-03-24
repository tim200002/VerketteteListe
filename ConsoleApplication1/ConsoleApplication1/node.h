#pragma once
#include <iostream>
template<typename T>
class node
{
private:
	T * content_ptr;
	node* next;
	node* previous;
public:
	node(T content, node* next);
	node(T content, node* next, node* previous);
	~node();
	node<T>* get_next();  //Adresse nächster node zurückgeben
	void set_content(T content);;  //Content_Ptr veränder
	T& get_content();

	node<T>* get_previous() {
		return previous;
	}

	void set_next(node* t) {
		next = t;
	}

	void set_previous(node* t) {
		previous = t;
	}

};

