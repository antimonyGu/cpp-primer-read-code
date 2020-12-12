#include <cstdlib>

int main() {
    // int null = 0, *p = null;

    // method1
    const int null1 = 0;
    int *p = null1;

    // method2
    int *p2 = nullptr;

    // method3
    int *p3 = 0;

    // method4 (need to include `cstdlib`)
    int *p4 = NULL;
    
    // method5
    constexpr int null2 = 0;
    int *p5 = null2;

    return 0;
}