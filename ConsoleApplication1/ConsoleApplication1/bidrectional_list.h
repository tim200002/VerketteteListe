#pragma once


#include "forward_list.h"
template <typename T>
class bidrectional_list :
	public forward_list<T>
{
public:
	bidrectional_list();
	~bidrectional_list();
};

