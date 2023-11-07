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
