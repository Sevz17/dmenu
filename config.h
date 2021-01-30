/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

// -b  option; if 0, dmenu appears at bottom
static int topbar						= 1;
// -c option; centers dmenu on screen
static int centered						= 1;
// minimum width when centered
static int min_width					= 500;
// -p  option; prompt to the left of input field
static const char *prompt				= NULL;
// -l option; if nonzero, dmenu uses vertical list with given number of lines
static unsigned int lines   			= 20;
// Size of the window border
static const unsigned int border_width 	= 3;
// Characters not considered part of a word while deleting words for example: " /?\"&[]"
static const char startpipe[] 			= "#";
static const char worddelimiters[] 		= " ";

// -fn option overrides fonts[0]; default X11 font or font set
static const char *fonts[]	= {
	"UbuntuMono Nerd Font:size=12:antialias=true:autohint:true"
};

static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#bbbbbb", "#222222" },
	[SchemeSel]  = { "#eeeeee", "#6000ff" },
	[SchemeOut]  = { "#000000", "#00ffff" },
};
