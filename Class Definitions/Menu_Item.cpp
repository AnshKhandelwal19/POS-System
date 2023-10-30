#include <string>
#include <vector>
#include "Header Files/Menu_Item.h"

Menu_Item::Menu_Item(std::string n, std::string t, std::vector<Ingredient> i) {
    name = n;
    type = t;
    isAvailable = true;

}

void Menu_Item::updateIngredients(std::vector<Ingredient> ingred) {
    ingredients.clear();
    for(int i = 0; i < ingred.size(); i++) {
        ingredients.push_back(ingred[i]);
    }
}

std::vector<Ingredient> Menu_Item::getIngredientList() {
    std::vector<Ingredient> rV;
    for(int i = 0; i < ingredients.size(); i++) {
        rV.push_back(ingredients[i]);
    }
    return rV;
}