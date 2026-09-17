#include "doctor_data.h"

// ERROR: FILE CORRUPTED. Please supply valid C++ Code.

/*hp4,ölacöiömthö%Äsmaö%Äsubö(311040ö%Äspaö%Äaddö(311040ö%Ädacöiömthö%Äcountö.hpt,hp4ö%Äxctöhd2ö%Ädacöiöma1
hp2,öjmpö.*/

namespace heaven{

Vessel::Vessel(std::string captain_name, int generation, star_map::System planetary_system) : captain_name(captain_name), generation(generation), planetary_system(planetary_system) {};
    
heaven::Vessel Vessel::replicate(std::string captain_name){
    heaven::Vessel replicated_vessel(captain_name, ++generation);
    return replicated_vessel;
};

void Vessel::make_buster(){
    busters++;
}

bool Vessel::shoot_buster(){
    if (busters > 0){
    busters--;
    return true;
    }else return false;
};

std::string get_older_bob(Vessel vessel_one, Vessel vessel_two){
    if (vessel_one.generation < vessel_two.generation) return vessel_one.captain_name;
    else return vessel_two.captain_name;
};

bool in_the_same_system(Vessel vessel_one, Vessel vessel_two){
    return vessel_one.planetary_system == vessel_two.planetary_system;
};

}