#include "Movies.h"
#include "Movie.h"
#include <string>
#include <iostream>
#include <algorithm>



Movies::Movies()
{
	
	
}

Movies::~Movies()
{
}

void Movies::increment_movie_count(std::string movie_name){
	int found = find_movie(movie_name);
	if(find_movie(movie_name) != -1){
		movie_collection.at(found).increment_watch_count();
	}
	else{
		std::cout << "////////////////////////////////////////////////////" << std::endl;
		std::cout << movie_name << " is NOT in the list!" << std::endl;
		std::cout << "////////////////////////////////////////////////////" << std::endl;
	}
}


int Movies::find_movie(std::string movie_name){
	unsigned int i{0};
	while(i < get_num_movies()){
		if(movie_collection.at(i).get_name() == movie_name){
			return i;
		}
		i++;
	}	
	return -1;
}


void Movies::add_movie(Movie m){
	
	if(find_movie(m.get_name()) != -1){
		std::cout << "////////////////////////////////////////////////////" << std::endl;
		std::cout << m.get_name() << " is already in the list!" << std::endl;
		std::cout << "////////////////////////////////////////////////////" << std::endl;
		std::cout << std::endl;
	}
	else{
		movie_collection.push_back(m);
		++num_movies;
	}
}

void Movies::display_movies()const{
	std::cout << "List of Movies" << std::endl;
	std::cout << "----------------------------------------" << std::endl;
	for(auto movie:movie_collection){
		movie.list_movie();
		std::cout << "----------------------------------------" << std::endl;
	}
	std::cout << std::endl;
}

unsigned int Movies::get_num_movies(){
	return num_movies;
}