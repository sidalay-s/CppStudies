#include "monster.h"
#include "player.h"
#include "mage.h"
#include "tamed.h"


int main() {

    // Player Sid {"Sid", "boob", 10.0, 15.0};
    // // Monster Rumby{"Rumby", "Wild", 20.0, 14.0};

    // Sid.MoveCharacter(13.5, 5.5);
    // // Rumby.MoveCharacter(12.0, 16.3);

    // Character* FakeSid = &Sid;
    // // FakeSid->MoveCharacter(1.0, 3.9);

    // Player Diana {"Diana", "superboob", 30.2, 17.0};

    // std::cout << "\n\n";
    
    // Player Potato{Sid};

    // std::cout << "\n\n";

    // Sid = Diana;

    // std::cout << "\n\n";
    // Player Rumby("Rumby", Sid);
    // ++Rumby;
    // --Rumby;
    // // Player Rumby(Sid);
    
    // std::cout << "\n\n";

    // LOG(Rumby);

    // Rumby = Sid;

    // LOG(Rumby);

    // std::cout << "\n\n";
    
    // Monster Ashleen{"Ashleen", "Toxic"};
    // for (auto i = 0; i < 10; ++i) {
    //     ++Ashleen;
    // }
    // std::cout << "\n\n";

    // Monster Moosie{"Moosie", Ashleen};
    // ++Moosie;
    // std::cout << "\n\n";

    // std::cout << Moosie << '\n' << Rumby;

    Mage Sid{"Sid"};
    
    Sid.CastSpell("Fire");
    Sid.CastSpell("Thunder");

    Tamed Rumby{"Rumby"};

}