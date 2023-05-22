#include "doctest.h"

#include <cstdio>

#include <Vector>

TEST_CASE("testing vector") {
    auto vec = std2::Vector<int>::create_empty();
    vec.destroy();

    auto vec2 = std2::Vector<int>::create_with_capacity(10);
    vec2.destroy();

    auto vec3 = std2::Vector<int>::create_and_init(10, 1);
    auto vec3b = vec3.boundaries();
    for(auto iii = vec3b.start; iii != vec3b.end; ++iii)
    {
        printf("%d\n", *iii);
    }
    vec3.destroy();

    auto vec4 = std2::Vector<int>::create_empty();
    vec4.destroy();
}