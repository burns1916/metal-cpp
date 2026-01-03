//
//  main.cpp
//  metal-cpp-tutorial
//
//  Created by ryan burns on 12/19/25.
//

#include <iostream>
#include "Metal/Metal.hpp"
#include "metal_engine.hpp"


int main() {
    MTLEngine engine;
    engine.init();
    engine.run();
    engine.cleanup();

    return 0;
}
