#include <vector>
#include <stdexcept>
#include <iostream>
#include "Game.hpp"
#include "Player.hpp"



using namespace std;

namespace coup {

        void Player::income(){}
        void Player::foreign_aid(){}
        void Player::coup(Player player){}
        string Player::role(Player player){
            return "";
        }
        int Player::coins(){
            return 0;
        } 
        void Player::block(Player player){}
        void Player::steal(Player player){}

    
}