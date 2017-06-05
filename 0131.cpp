#include <iostream>

main(){
    int v, s, n, V = 0, N = 0, i = 1;
    std::cin >> n;
    while(std::cin >> v >> s && i++)
        if(s && v > V) N = i, V = v;
    std::cout << N - 1;
}
