#ifndef MOVIE_H
#define MOVIE_H
#include <string>

class Movie
{
//Attributes
private:
	std::string name;
	std::string rating;
	int watch_count;
	
public:

	std::string get_name();
	std::string get_rating();
	int get_watch_count();
	void increment_watch_count();
	void list_movie();

	//Constructor prototype
	Movie(std::string name = "None", std::string rating = "G", int watch_count = 0);
	//Copy constructor prototype
	Movie(const Movie &source);
	//Destructor prototype
	~Movie();

};

#endif // MOVIE_H
