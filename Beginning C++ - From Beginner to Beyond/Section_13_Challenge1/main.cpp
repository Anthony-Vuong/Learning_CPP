#include <iostream>
#include "Movie.h"
#include "Movies.h"


using namespace std;

void display_movie(Movie m){
	cout << m.get_name() << endl;
	cout << m.get_rating() << endl;
	cout << m.get_watch_count() << endl;
}

int main()
{
	Movie movie1{"Titanic", "PG13", 5};
	
	//display_movie(titanic);
	
	Movies mvs;
	
	mvs.add_movie(movie1);
	cout << "There are " << Movies::get_num_movies() << " movies in the collection." << endl;
	
	mvs.list_movies();
	
	Movie movie2{"50 First Dates", "PG13", 10};
	Movie movie3{"There's Something About Mary", "R", 5};
	mvs.add_movie(movie2);
	mvs.add_movie(movie3);
	
	cout << "There are " << Movies::get_num_movies() << " movies in the collection." << endl;
	
	mvs.list_movies();
	
	
	return 0;
}
