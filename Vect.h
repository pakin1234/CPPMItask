#pragma once
#pragma once
#include <iostream>

template <typename T>
class Vector
{
private:
	T* data;
	size_t number_elements;
	size_t capacity;

	void resize(size_t new_capacity) {
		//if (new_capacity <= capacity) ?? if (new_capacity < number_elements)
		//{
		//	return;
		//}
		T* new_data = new T[new_capacity];
		for (size_t i = 0; i < number_elements; i++)
		{
			new_data[i] = data[i];
		}
		delete[] data;
		data = new_data;
		capacity = new_capacity;
	}

	void add_elements(const Vector& other, Vector& result, size_t limit) const {
		for (size_t i = 0; i < limit; i++) {
			result.push_back(data[i] + other.data[i]);
		}
	}

	//void copy_elements(const Vector& source_vector, Vector& result, size_t start, size_t end) const {
	//	for (size_t j = start; j < end; j++)
	//	{
	//		result.push_back(source_vector.data[j]);
	//	}
	//}

	//void check_type(const T& value, const T& other_value) const {
	//	if (typeid(value) != typeid(other_value))
	//	{
	//		throw std::invalid_argument("Value must have the same type as vector");
	//	}
	//}

public:
	Vector() : data(nullptr), number_elements(0), capacity(0) {};

	Vector(const Vector& other) {
		number_elements = other.number_elements;
		capacity = other.capacity;
		data = new T[capacity];
		for (size_t i = 0; i < number_elements; i++)
		{
			data[i] = other.data[i];
		}
	}

	~Vector() {
		delete[] data;
	};


	// Adding elements
	void push_back(const T& value) {
		/*check_type(data[0], value);*/

		if (number_elements == capacity)
		{
			if (capacity == 0) {
				resize(1);
			}
			resize(capacity * 2);
		}
		data[number_elements++] = value;
	}

	// Deleting element
	void pull_back() {
		if (number_elements < 0)
		{
			throw std::out_of_range("No elements in vector");
		}
		--number_elements;
	}

	// Getting size of vector
	size_t get_number_elements() const {
		return number_elements;
	}

	// Getting element by index
	T& operator [] (size_t index) {
		if (index >= number_elements)
		{
			throw std::out_of_range("Index is out of range");
		}
		return data[index];
	}

	// Adding 2 vectors
	Vector operator + (const Vector& other) const {
		/*check_type(data[0], other.data[0]);*/

		Vector result;

		//if (number_elements > other.number_elements)
		//{
		//	add_elements(other, result, other.number_elements);
		//	copy_elements(*this, result, other.number_elements, number_elements);

		//}
		//else if (number_elements < other.number_elements)
		//{
		//	add_elements(other, result, number_elements);
		//	copy_elements(other, result, number_elements, other.number_elements);
		//}
		//else
		//{
		add_elements(other, result, number_elements);


		return result;
	}

	// Comparing 2 vectors
	bool operator == (const Vector& other) const {
		/*check_type(data[0], other.data[0]);*/

		if (number_elements != other.number_elements) {
			return false;
		}

		for (size_t i = 0; i < number_elements; i++)
		{
			if (data[i] != other.data[i]) {
				return false;
			}
		}
		return true;
	}

	// Assignment operator
	Vector& operator = (const Vector& other) {
		if (this == &other)
		{
			return *this;
		}

		if (capacity < other.number_elements)
		{
			delete[] data;
			capacity = other.number_elements;
			data = new T[capacity];
		}

		number_elements = other.number_elements;
		for (size_t i = 0; i < number_elements; i++)
		{
			data[i] = other.data[i];
		}

		return *this;
	}

	// Print vector
	void print_vector() const {
		if (number_elements == 0) {
			std::cout << "Vector is empty\n";
		}
		for (size_t i = 0; i < number_elements; i++)
		{
			std::cout << data[i] << " ";
		}
		std::cout << "\n";
	}
};
