#include <iostream>
#include <algorithm>
#include "Movies.h"

using namespace std;

int main()
{
	// Declare and initialize Titanice movie
	Movie movie1{"Titanic", "PG13", 5};
	
	// Declare a movies class
	Movies mvs;
	
	// Add a single movie to the movies class
	mvs.add_movie(movie1);
	// Display number of movies in list and the mmovies list
	cout << "There are " << mvs.get_num_movies() << " movies in the collection." << endl;
	mvs.display_movies();
	
	// Declare and init 2 more movies
	Movie movie2{"50 First Dates", "PG13", 10};
	Movie movie3{"There's Something About Mary", "R", 5};
	// Add 2 new movies to the list
	mvs.add_movie(movie2);
	mvs.add_movie(movie3);
	
	// Display number of movies in list and the mmovies list
	cout << "There are " << mvs.get_num_movies() << " movies in the collection." << endl;
	mvs.display_movies();
	
	// Declare and init 1 more movie1
	Movie movie4{"Titanic", "PG13", 5};
	// Add 1 new movie to the list
	mvs.add_movie(movie4);
	
	// Add a movie, but movie already in list - DISPLAY ERROR
	Movie movie5{"There's Something About Mary", "PG13", 5};
	mvs.add_movie(movie5);
	
	// Increment watch count, new watch count for movie should b3 6
	mvs.increment_movie_count("There's Something About Mary");
	mvs.display_movies();
	
	// Increment watch count but movie is not in list - DISPLAY ERROR
	mvs.increment_movie_count("King Kong");
	
	return 0;
}
