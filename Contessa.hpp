#include "Player.hpp"

using namespace std;

namespace coup {
    class Contessa:public Player {
        private:
            Game game;
            string name;
        public:
        Contessa(Game game, string name);
        // void block(Player Player);
    };
}