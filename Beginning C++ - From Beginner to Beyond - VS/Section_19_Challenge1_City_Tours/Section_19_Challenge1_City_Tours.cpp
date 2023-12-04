#include <iomanip>
#include <iostream>
#include <string>
#include <vector>
#include <cstring>

struct City {
    std::string name;
    long population;
    double cost;
    int name_length;
};

struct Country {
    std::string name;
    std::vector<City> cities;
    int name_length;
};

struct Tour {
    std::string title;
    std::vector<Country> countries;
};



int main()
{
    Tour tours
    { "Tour Ticket Prices from Miami",
        {
            {
                "Columbia",
                {
                    {"Bogota", 8778000, 400.98, 6},
                    {"Cali", 2401000, 424.12, 4},
                    {"Medellin", 2464000, 350.98, 8},
                    {"Cartagena", 972000, 345.34, 9}
                },
                8
            },
            {
                "Brazil",
                {
                    {"Rio De Janeiro", 13500000, 567.45, 14},
                    {"Sao Paulo", 11310000, 975.45, 9},
                    {"Salvador", 18234000, 855.99, 8}
                },
                6
            },
            {
                "Chile",
                {
                    {"Valdivia", 260000, 569.12, 8},
                    {"Santiago", 7040000, 520.00, 8}
                },
                5
            },
             {
                "Argentina",
                {
                    {"Buenos Aires", 3010000, 723.77, 12}
                },
                9
            },
        }
    };

    std::string hyphen{ '-' };

    std::cout << std::setprecision(2) << std::fixed;
    std::cout << std::setw(49) << std::setfill('-') << hyphen << std::endl;
    std::cout << "|" << std::setw(40)  << std::setfill(' ') << std::right << tours.title << "\t|" << std::endl;
    std::cout << std::setw(49) << std::setfill('-') << hyphen << std::endl;
    std::cout << "|" << std::setw(5) << std::setfill(' ') << "COUNTRY";
    std::cout << std::setw(15) << std::setfill(' ') << "CITY";
    std::cout << std::setw(15) << std::setfill(' ') << "POPULATION";
    std::cout << std::setw(7) << std::setfill(' ') << "PRICE" << "   |" << std::endl;

    std::cout << std::setw(49) << std::setfill('-') << hyphen << std::endl;
    for (auto country : tours.countries) {
        // << "     \t\t\t\t\t|"
        std::cout << "|" << country.name << std::setw(49-country.name_length-1) <<  std::setfill(' ') << std::right << "|" << std::endl;
        std::cout << std::setw(49) << std::setfill('-') << hyphen << std::endl;
        for (auto city : country.cities) {
            std::cout << std::setw(25) << std::setfill(' ') << std::right << city.name
                      << std::setw(12) << std::setfill(' ') << std::right << city.population
                      << "\t" << city.cost
                      << std::setw(3) << std::setfill(' ') << std::right << "|"
                      << std::endl;
            std::cout << std::setw(49) << std::setfill('-') << hyphen << std::endl;
        }
        //std::cout << std::setw(49) << std::setfill('-') << hyphen << std::endl;
    }
    

    return 0;
}
