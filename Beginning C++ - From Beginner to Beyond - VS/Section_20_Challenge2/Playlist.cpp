#include "Playlist.h"

Playlist::Playlist() {
    // Initial playlist songs
    Song s1{ "Song1", "Artist1", 5 };
    Song s2{ "Song2", "Artist2", 3 };
    Song s3{ "Song3", "Artist3", 5 };
    Song s4{ "Song4", "Artist4", 2 };
    Song s5{ "Song5", "Artist5", 5 };
    Song s6{ "Song6", "Artist6", 1 };

    // Push back the songs into playlist
    playlist.push_back(s1);
    playlist.push_back(s2);
    playlist.push_back(s3);
    playlist.push_back(s4);
    playlist.push_back(s5);
    playlist.push_back(s6);

    current_song = playlist.front();

    it = std::find(playlist.begin(), playlist.end(), current_song);
    rev_it = std::prev(playlist.end());

    // Display the songs
    display_songs(playlist);

    // Display the first song in the playlist
    std::cout << "Current song: " << std::endl;
    std::cout << playlist.front() << std::endl;
}

template<typename T>
void Playlist::display_songs(const std::list<T>& songs) {

    for (const auto& song : songs) {
        std::cout << song;
    }
    std::cout << std::endl;

}

void Playlist::display_options() {

    std::cout << "F - Play First Song\n"
        << "N - Play Next Song\n"
        << "P - Play Previous Song\n"
        << "A - Add and play a new song at current location\n"
        << "L - List the current playlist\n"
        << std::endl;

    std::cout << std::setw(60) << std::setfill('=') << std::right << "=" << std::endl;
    std::cout << "Enter a selection (Q to Quit): ";
}

void Playlist::add_song() {
    std::string temp_name, temp_artist, entry;
    int rating;
    std::cout << "Add a new song\n" << std::endl;
    std::cout << std::setw(45) << std::setfill('=') << std::right << "=" << std::endl;
    std::cout << "Enter name of song: ";
    std::cin.ignore();
    std::getline(std::cin, temp_name);

    std::cout << "Enter song's artist name: ";
    std::getline(std::cin, temp_artist);

    std::cout << "Enter your rating of the song: ";
    std::cin >> entry;
    std::istringstream validator{ entry };
    if (validator >> rating) {
        Song temp{ temp_name, temp_artist, rating };
        playlist.push_back(temp);
        std::cout << temp_name << " was added to the playlist.\n" << std::endl;
    }
    else {
        std::cout << "Sorry, that song was not added." << std::endl;
    }

}

void Playlist::play_previous_song() {
    if (current_song == playlist.front()) {
        current_song = playlist.back();
        rev_it = std::prev(playlist.end());
    }
    else {
        rev_it--;
        current_song = *rev_it;
        it = rev_it;
    }
    std::cout << "Playing previous song: " << current_song << std::endl;
}

void Playlist::play_next_song() {
    if (current_song == playlist.back()) {
        current_song = playlist.front();
        it = playlist.begin();

    }
    else {
        std::advance(it, 1);
        current_song = *it;
        rev_it = it;
    }
    std::cout << "Playing next song: " << current_song << std::endl;

}


void Playlist::play() {

    while (1) {
        display_options();
        std::cin >> user_input;

        std::cout << std::endl;
        if (user_input == 'q' or user_input == 'Q') {
            break;
        }
        else if (user_input == 'F' or user_input == 'f') {
            std::cout << "Playing first song:" << current_song << std::endl;
        }
        else if (user_input == 'N' or user_input == 'n') {
            play_next_song();
        }
        else if (user_input == 'P' or user_input == 'p') {
            play_previous_song();
        }
        else if (user_input == 'A' or user_input == 'a') {
            add_song();
        }
        else if (user_input == 'L' or user_input == 'l') {
            display_songs(playlist);
        }
        else {
            std::cout << "Unknown command" << std::endl;
        }
        std::cout << std::endl;

    }

}
