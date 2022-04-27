#include "Player.hpp"
using namespace std;

namespace coup {
    class Ambassador:public Player {
        private:
            Game game;
            string name;
        public:
        Ambassador(Game const &game, string const &name);
        void transfer(Player const &player1, Player const &player2);
    };
}
