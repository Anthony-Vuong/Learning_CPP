#include "Dog.h"
#include <iostream>

std::string Dog::get_name(){
	return name;
}

void Dog::set_name(std::string n){
	name = n;
}

int Dog::get_age(){
	return age;
}

void Dog::set_age(int a){
	age = a;
}

int Dog::get_human_years(){
	return age*7;
}

void Dog::speak(){
	std::cout << "WOOF" << std::endl;
}