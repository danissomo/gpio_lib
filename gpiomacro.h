#include "gpio.h"
#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <fcntl.h>
#include <sys/types.h>
#include <stdbool.h>

int export_pin(int pin);
int unexport_pin(int pin);
int set_direction( int pin, bool direction);
int set_pin(int pin, bool value);
int read_pin(int pin);