#include <iostream>
#include "Header Files/Ingredient.h"

//Constructors
Ingredient::Ingredient(std::string n, std::string t, int c) {
    name = n;
    
    if(t == "Bread" || t == "Accent" || t == "Protien" || t ==  "Cheese" || t == "Veggies")
        type = t;
    else
        throw std::invalid_argument("INVALID TYPE");
    
    setCount(c);
}

//Getters and Setters
void Ingredient::setCount(int c) {
    if(c < -1) {
        throw std::invalid_argument("INVALID COUNT");
    }
    else if(c == 0) {
        isAvailable = false;
        count = 0;
    }
    else {
        isAvailable = true;
        count = c;
    }
}


//Class Functions
void decrementCount();