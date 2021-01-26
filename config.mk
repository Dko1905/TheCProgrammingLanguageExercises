MYCPPFLAGS = $(CPPFLAGS)
MYCFLAGS = -std=c99 -Wall -Wextra -pedantic -fno-strict-aliasing \
           $(MYCPPFLAGS) $(CFLAGS)
MYLDFLAGS = $(LIBS) $(LDFLAGS)
