#include <cassert>
#include <cmath>
#include "Capitulo2.h"

int main() {
    ods::array<int> a(4);
    for (int i = 0; i < a.length; ++i) a[i] = i * 10;
    assert(a[0] == 0 && a[3] == 30);

    ods::ArrayQueue<int> q;
    for (int i = 1; i <= 20; ++i) q.add(i);
    for (int i = 1; i <= 10; ++i) assert(q.remove() == i);
    for (int i = 21; i <= 30; ++i) q.add(i);
    for (int i = 11; i <= 30; ++i) assert(q.remove() == i);
    assert(q.size() == 0);

    ods::ArrayDeque<int> deq;
    for (int i = 0; i < 8; ++i) deq.add(i, i);
    deq.add(0, 100);
    deq.add(4, 200);
    assert(deq.get(0) == 100);
    assert(deq.get(4) == 200);
    assert(deq.remove(4) == 200);
    assert(deq.remove(0) == 100);

    ods::DualArrayDeque<int> dual;
    for (int i = 0; i < 40; ++i) dual.add(dual.size(), i);
    for (int i = 0; i < 40; ++i) assert(dual.get(i) == i);
    for (int i = 0; i < 10; ++i) assert(dual.remove(0) == i);
    for (int i = 39; i >= 30; --i) assert(dual.remove(dual.size()-1) == i);
    for (int i = 10; i < 30; ++i) assert(dual.get(i-10) == i);

    ods::RootishArrayStack<int> rootish;
    for (int i = 0; i < 50; ++i) rootish.add(i, i * 2);
    for (int i = 0; i < 50; ++i) assert(rootish.get(i) == i * 2);
    assert(rootish.remove(10) == 20);
    assert(rootish.get(10) == 22);

    ods::FastSqrt::init();
    for (int x = 0; x <= 50000; ++x) {
        assert(ods::FastSqrt::sqrt(x) == static_cast<int>(std::floor(std::sqrt(static_cast<double>(x)))));
    }

    return 0;
}
