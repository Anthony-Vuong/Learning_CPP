#ifndef MOVIES_H
#define MOVIES_H
#include <vector>
#include "Movie.h"

class Movies
{

//Attributes
private:
	std::vector<Movie> movie_collection{};
	unsigned int num_movies{0};
	
public:
	void add_movie(Movie m);
	void display_movies() const;
	unsigned int get_num_movies();
	int find_movie(std::string movie_name);
	void increment_movie_count(std::string movie_name);

	Movies();
	~Movies();

};

#endif // MOVIES_H
