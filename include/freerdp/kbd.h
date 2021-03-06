/*
   FreeRDP: A Remote Desktop Protocol client.
   XKB-based keyboard mapping

   Copyright 2009 Marc-Andre Moreau <marcandre.moreau@gmail.com>

   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at

       http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.
*/

#ifndef __FREERDP_KBD_H
#define __FREERDP_KBD_H

#include "types_ui.h"

#define RDP_KEYBOARD_LAYOUT_TYPE_STANDARD   1
#define RDP_KEYBOARD_LAYOUT_TYPE_VARIANT    2
#define RDP_KEYBOARD_LAYOUT_TYPE_IME        4

typedef struct rdp_keyboard_layout
{
	unsigned int code;
	char name[50];
} rdpKeyboardLayout;

rdpKeyboardLayout *
freerdp_kbd_get_layouts(int types);
unsigned int
freerdp_kbd_init(void *dpy, unsigned int keyboard_layout_id);
uint8
freerdp_kbd_get_scancode_by_keycode(uint8 keycode, RD_BOOL * extended);
uint8
freerdp_kbd_get_scancode_by_virtualkey(int vkcode, RD_BOOL * extended);

#endif // __FREERDP_KBD_H
