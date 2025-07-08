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

bool en_newline = false;
static char imu_name[64];

void print_usage();
int parse_opts(const int argc, char* const argv[]);

void helper_cb(char* data, int bytes);
void connect_cb();
void disconnect_cb();

#endif // GO_SINGLE_WAYPOINT_H