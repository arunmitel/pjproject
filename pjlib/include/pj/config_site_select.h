#define PJSUA_MAX_PLAYERS               1024
#define PJSUA_MAX_RECORDERS             1024
#define PJSUA_MAX_CALLS                 1024
#define PJSUA_MAX_CONF_PORTS            (PJSUA_MAX_CALLS+2*PJSUA_MAX_PLAYERS)
 
#   define PJSUA_MAX_ACC                2048

#   define PJ_SCANNER_USE_BITWISE	0
#   undef PJ_OS_HAS_CHECK_STACK
#   define PJ_OS_HAS_CHECK_STACK	0
#   define PJ_LOG_MAX_LEVEL		5
#   define PJ_ENABLE_EXTRA_CHECK	0
#   define PJ_IOQUEUE_MAX_HANDLES	(PJSUA_MAX_CALLS*1)
#   define PJSIP_MAX_TSX_COUNT		((640*1024)-1)
#   define PJSIP_MAX_DIALOG_COUNT	((640*1024)-1)
#   define PJSIP_UDP_SO_SNDBUF_SIZE	(24*1024*1024)
#   define PJSIP_UDP_SO_RCVBUF_SIZE	(24*1024*1024)
#   define PJ_DEBUG			0
#   define PJSIP_SAFE_MODULE		0
#   define PJ_HAS_STRICMP_ALNUM		0
#   define PJSIP_UNESCAPE_IN_PLACE	1

// disable media codecs
#   define PJMEDIA_HAS_SPEEX_CODEC   0
#   define PJMEDIA_HAS_ILBC_CODEC    0
#   define PJMEDIA_HAS_GSM_CODEC     0
#   define PJMEDIA_HAS_L16_CODEC     0
#   define PJMEDIA_HAS_OPENCORE_AMRNB_CODEC 0

// Auth header
#   define PJSIP_AUTH_HEADER_CACHING    1
#   define PJSIP_AUTH_AUTO_SEND_NEXT    1
