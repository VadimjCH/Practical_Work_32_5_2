#include <iostream>
#include <fstream>
#include "nlohmann/json.hpp"

struct Film
{
    std::vector<std::string> titles = {"name", "country", "date", "studio", "writer", "director", "producer",
                                       "character"};
    std::string name;
    std::string country;
    std::string date;
    std::string studio;
    std::vector<std::string> writer;
    std::vector<std::string> director;
    std::vector<std::string> producer;
    std::map<std::string, std::string> character;
};

int main()
{
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
