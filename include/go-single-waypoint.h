#ifndef GO_SINGLE_WAYPOINT_H
#define GO_SINGLE_WAYPOINT_H

#include <iostream>
#include <iomanip>
#include <string>
#include <cstring>
#include <unistd.h>
#include <getopt.h>
#include <vector>

#include <modal_pipe.h>
#include <voxl_cutils.h>

#define CLIENT_NAME "go-single-waypoint"
#define MAPPER_PIPE_NAME "holder"
#define CH 0

extern bool en_newline;
extern char imu_name[];

void print_usage();
int parse_opts(const int argc, char* argv[]);

void sendPlanCommand(int ch, const char* command);

void helper_cb([[maybe_unused]] int ch, char* data, int bytes, [[maybe_unused]] void* context);
void mapper_connect_cb(int, void*);
void mapper_disconnect_cb(int, void*);

#endif // GO_SINGLE_WAYPOINT_H