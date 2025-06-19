#include "go-single-waypoint.h"

void print_usage()
{

}

int parse_opts(const int argc, const char* const argv[])
{

}

void helper_cb(char* data, int bytes)
{
    // validate that the data makes sense
	int n_packets {0};
	imu_data_t* data_array = pipe_validate_imu_data_t(data, bytes, &n_packets);
	if (data_array == NULL) 
        return;

	// print latest packet
	if (!en_newline) 
        std::cout << "\r" << CLEAR_LINE;

    std::cout << 
	printf("%7.2f|%7.2f|%7.2f",	(double)data_array[n_packets-1].accl_ms2[0],
								(double)data_array[n_packets-1].accl_ms2[1],
								(double)data_array[n_packets-1].accl_ms2[2]);

	if (en_newline) 
        std::cout << std::endl;

	return;
}

void connect_cb()
{

}

void disconnect_cb()
{

}