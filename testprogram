#include <iostream>
#include "Box.h"

using namespace std;
using namespace shipping;

int main() {
    Box little_box(2, "ABC123", 5, 5, 5);
    Box big_box(2, "DEF456", 50, 40, 40);
    
    cout << "Little box tracking: " << little_box.get_tracking_num() << endl;
    cout << "Little box weight: " << little_box.get_weight() << endl;
    cout << "Little box dimensions: ";
    double width, height, depth;
    little_box.get_dimensions(width, height, depth);
    cout << width << "x" << height << "x" << depth << endl;
    cout << "Little box shipping cost: $" << little_box.calc_shipping() << endl;
    
    cout << "Big box tracking: " << big_box.get_tracking_num() << endl;
    cout << "Big box weight: " << big_box.get_weight() << endl;
    cout << "Big box dimensions: ";
    big_box.get_dimensions(width, height, depth);
    cout << width << "x" << height << "x" << depth << endl;
    cout << "Big box shipping cost: $" << big_box.calc_shipping() << endl;
    
    return 0;
}
