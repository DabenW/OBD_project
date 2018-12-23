#define OBD_NONE 0
#define OBD_UART 1
#define OBD_SPI 2

#define MEMS_DISABLED 0
#define MEMS_ACC 1
#define MEMS_9DOF 2
#define MEMS_DMP 3

#define STORAGE_NONE 0
#define STORAGE_SD 1
#define STORAGE_SPIFFS 2

/**************************************
* Data logging
**************************************/
#ifndef HAVE_CONFIG
// enable(1)/disable(0) data streaming
#define ENABLE_SERIAL_OUT 1
// specify storage type
#define STORAGE STORAGE_NONE
#endif

/**************************************
* WIFI and HTTP server
**************************************/
#ifndef HAVE_CONFIG
#define ENABLE_HTTPD 0
#define ENABLE_WIFI_AP 0
#define ENABLE_WIFI_STATION 1
#define WIFI_AP_SSID "DATALOGGER"
#define WIFI_AP_PASSWORD "PASSWORD"
#define WIFI_SSID "SSID"
#define WIFI_PASSWORD "PASSWORD"
#endif

#define WIFI_JOIN_TIMEOUT 30000

/**************************************
* Hardware setup
**************************************/
#ifndef HAVE_CONFIG
// enable(1)/disable(0) OBD-II reading
#define USE_OBD OBD_SPI
// #define USE_OBD 0
// enable(1)/disable(0) GPS module
#define USE_GPS 0
// specify MEMS mode
#define MEMS_MODE MEMS_9DOF
// enable(1)/disable(0) quaternion calculation to get orientation
#define ENABLE_ORIENTATION 0
#endif

// GPS parameters
#define GPS_SERIAL_BAUDRATE 115200L
// motion detection
#define WAKEUP_MOTION_THRESHOLD 0.5 /* G */
