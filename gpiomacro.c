#include "gpiomacro.h"

int  _write_file(char *path, char* payload){
	int fd = open(path, O_WRONLY);
	if(fd < 0 ) {
		printf("error open");
		return -1;
	}
	if(write(fd, payload, strlen(payload)) < 0) {
		close(fd);
		return 0;
	}
	close(fd);
	return 1;
}

int  _read_file(char *path, char* payload){
	int fd = open(path, O_WRONLY);
	if(fd < 0 ) {
		printf("error open");
		return -1;
	}
	if(read(fd, payload, strlen(payload)) < 0) {
		close(fd);
		return 0;
	}
	close(fd);
	return 1;
}

int export_pin(int pin){
	if(pin == -1) return -1;
	char pin_char[3];
	sprintf(pin_char, "%d", pin);
    return _write_file(EXPORT_DIR, pin_char);
}


int unexport_pin(int pin){
	if(pin == -1) return -1;
	char pin_char[3];
	sprintf(pin_char, "%d", pin);
    return _write_file(UNEXPORT_DIR, pin_char);
}

int set_direction(int pin, bool direction){
	char mode_file[50];
	if (pin == -1)
		return -1;
	sprintf(mode_file, GPIO_DIR_MODE, pin);

	if (direction == OUTPUT)
		_write_file(mode_file, "out");
	else if (direction == INPUT)
		_write_file(mode_file, "in");
		
	return direction;
}

int set_pin(int pin, bool value){
	char value_file[50];
	sprintf(value_file, GPIO_DIR_VALUE, pin);
	char str_value[2];
	sprintf(str_value, "%d", value );
	return _write_file(value_file, str_value);
}

int read_pin(int pin){
	char value_file[50];
	sprintf(value_file, GPIO_DIR_VALUE, pin);
	char str_value[2];
	str_value[1] ='\0';
	if(_read_file(value_file, str_value) < 0) return -1;
	int bool_value;
	sscanf(str_value, "%d", &bool_value);
	return bool_value;
}