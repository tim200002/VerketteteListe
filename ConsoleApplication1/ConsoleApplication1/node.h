#pragma once
#include <iostream>
template<typename T>
class node
{
private:
	T * content_ptr;
	node* next;
public:
	node(T content, node* next);
	~node();
	node<T>* get_next();  //Adresse nächster node zurückgeben
	void set_content(T content);;  //Content_Ptr veränder
	T& get_content();

};

