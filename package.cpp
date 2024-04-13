#include "Package.h"

using namespace shipping;

Package::Package() : weight(0.0), tracking_num("") {}

Package::Package(double new_weight, std::string new_tracking_num) : weight(new_weight), tracking_num(new_tracking_num) {}

double Package::get_weight() const {
    return weight;
}

std::string Package::get_tracking_num() const {
    return tracking_num;
}

void Package::set_weight(double new_weight) {
    weight = new_weight;
}

void Package::set_tracking_num(std::string new_tracking_num) {
    tracking_num = new_tracking_num;
}

double Package::calc_shipping() const {
    return weight * COST_PER_POUND;
}
