#include <vector>
#include <stdexcept>
#include <iostream>
#include "Game.hpp"
#include "Player.hpp"



using namespace std;

namespace coup {

        void Player::income(){}
        void Player::foreign_aid(){}
        void Player::coup(Player const &player){}
        string Player::role(Player const &player){
            return "";
        }
        int Player::coins(){
            return 0;
        } 
    
}
