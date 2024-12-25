int main()
{
    uint16_t *sensor_data = (uint16_t *)malloc(BUFFER_SIZE * sizeof(uint16_t));
    if (!sensor_data) {
        printf("Memory allocation failed!\n");
        return 1; // Error code for memory allocation failure
    }

    read_sensor_data(sensor_data);
    process_data(sensor_data);
    print_data(sensor_data, BUFFER_SIZE);

    free(sensor_data);
    return 0; // Indicate successful completion
}
