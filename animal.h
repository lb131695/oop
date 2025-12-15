#include <iostream>
#include <string>
#include <vector>

class Animal {
protected:
	std::string ime;
	int hrana;
	std::string vrsta;
	Animal(std::string ime, int hrana, std::string vrsta);
public:

	virtual ~Animal() = default;
	virtual std::string getSpecies()const = 0;
	virtual double getDailyFood()const = 0;
	virtual std::string getName()const = 0;
}
