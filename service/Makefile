
CC := $(ANDROID_NDK)/toolchains/arm-linux-androideabi-4.4.3/prebuilt/linux-x86/bin/arm-linux-androideabi-gcc
GCC := $(ANDROID_NDK)/toolchains/arm-linux-androideabi-4.4.3/prebuilt/linux-x86/bin/arm-linux-androideabi-g++
STRIP := $(ANDROID_NDK)/toolchains/arm-linux-androideabi-4.4.3/prebuilt/linux-x86/bin/arm-linux-androideabi-strip
AR := $(ANDROID_NDK)/toolchains/arm-linux-androideabi-4.4.3/prebuilt/linux-x86/bin/arm-linux-androideabi-ar
RUNLIB := $(ANDROID_NDK)/toolchains/arm-linux-androideabi-4.4.3/prebuilt/linux-x86/bin/arm-linux-androideabi-ranlib

CFLAGS := -I $(ANDROID_NDK)/platforms/android-3/arch-arm/usr/include/ -I $(ANDROID_NDK)/sources/cxx-stl/stlport/stlport/
CFLAGS += -Wno-write-strings -mthumb -DANDROID -DNOCRYPT -DUSE_FILE32API 
#CFLAGS += -L $(ANDROID_NDK)/platforms/android-3/arch-arm/usr/lib/ 
CFLAGS += -lc -llog -lz -O2
CFLAGS += -fno-exceptions -fno-short-enums
#CFLAGS += -nostdlib

CXXFLAGS += -fno-rtti

LDFLAGS := -Wl,-rpath-link=$(ANDROID_NDK)/platforms/android-3/arch-arm/usr/lib/,-dynamic-linker=/system/bin/linker -Wl,--fix-cortex-a8
LDFLAGS += -L $(ANDROID_NDK)/platforms/android-3/arch-arm/usr/lib/
LDFLAGS += -lc -llog -lz
LDFLAGS += -O2

LIBS := $(ANDROID_NDK)/sources/cxx-stl/stlport/libs/armeabi/libstlport_static.a
LIBS += libjpeg.a
LIBS += libpng12.a 
LIBS += sqlite3.a

SRCS := minizip/zip.c
SRCS += minizip/ioapi.c 
SRCS += shellinabox/service.c
SRCS += shellinabox/launcher.c
SRCS += shellinabox/logging.c
SRCS += shellinabox/hashmap.c
SRCS += webkey.cpp
SRCS += suinput.c
SRCS += mongoose.cpp
SRCS += base64.cpp
SRCS += webkey.h

OBJS := $(SRCS:.c=.o)
OBJS := $(SRCS:.cpp=.o)

MAIN := webkey

all:  $(LIBS) $(MAIN) $(INSTALL)
	@echo Finished compiling, trying to copy it to the right location.
	@cp $(MAIN) ../java/assets/bin/webkey && echo "binary has been copied to ../java/assets/bin/webkey"

JPEGLIBsrc := $(wildcard libjpeg/jpeg-6b/j*.c)
JPEGLIBsrc := $(JPEGLIBsrc:libjpeg/jpeg-6b/jmemdos.c=)
JPEGLIBsrc := $(JPEGLIBsrc:libjpeg/jpeg-6b/jpegtran.c=)
JPEGLIBsrc := $(JPEGLIBsrc:libjpeg/jpeg-6b/jmemdos.c=)
JPEGLIBsrc := $(JPEGLIBsrc:libjpeg/jpeg-6b/jmemmac.c=)
JPEGLIBobj := $(JPEGLIBsrc:.c=.o)
#JPEGLIBobj : $(JPEGLIBsrc)
libjpeg.a: $(JPEGLIBobj)
	$(AR) rvs libjpeg.a libjpeg/jpeg-6b/*.o
	$(RUNLIB) libjpeg.a


PNGLIBsrc := $(wildcard libpng/libpng-1.2.42/*.c)
PNGLIBsrc := $(PNGLIBsrc:libpng/libpng-1.2.42/pngtest.c=)
PNGLIBsrc := $(PNGLIBsrc:libpng/libpng-1.2.42/example.c=)
PNGLIBobj := $(PNGLIBsrc:.c=.o)
#PNGLIBobj : $(PNGLIBsrc)
libpng12.a: $(PNGLIBobj)
	$(AR) rvs libpng12.a libpng/libpng-1.2.42/*.o
	$(RUNLIB) libpng12.a

%.o: %.c
	$(CC) $(CFLAGS) $(FLAGS) -c "$<" -o "$@"

%.o: %.cpp
	$(GCC) $(CFLAGS) $(FLAGS) -c "$<" -o "$@"

sqlite3.a : sqlite/sqlite3.h sqlite/sqlite3.c
	$(CC) $(CFLAGS) $(FLAGS) -c sqlite/sqlite3.c -o sqlite/sqlite3.o
	$(AR) rvs sqlite3.a sqlite/sqlite3.o
	$(RUNLIB) sqlite3.a

test.o: test.c suinput.h
	$(GCC) $(CFLAGS) $(FLAGS) -c "$<" -o "$@"

test: test.o
	$(GCC) $(CFLAGS) $(CXXFLAGS) $(FLAGS) -o test test.o $(LDFLAGS) $(LIBS)


register.o: register.c
	$(GCC) $(CFLAGS) $(FLAGS) -c "$<" -o "$@"

register: register.o
	$(GCC) $(CFLAGS) $(CXXFLAGS) $(FLAGS) -o register register.o $(LDFLAGS) $(LIBS)

$(MAIN): $(OBJS) $(LIBS)
	$(GCC) $(CFLAGS) $(CXXFLAGS) $(FLAGS) -o $(MAIN) $(OBJS) $(LDFLAGS) $(LIBS)
	@echo Stripping...
	$(STRIP) $(MAIN)


install:
#	cp $(MAIN) ../assets/bin/webkey
#	@echo The webkey binary was copied into to the assets folder.

clean:
	 rm -f webkey.o suinput.o base64.o mongoose.o sqlite/sqlite3.o libpng/libpng-1.2.42/*.o l libjpeg/jpeg-6b/*.o libjpeg.a libpng12.a sqlite3.a webkey
