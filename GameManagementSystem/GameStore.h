#ifndef _GAME_STORE_H_
#define _GAME_STORE_H_
#include "Game.h"
#include "User.h"

class Game_Store{
private:
    std::vector<User>* users;
    std::vector<Game>* games;

public:
    Game_Store();
    Game_Store(const Game_Store &source);
    Game_Store(Game_Store &&source) noexcept;
    ~Game_Store();
    

    bool add_user(std::string user_name);
    bool add_game(std::string game_title, std::string game_genre, double game_price);

    bool sell_game(std::string game_title, std::string game_genre, double game_price, std::string user_name);
    
    void display_games() const;
    void display_users() const;
};

#endif