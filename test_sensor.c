#include <assert.h>
#include <stdint.h>

void test_average() {
    uint16_t data[] = {100, 200, 300, 400, 500};
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += data[i];
    }
    int avg = sum / 5;
    assert(avg == 300); // Verify average calculation
}

int main() {
    test_average();
    return 0;
}
