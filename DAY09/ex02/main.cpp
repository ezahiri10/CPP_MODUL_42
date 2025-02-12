#include <vector>
#include <iostream>

// Function to generate the nth Jacobsthal number
#include <iostream>
#include <vector>

std::vector<int> generateJacobsthal(int N) {
    std::vector<int> jacobsthal;
    if (N == 0) return jacobsthal;

    jacobsthal.push_back(0); // J_0
    if (N == 1) return jacobsthal;

    jacobsthal.push_back(1); // J_1

    for (int i = 2; jacobsthal.back() < N; ++i) {
        int nextJ = jacobsthal[i - 1] + 2 * jacobsthal[i - 2];
        if (nextJ >= N) break;
        jacobsthal.push_back(nextJ);
    }
    return jacobsthal;
}


// Function to generate Jacobsthal insertion order
std::vector<int> generateInsertionOrder(int N) {
    std::vector<int> jacobsthal = generateJacobsthal(N);
    std::vector<int> order;
    std::vector<bool> used(N, false);

    // Step 1: Add Jacobsthal indices
    for (int j : jacobsthal) {
        if (j < N && !used[j]) {
            order.push_back(j);
            used[j] = true;
        }
    }

    // Step 2: Fill missing numbers in increasing order
    for (int i = 0; i < N; ++i) {
        if (!used[i]) {
            order.push_back(i);
        }
    }
    return order;
}



// Function to print the vector
void printVector(const std::vector<int> &v) {
    for (size_t i = 0; i < v.size(); i++)
        std::cout << v[i] << " ";
    std::cout << std::endl;
}

// Main function to test
int main() {
    std::vector<int> order;
    int size = 7;

    order =  generateInsertionOrder(size);
    std::cout << "Jacobsthal Insertion Order: ";
    printVector(order);

    return 0;
}
