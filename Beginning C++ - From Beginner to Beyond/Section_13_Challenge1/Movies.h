#ifndef MOVIES_H
#define MOVIES_H
#include <vector>
#include "Movie.h"

class Movies
{

//Attributes
private:
	std::vector<Movie> movie_collection{};
	// static members	
	static unsigned int num_movies;
	

public:
	void add_movie(Movie m);
	void list_movies();

	Movies();
	~Movies();
	
	static unsigned int get_num_movies();

};

#endif // MOVIES_H
