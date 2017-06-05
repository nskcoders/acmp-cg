#include <iostream>
#define o std::cin >> v

main(){
    int v, s, V = 0, N = -1, i = 1;
    o;
    for(; o >> s; i++)
        s & v > V ? N = i, V = v : 0;
    std::cout << N;
}
