#ifndef CONTAINER_H
#define CONTAINER_H

#include <iostream>

class container {
private:
	int* data;
	size_t sz;
	size_t cap;

public:
	container(size_t initial_capacity = 0); //Konst
	container(const container& other);//copy
	container(container&& other)noexcept;//move
	~container();//dekonst

	void push_back(int value);
	size_t size() const { return sz; }
	size_t capacity() const { return cap; }
	int at(size_t index)const;
	void clear();

private:
	void reallocate(size_t new_capacity);


};
#endif