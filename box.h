#ifndef BOX_H
#define BOX_H

#include "Package.h"

namespace shipping {
    class Box : public Package {
    public:
        Box();
        Box(double new_weight, std::string new_tracking_num, double new_width, double new_height, double new_depth);
        
        void set_dimensions(double new_width, double new_height, double new_depth);
        void get_dimensions(double &out_width, double &out_height, double &out_depth) const;
        
        double calc_shipping() const override;
        
    private:
        double height;
        double depth;
        double width;
    };
}

#endif
