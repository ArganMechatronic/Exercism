#include <stdlib.h>
#include <string>

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
    public:
    Vessel( std::string captain_name, int generation, star_map::System planetary_system = star_map::System::Sol);
    
    std::string captain_name{};
    int generation{};
    star_map::System planetary_system{};
    Vessel replicate(std::string captain_name);
    void make_buster();
    bool shoot_buster();
    star_map::System current_system;
    int busters{};
    };

    std::string get_older_bob(Vessel vessel_one, Vessel vessel_two);
    bool in_the_same_system(Vessel vessel_one, Vessel vessel_two);

} //namespace heaven
