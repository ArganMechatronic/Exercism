#pragma once
#include <map>
#include <string>

const int SECONDS_IN_ONE_EARTH_YEAR =  31557600;

namespace space_age {
    inline std::map<std::string, double> orbital_period_in_earth_years = {
        {"mercury", 0.2408467},
        {"venus", 0.61519726},
        {"earth", 1.0},
        {"mars", 1.8808158},
        {"jupiter", 11.862615},
        {"saturn", 29.447498},
        {"uranus", 84.016846},
        {"neptune", 164.79132}
    };

    class space_age{
    public:
        space_age(long int age_in_seconds);
        long int seconds() const;
        double on_earth() const;
        double on_mercury() const;
        double on_venus() const;
        double on_mars() const;
        double on_jupiter() const;
        double on_saturn() const;
        double on_uranus() const;
        double on_neptune() const;
    private:
        long int age_in_seconds{0};
    };

}  // namespace space_age
