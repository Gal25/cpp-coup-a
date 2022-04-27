#include <vector>
#include <iostream>

#pragma once



using namespace std;

namespace coup {
    class Game{
        protected:
            vector<string> players_names;
        public:
        Game();
        static string turn();
        vector<string> players();
        static string winner();   
    };

    
}
