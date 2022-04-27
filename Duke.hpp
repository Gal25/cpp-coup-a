#include "Player.hpp"
using namespace std;

namespace coup {
    class Duke:public Player {
        private:
            Game game;
            string name;
        public:
        Duke(Game const &game, string const &name);
        void block(Player const &player);
        void tax();
        
    };
}
