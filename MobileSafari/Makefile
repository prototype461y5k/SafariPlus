include $(THEOS)/makefiles/common.mk

TWEAK_NAME = SafariPlus
SafariPlus_CFLAGS = -fobjc-arc -Wno-deprecated-declarations
SafariPlus_FILES = SafariPlus.xm
SafariPlus_FILES += $(wildcard Hooks/*.xm)
SafariPlus_FILES += $(wildcard Classes/*.mm)

ifeq ($(SIMJECT),1)
	dir_string := @"\"$(CURDIR)\""
	username_string := @"\"$(USER)\""
	SafariPlus_CFLAGS += -D SIMJECT=1 -D CUR_DIR=$(dir_string) -D USER=$(username_string)
else
	SafariPlus_EXTRA_FRAMEWORKS += Cephei
	SafariPlus_LIBRARIES = colorpicker rocketbootstrap
endif

include $(THEOS_MAKE_PATH)/tweak.mk
