#include <vector>
#include <iostream>

// #include "Player.hpp"
#pragma once



using namespace std;

namespace coup {
    class Game{
        protected:
            vector<string> players_names;
        public:
        Game();
        string turn();
        vector<string> players();
        string winner();   
    };

    
}
