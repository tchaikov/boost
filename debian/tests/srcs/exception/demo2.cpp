// boost1.67-1.67.0/libs/exception/example/logging.cpp

//Copyright (c) 2006-2009 Emil Dotchevski and Reverge Studios, Inc.

//Distributed under the Boost Software License, Version 1.0. (See accompanying
//file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

//This example shows how to print all data contained in a boost::exception.

#include <boost/exception/all.hpp>
#include <iostream>

void f()
{
    throw boost::enable_error_info(std::range_error("Index out of range"));
}; //throws unknown types that derive from boost::exception.

void g()
{
    try
    {
        f();
    }
    catch (
        boost::exception &e)
    {
        std::cerr << diagnostic_information(e);
    }
}

int main()
{
    g();
}