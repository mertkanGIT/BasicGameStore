#include "Game.h"
#include <iostream>
#include <iomanip>

Game::Game(std::string game_title, std::string game_genre, double game_price)
    :title{game_title}, genre{game_genre}, price{game_price}{}

Game::Game(const Game &source)
    :title{source.title}, genre{source.genre}, price{source.price}{}

Game::~Game(){}

void Game::display_game_information() const{
    std::cout << std::fixed;
    std::cout << title << ", " << genre << ", " << std::setprecision(2) << price << std::endl;
}
