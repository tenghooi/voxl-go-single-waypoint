#ifndef GO_SINGLE_WAYPOINT_H
#define GO_SINGLE_WAYPOINT_H

#include <iostream>
#include <iomanip>
#include <string>
#include <unistd.h>
#include <getopt.h>
#include <vector>

#include <modal_pipe.h>
#include <voxl_cutils.h>

#define CLIENT_NAME "go-single-waypoint"
#define CH 1

extern bool en_newline;
static char imu_name[64];

void print_usage();
int parse_opts(const int argc, char* argv[]);

void helper_cb([[maybe_unused]] int ch, char* data, int bytes, [[maybe_unused]] void* context);
void connect_cb(int, void*);
void disconnect_cb(int, void*);

#endif // GO_SINGLE_WAYPOINT_H