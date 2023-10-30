#ifndef INGREDIENT_H
#define INGREDIENT_H

#include <string>

class Ingredient {

    //Class Variables
    std::string name;
    std::string type;  //Bread, Accent, Protien, Cheese, Veggies
    bool isAvailable;
    std::string modifications;  //OTS, ADD, NO, XTRA, XTRA OTS

    public:
    //Constructors
    Ingredient(std::string n, std::string t, int c);

    //Getters and Setters
    std::string getName() { return name; }
    std::string getType() { return type; }
    
    

    //Class Functions
    void decrementCount();
};

#endif