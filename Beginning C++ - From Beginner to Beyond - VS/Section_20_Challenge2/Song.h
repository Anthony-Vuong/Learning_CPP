#pragma once
#include <iostream>
#include <string>

class Song
{
	friend std::ostream& operator<<(std::ostream &os, const Song &song);

private:
	std::string name;
	std::string artist;
	int rating;

public:
	Song() = default;
	Song(std::string name, std::string artist, int rating)
		: name{ name }, artist{ artist }, rating{ rating } {}

	std::string get_name() const;
	std::string get_artist() const;
	int get_rating() const;
	bool operator<(const Song* s1) const;
	bool operator==(const Song* s1) const;

};

