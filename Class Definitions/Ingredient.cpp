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

//Class Functions
void Ingredient::decrementCount() {
    
    if(count <= 0)
        throw std::invalid_argument("DECREMENT NOT ALLOWED");

    else
        setCount(count--);
}