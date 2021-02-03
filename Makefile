.POSIX:

include config.mk

all: options section1

options:
	@echo Build options:
	@echo "CFLAGS  = $(MYCFLAGS)"
	@echo "LDFLAGS = $(MYLDFLAGS)"
	@echo "CC      = $(CC)"

section1: 1.1 1.2 1.3 1.4 1.5 1.6 1.7 1.8 1.9 1.10 1.11 1.12 1.13 1.14 1.15 \
          1.16 1.17 1.18 1.19 1.20 1.21

1.1:
	$(MAKE) -C 1.1 CONFIG_MK=`pwd`/config.mk all
1.2:
	$(MAKE) -C 1.2 CONFIG_MK=`pwd`/config.mk all
1.3:
	$(MAKE) -C 1.3 CONFIG_MK=`pwd`/config.mk all
1.4:
	$(MAKE) -C 1.4 CONFIG_MK=`pwd`/config.mk all
1.5:
	$(MAKE) -C 1.5 CONFIG_MK=`pwd`/config.mk all
1.6:
	$(MAKE) -C 1.6 CONFIG_MK=`pwd`/config.mk all
1.7:
	$(MAKE) -C 1.7 CONFIG_MK=`pwd`/config.mk all
1.8:
	$(MAKE) -C 1.8 CONFIG_MK=`pwd`/config.mk all
1.9:
	$(MAKE) -C 1.9 CONFIG_MK=`pwd`/config.mk all
1.10:
	$(MAKE) -C 1.10 CONFIG_MK=`pwd`/config.mk all
1.11:
	$(MAKE) -C 1.11 CONFIG_MK=`pwd`/config.mk all
1.12:
	$(MAKE) -C 1.12 CONFIG_MK=`pwd`/config.mk all
1.13:
	$(MAKE) -C 1.13 CONFIG_MK=`pwd`/config.mk all
1.14:
	$(MAKE) -C 1.14 CONFIG_MK=`pwd`/config.mk all
1.15:
	$(MAKE) -C 1.15 CONFIG_MK=`pwd`/config.mk all
1.16:
	$(MAKE) -C 1.16 CONFIG_MK=`pwd`/config.mk all
1.17:
	$(MAKE) -C 1.17 CONFIG_MK=`pwd`/config.mk all
1.18:
	$(MAKE) -C 1.18 CONFIG_MK=`pwd`/config.mk all
1.19:
	$(MAKE) -C 1.19 CONFIG_MK=`pwd`/config.mk all
1.20:
	$(MAKE) -C 1.20 CONFIG_MK=`pwd`/config.mk all
1.21:
	$(MAKE) -C 1.21 CONFIG_MK=`pwd`/config.mk all

clean:
	$(MAKE) -C 1.1 CONFIG_MK=`pwd`/config.mk clean
	$(MAKE) -C 1.2 CONFIG_MK=`pwd`/config.mk clean
	$(MAKE) -C 1.3 CONFIG_MK=`pwd`/config.mk clean
	$(MAKE) -C 1.4 CONFIG_MK=`pwd`/config.mk clean
	$(MAKE) -C 1.5 CONFIG_MK=`pwd`/config.mk clean
	$(MAKE) -C 1.6 CONFIG_MK=`pwd`/config.mk clean
	$(MAKE) -C 1.7 CONFIG_MK=`pwd`/config.mk clean
	$(MAKE) -C 1.8 CONFIG_MK=`pwd`/config.mk clean
	$(MAKE) -C 1.9 CONFIG_MK=`pwd`/config.mk clean
	$(MAKE) -C 1.10 CONFIG_MK=`pwd`/config.mk clean
	$(MAKE) -C 1.11 CONFIG_MK=`pwd`/config.mk clean
	$(MAKE) -C 1.12 CONFIG_MK=`pwd`/config.mk clean
	$(MAKE) -C 1.13 CONFIG_MK=`pwd`/config.mk clean
	$(MAKE) -C 1.14 CONFIG_MK=`pwd`/config.mk clean
	$(MAKE) -C 1.15 CONFIG_MK=`pwd`/config.mk clean
	$(MAKE) -C 1.16 CONFIG_MK=`pwd`/config.mk clean
	$(MAKE) -C 1.17 CONFIG_MK=`pwd`/config.mk clean
	$(MAKE) -C 1.18 CONFIG_MK=`pwd`/config.mk clean
	$(MAKE) -C 1.19 CONFIG_MK=`pwd`/config.mk clean
	$(MAKE) -C 1.20 CONFIG_MK=`pwd`/config.mk clean
	$(MAKE) -C 1.21 CONFIG_MK=`pwd`/config.mk clean

.PHONY: all options section1 clean check \
        1.1 1.2 1.3 1.4 1.5 1.6 1.7 1.8 1.9 1.10 1.11 1.12 1.13 1.14 1.15 \
        1.16 1.17 1.18 1.19 1.20 1.21
