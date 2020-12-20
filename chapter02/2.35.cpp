int main() {
    const int i = 42;
    auto j = i; // int
    const auto &k = i; // const int
    auto *p = &i; // const int *
    return 0;
}