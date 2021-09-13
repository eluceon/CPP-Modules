#include "inc.hpp"

void	initData(Data *data) {
	data->i = 5;
	data->f = 7.8f;
	data->d = 19.74;
	data->c = 'A';
	data->string = "Test string";
}

uintptr_t serialize(Data* ptr) {
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw) {
	return reinterpret_cast<Data *>(raw);
}

int	main() {
	Data		data;
	Data		*deserializedData;

	uintptr_t	raw;

	initData(&data);

	std::cout << "==============Before Serialization============" << std::endl;
	std::cout << "&data = " << &data << std::endl;
	std::cout << "data.i = " << data.i << std::endl;
	std::cout << "data.f = " << data.f << std::endl;
	std::cout << "data.d = " << data.d << std::endl;
	std::cout << "data.c = " << data.c << std::endl;
	std::cout << "data.string = " << data.string << std::endl;
	std::cout << std::endl;


	raw = serialize(&data);
	
	std::cout << "==============After Serialization=============" << std::endl;
	std::cout << "Serialized raw = " << raw << std::endl;
	std::cout << "&raw = " << &raw << std::endl;
	std::cout << std::endl;


	deserializedData = deserialize(raw);
	std::cout << "=============After Deserialization============" << std::endl;
	std::cout << "&deserializedData = " << deserializedData << std::endl;
	std::cout << "deserializedData->i = " << deserializedData->i << std::endl;
	std::cout << "deserializedData->f = " << deserializedData->f << std::endl;
	std::cout << "deserializedData->d = " << deserializedData->d << std::endl;
	std::cout << "deserializedData->c = " << deserializedData->c << std::endl;
	std::cout << "deserializedData->string = " << deserializedData->string << std::endl;
	return 0;
}