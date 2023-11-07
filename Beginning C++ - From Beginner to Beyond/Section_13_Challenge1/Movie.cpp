#include "Movie.h"
#include <string>
#include <iostream>

// Constructor implementation
Movie::Movie(std::string name_val, std::string rating_val, int watched)
	:name{name_val}, rating{rating_val}, watch_count{watched}{
		
}

// Copy Constructor implementation
Movie::Movie(const Movie &source)
	:Movie(source.name, source.rating, source.watch_count){
		
}

// Destructor implementation
Movie::~Movie()
{
}

std::string Movie::get_name(){
	return name;
}
std::string Movie::get_rating(){
	return rating;
}
int Movie::get_watch_count(){
	return watch_count;
}

void Movie::increment_watch_count(){
	watch_count++;
}

void Movie::list_movie(){
	std::cout << name << std::endl;
	std::cout << rating << std::endl;
	std::cout << watch_count << std::endl;
}
