#include <iostream>

int main() {
    std::cout << "Hello, World!" << std::endl;

    int n = 10;
    int *p = &n;
    char *q;
    printf("n has value %d and address %p\n", n, p);
    p++;
    printf("value at next byte %p is %d\n", p, *p);
    q = reinterpret_cast<char *>(p);
    printf("char value at next byte %p is %d\n", q, *q);

    return 0;

}
