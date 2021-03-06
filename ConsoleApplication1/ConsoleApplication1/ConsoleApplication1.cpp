// ConsoleApplication1.cpp: Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "stdafx.h"
#include <iostream>
#include"forward_list.h"
#include "bidrectional_list.h"
#include"SortFunctions.h"

/**********************************************************************************************//**
 * \fn	int main()
 *
 * \brief	This class performs important functions
 *
 * \author	Tim Lindenau
 * \date	24/03/2019
 *
 * \returns	Exit-code for the process - 0 for success, else an error code.
 **************************************************************************************************/

int main(void)
{
	bidrectional_list<int> lst1;
	forward_list<int> lst;
	/*lst.push_front(1);
	lst.push_front(2);
	lst.push_front(3);
	lst.push_front(4);*/
	lst1.push_back(1);
	lst1.push_back(3);
	lst1.push_back(2);
	lst1.push_back(4);
	//auto it = lst.begin();
	//int temp = (it.at_pos(3))->get_content();
	/*it = it->get_next();*/
	//lst[2].set_content(10);
	//lst[2] = 5;
	//int b = lst[2];
	
	//int temp=it.value();
	/*for (auto it = lst.begin(); it != lst.end(); it=it+1) {
		std::cout << *it << std::endl;
	}*/
	Swap(lst1.begin(), lst1.end_of_list(),1);
	bubble_sort(lst1.begin(), lst1.end_of_list(), 1);
	/*for(auto it = lst1.end_of_list(); it!=lst1.begin(); )
		{
		--it;
	std::cout << *it << std::endl;
		}*/
	for (auto it = lst1.begin(); it != lst1.end_of_list(); it=it+1) {
		std::cout << *it << std::endl;
	}


	//it = it + 10;
	int a;
	std::cin >> a;
    return 0;
}

