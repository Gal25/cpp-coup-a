#include <vector>
#include <stdexcept>
#include <iostream>
#include "Game.hpp"
#include "Player.hpp"



using namespace std;

namespace coup {

        Game::Game(){}
        string Game::turn(){
                return "";
        }  
        vector<string> Game::players(){
                return this->players_names;
        }
        string Game::winner(){
                return "";
        }   

    
}