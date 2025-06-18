#ifndef GO_SINGLE_WAYPOINT_H
#define GO_SINGLE_WAYPOINT_H

#include <iostream>
#include <string>
#include <unistd.h>
#include <getopt.h>
#include <vector>

#include <modal_pipe.h>

#define CLIENT_NAME "go-single-waypoint"

void print_usage();
int parse_opts(const int argc, char* const argv[]);

void helper_cb();
void connect_cb();
void disconnect_cb();

#endif // GO_SINGLE_WAYPOINT_H