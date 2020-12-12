int main() {
    int i = 0;
    const int v2 = 0; // top level const
    int v1 = v2;
    int *p1 = &v1, &r1 = v1;
    const int *p2 = &v2, *const p3 = &i, &r2 = v2; // p2 low level const; p3 top level & low level const;  r2 low level const
    r1 = v2; // FIXME: not familiar to the quote
    // p1 = p2; // p2 is low-level const and can not be assign to int*
    p2 = p1; // int* can assign to low-level const
    // p1 = p3; // p3 is a top-level const and can not be assigned to int*
    p2 = p3; // FIXME: first time I'm wrong. // p2 is low-level const and p3 is both low-level and top-level const

    constexpr int mf = 20;
    constexpr int sz = mf + 1;

    const int *p = nullptr; // p is a pointer that point to an int const
    constexpr int *q = nullptr; /// q is a const pointer
    
}