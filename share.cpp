#include "test.h"

struct OmsEnv * create() {
    struct OmsEnv * t = reinterpret_cast<struct OmsEnv*>(new Test);
    return t;
}

void f(OmsEnv *t) {
    Test *pt = reinterpret_cast<Test*>(t);
    pt->f();
}
