#ifndef report_h
#define report_h

#define STATUS_OK 0
#define STATUS_BAD_NUMBER_FORMAT 2
#define STATUS_INVALID_STATEMENT 3
#define STATUS_NEGATIVE_VALUE 4
#define STATUS_SETTING_DISABLED 5
#define STATUS_SETTING_READ_FAIL 7
#define STATUS_IDLE_ERROR 8
#define STATUS_SYSTEM_GC_LOCK 9
#define STATUS_SOFT_LIMIT_ERROR 10
#define STATUS_OVERFLOW 11
#define STATUS_STOP 12
#define STATUS_RESET 14
#define STATUS_INVALID_JOG_COMMAND 16
#define STATUS_GCODE_UNSUPPORTED_COMMAND 20
#define STATUS_GCODE_UNDEFINED_FEED_RATE 22
#define STATUS_GCODE_COMMAND_VALUE_NOT_INTEGER 23
#define STATUS_HOMING_FAIL_RESET 17
#define STATUS_HOMING_FAIL_PULLOFF 18
#define STATUS_HOMING_FAIL_APPROACH 19

void report_status_message(uint8_t status_code);
void report_grbl_settings();
void report_build_info();

#endif
