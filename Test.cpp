#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include "doctest.h"
#include <vector>
#include "Game.hpp"
#include "Ambassador.hpp"
#include "Assassin.hpp"
#include "Captain.hpp"
#include "Contessa.hpp"
#include "Duke.hpp"


using namespace std;
using namespace coup;

TEST_CASE("Good input") {
    Game game_1{};

	Duke duke{game_1, "Gal"};
	Assassin assassin{game_1, "Yossi"};
	Ambassador ambassador{game_1, "Meirav"};
	Captain captain{game_1, "Michal"};
	Contessa contessa{game_1, "Shani"};

    duke.income();
	assassin.income();
	ambassador.income();
	captain.income();
	contessa.income();
    CHECK((duke.coins() == 1));
    CHECK((assassin.coins() == 1));
    CHECK((ambassador.coins() == 1));
    CHECK((captain.coins() == 1));
    CHECK((contessa.coins() == 1));

    captain.foreign_aid();
    ambassador.foreign_aid();
    CHECK((ambassador.coins() == 3));
    CHECK((captain.coins() == 3));

    duke.block(captain);
    CHECK((captain.coins() == 1));
    ambassador.transfer(captain,duke);
    CHECK((captain.coins() == 0));
    CHECK((duke.coins() == 2));

    captain.steal(duke);
    CHECK((captain.coins() == 2));
    CHECK((duke.coins() == 0));

    captain.foreign_aid();
    captain.foreign_aid();
    captain.foreign_aid();
    CHECK((captain.coins() == 8));
    assassin.foreign_aid();
    CHECK((assassin.coins() == 3));
    assassin.block(duke);
    CHECK((assassin.coins() == 0));
    captain.coup(assassin);
    CHECK((captain.coins() == 0));
    CHECK((game_1.turn() == "captain"));
}


TEST_CASE("Bed input") {
    Game game_1{};

	Duke duke{game_1, "Gal"};
	Assassin assassin{game_1, "Yossi"};
	Ambassador ambassador{game_1, "Meirav"};
	Captain captain{game_1, "Michal"};
	Contessa contessa{game_1, "Shani"};

    CHECK_FALSE((duke.coins()==1));

    ambassador.income();
    captain.foreign_aid();
    assassin.income();
    contessa.foreign_aid();
    CHECK_FALSE((ambassador.coins()==5));
    CHECK_FALSE((captain.coins()==3));





}
