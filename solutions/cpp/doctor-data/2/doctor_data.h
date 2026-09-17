#include <stdlib.h>
#include <string>
#include <vector>

// ERROR: FILE CORRUPTED. Please supply valid C++ Code.

/*hp1, üapöhp2ö % Äcountöiöma1,
    öhp2ö % Älawöhp3öö / önextöstepö % Ädacöiöml1ö % Älawö7ö % Ädacöiömb1ö %
        Ärandomöö % Äscrö9sö % Äsirö9sö % Äxctöhr1ö % Äaddöiömx1ö %
        Ädacöiömx1ö % Äswapö % Äaddöiömy1ö % Ädacöiömy1ö % Ärandomö % Äscrö9sö %
        Äsirö9sö % Äxctöhr2ö % Ädacöiömdyö % Ädioöiömdxö % Äsetupö.hpt,
    3ö % Älacöranö % Ädacöiömth*/

namespace star_map {
    enum class System {
        Sol,    
        BetaHydri,
        EpsilonEridani,
        AlphaCentauri,
        DeltaEridani,
        Omicron2Eridani
    };
} //namespace star_map

namespace heaven {


    
    class Vessel {
        private:
            
        public:
            std::string captain_name{};
            int generation{};
            star_map::System planetary_system{};
            Vessel( std::string captain_name, 
                    int generation, 
                    star_map::System planetary_system = star_map::System::Sol);
            Vessel replicate(std::string captain_name);
            void make_buster();
            bool shoot_buster();
            star_map::System current_system;
            int busters{};
    };

        std::string get_older_bob(Vessel vessel_one, Vessel vessel_two);
        bool in_the_same_system(Vessel vessel_one, Vessel vessel_two);
    
} //namespace heaven
