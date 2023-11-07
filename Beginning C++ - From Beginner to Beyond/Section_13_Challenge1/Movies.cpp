#include "Movies.h"
#include "Movie.h"
#include <string>
#include <iostream>

unsigned int Movies::num_movies{0};

Movies::Movies()
{
	++num_movies;
	
}

Movies::~Movies()
{
}

int unsigned Movies::get_num_movies(){
	return num_movies;
}

void Movies::add_movie(Movie m){
	movie_collection.push_back(m);
}

void Movies::list_movies(){
	for(unsigned int i{0}; i < num_movies; i++){
		std::cout << movie_collection.at(0).get_name() << std::endl;
		std::cout << movie_collection.at(0).get_rating() << std::endl;
		std::cout << movie_collection.at(0).get_watch_count() << std::endl;
	}
	std::cout << std::endl;
}