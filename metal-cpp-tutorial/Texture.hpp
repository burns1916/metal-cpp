//
//  Texture.hpp
//  metal-cpp-tutorial
//
//  Created by ryan burns on 12/19/25.
//

#pragma once
#include <Metal/Metal.hpp>
#include <stb_image.h>

class Texture {
public:
    Texture(const char* filepath, MTL::Device* metalDevice);
    ~Texture();
    MTL::Texture* texture;
    int width, height, channels;
private:
    MTL::Device* device;
};
