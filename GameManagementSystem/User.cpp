#include "User.h"
#include <iostream>

User::User(std::string user_name)
    :name{user_name}, purchased_games(new std::vector<Game>()){}

User::User(const User &source)
    :name{std::move(source.name)}, purchased_games{new std::vector<Game>(*source.purchased_games)}{}

User::User(User &&source)
    :name{source.name}, purchased_games{source.purchased_games}{
        source.purchased_games = nullptr;
}

User::~User(){
    delete purchased_games;
    purchased_games = nullptr;
}

bool User::add_game(std::string game_title, std::string game_genre, double game_price){
    for(const Game &game : *purchased_games){
        if(game.get_title() == game_title){
            std::cout << "Game is already purchased - You can't buy same game more than once. -" << game_title << std::endl; 
            return false;
        }
    }
    
    std::cout << "Thank you for your purchase! -" << game_title << std::endl;
    Game temp_game(game_title, game_genre, game_price);
    purchased_games->push_back(temp_game);
    return true;
}

void User::display_user_information() const{
    std::cout << "User: " << name << "\nPurchased Games: ";
    
    if(purchased_games->empty()) std::cout << "User has 0 games.\n";
    for(const auto &game : *purchased_games){
        std::cout << game.get_title() << "\n";
    }
}
