#include "animal.h"

#include <string.h>
#include <iostream>
using namespace std;

class dog : public animal
{
public:
	void dog_details();
	string breed;
};
