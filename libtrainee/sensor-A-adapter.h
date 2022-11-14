#pragma once


class ASensor_Adapter
{
public:
    ASensor_Adapter(ASensor* adaptee) : _adaptee(adaptee) {}
    double get_temperature()
    {
        return 42.3;
    }

private:
    ASensor* _adaptee;
};
