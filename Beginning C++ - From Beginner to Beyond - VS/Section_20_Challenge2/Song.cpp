#include "Song.h"

std::string Song::get_name() const {
	return name;
}

std::string Song::get_artist() const {
	return artist;
}

int Song::get_rating() const {
	return rating;
}

bool Song::operator<(const Song& s1) const {
	return this->name < s1.name;
}

bool Song::operator==(const Song& s1) const {
	return name == s1.name;
}

std::ostream& operator<<(std::ostream &os, const Song &s) {

	os << s.get_name() << " " << s.get_artist() << " " << s.get_rating() << std::endl;

	return os;
}