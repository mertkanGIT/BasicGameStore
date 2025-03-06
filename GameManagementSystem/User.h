#ifndef _USER_H_
#define _USER_H_
#include "Game.h" //string, vector

class User{
private:
    std::string name;
    std::vector<Game>* purchased_games;

public:
    User(std::string user_name);
    User(const User &source);
    User(User &&source);
    ~User();

    void set_name(std::string user_name){name = user_name;}

    std::string get_name() const{return name;}

    bool add_game(std::string game_title, std::string game_genre, double game_price);
    void display_user_information() const;
};

#endif 