#include <iostream>
#include <string>

struct Sales_data{
    friend std::istream& read(std::istream&, Sales_data& data);
    friend std::ostream& print(std::ostream&, const Sales_data& data);

    double avg_price() const;
    std::string book_no_;
    unsigned units_sold_;
    double revenue_;
};

double
Sales_data::avg_price() const {
    if(units_sold_)
        return revenue_ / units_sold_;
    else
        return 0;
}

std::istream&
read(std::istream& is, Sales_data& data) {
    double price = 0;
    is>>data.book_no_>>data.units_sold_>>price;
    data.revenue_ = data.units_sold_ * price;
    return is;
}

std::ostream&
print(std::ostream& os, const Sales_data& data) {
    os  << data.book_no_ << " " << data.units_sold_<<" "
        << data.revenue_ << " " << data.avg_price();
    os<<"\n";
    return os;
}
