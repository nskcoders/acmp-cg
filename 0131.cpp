#include <iostream>
#define o std::cin >> v

int v, s, V, N = -1, i = 1;
main(){
    o;
    for(; o >> s; i++) s & v > V ? N = i, V = v : 0;
    std::cout << N;
}
