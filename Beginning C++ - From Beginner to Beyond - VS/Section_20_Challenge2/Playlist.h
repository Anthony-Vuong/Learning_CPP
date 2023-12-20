#pragma once
#include <list>
#include <iomanip>
#include <iterator>
#include <string>
#include <sstream>
#include "Song.h"



class Playlist
{
private:
	// Create STL List container with Song type
	std::list<Song> playlist;
	// User input variable
	char user_input{ ' ' };
	Song current_song;
	std::list<Song>::iterator it;
	std::list<Song>::iterator rev_it;

public:
	Playlist();


	void play();
	template<typename T>
	void display_songs(const std::list<T>& songs);
	void display_options();
	void add_song();
	void play_previous_song();
	void play_next_song();


};

