#include "lasagna_master.h"

namespace lasagna_master {

int preparationTime(const std::vector<std::string> layers, const int avgPrepTimePerLayer){
    return static_cast<int>(layers.size()) * avgPrepTimePerLayer;
}

amount quantities(const std::vector<std::string> layers){
    amount quantitiesNeeded{};
    for(const auto& layer : layers){
        if (layer == "noodles") quantitiesNeeded.noodles += 50;
        else if( layer == "sauce")  quantitiesNeeded.sauce += 0.2;
        }
    return quantitiesNeeded;
}

void addSecretIngredient(std::vector<std::string> &myIngredients, const std::vector<std::string> &FriendIngredients){
    if(myIngredients.back() == "?") myIngredients.back() = FriendIngredients.back();
}

void addSecretIngredient(std::vector<std::string> &myIngredients, const std::string auntieIngredient){
    if(myIngredients.back() == "?") myIngredients.back() = auntieIngredient;
}
    
std::vector<double> scaleRecipe(const std::vector<double> amountForTwoPortions, const int numberOfPortionsToCook){
    std::vector<double> ajustedPortions{amountForTwoPortions};
    std::transform(ajustedPortions.begin(), ajustedPortions.end(), ajustedPortions.begin(), [numberOfPortionsToCook](double quant){
        return (static_cast<double>(numberOfPortionsToCook)/2.0)*quant;
        });
    return ajustedPortions;

}
}  // namespace lasagna_master
