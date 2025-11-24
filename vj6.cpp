#include "container.h"


container::container(size_t initial_capacity)
	: data(nullptr), sz(0), cap(initial_capacity)
{
	if (cap > 0)
		data = new int[cap];

	std::cout << "Konstruktor (capacity=" << cap << ")\n";
}


container::container(const container& other)
	: data(nullptr), sz(other.sz), cap(other.cap)
{
	std::cout << "Copy konstruktor\n";
	if (cap > 0)
		data = new int[cap];

	for (size_t i = 0; i < sz; ++i)
		data[i] = other.data[i];
}


container::container(container&& other) noexcept
	: data(other.data), sz(other.sz), cap(other.cap)
{
	std::cout << "Move konstruktor\n";

	other.data = nullptr;
	other.sz = 0;
	other.cap = 0;
}


container::~container()
{
	std::cout << "Destruktor (capacity=" << cap << ", size=" << sz<< ")\n";
	delete[] data;
}


void container::reallocate(size_t new_capacity)
{
	int* new_data = new int[new_capacity];

	for (size_t i = 0; i < sz; ++i)
		new_data[i] = data[i];

	delete[] data;
	data = new_data;
	cap = new_capacity;
}


void container::push_back(int value)
{
	if (sz >=cap)
		reallocate(cap== 0 ? 1 : cap * 2);

	data[sz++] = value;
}


int container::at(size_t index) const
{
	if (index >= sz)
		throw std::out_of_range("indeks izvan granica");
	return data[index];
}

