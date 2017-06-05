#include <iostream>

main(){
    int v, s, V = 0, N = -1, i = 1;
    std::cin >> s;
    for(;std::cin >> v >> s; i++)
        s & v > V ? N = i, V = v : 0;
    std::cout << N;
}
