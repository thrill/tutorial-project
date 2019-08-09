/*******************************************************************************
 * main.cpp
 *
 * Minimal Example for Project Thrill - http://project-thrill.org
 *
 * Copyright (C) 2019 Timo Bingmann <tb@panthema.net>
 *
 * All rights reserved. Published under the BSD-2 license in the LICENSE file.
 ******************************************************************************/

#include <thrill/api/context.hpp>

#include <iostream>

int main(int argc, char* argv[]) {
    return thrill::Run(
        [&](thrill::Context& ctx) {
            std::cout << "Hello World, I am " << ctx.my_rank() << std::endl;
        });
}

/******************************************************************************/
