#include "Player.hpp"

using namespace std;

namespace coup {
    class Captain:public Player {
        private:
            Game game;
            string name;
        public:
        Captain(Game game, string name);
        // void block(Player player);
        // void steal(Player player);
    };
}