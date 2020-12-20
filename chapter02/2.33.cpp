int main() {
    int i = 0, &r = i;
    auto a = r;

    const int ci = i, &cr = ci;
    auto b = ci;
    auto c = cr;
    auto d = &i;
    auto e = &ci;
    const auto f = ci;
    auto &g = ci;
    // auto &h = 42;
    const auto &j = 42;

    // predict the result
    a = 42;
    b = 42;
    c = 42;
    // d = 42; // a value of type "int" cannot be assigned to an entity of type "int *"
    // e = 42; // a value of type "int" cannot be assigned to an entity of type "const int *"
    // g = 42; // FIXME: I can understand this

    return 0;
}