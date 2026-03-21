#include <cassert>
#include <cmath>
#include "ArrayQueue.h"
#include "ArrayDeque.h"
#include "DualArrayDeque.h"
#include "FastSqrt.h"

int main() {
    ods::ArrayQueue<int> q;
    q.add(1);
    q.add(2);
    q.add(3);
    assert(q.remove() == 1);
    assert(q.remove() == 2);
    q.add(4);
    assert(q.remove() == 3);
    assert(q.remove() == 4);

    ods::ArrayDeque<int> d;
    d.add(0, 10);
    d.add(1, 30);
    d.add(1, 20);
    assert(d.get(0) == 10 && d.get(1) == 20 && d.get(2) == 30);
    assert(d.remove(1) == 20);
    assert(d.get(1) == 30);

    ods::DualArrayDeque<int> dual;
    dual.add(0, 5);
    dual.add(1, 7);
    dual.add(1, 6);
    assert(dual.get(0) == 5 && dual.get(1) == 6 && dual.get(2) == 7);
    assert(dual.remove(1) == 6);

    ods::FastSqrt::init();
    for (int x : {0, 1, 2, 3, 4, 8, 9, 15, 16, 17, 63, 64, 65, 999, 1024}) {
        assert(ods::FastSqrt::sqrt(x) == static_cast<int>(std::floor(std::sqrt(static_cast<double>(x)))));
    }
    return 0;
}
