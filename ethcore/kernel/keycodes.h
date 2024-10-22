#ifndef __K_KEYCODES_H__
#define __K_KEYCODES_H__

#include "kernel/layout_mappings.h"
#include "kernel/scancodes.h"

enum Keycode
{
  KEYCODE_BACKSPACE = 0x0001,
  KEYCODE_SPACE = 0x0002,
  KEYCODE_TAB = 0x0003,
  KEYCODE_CAPS = 0x0004,

  KEYCODE_TILDE = 0x0005,
  KEYCODE_MINUS = 0x0006,
  KEYCODE_EQUAL = 0x0007,
  KEYCODE_BSLASH = 0x0008,
  KEYCODE_BRACO = 0x0009,
  KEYCODE_BRACC = 0x000A,
  KEYCODE_SEMICOL = 0x000B,
  KEYCODE_QUOT = 0x000C,
  KEYCODE_COMMA = 0x000D,
  KEYCODE_PERIOD = 0x000E,
  KEYCODE_SLASH = 0x000F,

  KEYCODE_0 = 0x0010,
  KEYCODE_1 = 0x0011,
  KEYCODE_2 = 0x0012,
  KEYCODE_3 = 0x0013,
  KEYCODE_4 = 0x0014,
  KEYCODE_5 = 0x0015,
  KEYCODE_6 = 0x0016,
  KEYCODE_7 = 0x0017,
  KEYCODE_8 = 0x0018,
  KEYCODE_9 = 0x0019,

  KEYCODE_A = 0x0020,
  KEYCODE_B = 0x0021,
  KEYCODE_C = 0x0022,
  KEYCODE_D = 0x0023,
  KEYCODE_E = 0x0024,
  KEYCODE_F = 0x0025,
  KEYCODE_G = 0x0026,
  KEYCODE_H = 0x0027,
  KEYCODE_I = 0x0028,
  KEYCODE_J = 0x0029,
  KEYCODE_K = 0x002A,
  KEYCODE_L = 0x002B,
  KEYCODE_M = 0x002C,
  KEYCODE_N = 0x002D,
  KEYCODE_O = 0x002E,
  KEYCODE_P = 0x002F,
  KEYCODE_Q = 0x0030,
  KEYCODE_R = 0x0031,
  KEYCODE_S = 0x0032,
  KEYCODE_T = 0x0033,
  KEYCODE_U = 0x0034,
  KEYCODE_V = 0x0035,
  KEYCODE_W = 0x0036,
  KEYCODE_X = 0x0037,
  KEYCODE_Y = 0x0038,
  KEYCODE_Z = 0x0039,

  KEYCODE_MENU = 0x0040,
  KEYCODE_RETURN = 0x0041,
  KEYCODE_ESCAPE = 0x0042,

  KEYCODE_F1 = 0x0050,
  KEYCODE_F2 = 0x0051,
  KEYCODE_F3 = 0x0052,
  KEYCODE_F4 = 0x0053,
  KEYCODE_F5 = 0x0054,
  KEYCODE_F6 = 0x0055,
  KEYCODE_F7 = 0x0056,
  KEYCODE_F8 = 0x0057,
  KEYCODE_F9 = 0x0058,
  KEYCODE_F10 = 0x0059,
  KEYCODE_F11 = 0x005A,
  KEYCODE_F12 = 0x005B,

  KEYCODE_LOCK = 0x005C,

  KEYCODE_UP = 0x0060,
  KEYCODE_LEFT = 0x0061,
  KEYCODE_DOWN = 0x0062,
  KEYCODE_RIGHT = 0x0063,

  KEYCODE_PRIOR = 0x0070,
  KEYCODE_PGUP = 0x0070, // Alias for KEYCODE_PRIOR
  KEYCODE_NEXT = 0x0071,
  KEYCODE_PGDOWN = 0x0071, // Alias for KEYCODE_NEXT

  KEYCODE_INSERT = 0x0072,
  KEYCODE_HOME = 0x0073,
  KEYCODE_END = 0x0074,
  KEYCODE_DELETE = 0x0075,
};

enum KeyModifier
{
  KEYMOD_LSHIFT = 0x01000,
  KEYMOD_RSHIFT = 0x02000,
  KEYMOD_LCONTROL = 0x0400,
  KEYMOD_RCONTROL = 0x0800,
  KEYMOD_LALT = 0x10000,
  KEYMOD_RALT = 0x20000,
  KEYMOD_LSUPER = 0x40000,
  KEYMOD_RSUPER = 0x80000,
};

static enum Keycode scancode_to_keycode (enum Scancode, enum LayoutMapping);

static enum KeyModifier scancode_to_keymodifier (enum Scancode);

#endif // __K_KEYCODES_H__
