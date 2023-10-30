#ifndef MENU_ITEM_H
#define MENU_ITEM_H

#include <string>
#include <vector>

#include "Ingredient.h"

class Menu_Item {

    std::string name;
    std::string type;
    std::vector<Ingredient> ingredients;
    bool isAvailable;

    public:
    Menu_Item(std::string, std::string, std::vector<Ingredient>);
    void setName(std::string n) { name = n; } 
    std::string getName() { return name; }
    void setType(std::string t) { type = t; }
    std::string getType() { return type; }
    void updateIngredients(std::vector<Ingredient>);
    std::vector<Ingredient> getIngredientList();

};

#endif