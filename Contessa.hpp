#include "Player.hpp"

using namespace std;

namespace coup {
    class Contessa:public Player {
        private:
            Game game;
            string name;
        public:
        Contessa(Game const &game, string const &name);
        void block(Player const &Player);
    };
}
