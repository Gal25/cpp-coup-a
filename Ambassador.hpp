#include "Player.hpp"
using namespace std;

namespace coup {
    class Ambassador:public Player {
        private:
            Game game;
            string name;
        public:
        Ambassador(Game game, string name);
        void transfer(Player player1, Player player2);
    };
}