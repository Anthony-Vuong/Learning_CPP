#include <iostream>
#include <list>
#include <iomanip>
#include <iterator>
#include "Song.h"

template<typename T>
void display(const std::list<T>&songs) {

    for (const auto &song:songs) {
        std::cout << song;
    }
    std::cout << std::endl;

}


void display_options() {

    std::cout << "F - Play First Song\n"
        << "N - Play Next Song\n"
        << "P - Play Previous Song\n"
        << "A - Add and play a new song at current location\n"
        << "L - List the current playlist\n"
        << std::endl;

    std::cout << std::setw(60) << std::setfill('=') << std::right << "=" << std::endl;
    std::cout << "Enter a selection (Q to Quit): ";
}

/*
void process_input(char input) {
    if (input == 'q' or input == 'Q') {
        
    }
}
*/



int main()
{

    // User input variable
    char user_input{ ' ' };

    // Initial playlist songs
    Song s1{"Song1", "Artist1", 5};
    Song s2{"Song2", "Artist2", 3};
    Song s3{"Song3", "Artist3", 5};
    Song s4{"Song4", "Artist4", 2};
    Song s5{"Song5", "Artist5", 5};
    Song s6{"Song6", "Artist6", 1};

    // Create STL List container with Song type
    std::list<Song> playlist;

    // Push back the songs into playlist
    playlist.push_back(s1);
    playlist.push_back(s2);
    playlist.push_back(s3);
    playlist.push_back(s4);
    playlist.push_back(s5);
    playlist.push_back(s6);

    // Display the songs
    display(playlist);

    // Display the first song in the playlist
    std::cout << "Current song: " << std::endl;
    std::cout << playlist.front() << std::endl;

    auto playlist_iterator = playlist.begin();
    
    while (1) {
        display_options();
        std::cin >> user_input;

        std::cout << std::endl;
        if (user_input == 'q' or user_input == 'Q') {
            break;
        }
        else if (user_input == 'F' or user_input == 'f') {
            std::cout << "Playing first song:" << std::endl;
        }
        else if (user_input == 'N' or user_input == 'n') {
            std::advance(playlist_iterator, 1);
            std::cout << "Playing next song: " << *playlist_iterator << std::endl;
        }
        else if (user_input == 'P' or user_input == 'p') {
            std::cout << "Playing previous song: "  << std::endl;
        }
        else if (user_input == 'A' or user_input == 'a') {
            std::cout << "Adding new song" << std::endl;
        }
        else if (user_input == 'L' or user_input == 'l') {
            display(playlist);
        }
        else {
            std::cout << "Unknown command" << std::endl;
        }
        std::cout << std::endl;


    }

    

    return 0;

}