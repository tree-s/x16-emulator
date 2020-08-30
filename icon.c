#include "icon.h"

//#define LOGO_56
#define LOGO_83

#if defined(LOGO_56)
static char pixels[] =
	"................................................................................................"
	"................................................................................................"
	"................................................................................................"
	"................................................................................................"
	"................................................................................................"
	"................................................................................................"
	"................................................................................................"
	"................................................................................................"
	"................................................................................................"
	"................................................................................................"
	"................................................................................................"
	"................................................................................................"
	"................................................................................................"
	"................................................................................................"
	"................................................................................................"
	"................................................................................................"
	"................................................................................................"
	"................................................................................................"
	"................................................................................................"
	"................................................................................................"
	"................................................................................................"
	"....................@......................................................@...................."
	"....................@@....................................................@@...................."
	"....................@@@..................................................@@@...................."
	"....................@@@@................................................@@@@...................."
	"....................@@@@@..............................................@@@@@...................."
	"....................@@@@@@............................................@@@@@@...................."
	"....................@@@@@@@..........................................@@@@@@@...................."
	"......................######........................................######......................"
	"......................#######......................................#######......................"
	"......................########....................................########......................"
	"......................#########..................................#########......................"
	"......................##########................................##########......................"
	"......................###########..............................###########......................"
	"......................############............................############......................"
	"......................#############..........................#############......................"
	".......................*************........................*************......................."
	".......................**************......................**************......................."
	".......................***************....................***************......................."
	".......................****************..................****************......................."
	".......................*****************................*****************......................."
	".......................******************..............******************......................."
	".......................*******************............*******************......................."
	".......................********************..........********************......................."
	"............................%%%%%%%%%%%%%%%%........%%%%%%%%%%%%%%%%............................"
	"............................%%%%%%%%%%%%%%%%........%%%%%%%%%%%%%%%%............................"
	"....................................%%%%%%%%........%%%%%%%%...................................."
	"....................................%%%%%%%%........%%%%%%%%...................................."
	"........................................%%%%........%%%%........................................"
	"........................................%%%%........%%%%........................................"
	"........................................%%%%........%%%%........................................"
	"........................................%%%%........%%%%........................................"
	"........................................&&&&........&&&&........................................"
	"........................................&&&&........&&&&........................................"
	"........................................&&&&........&&&&........................................"
	"........................................&&&&........&&&&........................................"
	"....................................&&&&&&&&........&&&&&&&&...................................."
	"....................................&&&&&&&&........&&&&&&&&...................................."
	"............................&&&&&&&&&&&&&&&&........&&&&&&&&&&&&&&&&............................"
	"............................&&&&&&&&&&&&&&&&........&&&&&&&&&&&&&&&&............................"
	"..........................$$$$$$$$$$$$$$$$$$........$$$$$$$$$$$$$$$$$$.........................."
	"..........................$$$$$$$$$$$$$$$$$..........$$$$$$$$$$$$$$$$$.........................."
	"..........................$$$$$$$$$$$$$$$$............$$$$$$$$$$$$$$$$.........................."
	"..........................$$$$$$$$$$$$$$$..............$$$$$$$$$$$$$$$.........................."
	"..........................$$$$$$$$$$$$$$................$$$$$$$$$$$$$$.........................."
	"..........................$$$$$$$$$$$$$..................$$$$$$$$$$$$$.........................."
	"..........................$$$$$$$$$$$$....................$$$$$$$$$$$$.........................."
	"..........................$$$$$$$$$$$......................$$$$$$$$$$$.........................."
	".........................+++++++++++........................+++++++++++........................."
	".........................++++++++++..........................++++++++++........................."
	".........................+++++++++............................+++++++++........................."
	".........................++++++++..............................++++++++........................."
	".........................+++++++................................+++++++........................."
	".........................++++++..................................++++++........................."
	".........................+++++....................................+++++........................."
	".........................++++......................................++++........................."
	"................................................................................................"
	"................................................................................................"
	"................................................................................................"
	"................................................................................................"
	"................................................................................................"
	"................................................................................................"
	"................................................................................................"
	"................................................................................................"
	"................................................................................................"
	"................................................................................................"
	"................................................................................................"
	"................................................................................................"
	"................................................................................................"
	"................................................................................................"
	"................................................................................................"
	"................................................................................................"
	"................................................................................................"
	"................................................................................................"
	"................................................................................................"
	"................................................................................................";
#endif

#if defined(LOGO_83)
static char pixels[] =
	"................................................................................................"
	"................................................................................................"
	"................................................................................................"
	"....@@....................................................................................@@...."
	"....@@@..................................................................................@@@...."
	"....@@@@................................................................................@@@@...."
	"....@@@@@..............................................................................@@@@@...."
	"....@@@@@@............................................................................@@@@@@...."
	"....@@@@@@@..........................................................................@@@@@@@...."
	"....@@@@@@@@........................................................................@@@@@@@@...."
	"....@@@@@@@@@......................................................................@@@@@@@@@...."
	"....@@@@@@@@@@....................................................................@@@@@@@@@@...."
	"....@@@@@@@@@@@..................................................................@@@@@@@@@@@...."
	"....@@@@@@@@@@@@................................................................@@@@@@@@@@@@...."
	"....@@@@@@@@@@@@@..............................................................@@@@@@@@@@@@@...."
	"....@@@@@@@@@@@@@@............................................................@@@@@@@@@@@@@@...."
	"........###########..........................................................###########........"
	"........############........................................................############........"
	"........#############......................................................#############........"
	"........##############....................................................##############........"
	"........###############..................................................###############........"
	"........################................................................################........"
	"........#################..............................................#################........"
	"........##################............................................##################........"
	"........###################..........................................###################........"
	"........####################........................................####################........"
	"........#####################......................................#####################........"
	"........######################....................................######################........"
	"...........********************..................................********************..........."
	"...........*********************................................*********************..........."
	"...........**********************..............................**********************..........."
	"...........***********************............................***********************..........."
	"...........************************..........................************************..........."
	"...........*************************........................*************************..........."
	"...........**************************......................**************************..........."
	"...........***************************....................***************************..........."
	"...........****************************..................****************************..........."
	"...........*****************************................*****************************..........."
	"...........******************************..............******************************..........."
	"...........*******************************............*******************************..........."
	"..................%%%%%%%%%%%%%%%%%%%%%%%%%..........%%%%%%%%%%%%%%%%%%%%%%%%%.................."
	"..................%%%%%%%%%%%%%%%%%%%%%%%%%..........%%%%%%%%%%%%%%%%%%%%%%%%%.................."
	"..................%%%%%%%%%%%%%%%%%%%%%%%%%..........%%%%%%%%%%%%%%%%%%%%%%%%%.................."
	"..............................%%%%%%%%%%%%%..........%%%%%%%%%%%%%.............................."
	"..............................%%%%%%%%%%%%%..........%%%%%%%%%%%%%.............................."
	"..............................%%%%%%%%%%%%%..........%%%%%%%%%%%%%.............................."
	"....................................%%%%%%%..........%%%%%%%...................................."
	"....................................%%%%%%%..........%%%%%%%...................................."
	"....................................%%%%%%%..........%%%%%%%...................................."
	"....................................%%%%%%%..........%%%%%%%...................................."
	"....................................%%%%%%%..........%%%%%%%...................................."
	"....................................%%%%%%%..........%%%%%%%...................................."
	"....................................&&&&&&&..........&&&&&&&...................................."
	"....................................&&&&&&&..........&&&&&&&...................................."
	"....................................&&&&&&&..........&&&&&&&...................................."
	"....................................&&&&&&&..........&&&&&&&...................................."
	"....................................&&&&&&&..........&&&&&&&...................................."
	"....................................&&&&&&&..........&&&&&&&...................................."
	"..............................&&&&&&&&&&&&&..........&&&&&&&&&&&&&.............................."
	"..............................&&&&&&&&&&&&&..........&&&&&&&&&&&&&.............................."
	"..............................&&&&&&&&&&&&&..........&&&&&&&&&&&&&.............................."
	"..................&&&&&&&&&&&&&&&&&&&&&&&&&..........&&&&&&&&&&&&&&&&&&&&&&&&&.................."
	"..................&&&&&&&&&&&&&&&&&&&&&&&&&..........&&&&&&&&&&&&&&&&&&&&&&&&&.................."
	"..................&&&&&&&&&&&&&&&&&&&&&&&&&..........&&&&&&&&&&&&&&&&&&&&&&&&&.................."
	"...............$$$$$$$$$$$$$$$$$$$$$$$$$$$$..........$$$$$$$$$$$$$$$$$$$$$$$$$$$$..............."
	"...............$$$$$$$$$$$$$$$$$$$$$$$$$$$............$$$$$$$$$$$$$$$$$$$$$$$$$$$..............."
	"...............$$$$$$$$$$$$$$$$$$$$$$$$$$..............$$$$$$$$$$$$$$$$$$$$$$$$$$..............."
	"...............$$$$$$$$$$$$$$$$$$$$$$$$$................$$$$$$$$$$$$$$$$$$$$$$$$$..............."
	"...............$$$$$$$$$$$$$$$$$$$$$$$$..................$$$$$$$$$$$$$$$$$$$$$$$$..............."
	"...............$$$$$$$$$$$$$$$$$$$$$$$....................$$$$$$$$$$$$$$$$$$$$$$$..............."
	"...............$$$$$$$$$$$$$$$$$$$$$$......................$$$$$$$$$$$$$$$$$$$$$$..............."
	"...............$$$$$$$$$$$$$$$$$$$$$........................$$$$$$$$$$$$$$$$$$$$$..............."
	"...............$$$$$$$$$$$$$$$$$$$$..........................$$$$$$$$$$$$$$$$$$$$..............."
	"...............$$$$$$$$$$$$$$$$$$$............................$$$$$$$$$$$$$$$$$$$..............."
	"...............$$$$$$$$$$$$$$$$$$..............................$$$$$$$$$$$$$$$$$$..............."
	"...............$$$$$$$$$$$$$$$$$................................$$$$$$$$$$$$$$$$$..............."
	"............+++++++++++++++++++..................................+++++++++++++++++++............"
	"............++++++++++++++++++....................................++++++++++++++++++............"
	"............+++++++++++++++++......................................+++++++++++++++++............"
	"............++++++++++++++++........................................++++++++++++++++............"
	"............+++++++++++++++..........................................+++++++++++++++............"
	"............++++++++++++++............................................++++++++++++++............"
	"............+++++++++++++..............................................+++++++++++++............"
	"............++++++++++++................................................++++++++++++............"
	"............+++++++++++..................................................+++++++++++............"
	"............++++++++++....................................................++++++++++............"
	"............+++++++++......................................................+++++++++............"
	"............++++++++........................................................++++++++............"
	"............+++++++..........................................................+++++++............"
	"................................................................................................"
	"................................................................................................"
	"................................................................................................"
	"................................................................................................";
#endif

SDL_Surface *CommanderX16Icon()
{
	const SDL_Color color[8] = {
		{ 0x00, 0x00, 0xAA, 0x00 },
		{ 0x88, 0x00, 0x00, 0xFF },
		{ 0xCC, 0x44, 0xCC, 0xFF },
		{ 0x00, 0x88, 0xFF, 0xFF },
		{ 0xDD, 0x88, 0x55, 0xFF },
		{ 0x00, 0xCC, 0x55, 0xFF },
		{ 0xEE, 0xEE, 0x77, 0xFF },
		{ 0xAA, 0xFF, 0xEE, 0xFF },
	};

	SDL_Surface *surface;
	surface = SDL_CreateRGBSurfaceFrom(pixels, 96, 96, 8, 96, 0, 0, 0, 0);
	SDL_SetPaletteColors(surface->format->palette, color+0, '.', 1);
	SDL_SetPaletteColors(surface->format->palette, color+1, '+', 1);
	SDL_SetPaletteColors(surface->format->palette, color+2, '@', 1);
	SDL_SetPaletteColors(surface->format->palette, color+3, '#', 1);
	SDL_SetPaletteColors(surface->format->palette, color+4, '$', 1);
	SDL_SetPaletteColors(surface->format->palette, color+5, '%', 1);
	SDL_SetPaletteColors(surface->format->palette, color+6, '&', 1);
	SDL_SetPaletteColors(surface->format->palette, color+7, '*', 1);
	SDL_SetPaletteColors(surface->format->palette, color+8, ' ', 1);
	return surface;
}
