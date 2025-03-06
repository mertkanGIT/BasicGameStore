#include "GameStore.h"

int main(){

    Game_Store mertkan_games;
    mertkan_games.display_users(); //User list is empty
    mertkan_games.display_games(); // Games list is empty
    mertkan_games.add_user("Mertkan Ozbey"); // Succesful
    mertkan_games.add_user("Mertkan Ozbey"); // Not Succesful
    mertkan_games.add_user("Ahmet Ozbey"); // Succesful
    mertkan_games.add_user("Mehmet Ozbey"); // Succesful
    mertkan_games.add_user("Salih Ozbey"); // Succesful
    mertkan_games.display_users(); // Display correctly
    mertkan_games.add_game("Metro 2033", "Action", 29.99); // Succesful
    mertkan_games.add_game("The Witcher 3", "RPG", 39.99); // Succesful
    mertkan_games.add_game("Dark Souls III", "Action RPG", 49.99); // Succesful
    mertkan_games.add_game("Hollow Knight", "Metroidvania", 14.99); // Succesful
    mertkan_games.add_game("Hollow Knight", "Metroidvania", 14.99); // Not Succesful
    mertkan_games.add_game("Stardew Valley", "Simulation", 19.99); // Succesful
    mertkan_games.add_game("DOOM Eternal", "FPS", 59.99); // Succesful
    mertkan_games.add_game("Celeste", "Platformer", 19.99); // Succesful
    mertkan_games.add_user("Mertkan Ozbey");  // Not Succesful
    mertkan_games.add_game("Cyberpunk 2077", "RPG", 59.99); // Succesful
    mertkan_games.add_game("Red Dead Redemption 2", "Action", 69.99); // Succesful
    mertkan_games.add_game("Terraria", "Sandbox", 9.99); // Succesful
    mertkan_games.display_games(); // Display correctly
    mertkan_games.sell_game("Hollow Knight", "Metroidvania", 14.99, "Mertkan Ozbey"); // Please work
    mertkan_games.sell_game("Red Dead Redemption 2", "Action", 69.99, "Mertkan Ozbey"); // Please work
    mertkan_games.sell_game("Red Dead Redemption 2", "Action", 69.99, "Salih Ozbey"); // Please work

    mertkan_games.display_users(); // Display correctly
    

    return 0;
}