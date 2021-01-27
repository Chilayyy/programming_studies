#include <iostream>
#include <vector>
#include <string>
#include "Hair.h"
using namespace std;


Hair::Hair (string hair)
{
	if(hair == "mohawk")
	{
		this->texture = "sleak";
		this->color = "any";
		this->swag = false;
	}

	else if(hair == "mullet")
	{
		this->texture = "sleak";
		this->color = "any";
		this->swag = true;
	}

	else if(hair == "brunette")
	{
		this->texture = "any";
		this->color = "brown";
		this->swag = true;
	}

	else if(hair == "bald")
	{	
		this->texture = "smooth";
		this->color = "none";
		this->swag = true;
	}
}

