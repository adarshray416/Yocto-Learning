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

	#ifdef DEBUG_1
		cout << "Dog is barking, Debug 1";
	#elif DEBUG_2
		cout << "Dog is barking, Debug 2";
	#elif DEBUG_3
		cout << "Dog is barking, Debug 3";
	#endif
return 0;
}
