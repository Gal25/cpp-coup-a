#include "Game.hpp"
#include <iostream>

#pragma once


using namespace std;

namespace coup {
    class Player {
        protected:
            Game game; 
            int PlayerCoin;
            string PlayerRole;
            
        public:
            void income();
            void foreign_aid();
            void coup(Player const &player);
            static string role(Player const &player);
            static int coins();
    };
}
