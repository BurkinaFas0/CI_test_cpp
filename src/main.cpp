// main.cpp
#include <iostream>

int add(int a, int b) {
    return a + b;
}

int multiply(int a, int b) {
    return a * b;
}

bool test_add() {
    return (add(2, 3) == 5) && (add(-1, 1) == 0) && (add(0, 0) == 0);
}

bool test_multiply() {
    return (multiply(2, 3) == 6) && (multiply(-2, 3) == -6) && (multiply(0, 5) == 0);
}

int main() {
    int passed = 0;
    int total = 0;
    
    std::cout << "Running tests...\n";
    
    // Test add function
    total++;
    if (test_add()) {
        std::cout << "✓ test_add passed\n";
        passed++;
    } else {
        std::cout << "✗ test_add failed\n";
    }
    
    // Test multiply function
    total++;
    if (test_multiply()) {
        std::cout << "✓ test_multiply passed\n";
        passed++;
    } else {
        std::cout << "✗ test_multiply failed\n";
    }
    
    std::cout << "\nTests passed: " << passed << "/" << total << "\n";
    
    return (passed == total) ? 0 : 1;
}