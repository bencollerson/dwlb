#define DWLKEYS "/usr/local/bin/dwl-keys"
#define UPDATESTATUSBAR "/home/benc/bin/sbar -s"
#define HEX_COLOR(hex)				\
	{ .red   = ((hex >> 24) & 0xff) * 257,	\
	  .green = ((hex >> 16) & 0xff) * 257,	\
	  .blue  = ((hex >> 8) & 0xff) * 257,	\
	  .alpha = (hex & 0xff) * 257 }

// initially hide all bars
static bool hidden = false;
// initially draw all bars at the bottom
static bool bottom = true;
// hide vacant tags
static bool hide_vacant = true;
// vertical pixel padding above and below text
static uint32_t vertical_padding = 1;
// allow in-line color commands in status text
static bool status_commands = true;
// center title text
static bool center_title = false;
// use title space as status text element
static bool custom_title = false;
// scale
static uint32_t buffer_scale = 1;
// font
static char *fontstr = "monospace:size=10";

// tag count
static char tag_first = 'a';
static uint32_t tag_count = 26;

// set 16-bit colors for bar
// use either pixman_color_t struct or HEX_COLOR macro for 8-bit colors
static pixman_color_t fg_grey_color = HEX_COLOR(0xbbbbbbff);
static pixman_color_t fg_red_color  = HEX_COLOR(0xf92672ff);
static pixman_color_t bg_grey_color = HEX_COLOR(0x222222ff);
static pixman_color_t bg_blue_color = HEX_COLOR(0x223344ff);
