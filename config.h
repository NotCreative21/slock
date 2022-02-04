/* user and group to drop privileges to */
static const char *user  = "sean";
static const char *group = "sean";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "#eeffff",   /* after initialization */
	[INPUT] =  "#1e1c31",   /* during input */
	[FAILED] = "#f07178",   /* wrong password */
	[CAPS] =   "#005577",   /* CapsLock on */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* default message */
static const char *message = "";

/* text color */
static const char *text_color = "#ffffff";

/* text size (must be a valid size) */
static const char *font_name = "Operator Mono SSm Lig:size:pixelsize=24:antialias=true:autohint=true";

/* insert grid pattern with scale 1:1, the size can be changed with logosize */
static const int logosize = 75;
/* grid width and height for right center alignment */
static const int logow = 12;
static const int logoh = 6;

static XRectangle rectangles[0];

static const char *imgpath = "/home/sean/.config/gentoo_logo.png";
static const int imgwidth = 200;
static const int imgheight = 240;
static const int imgoffsetx = 1400;
static const int imgoffsety = 800;
static const int showimgonlyatstart = 0;

/*Enable blur*/
#define BLUR
/*Set blur radius*/
static const int blurRadius=3;
/*Enable Pixelation*/
//#define PIXELATION
/*Set pixelation radius*/
static const int pixelSize=2;
