#include "Player.hpp"
using namespace std;

namespace coup {
    class Duke:public Player {
        private:
            Game game;
            string name;
        public:
        Duke(Game game, string name);
        // void block(Player player);
        void tax();
        
    };
}