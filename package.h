#ifndef PACKAGE_H
#define PACKAGE_H

#include <string>

namespace shipping {
    const double COST_PER_POUND = 3.0;

    class Package {
    public:
        Package();
        Package(double new_weight, std::string new_tracking_num);
        double get_weight() const;
        std::string get_tracking_num() const;
        void set_weight(double new_weight);
        void set_tracking_num(std::string new_tracking_num);
        virtual double calc_shipping() const; // Made this virtual for potential overriding
    private:
        double weight;
        std::string tracking_num;
    };
}

#endif
