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

bool en_newline = false;

void print_usage();
int parse_opts(const int argc, const char* const argv[]);

void helper_cb(char* data, int bytes);
void connect_cb();
void disconnect_cb();

#endif // GO_SINGLE_WAYPOINT_H