#include <iostream>

main(){
    int v, s, V = 0, N = -1, i = 1;
    std::cin >> s;
    for(;std::cin >> v >> s; i++)
        if(s & v > V) N = i, V = v;
    std::cout << N;
}
