#ifndef MOVIELIST_HH
#define MOVIELIST_HH
#include <iostream>
#include <string> 
#include <fstream>


class Movie
{
public:
protected:
    float rating;
    std::string title;
public:
    Movie(const float & rating_, const std::string & title_):
        rating(rating_),
        title(title_)
        {}
    Movie(){};

    float get_rating(){return rating;};
    std::string get_title(){return title;};
    bool is_bigger(Movie B);
};


class MovieList
{
protected:
    Movie *list;
public:
    MovieList(const std::string & name);
    MovieList(const std::string & name, int limit);
    Movie get_movie(const int & id){return list[id];};
};

#endif