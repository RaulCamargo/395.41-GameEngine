#pragma once

#if defined FLAPJACK_WINDOWS or defined FLAPJACK_MACOS or defined FLAPJACK_LINUX
	#define FLAPJACK_KEY_SPACE              32
	#define FLAPJACK_KEY_APOSTROPHE         39  /* ' */
	#define FLAPJACK_KEY_COMMA              44  /* , */
	#define FLAPJACK_KEY_MINUS              45  /* - */
	#define FLAPJACK_KEY_PERIOD             46  /* . */
	#define FLAPJACK_KEY_SLASH              47  /* / */
	#define FLAPJACK_KEY_0                  48
	#define FLAPJACK_KEY_1                  49
	#define FLAPJACK_KEY_2                  50
	#define FLAPJACK_KEY_3                  51
	#define FLAPJACK_KEY_4                  52
	#define FLAPJACK_KEY_5                  53
	#define FLAPJACK_KEY_6                  54
	#define FLAPJACK_KEY_7                  55
	#define FLAPJACK_KEY_8                  56
	#define FLAPJACK_KEY_9                  57
	#define FLAPJACK_KEY_SEMICOLON          59  /* ; */
	#define FLAPJACK_KEY_EQUAL              61  /* = */
	#define FLAPJACK_KEY_A                  65
	#define FLAPJACK_KEY_B                  66
	#define FLAPJACK_KEY_C                  67
	#define FLAPJACK_KEY_D                  68
	#define FLAPJACK_KEY_E                  69
	#define FLAPJACK_KEY_F                  70
	#define FLAPJACK_KEY_G                  71
	#define FLAPJACK_KEY_H                  72
	#define FLAPJACK_KEY_I                  73
	#define FLAPJACK_KEY_J                  74
	#define FLAPJACK_KEY_K                  75
	#define FLAPJACK_KEY_L                  76
	#define FLAPJACK_KEY_M                  77
	#define FLAPJACK_KEY_N                  78
	#define FLAPJACK_KEY_O                  79
	#define FLAPJACK_KEY_P                  80
	#define FLAPJACK_KEY_Q                  81
	#define FLAPJACK_KEY_R                  82
	#define FLAPJACK_KEY_S                  83
	#define FLAPJACK_KEY_T                  84
	#define FLAPJACK_KEY_U                  85
	#define FLAPJACK_KEY_V                  86
	#define FLAPJACK_KEY_W                  87
	#define FLAPJACK_KEY_X                  88
	#define FLAPJACK_KEY_Y                  89
	#define FLAPJACK_KEY_Z                  90
	#define FLAPJACK_KEY_LEFT_BRACKET       91  /* [ */
	#define FLAPJACK_KEY_BACKSLASH          92  /* \ */
	#define FLAPJACK_KEY_RIGHT_BRACKET      93  /* ] */
	#define FLAPJACK_KEY_GRAVE_ACCENT       96  /* ` */
	#define FLAPJACK_KEY_WORLD_1            161 /* non-US #1 */
	#define FLAPJACK_KEY_WORLD_2            162 /* non-US #2 */

	/* Function keys */
	#define FLAPJACK_KEY_ESCAPE             256
	#define FLAPJACK_KEY_ENTER              257
	#define FLAPJACK_KEY_TAB                258
	#define FLAPJACK_KEY_BACKSPACE          259
	#define FLAPJACK_KEY_INSERT             260
	#define FLAPJACK_KEY_DELETE             261
	#define FLAPJACK_KEY_RIGHT              262
	#define FLAPJACK_KEY_LEFT               263
	#define FLAPJACK_KEY_DOWN               264
	#define FLAPJACK_KEY_UP                 265
	#define FLAPJACK_KEY_PAGE_UP            266
	#define FLAPJACK_KEY_PAGE_DOWN          267
	#define FLAPJACK_KEY_HOME               268
	#define FLAPJACK_KEY_END                269
	#define FLAPJACK_KEY_CAPS_LOCK          280
	#define FLAPJACK_KEY_SCROLL_LOCK        281
	#define FLAPJACK_KEY_NUM_LOCK           282
	#define FLAPJACK_KEY_PRINT_SCREEN       283
	#define FLAPJACK_KEY_PAUSE              284
	#define FLAPJACK_KEY_F1                 290
	#define FLAPJACK_KEY_F2                 291
	#define FLAPJACK_KEY_F3                 292
	#define FLAPJACK_KEY_F4                 293
	#define FLAPJACK_KEY_F5                 294
	#define FLAPJACK_KEY_F6                 295
	#define FLAPJACK_KEY_F7                 296
	#define FLAPJACK_KEY_F8                 297
	#define FLAPJACK_KEY_F9                 298
	#define FLAPJACK_KEY_F10                299
	#define FLAPJACK_KEY_F11                300
	#define FLAPJACK_KEY_F12                301
	#define FLAPJACK_KEY_F13                302
	#define FLAPJACK_KEY_F14                303
	#define FLAPJACK_KEY_F15                304
	#define FLAPJACK_KEY_F16                305
	#define FLAPJACK_KEY_F17                306
	#define FLAPJACK_KEY_F18                307
	#define FLAPJACK_KEY_F19                308
	#define FLAPJACK_KEY_F20                309
	#define FLAPJACK_KEY_F21                310
	#define FLAPJACK_KEY_F22                311
	#define FLAPJACK_KEY_F23                312
	#define FLAPJACK_KEY_F24                313
	#define FLAPJACK_KEY_F25                314
	#define FLAPJACK_KEY_KP_0               320
	#define FLAPJACK_KEY_KP_1               321
	#define FLAPJACK_KEY_KP_2               322
	#define FLAPJACK_KEY_KP_3               323
	#define FLAPJACK_KEY_KP_4               324
	#define FLAPJACK_KEY_KP_5               325
	#define FLAPJACK_KEY_KP_6               326
	#define FLAPJACK_KEY_KP_7               327
	#define FLAPJACK_KEY_KP_8               328
	#define FLAPJACK_KEY_KP_9               329
	#define FLAPJACK_KEY_KP_DECIMAL         330
	#define FLAPJACK_KEY_KP_DIVIDE          331
	#define FLAPJACK_KEY_KP_MULTIPLY        332
	#define FLAPJACK_KEY_KP_SUBTRACT        333
	#define FLAPJACK_KEY_KP_ADD             334
	#define FLAPJACK_KEY_KP_ENTER           335
	#define FLAPJACK_KEY_KP_EQUAL           336
	#define FLAPJACK_KEY_LEFT_SHIFT         340
	#define FLAPJACK_KEY_LEFT_CONTROL       341
	#define FLAPJACK_KEY_LEFT_ALT           342
	#define FLAPJACK_KEY_LEFT_SUPER         343
	#define FLAPJACK_KEY_RIGHT_SHIFT        344
	#define FLAPJACK_KEY_RIGHT_CONTROL      345
	#define FLAPJACK_KEY_RIGHT_ALT          346
	#define FLAPJACK_KEY_RIGHT_SUPER        347
	#define FLAPJACK_KEY_MENU               348

#endif	