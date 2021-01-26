.POSIX:

include $(CONFIG_MK)

all: a b

a:
	$(MAKE) -C a CONFIG_MK=$(CONFIG_MK) all
b:
	$(MAKE) -C b CONFIG_MK=$(CONFIG_MK) all

clean:
	$(MAKE) -C a CONFIG_MK=$(CONFIG_MK) clean
	$(MAKE) -C b CONFIG_MK=$(CONFIG_MK) clean

.PHONY: all clean a b
