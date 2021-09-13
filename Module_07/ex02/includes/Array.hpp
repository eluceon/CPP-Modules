#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <exception>

template <class T>
class Array
{

public:
	Array(void);
	Array(size_t length);
	Array(const Array<T> &other);
	~Array();

	class IndexOutOfRangeException : public std::exception {
	public:
		virtual const char* what() const throw();
	};

	Array& operator=(const Array<T> &other);
	T& operator[](size_t idx);
	const T& operator[](size_t idx) const;


	void erase();
	size_t size(void) const;
	void display(void) const;

private:
	size_t	_length;
	T		*_array;
};


template<typename T>
Array<T>::Array(void) : _length(0), _array(NULL) {}


template<typename T>
Array<T>::Array(size_t length) : _length(length) {
	_array = new T[length];
}

template<typename T>
Array<T>::Array(const Array<T> &other) {
	if (other._array) {
		this->_length = other._length;
		this->_array = new T[_length];
		for (size_t i = 0; i < _length; ++i)
			this->_array[i] = other._array[i];
	} else {
		this->_array = NULL;
		this->_length = 0;
	}
}

template<typename T>
Array<T>::~Array() {
	delete[] _array;
}

template<typename T>
const char* Array<T>::IndexOutOfRangeException::what() const throw() {
	return "Exception: index is out of range";
}

template<typename T>
Array<T> &Array<T>::operator=(const Array<T> &other) {
	if (&other == this)
		return *this;
	if (_array)
		erase();
	if (other._array) {
		this->_length = other._length;
		this->_array = new T[_length];
		for (size_t i = 0; i < _length; ++i)
			this->_array[i] = other._array[i];
	}
	return *this;
}

template<typename T>
T& Array<T>::operator[](size_t idx) {
	if (idx >= _length)
		throw IndexOutOfRangeException();
    return _array[idx];
}

template<typename T>
const T& Array<T>::operator[](size_t idx) const {
	if (idx >= _length)
		throw IndexOutOfRangeException();
    return _array[idx];
}

template<typename T>
void Array<T>::erase()
{
	delete[] _array;
    _array = NULL;
    _length = 0;
}

template<typename T>
size_t Array<T>::size(void) const {
	return _length;
}

template<typename T>
void Array<T>::display(void) const {
	for (size_t i = 0; i < _length; ++i)
		std::cout << _array[i] << " ";
	std::cout << std::endl;
}

#endif