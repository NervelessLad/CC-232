#include <cassert>
#include "ArrayStack.h"
#include "FastArrayStack.h"
#include "RootishArrayStack.h"

int main() {
    {
        ods::ArrayStack<int> s;
        for (int i = 0; i < 200; ++i) s.add(s.size(), i);
        for (int i = 199; i >= 100; --i) assert(s.remove(i) == i);
        assert(s.size() == 100);
    }

    {
        ods::FastArrayStack<int> s;
        for (int i = 0; i < 200; ++i) s.add(s.size(), i);
        for (int i = 0; i < 50; ++i) assert(s.remove(0) == i);
        assert(s.size() == 150);
    }

    {
        ods::RootishArrayStack<int> s;
        for (int i = 0; i < 120; ++i) s.add(i, i);
        for (int i = 119; i >= 60; --i) assert(s.remove(i) == i);
        assert(s.size() == 60);
    }

    return 0;
}
