#include <iostream>
#include <string>
#include <unistd.h>
#include <getopt.h>

#include <modal_pipe.h>

static void print_usage()
{
	std::cout << "\n\
go-single-waypoint-server can be started from the command line manually with any of the following\n\
debug options. 
\n\
go-single-waypoint-server also creates a control pipe to test sending commands back to\n\
the server from either a client or from the command line. To test, try this:\n\
echo -n test > /run/mpa/go-single-waypoint/control\n\
\n\
-d, --debug                 print debug info\n\
-f, --frequency             publish frequency in hz\n\
-h, --help                  print this help message\n\
\n";
	return;
}


static int _parse_opts(int argc, char *argv[])
{
	static struct option long_options[] =
		{
			{"config", no_argument, 0, 'c'},
			{"help", no_argument, 0, 'h'},
		};

	while (1)
	{
		int option_index = 0;
		int c = getopt_long(argc, argv, "cm:i:s:dthz", long_options, &option_index);

		if (c == -1)
			break; // Detect the end of the options.

		switch (c)
		{
		case 0:
			// for long args without short equivalent that just set a flag
			// nothing left to do so just break.
			if (long_options[option_index].flag != 0)
				break;
			break;

		case 'c':
			config_file_read();
			exit(0);
			break;

		case 'h':
			_print_usage();
			return -1;

		default:
			_print_usage();
			return -1;
		}
	}
	return 0;
}

                   
int main(int argc, const char** argv)
{           
    if (_parse_opts(argc, argv))
		return -1;

    return 0;
}