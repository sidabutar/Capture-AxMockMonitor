/* Error codes that are returned during client<->server mode */

#define SUCCESS											0

/* Visitation major events */
#define CAPTURE_VISITATION_OK							SUCCESS	
#define CAPTURE_VISITATION_PRESTART						0x10000101
#define CAPTURE_VISITATION_START						0x10000102
#define CAPTURE_VISITATION_FINISH						0x10000103
#define CAPTURE_VISITATION_POSTFINISH					0x10000104
#define CAPTURE_VISITATION_NETWORK_ERROR				0x10000110
#define CAPTURE_VISITATION_PROCESS_ERROR				0x10000111
#define CAPTURE_VISITATION_TIMEOUT_ERROR				0x10000112
#define CAPTURE_VISITATION_MULTIPLE_ERRORS				0x10000113
#define CAPTURE_VISITATION_ATTACH_PROCESS_ERROR			0x10000114
#define CAPTURE_VISITATION_EXCEPTION					0x10000200

#define CAPTURE_VISITATION_WARNING						0x10000300

/* Visitation minor events */
#define CAPTURE_PE_PROCESS_TERMINATED_FORCEFULLY		0x10005000
#define CAPTURE_PE_PROCESS_ALREADY_TERMINATED			0x10005001
#define CAPTURE_PE_PROCESS_PATH_NOT_FOUND				0x10005002

#define CAPTURE_NE_CANT_DOWNLOAD_TEMP_FILE				0x10005000
#define CAPTURE_NE_CONNECT_ERROR_DL_TEMP_FILE			0x10005001