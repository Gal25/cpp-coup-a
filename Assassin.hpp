#include "Player.hpp"

using namespace std;

namespace coup {
    class Assassin:public Player {
        private:
        Game game;
        string name;
        public:
        Assassin(Game const &game, string const &name);
        void block(Player const &player);
    };
}
