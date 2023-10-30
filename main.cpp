#include <iostream>
#include <vector>

#include "Header Files/Menu_Item.h"

using namespace std;

void initialize_sequence();
void login();
vector<vector<Menu_Item>> start_order(vector<Menu_Item>&);

void printList(vector<Menu_Item>);

//Vectos for menu items seperated by type of item
vector<Menu_Item> sandwiches;
vector<Menu_Item> salads;
vector<Menu_Item> kids;
vector<Menu_Item> deli_sides;
vector<Menu_Item> soups;

int main() {
    

    return 0;
}

void printList(vector<Menu_Item> list) {
    for(int i = 0; i < list.size(); i++) {
        cout << i+1 << ". " << list[i].getName() << endl; 
    }
}

vector<vector<Menu_Item>> start_order(vector<Menu_Item>& items) {
    vector<Menu_Item> rV;

    int input;
    cout << "1. Sandwich\n2. Salad\n3. Kids\n4. Deli Sides\n5. Soups" << endl;
    cin >> input;
    while(input != -1) {
        switch(input) {
            case 1:
            printList(sandwiches);
            cin >> input;
            rV.push_back(sandwiches[input-1]);
            break;

            case 2:
            printList(salads);
            cin >> input;
            rV.push_back(salads[input-1]);
            break;

            case 3:
            printList(kids);
            cin >> input;
            rV.push_back(kids[input-1]);
            break;

            case 4:
            printList(deli_sides);
            cin >> input;
            rV.push_back(deli_sides[input-1]);
            break;

            case 5:
            printList(soups);
            cin >> input;
            rV.push_back(soups[input-1]);
            break;

            default:
            cout << "Invalid Input" << endl;
            break;
        }
    }

}