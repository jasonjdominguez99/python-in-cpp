// data_type.cc
//
// Source file for the data types
// class
//
// Author: Jason Dominguez
// Date: 2023-01-24

#include "data_type.h"

namespace python
{
    Int python::Int::operator+(const Int& num)
    {
        return Int(this->value + num.value);
    }

    Int python::Int::operator-(const Int& num)
    {
        return Int(this->value - num.value);
    }

    Int python::Int::operator*(const Int& num)
    {
        return Int(this->value * num.value);
    }

    Int python::Int::operator/(const Int& num)
    {
        return Int(this->value / num.value);
    }
}