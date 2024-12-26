#include <assert.h>
#include <stdint.h>
#include <stdio.h>

// Function to calculate the average of an array of uint16_t values
int calculate_average(uint16_t *data, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += data[i];
    }
    return sum / size;
}

// Test case 1: Basic test with a small dataset
void test_average_basic() {
    uint16_t data[] = {100, 200, 300, 400, 500};
    int avg = calculate_average(data, 5);
    assert(avg == 300); // Verify average is 300
    printf("Test 1 passed: Basic average calculation\n");
}

// Test case 2: Test with all elements being the same
void test_average_same_values() {
    uint16_t data[] = {10, 10, 10, 10, 10};
    int avg = calculate_average(data, 5);
    assert(avg == 10); // Verify average is 10
    printf("Test 2 passed: Same values test\n");
}

// Test case 3: Test with minimum and maximum possible values
void test_average_min_max() {
    uint16_t data[] = {0, 1023, 512, 256, 1023}; // Random min/max values
    int avg = calculate_average(data, 5);
    assert(avg == 384); // Verify average is 384
    printf("Test 3 passed: Min/Max values test\n");
}

// Test case 4: Test with a large number of elements
void test_average_large_array() {
    uint16_t data[100];
    for (int i = 0; i < 100; i++) {
        data[i] = i + 1; // Array values from 1 to 100
    }
    int avg = calculate_average(data, 100);
    assert(avg == 50); // Verify average is 50 (sum is 5050, average is 5050 / 100)
    printf("Test 4 passed: Large array test\n");
}

// Test case 5: Test with just one element
void test_average_single_value() {
    uint16_t data[] = {42}; // Single element
    int avg = calculate_average(data, 1);
    assert(avg == 42); // Verify average is 42
    printf("Test 5 passed: Single value test\n");
}

int main() {
    // Run all test cases
    test_average_basic();
    test_average_same_values();
    test_average_min_max();
    test_average_large_array();
    test_average_single_value();

    return 0;
}

