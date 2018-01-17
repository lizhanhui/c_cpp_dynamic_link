#ifndef TEST_H
#define TEST_H

#ifdef __cplusplus
class Test {
public:
    void f();
};
#endif

#ifdef __cplusplus
extern "C" {
#endif
    // Define an opaque type
    struct OmsEnv;

    struct OmsEnv * create();

    void f(struct OmsEnv *t);

#ifdef __cplusplus
}
#endif

#endif // TEST_H
