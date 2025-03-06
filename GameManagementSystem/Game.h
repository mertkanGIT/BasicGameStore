#ifndef _GAME_H_
#define _GAME_H_

#include <string>
#include <vector>


class Game{
private:    
    std::string title;
    std::string genre;
    double price;

public:
    Game(std::string game_title, std::string game_genre, double game_price);
    Game(const Game &source);
    ~Game();

    void set_title(std::string game_title){title = game_title;}
    void set_genre(std::string game_genre){genre = game_genre;}
    void set_price(double game_price){price = game_price;}

    std::string get_title() const{return title;}
    std::string get_genre() const{return genre;}
    double get_price() const{return price;}

    void display_game_information() const;

};

#endif