#define PJ_CONFIG_IPHONE 1
#define PJMEDIA_HAS_SRTP 0
#define PJMEDIA_HAS_VIDEO 1
#define PJMEDIA_HAS_OPENH264_CODEC 1
#define PJMEDIA_VIDEO_DEV_HAS_OPENGL 1
#define PJMEDIA_VIDEO_DEV_HAS_OPENGL_ES 1
#define PJMEDIA_VIDEO_DEV_HAS_IOS_OPENGL 1
#include <OpenGLES/ES3/glext.h>
#define PJ_HAS_IPV6 1
#include <pj/config_site_sample.h>
#define PJMEDIA_HAS_WEBRTC_AEC 1
#define PJMEDIA_HAS_SPEEX_AEC 1
#define PJMEDIA_SPEEX_AEC_USE_AGC 1
#define PJMEDIA_SPEEX_AEC_USE_DENOISE 1
#define PJMEDIA_HAS_OPUS_CODEC 1
#define PJMEDIA_CODEC_OPUS_DEFAULT_SAMPLE_RATE 16000
#define PTIME 40
#define PJMEDIA_CODEC_OPUS_DEFAULT_BIT_RATE 24000
#define PJMEDIA_CODEC_OPUS_DEFAULT_COMPLEXITY 1
#define PJMEDIA_CODEC_OPUS_DEFAULT_CBR PJ_TRUE
