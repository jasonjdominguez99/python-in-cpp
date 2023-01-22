// data_type.h
//
// Header file for the data types
// class
//
// Author: Jason Dominguez
// Date: 2023-01-22

#ifndef DATA_TYPE
#define DATA_TYPE

namespace python
{
    class DataType
    {
    public:
        virtual ~DataType() = 0;
    };

    class Int: public DataType
    {
    private:
        int value;

    public:
        Int(int val) : value{val} {};
        virtual ~Int() {};
    };
}

#endif