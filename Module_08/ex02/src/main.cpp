#include "mutantstack.hpp"

#include <iostream>
#include <list>


int	main() {
	MutantStack<int> myStack;
	for (int i = 0; i < 30; ++i) {
		myStack.push(i);
	}

	std::cout << "is empty: " << myStack.empty() << std::endl;
	std::cout << "size: " << myStack.size() << std::endl;
	std::cout << "top: " << myStack.top() << std::endl;

	std::cout << "\n================iterator==============" << std::endl;
	MutantStack<int>::iterator iter = myStack.begin();
	MutantStack<int>::iterator itEnd = myStack.end();

	while (iter != itEnd) {
		std::cout << *iter << " ";
		if (*iter % 2)
			++iter;
		else
			iter++;	
	}
	--iter;
	iter--;
	std::cout << *iter;

	std::cout << "\n\n================const_iterator==============" << std::endl;
	MutantStack<int>::const_iterator itConst = myStack.begin();
	MutantStack<int>::const_iterator itConstEnd = myStack.end();
	while (itConst != itConstEnd) {
		std::cout << *itConst << " ";
		if (*itConst % 2)
			++itConst;
		else
			itConst++;	
	}
	--itConst;
	itConst--;
	std::cout << *itConst;

	std::cout << "\n\n================reverse_iterator==============" << std::endl;
	MutantStack<int>::reverse_iterator itReverse = myStack.rbegin();
	MutantStack<int>::reverse_iterator itReverseEnd = myStack.rend();

	while (itReverse != itReverseEnd) {
		std::cout << *itReverse << " ";
		if (*itReverse % 2)
			++itReverse;
		else
			itReverse++;	
	}
	--itReverse;
	itReverse--;
	std::cout << *itReverse;

	std::cout << "\n\n================const_reverse_iterator==============" << std::endl;
	MutantStack<int>::const_reverse_iterator itConstReverse = myStack.rbegin();
	MutantStack<int>::const_reverse_iterator itConstReverseEnd = myStack.rend();

	while (itConstReverse != itConstReverseEnd) {
		std::cout << *itConstReverse << " ";
		if (*itConstReverse % 2)
			++itConstReverse;
		else
			itConstReverse++;	
	}
	--itConstReverse;
	itConstReverse--;
	std::cout << *itConstReverse;
	std::cout << std::endl;

	std::cout << "\n\n================copy==============" << std::endl;
	MutantStack<int> copyMyStack;
	copyMyStack = myStack;
	std::cout << "is empty: " << copyMyStack.empty() << std::endl;
	std::cout << "size: " << copyMyStack.size() << std::endl;
	std::cout << "top: " << copyMyStack.top() << std::endl;

	std::cout << "\n\n================Subject tests==============" << std::endl;
	std::cout << "\nMutantStack" << std::endl;

	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);

	std::cout << "\nlist" << std::endl;
	std::list<int> mList;
	mList.push_back(5);
	mList.push_back(17);
	std::cout << mList.back() << std::endl;
	mList.pop_back();
	std::cout << mList.size() << std::endl;
	mList.push_back(3);
	mList.push_back(5);
	mList.push_back(737);
	//[...]
	mList.push_back(0);
	std::list<int>::iterator itList = mList.begin();
	std::list<int>::iterator itListEnd = mList.end();
	++itList;
	--itList;
	while (itList != itListEnd)
	{
		std::cout << *itList << std::endl;
		++itList;
	}


	return 0;
}