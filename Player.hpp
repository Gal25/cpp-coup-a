#include "Game.hpp"
#include <iostream>

#pragma once


using namespace std;

namespace coup {
    class Player {
        protected:
            Game game; 
            string nameplayer;
            int player_coin;
            string player_role;
            
        public:
            void income();
            void foreign_aid();
            void coup(Player player);
            string role(Player player);
            int coins();
            void block(Player player);
            void steal(Player player);

    };
}


