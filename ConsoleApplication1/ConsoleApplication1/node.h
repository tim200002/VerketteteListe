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
	node<T>* get_next();  //Adresse n�chster node zur�ckgeben
	void set_content(T content);;  //Content_Ptr ver�nder
	T& get_content();

};

