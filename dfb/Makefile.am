## Process this file with automake to produce Makefile.in

# DirectFB FreeRDP UI
bin_PROGRAMS = dfbfreerdp

dfbfreerdp_SOURCES = \
	dfb_event.c  dfb_event.h \
	dfb_keyboard.c dfb_keyboard.h \
	dfb_win.h dfb_win.c \
	dfbfreerdp.c dfbfreerdp.h

dfbfreerdp_CFLAGS = \
	-I$(top_srcdir) \
	-I$(top_srcdir)/include \
	-I$(top_srcdir)/libgdi \
	-pthread \
	@DFB_CFLAGS@

dfbfreerdp_LDADD = \
	../libfreerdp/libfreerdp.la \
	../libgdi/libgdi.la \
	../libfreerdpkbd/libfreerdpkbd.la \
	../libfreerdpchanman/libfreerdpchanman.la \
	@DFB_LIBS@ -lfusion -ldirect -lz


