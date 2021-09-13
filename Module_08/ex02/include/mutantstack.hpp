#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>

template<class T>
class MutantStack : public std::stack<T> {
public:
	typedef typename std::stack<T>::container_type::iterator iterator;
	typedef typename std::stack<T>::container_type::const_iterator const_iterator;
	typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
	typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;
    MutantStack();
    MutantStack(const MutantStack& other);
    virtual ~MutantStack();

    MutantStack<T>& operator=(const MutantStack<T>& other);

	iterator begin();
	const_iterator begin() const;
	iterator end();
	const_iterator end() const;
	reverse_iterator rbegin();
	const_reverse_iterator rbegin() const;
	reverse_iterator rend();
	const_reverse_iterator rend() const;
};


template<class T>
MutantStack<T>::MutantStack() : std::stack<T>() {}

template<class T>
MutantStack<T>::MutantStack(const MutantStack& other)
	: std::stack<T>(other)
{}

template<class T>
MutantStack<T>::~MutantStack() {}


template<class T>
MutantStack<T>& MutantStack<T>::operator=(const MutantStack<T>& other) {
	if (this == &other)
		return *this;
	this->c = other.c;
	return *this;
}

template<class T>
typename MutantStack<T>::iterator MutantStack<T>::begin() {
	return this->c.begin();
}

template<class T>
typename MutantStack<T>::const_iterator MutantStack<T>::begin() const {
	return this->c.begin();
}

template<class T>
typename MutantStack<T>::iterator MutantStack<T>::end() {
	return this->c.end();
}

template<class T>
typename MutantStack<T>::const_iterator MutantStack<T>::end() const {
	return this->c.end();
}

template<class T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::rbegin() {
	return this->c.rbegin();
}

template<class T>
typename MutantStack<T>::const_reverse_iterator MutantStack<T>::rbegin() const {
	return this->c.rbegin();
}

template<class T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::rend() {
	return this->c.rend();
}

template<class T>
typename MutantStack<T>::const_reverse_iterator MutantStack<T>::rend() const {
	return this->c.rend();
}

#endif