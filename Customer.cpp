/**
Author: Jinxiu Liu
Course: CSCI-23500
Instructor: Tiziana Ligorio
Date: 8/30/2018
Assignment:
     1.Write the implementation for Customer.hpp in Customer.cpp
     2.Makesure to include "Customer.hpp", on the top
     3.Follow the instruction below

**/

#include <iostream>
#include <string>
using namespace std;
#include "Customer.hpp"

Customer::Customer()
{
    name_="";
    defective_device_="";
    wait_time_=0;

}

Customer::Customer(string name, string device, int wait_time)
{
    name_=name;
    defective_device_=device;
    wait_time_=wait_time;
}

string Customer::getName()
{
    return name_;
}

string Customer::getDevice()
{
    return defective_device_;
}

int Customer::getWaitTime()
{
    return wait_time_;
}

void Customer::updateWaitTime(int new_wait_time)
{
    wait_time_=new_wait_time;
}

