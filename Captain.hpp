#include "Player.hpp"

using namespace std;

namespace coup {
    class Captain:public Player {
        private:
            Game game;
            string name;
        public:
        Captain(Game const &game, string const &name);
        void block(Player const &player);
        void steal(Player const &player);
    };
}
