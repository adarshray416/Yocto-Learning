#include<iostream>
#include<string.h>
using namespace std;

#include "animal.h"
#include "dog.hpp"
int main() {
	animal a1;
	dog d1;

	a1.species= "Dog";
	d1.breed = "Labrador";
	a1.display_details();
	cout << "Name is " << a1.species <<"\n";
	d1.dog_details();
	cout << "Breed is " << d1.breed <<"\n";

	
return 0;
}
