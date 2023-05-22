#include "doctest.h"

#include <Memory>

TEST_CASE("testing unique ptr") {
    struct Data {
        int data;
        static Data create() {
            Data data;
            data.data = 100;

            return data;
        }

        void destroy() {}
    };
    auto unique_ptr = std2::Unique_ptr<Data>::create();
    unique_ptr.destroy();

    auto unique_ptr2 = std2::Unique_ptr<int>::create_and_init();
    auto data2 = unique_ptr2.get();
    *data2 = 10;
    unique_ptr2.destroy();
}