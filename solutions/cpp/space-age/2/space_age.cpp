#include "space_age.h"

namespace space_age {
    
    space_age::space_age(long int age_in_seconds): age_in_seconds(age_in_seconds){};
    
    long int space_age::seconds() const {return age_in_seconds;};
    
    double space_age::on_earth() const {
        return age_in_seconds/static_cast<double>(SECONDS_IN_ONE_EARTH_YEAR);
    };
    double space_age::on_mercury() const {
        return on_earth() / orbital_period_in_earth_years["mercury"]; 
    };
    double space_age::on_venus() const {
        return on_earth() /  orbital_period_in_earth_years["venus"];
    };
    double space_age::on_mars() const {
        return on_earth() / orbital_period_in_earth_years["mars"];
    };
    double space_age::on_jupiter() const {
        return on_earth() / orbital_period_in_earth_years["jupiter"];
    };
    double space_age::on_saturn() const {
        return on_earth() / orbital_period_in_earth_years["saturn"];
    };
    double space_age::on_uranus() const {
        return on_earth() / orbital_period_in_earth_years["uranus"];
    };
    double space_age::on_neptune() const {
        return on_earth() / orbital_period_in_earth_years["neptune"];
    };
}  // namespace space_age
