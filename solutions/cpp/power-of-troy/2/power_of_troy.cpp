#include "power_of_troy.h"

namespace troy {

void give_new_artifact(human &human, std::string new_artifact){
    human.possession = std::make_unique<artifact>(new_artifact);
};    

void exchange_artifacts(std::unique_ptr<artifact> &artifact_1, std::unique_ptr<artifact> &artifact_2){
    std::swap(artifact_1, artifact_2);
};

void manifest_power(human &human, std::string new_artifact){
    human.own_power = std::make_shared<power>(new_artifact);
};

void use_power(const human &caster, human &target){
    if (caster.own_power){
        target.influenced_by = caster.own_power;
    }
};

int power_intensity(const human &caster){
    return static_cast<int>(caster.own_power.use_count());
};


}  // namespace troy
