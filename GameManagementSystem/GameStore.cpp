#include "GameStore.h"
#include <iostream>

Game_Store::Game_Store() 
    : users(new std::vector<User>()), games(new std::vector<Game>()) {}

Game_Store::Game_Store(const Game_Store &source)
    :users{new std::vector<User>(*source.users)}, games{new std::vector<Game>(*source.games)}{}

Game_Store::Game_Store(Game_Store &&source) noexcept
    :users{source.users}, games{source.games}{
        source.users = nullptr;
        source.games = nullptr;
}

Game_Store::~Game_Store(){
    delete users;
    delete games;
    users = nullptr;
    games = nullptr;
}

bool Game_Store::add_user(std::string user_name){
    for(const User &user: *users){
        if(user.get_name() == user_name){
            std::cout << "User already exist in the system. -" << user_name << std::endl;
            return false;
        }
    }

    std::cout << "User successfully added. -" << user_name << std::endl;
    User temp_user(user_name);
    users->emplace_back(temp_user);
    return true;
}

bool Game_Store::add_game(std::string game_title, std::string game_genre, double game_price){
    for(const Game &game : *games){
        if(game.get_title() == game_title){
            std::cout << "Game already exist in the system. - " << game_title << std::endl;
            return false;
        }
    }

    std::cout << "Game successfully added. -" << game_title << std::endl;
    Game temp_game(game_title, game_genre, game_price);
    games->emplace_back(temp_game);
    return true;
}

bool Game_Store::sell_game(std::string game_title, std::string game_genre, double game_price, std::string user_name){
    for(User &user : *users){
        if(user.get_name() == user_name){ 
            user.add_game(game_title, game_genre, game_price);
            return true;
        }
    }
    std::cout << "User is not found. Please check user information again. -" << user_name << std::endl;
    return false;    
}

void Game_Store::display_users() const{
    if(users->empty()) std::cout << "User list is empty. \n"; 
    for(const auto &user : *users){
        user.display_user_information();
    }
}

void Game_Store::display_games() const{
    if(games->empty()) std::cout << "Game list is empty. \n"; 
    for(const auto &game : *games){
        game.display_game_information();
    }
}

