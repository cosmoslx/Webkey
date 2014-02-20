for i in j*.c; do ../../../toolchains/arm-linux-androideabi-4.4.3/prebuilt/linux-x86/bin/arm-linux-androideabi-gcc -mthumb -fPIC -I ../../../platforms/android-3/arch-arm/usr/include/ -fno-exceptions -O2 -fno-short-enums -c ${i}; done
../../../toolchains/arm-linux-androideabi-4.4.3/prebuilt/linux-x86/bin/arm-linux-androideabi-ar rvs libjpeg.a *.o
../../../toolchains/arm-linux-androideabi-4.4.3/prebuilt/linux-x86/bin/arm-linux-androideabi-ranlib libjpeg.a
