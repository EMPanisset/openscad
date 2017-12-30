#ifndef LIBSVG_RECT_H
#define	LIBSVG_RECT_H

#include "path.h"

namespace libsvg {

class rect : public path
{
protected:
    double width;
    double height;
    double rx;
    double ry;

public:
    rect();
    rect(const rect& orig);
    ~rect() override;

    virtual double get_width() { return width; }
    virtual double get_height() { return height; }
    virtual double get_rx() { return rx; }
    virtual double get_ry() { return ry; }
    
    void set_attrs(attr_map_t& attrs) override;
    void dump() override;
    const std::string& get_name() const override { return rect::name; };
    
    static const std::string name;
};

}

#endif	/* LIBSVG_RECT_H */

