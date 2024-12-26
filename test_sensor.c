c#include <assert.h>
#include <stdint.h>

int calculate_average(uint16_t *data, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += data[i];
    }
    return sum / size;
}


int main() {
    void test_average() {
    uint16_t data[] = {100, 200, 300, 400, 500};
    int avg = calculate_average(data, 5);
    assert(avg == 300);
}


    // If no assertion fails, test passes
    return 0;
}
