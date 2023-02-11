#include<iostream>

int n_to_o(int n) {
        if (n == 0) {
                std::cout << n << std::endl;
                return 0;
        }

        std::cout << n << " ";
        n_to_o(n - 1);
        return 0;
}


int o_to_n(int n) {
        if (n == 0) {
                std::cout << n << " ";
                return 0;
        }

        o_to_n(n - 1);
        std::cout << n << " ";
        return 0;
}

int main() {
        int n = 5;
        n_to_o(n);
        o_to_n(n);
}
