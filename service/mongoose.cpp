// Copyright (c) 2004-2010 Sergey Lyubka
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.

/*
Copyright (C) 2012  Peter Mora, Zoltan Papp

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
# 1 "webkey-2.09/service/mongoose.cpp"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "webkey-2.09/service/mongoose.cpp"
# 47 "webkey-2.09/service/mongoose.cpp"
# 1 "webkey-2.09/service/webkey.h" 1
# 48 "webkey-2.09/service/mongoose.cpp" 2


# 1 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/sys/types.h" 1
# 33 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/sys/types.h"
# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stddef.h" 1
# 18 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stddef.h"
# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_cprolog.h" 1
# 18 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_cprolog.h"
# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/config/features.h" 1
# 42 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/config/features.h"
# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_stlport_version.h" 1
# 43 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/config/features.h" 2
# 63 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/config/features.h"
# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/config/user_config.h" 1
# 64 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/config/features.h" 2
# 88 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/config/features.h"
# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/config/compat.h" 1
# 89 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/config/features.h" 2


# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/config/host.h" 1
# 92 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/config/features.h" 2


# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/config/_system.h" 1
# 64 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/config/_system.h"
# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/config/_android.h" 1
# 64 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/config/_android.h"
# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/config/_gcc.h" 1
# 65 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/config/_android.h" 2
# 65 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/config/_system.h" 2
# 95 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/config/features.h" 2
# 103 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/config/features.h"
# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/config/stl_confix.h" 1
# 104 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/config/features.h" 2
# 218 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/config/features.h"
# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/config/_native_headers.h" 1
# 219 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/config/features.h" 2
# 415 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/config/features.h"
namespace std { }
namespace __std_alias = std;
# 536 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/config/features.h"
namespace stlport = std;



namespace _STL = std;
# 19 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_cprolog.h" 2
# 19 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stddef.h" 2
# 34 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stddef.h"
# 1 "/home/petya/download/android-ndk-r8b/toolchains/arm-linux-androideabi-4.4.3/prebuilt/linux-x86/bin/../lib/gcc/arm-linux-androideabi/4.4.3/include/../include/stddef.h" 1 3 4
# 149 "/home/petya/download/android-ndk-r8b/toolchains/arm-linux-androideabi-4.4.3/prebuilt/linux-x86/bin/../lib/gcc/arm-linux-androideabi/4.4.3/include/../include/stddef.h" 3 4
typedef int ptrdiff_t;
# 211 "/home/petya/download/android-ndk-r8b/toolchains/arm-linux-androideabi-4.4.3/prebuilt/linux-x86/bin/../lib/gcc/arm-linux-androideabi/4.4.3/include/../include/stddef.h" 3 4
typedef unsigned int size_t;
# 35 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stddef.h" 2




# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_epilog.h" 1
# 19 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_epilog.h"
# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_config_compat_post.h" 1
# 20 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_epilog.h" 2
# 40 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stddef.h" 2
# 34 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/sys/types.h" 2
# 1 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/stdint.h" 1
# 31 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/stdint.h"
# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stddef.h" 1
# 18 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stddef.h"
# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_cprolog.h" 1
# 19 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stddef.h" 2
# 34 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stddef.h"
# 1 "/home/petya/download/android-ndk-r8b/toolchains/arm-linux-androideabi-4.4.3/prebuilt/linux-x86/bin/../lib/gcc/arm-linux-androideabi/4.4.3/include/../include/stddef.h" 1 3 4
# 35 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stddef.h" 2




# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_epilog.h" 1
# 19 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_epilog.h"
# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_config_compat_post.h" 1
# 20 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_epilog.h" 2
# 40 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stddef.h" 2
# 32 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/stdint.h" 2
# 1 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/sys/_types.h" 1
# 40 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/sys/_types.h"
# 1 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/machine/_types.h" 1
# 52 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/machine/_types.h"
typedef __signed char __int8_t;
typedef unsigned char __uint8_t;
typedef short __int16_t;
typedef unsigned short __uint16_t;
typedef int __int32_t;
typedef unsigned int __uint32_t;

typedef long long __int64_t;

typedef unsigned long long __uint64_t;


typedef __int8_t __int_least8_t;
typedef __uint8_t __uint_least8_t;
typedef __int16_t __int_least16_t;
typedef __uint16_t __uint_least16_t;
typedef __int32_t __int_least32_t;
typedef __uint32_t __uint_least32_t;
typedef __int64_t __int_least64_t;
typedef __uint64_t __uint_least64_t;


typedef __int32_t __int_fast8_t;
typedef __uint32_t __uint_fast8_t;
typedef __int32_t __int_fast16_t;
typedef __uint32_t __uint_fast16_t;
typedef __int32_t __int_fast32_t;
typedef __uint32_t __uint_fast32_t;
typedef __int64_t __int_fast64_t;
typedef __uint64_t __uint_fast64_t;


typedef int __intptr_t;
typedef unsigned int __uintptr_t;


typedef __int64_t __intmax_t;
typedef __uint64_t __uintmax_t;


typedef __int32_t __register_t;


typedef unsigned long __vaddr_t;
typedef unsigned long __paddr_t;
typedef unsigned long __vsize_t;
typedef unsigned long __psize_t;


typedef int __clock_t;
typedef int __clockid_t;
typedef long __ptrdiff_t;
typedef int __time_t;
typedef int __timer_t;

typedef __builtin_va_list __va_list;
# 116 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/machine/_types.h"
typedef int __wint_t;
typedef int __rune_t;
typedef void * __wctrans_t;
typedef void * __wctype_t;
# 41 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/sys/_types.h" 2

typedef unsigned long __cpuid_t;
typedef __int32_t __dev_t;
typedef __uint32_t __fixpt_t;
typedef __uint32_t __gid_t;
typedef __uint32_t __id_t;
typedef __uint32_t __in_addr_t;
typedef __uint16_t __in_port_t;
typedef __uint32_t __ino_t;
typedef long __key_t;
typedef __uint32_t __mode_t;
typedef __uint32_t __nlink_t;
typedef __int32_t __pid_t;
typedef __uint64_t __rlim_t;
typedef __uint16_t __sa_family_t;
typedef __int32_t __segsz_t;
typedef __uint32_t __socklen_t;
typedef __int32_t __swblk_t;
typedef __uint32_t __uid_t;
typedef __uint32_t __useconds_t;
typedef __int32_t __suseconds_t;





typedef union {
 char __mbstate8[128];
 __int64_t __mbstateL;
} __mbstate_t;
# 33 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/stdint.h" 2
# 48 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/stdint.h"
typedef __int8_t int8_t;
typedef __uint8_t uint8_t;
typedef __int16_t int16_t;
typedef __uint16_t uint16_t;
typedef __int32_t int32_t;
typedef __uint32_t uint32_t;

typedef __int64_t int64_t;
typedef __uint64_t uint64_t;






typedef int8_t int_least8_t;
typedef int8_t int_fast8_t;

typedef uint8_t uint_least8_t;
typedef uint8_t uint_fast8_t;
# 97 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/stdint.h"
typedef int16_t int_least16_t;
typedef int32_t int_fast16_t;

typedef uint16_t uint_least16_t;
typedef uint32_t uint_fast16_t;
# 130 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/stdint.h"
typedef int32_t int_least32_t;
typedef int32_t int_fast32_t;

typedef uint32_t uint_least32_t;
typedef uint32_t uint_fast32_t;
# 163 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/stdint.h"
typedef int64_t int_least64_t;
typedef int64_t int_fast64_t;

typedef uint64_t uint_least64_t;
typedef uint64_t uint_fast64_t;
# 207 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/stdint.h"
typedef int intptr_t;
typedef unsigned int uintptr_t;
# 232 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/stdint.h"
typedef uint64_t uintmax_t;
typedef int64_t intmax_t;
# 268 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/stdint.h"
typedef long int ssize_t;
# 35 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/sys/types.h" 2
# 1 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/sys/cdefs.h" 1
# 65 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/sys/cdefs.h"
# 1 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/sys/cdefs_elf.h" 1
# 66 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/sys/cdefs.h" 2
# 506 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/sys/cdefs.h"
# 1 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/android/api-level.h" 1
# 507 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/sys/cdefs.h" 2
# 36 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/sys/types.h" 2

# 1 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/linux/posix_types.h" 1
# 15 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/linux/posix_types.h"
# 1 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/linux/stddef.h" 1
# 15 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/linux/stddef.h"
# 1 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/linux/compiler.h" 1
# 16 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/linux/stddef.h" 2
# 16 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/linux/posix_types.h" 2
# 32 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/linux/posix_types.h"
typedef struct {
 unsigned long fds_bits [(1024/(8 * sizeof(unsigned long)))];
} __kernel_fd_set;

typedef void (*__kernel_sighandler_t)(int);

typedef int __kernel_key_t;
typedef int __kernel_mqd_t;

# 1 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/asm/posix_types.h" 1
# 15 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/asm/posix_types.h"
typedef unsigned long __kernel_ino_t;
typedef unsigned short __kernel_mode_t;
typedef unsigned short __kernel_nlink_t;
typedef long __kernel_off_t;
typedef int __kernel_pid_t;
typedef unsigned short __kernel_ipc_pid_t;
typedef unsigned short __kernel_uid_t;
typedef unsigned short __kernel_gid_t;
typedef unsigned int __kernel_size_t;
typedef int __kernel_ssize_t;
typedef int __kernel_ptrdiff_t;
typedef long __kernel_time_t;
typedef long __kernel_suseconds_t;
typedef long __kernel_clock_t;
typedef int __kernel_timer_t;
typedef int __kernel_clockid_t;
typedef int __kernel_daddr_t;
typedef char * __kernel_caddr_t;
typedef unsigned short __kernel_uid16_t;
typedef unsigned short __kernel_gid16_t;
typedef unsigned int __kernel_uid32_t;
typedef unsigned int __kernel_gid32_t;

typedef unsigned short __kernel_old_uid_t;
typedef unsigned short __kernel_old_gid_t;
typedef unsigned short __kernel_old_dev_t;


typedef long long __kernel_loff_t;


typedef struct {



 int __val[2];

} __kernel_fsid_t;
# 42 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/linux/posix_types.h" 2
# 38 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/sys/types.h" 2
# 1 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/asm/types.h" 1
# 17 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/asm/types.h"
typedef unsigned short umode_t;

typedef __signed__ char __s8;
typedef unsigned char __u8;

typedef __signed__ short __s16;
typedef unsigned short __u16;

typedef __signed__ int __s32;
typedef unsigned int __u32;


typedef __signed__ long long __s64;
typedef unsigned long long __u64;
# 39 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/sys/types.h" 2
# 1 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/linux/types.h" 1
# 21 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/linux/types.h"
typedef __u16 __le16;
typedef __u16 __be16;
typedef __u32 __le32;
typedef __u32 __be32;

typedef __u64 __le64;
typedef __u64 __be64;


struct ustat {
 __kernel_daddr_t f_tfree;
 __kernel_ino_t f_tinode;
 char f_fname[6];
 char f_fpack[6];
};
# 40 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/sys/types.h" 2
# 1 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/machine/kernel.h" 1
# 34 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/machine/kernel.h"
typedef unsigned long __kernel_blkcnt_t;
typedef unsigned long __kernel_blksize_t;


typedef unsigned long __kernel_fsblkcnt_t;
typedef unsigned long __kernel_fsfilcnt_t;
typedef unsigned int __kernel_id_t;
# 41 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/sys/types.h" 2

typedef __u32 __kernel_dev_t;
# 52 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/sys/types.h"
typedef __kernel_blkcnt_t blkcnt_t;
typedef __kernel_blksize_t blksize_t;
typedef __kernel_clock_t clock_t;
typedef __kernel_clockid_t clockid_t;
typedef __kernel_dev_t dev_t;
typedef __kernel_fsblkcnt_t fsblkcnt_t;
typedef __kernel_fsfilcnt_t fsfilcnt_t;
typedef __kernel_gid32_t gid_t;
typedef __kernel_id_t id_t;
typedef __kernel_ino_t ino_t;
typedef __kernel_key_t key_t;
typedef __kernel_mode_t mode_t;
typedef __kernel_nlink_t nlink_t;


typedef __kernel_off_t off_t;

typedef __kernel_loff_t loff_t;
typedef loff_t off64_t;

typedef __kernel_pid_t pid_t;
# 99 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/sys/types.h"
typedef __kernel_suseconds_t suseconds_t;
typedef __kernel_time_t time_t;
typedef __kernel_uid32_t uid_t;
typedef signed long useconds_t;

typedef __kernel_daddr_t daddr_t;
typedef __kernel_timer_t timer_t;
typedef __kernel_mqd_t mqd_t;

typedef __kernel_caddr_t caddr_t;
typedef unsigned int uint_t;
typedef unsigned int uint;


# 1 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/sys/sysmacros.h" 1
# 36 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/sys/sysmacros.h"
static __inline__ int major(dev_t _dev)
{
  return (_dev >> 8) & 0xfff;
}

static __inline__ int minor(dev_t _dev)
{
  return (_dev & 0xff) | ((_dev >> 12) & 0xfff00);
}

static __inline__ dev_t makedev(int __ma, int __mi)
{
  return ((__ma & 0xfff) << 8) | (__mi & 0xff) | ((__mi & 0xfff00) << 12);
}
# 114 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/sys/types.h" 2


typedef unsigned char u_char;
typedef unsigned short u_short;
typedef unsigned int u_int;
typedef unsigned long u_long;

typedef uint32_t u_int32_t;
typedef uint16_t u_int16_t;
typedef uint8_t u_int8_t;
typedef uint64_t u_int64_t;
# 51 "webkey-2.09/service/mongoose.cpp" 2
# 1 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/sys/stat.h" 1
# 33 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/sys/stat.h"
# 1 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/sys/time.h" 1
# 33 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/sys/time.h"
# 1 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/linux/time.h" 1
# 19 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/linux/time.h"
struct timespec {
 time_t tv_sec;
 long tv_nsec;
};


struct timeval {
 time_t tv_sec;
 suseconds_t tv_usec;
};

struct timezone {
 int tz_minuteswest;
 int tz_dsttime;
};
# 47 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/linux/time.h"
struct itimerspec {
 struct timespec it_interval;
 struct timespec it_value;
};

struct itimerval {
 struct timeval it_interval;
 struct timeval it_value;
};
# 34 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/sys/time.h" 2

extern "C" {

extern int gettimeofday(struct timeval *, struct timezone *);
extern int settimeofday(const struct timeval *, const struct timezone *);

extern int getitimer(int, struct itimerval *);
extern int setitimer(int, const struct itimerval *, struct itimerval *);

extern int utimes(const char *, const struct timeval *);
# 76 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/sys/time.h"
}
# 34 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/sys/stat.h" 2
# 1 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/linux/stat.h" 1
# 35 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/sys/stat.h" 2

# 1 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/endian.h" 1
# 31 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/endian.h"
# 1 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/sys/endian.h" 1
# 162 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/sys/endian.h"
extern "C" {
__uint64_t htobe64(__uint64_t);
__uint32_t htobe32(__uint32_t);
__uint16_t htobe16(__uint16_t);
__uint64_t betoh64(__uint64_t);
__uint32_t betoh32(__uint32_t);
__uint16_t betoh16(__uint16_t);

__uint64_t htole64(__uint64_t);
__uint32_t htole32(__uint32_t);
__uint16_t htole16(__uint16_t);
__uint64_t letoh64(__uint64_t);
__uint32_t letoh32(__uint32_t);
__uint16_t letoh16(__uint16_t);
}
# 32 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/endian.h" 2
# 37 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/sys/stat.h" 2

extern "C" {





struct stat {
    unsigned long long st_dev;
    unsigned char __pad0[4];

    unsigned long __st_ino;
    unsigned int st_mode;
    unsigned int st_nlink;

    unsigned long st_uid;
    unsigned long st_gid;

    unsigned long long st_rdev;
    unsigned char __pad3[4];

    long long st_size;
    unsigned long st_blksize;
    unsigned long long st_blocks;

    unsigned long st_atime;
    unsigned long st_atime_nsec;

    unsigned long st_mtime;
    unsigned long st_mtime_nsec;

    unsigned long st_ctime;
    unsigned long st_ctime_nsec;

    unsigned long long st_ino;
};
# 81 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/sys/stat.h"
extern int chmod(const char *, mode_t);
extern int fchmod(int, mode_t);
extern int mkdir(const char *, mode_t);

extern int stat(const char *, struct stat *);
extern int fstat(int, struct stat *);
extern int lstat(const char *, struct stat *);
extern int mknod(const char *, mode_t, dev_t);
extern mode_t umask(mode_t);





static __inline__ int mkfifo(const char *__p, mode_t __m)
{
  return mknod(__p, (__m & ~00170000) | 0010000, (dev_t)0);
}

extern int fstatat(int dirfd, const char *path, struct stat *buf, int flags);
extern int mkdirat(int dirfd, const char *pathname, mode_t mode);
extern int fchownat(int dirfd, const char *path, uid_t owner, gid_t group, int flags);
extern int fchmodat(int dirfd, const char *path, mode_t mode, int flags);
extern int renameat(int olddirfd, const char *oldpath, int newdirfd, const char *newpath);

}
# 52 "webkey-2.09/service/mongoose.cpp" 2
# 1 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/errno.h" 1
# 32 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/errno.h"
# 1 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/linux/errno.h" 1
# 15 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/linux/errno.h"
# 1 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/asm/errno.h" 1
# 15 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/asm/errno.h"
# 1 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/asm-generic/errno.h" 1
# 15 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/asm-generic/errno.h"
# 1 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/asm-generic/errno-base.h" 1
# 16 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/asm-generic/errno.h" 2
# 16 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/asm/errno.h" 2
# 16 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/linux/errno.h" 2
# 33 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/errno.h" 2

extern "C" {
# 45 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/errno.h"
extern int __set_errno(int error);


extern volatile int* __errno(void);




}
# 53 "webkey-2.09/service/mongoose.cpp" 2
# 1 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/signal.h" 1
# 32 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/signal.h"
# 1 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/limits.h" 1
# 86 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/limits.h"
# 1 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/sys/limits.h" 1
# 30 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/sys/limits.h"
# 1 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/linux/limits.h" 1
# 31 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/sys/limits.h" 2
# 44 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/sys/limits.h"
# 1 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/machine/internal_types.h" 1
# 45 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/sys/limits.h" 2


# 1 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/machine/limits.h" 1
# 48 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/sys/limits.h" 2
# 87 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/limits.h" 2


# 1 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/sys/syslimits.h" 1
# 90 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/limits.h" 2
# 33 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/signal.h" 2
# 1 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/string.h" 1
# 32 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/string.h"
# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stddef.h" 1
# 18 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stddef.h"
# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_cprolog.h" 1
# 19 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stddef.h" 2
# 34 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stddef.h"
# 1 "/home/petya/download/android-ndk-r8b/toolchains/arm-linux-androideabi-4.4.3/prebuilt/linux-x86/bin/../lib/gcc/arm-linux-androideabi/4.4.3/include/../include/stddef.h" 1 3 4
# 35 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stddef.h" 2




# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_epilog.h" 1
# 19 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_epilog.h"
# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_config_compat_post.h" 1
# 20 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_epilog.h" 2
# 40 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stddef.h" 2
# 33 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/string.h" 2
# 1 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/malloc.h" 1
# 32 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/malloc.h"
# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stddef.h" 1
# 18 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stddef.h"
# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_cprolog.h" 1
# 19 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stddef.h" 2
# 34 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stddef.h"
# 1 "/home/petya/download/android-ndk-r8b/toolchains/arm-linux-androideabi-4.4.3/prebuilt/linux-x86/bin/../lib/gcc/arm-linux-androideabi/4.4.3/include/../include/stddef.h" 1 3 4
# 35 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stddef.h" 2




# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_epilog.h" 1
# 19 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_epilog.h"
# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_config_compat_post.h" 1
# 20 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_epilog.h" 2
# 40 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stddef.h" 2
# 33 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/malloc.h" 2

extern "C" {

extern __attribute__((malloc)) void* malloc(size_t);
extern __attribute__((malloc)) void* calloc(size_t, size_t);
extern __attribute__((malloc)) void* realloc(void *, size_t);
extern void free(void *);

extern void* memalign(size_t alignment, size_t bytesize);
extern void* valloc(size_t bytesize);
extern void* pvalloc(size_t bytesize);
extern int mallopt(int param_number, int param_value);
extern size_t malloc_footprint(void);
extern size_t malloc_max_footprint(void);

struct mallinfo {
    size_t arena;
    size_t ordblks;
    size_t smblks;
    size_t hblks;
    size_t hblkhd;
    size_t usmblks;
    size_t fsmblks;
    size_t uordblks;
    size_t fordblks;
    size_t keepcost;
};

extern struct mallinfo mallinfo(void);
# 78 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/malloc.h"
extern size_t malloc_usable_size(void* block);
# 99 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/malloc.h"
extern void malloc_stats(void);

}
# 34 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/string.h" 2

extern "C" {

extern void* memccpy(void *, const void *, int, size_t);
extern void* memchr(const void *, int, size_t);
extern void* memrchr(const void *, int, size_t);
extern int memcmp(const void *, const void *, size_t);
extern void* memcpy(void *, const void *, size_t);
extern void* memmove(void *, const void *, size_t);
extern void* memset(void *, int, size_t);
extern void* memmem(const void *, size_t, const void *, size_t);
extern void memswap(void *, void *, size_t);

extern char* index(const char *, int);
extern char* rindex(const char *, int);
extern char* strchr(const char *, int);
extern char* strrchr(const char *, int);

extern size_t strlen(const char *);
extern int strcmp(const char *, const char *);
extern char* strcpy(char *, const char *);
extern char* strcat(char *, const char *);

extern int strcasecmp(const char *, const char *);
extern int strncasecmp(const char *, const char *, size_t);
extern char* strdup(const char *);

extern char* strstr(const char *, const char *);
extern char* strcasestr(const char *haystack, const char *needle);
extern char* strtok(char *, const char *);
extern char* strtok_r(char *, const char *, char**);

extern char* strerror(int);
extern int strerror_r(int errnum, char *buf, size_t n);

extern size_t strnlen(const char *, size_t);
extern char* strncat(char *, const char *, size_t);
extern char* strndup(const char *, size_t);
extern int strncmp(const char *, const char *, size_t);
extern char* strncpy(char *, const char *, size_t);

extern size_t strlcat(char *, const char *, size_t);
extern size_t strlcpy(char *, const char *, size_t);

extern size_t strcspn(const char *, const char *);
extern char* strpbrk(const char *, const char *);
extern char* strsep(char **, const char *);
extern size_t strspn(const char *, const char *);

extern char* strsignal(int sig);

extern int strcoll(const char *, const char *);
extern size_t strxfrm(char *, const char *, size_t);

}
# 34 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/signal.h" 2

# 1 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/asm/signal.h" 1
# 17 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/asm/signal.h"
struct siginfo;


typedef unsigned long sigset_t;
# 82 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/asm/signal.h"
# 1 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/asm-generic/signal.h" 1
# 28 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/asm-generic/signal.h"
typedef void __signalfn_t(int);
typedef __signalfn_t *__sighandler_t;

typedef void __restorefn_t(void);
typedef __restorefn_t *__sigrestore_t;
# 83 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/asm/signal.h" 2

struct sigaction {
 union {
 __sighandler_t _sa_handler;
 void (*_sa_sigaction)(int, struct siginfo *, void *);
 } _u;
 sigset_t sa_mask;
 unsigned long sa_flags;
 void (*sa_restorer)(void);
};




typedef struct sigaltstack {
 void *ss_sp;
 int ss_flags;
 size_t ss_size;
} stack_t;
# 36 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/signal.h" 2


# 1 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/asm/siginfo.h" 1
# 15 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/asm/siginfo.h"
# 1 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/asm-generic/siginfo.h" 1
# 18 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/asm-generic/siginfo.h"
typedef union sigval {
 int sival_int;
 void *sival_ptr;
} sigval_t;
# 42 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/asm-generic/siginfo.h"
typedef struct siginfo {
 int si_signo;
 int si_errno;
 int si_code;

 union {
 int _pad[((128 - (3 * sizeof(int))) / sizeof(int))];

 struct {
 pid_t _pid;
 __kernel_uid32_t _uid;
 } _kill;

 struct {
 timer_t _tid;
 int _overrun;
 char _pad[sizeof( __kernel_uid32_t) - sizeof(int)];
 sigval_t _sigval;
 int _sys_private;
 } _timer;

 struct {
 pid_t _pid;
 __kernel_uid32_t _uid;
 sigval_t _sigval;
 } _rt;

 struct {
 pid_t _pid;
 __kernel_uid32_t _uid;
 int _status;
 clock_t _utime;
 clock_t _stime;
 } _sigchld;

 struct {
 void *_addr;



 } _sigfault;

 struct {
 long _band;
 int _fd;
 } _sigpoll;
 } _sifields;
} siginfo_t;
# 194 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/asm-generic/siginfo.h"
typedef struct sigevent {
 sigval_t sigev_value;
 int sigev_signo;
 int sigev_notify;
 union {
 int _pad[((64 - (sizeof(int) * 2 + sizeof(sigval_t))) / sizeof(int))];
 int _tid;

 struct {
 void (*_function)(sigval_t);
 void *_attribute;
 } _sigev_thread;
 } _sigev_un;
} sigevent_t;
# 16 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/asm/siginfo.h" 2
# 39 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/signal.h" 2


extern "C" {

typedef int sig_atomic_t;
# 56 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/signal.h"
extern const char * const sys_siglist[];

static __inline__ int sigismember(sigset_t *set, int signum)
{
    unsigned long *local_set = (unsigned long *)set;
    signum--;
    return (int)((local_set[signum/32] >> (signum%32)) & 1);
}


static __inline__ int sigaddset(sigset_t *set, int signum)
{
    unsigned long *local_set = (unsigned long *)set;
    signum--;
    local_set[signum/32] |= 1UL << (signum%32);
    return 0;
}


static __inline__ int sigdelset(sigset_t *set, int signum)
{
    unsigned long *local_set = (unsigned long *)set;
    signum--;
    local_set[signum/32] &= ~(1UL << (signum%32));
    return 0;
}


static __inline__ int sigemptyset(sigset_t *set)
{
    memset(set, 0, sizeof *set);
    return 0;
}

static __inline__ int sigfillset(sigset_t *set)
{
    memset(set, ~0, sizeof *set);
    return 0;
}



typedef void (*sig_t)(int);
typedef sig_t sighandler_t;


extern __sighandler_t sysv_signal(int, __sighandler_t);
extern __sighandler_t bsd_signal(int, __sighandler_t);


static __inline__ __sighandler_t signal(int s, __sighandler_t f)
{
    return bsd_signal(s,f);
}


extern __sighandler_t __signal(int, __sighandler_t, int);

extern int sigprocmask(int, const sigset_t *, sigset_t *);
extern int sigaction(int, const struct sigaction *, struct sigaction *);

extern int sigpending(sigset_t *);
extern int sigsuspend(const sigset_t *);
extern int sigwait(const sigset_t *set, int *sig);
extern int siginterrupt(int sig, int flag);

extern int raise(int);
extern int kill(pid_t, int);


}
# 54 "webkey-2.09/service/mongoose.cpp" 2
# 1 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/fcntl.h" 1
# 33 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/fcntl.h"
# 1 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/linux/fcntl.h" 1
# 15 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/linux/fcntl.h"
# 1 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/asm/fcntl.h" 1
# 20 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/asm/fcntl.h"
# 1 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/asm-generic/fcntl.h" 1
# 117 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/asm-generic/fcntl.h"
struct flock {
 short l_type;
 short l_whence;
 off_t l_start;
 off_t l_len;
 pid_t l_pid;

};
# 138 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/asm-generic/fcntl.h"
struct flock64 {
 short l_type;
 short l_whence;
 loff_t l_start;
 loff_t l_len;
 pid_t l_pid;

};
# 21 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/asm/fcntl.h" 2
# 16 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/linux/fcntl.h" 2
# 34 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/fcntl.h" 2
# 1 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/unistd.h" 1
# 31 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/unistd.h"
# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stddef.h" 1
# 18 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stddef.h"
# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_cprolog.h" 1
# 19 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stddef.h" 2
# 34 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stddef.h"
# 1 "/home/petya/download/android-ndk-r8b/toolchains/arm-linux-androideabi-4.4.3/prebuilt/linux-x86/bin/../lib/gcc/arm-linux-androideabi/4.4.3/include/../include/stddef.h" 1 3 4
# 35 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stddef.h" 2




# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_epilog.h" 1
# 19 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_epilog.h"
# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_config_compat_post.h" 1
# 20 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_epilog.h" 2
# 40 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stddef.h" 2
# 32 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/unistd.h" 2


# 1 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/sys/select.h" 1
# 36 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/sys/select.h"
extern "C" {

typedef __kernel_fd_set fd_set;

extern int select(int, fd_set *, fd_set *, fd_set *, struct timeval *);
extern int pselect(int n, fd_set *readfds, fd_set *writefds, fd_set *errfds,
                   const struct timespec *timeout, const sigset_t *sigmask);

}
# 35 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/unistd.h" 2
# 1 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/sys/sysconf.h" 1
# 33 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/sys/sysconf.h"
extern "C" {
# 131 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/sys/sysconf.h"
extern int sysconf (int name);

}
# 36 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/unistd.h" 2
# 1 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/linux/capability.h" 1
# 20 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/linux/capability.h"
typedef struct __user_cap_header_struct {
 __u32 version;
 int pid;
} *cap_user_header_t;

typedef struct __user_cap_data_struct {
 __u32 effective;
 __u32 permitted;
 __u32 inheritable;
} *cap_user_data_t;
# 37 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/unistd.h" 2
# 1 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/pathconf.h" 1
# 33 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/pathconf.h"
extern "C" {
# 58 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/pathconf.h"
extern long fpathconf(int fildes, int name);
extern long pathconf(const char *path, int name);

}
# 38 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/unistd.h" 2

extern "C" {
# 51 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/unistd.h"
extern char **environ;
extern __attribute__((__noreturn__)) void _exit(int);

extern pid_t fork(void);
extern pid_t vfork(void);
extern pid_t getpid(void);
extern pid_t gettid(void);
extern pid_t getpgid(pid_t);
extern int setpgid(pid_t, pid_t);
extern pid_t getppid(void);
extern pid_t getpgrp(void);
extern int setpgrp(void);
extern pid_t setsid(void);

extern int execv(const char *, char * const *);
extern int execvp(const char *, char * const *);
extern int execve(const char *, char * const *, char * const *);
extern int execl(const char *, const char *, ...);
extern int execlp(const char *, const char *, ...);
extern int execle(const char *, const char *, ...);
extern int capget(cap_user_header_t hdrp, cap_user_data_t datap);
extern int capset(cap_user_header_t hdrp, const cap_user_data_t datap);


extern int prctl(int option, ...);

extern int nice(int);

extern int setuid(uid_t);
extern uid_t getuid(void);
extern int seteuid(uid_t);
extern uid_t geteuid(void);
extern int setgid(gid_t);
extern gid_t getgid(void);
extern int setegid(gid_t);
extern gid_t getegid(void);
extern int getgroups(int, gid_t *);
extern int setgroups(size_t, const gid_t *);
extern int setreuid(uid_t, uid_t);
extern int setregid(gid_t, gid_t);
extern int setresuid(uid_t, uid_t, uid_t);
extern int setresgid(gid_t, gid_t, gid_t);
extern int getresuid(uid_t *ruid, uid_t *euid, uid_t *suid);
extern int getresgid(gid_t *rgid, gid_t *egid, gid_t *sgid);
extern int issetugid(void);
extern char* getlogin(void);
# 105 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/unistd.h"
extern int access(const char *, int);
extern int link(const char *, const char *);
extern int unlink(const char *);
extern int chdir(const char *);
extern int fchdir(int);
extern int rmdir(const char *);
extern int pipe(int *);
extern int chroot(const char *);
extern int symlink(const char *, const char *);
extern int readlink(const char *, char *, size_t);
extern int chown(const char *, uid_t, gid_t);
extern int fchown(int, uid_t, gid_t);
extern int lchown(const char *, uid_t, gid_t);
extern int truncate(const char *, off_t);
extern char *getcwd(char *, size_t);

extern int sync(void);

extern int close(int);
extern off_t lseek(int, off_t, int);
extern off64_t lseek64(int, off64_t, int);

extern ssize_t read(int, void *, size_t);
extern ssize_t write(int, const void *, size_t);
extern ssize_t pread(int, void *, size_t, off_t);
extern ssize_t pwrite(int, const void *, size_t, off_t);

extern int dup(int);
extern int dup2(int, int);
extern int fcntl(int, int, ...);
extern int ioctl(int, int, ...);
extern int flock(int, int);
extern int fsync(int);
extern int ftruncate(int, off_t);

extern int pause(void);
extern unsigned int alarm(unsigned int);
extern unsigned int sleep(unsigned int);
extern void usleep(unsigned long);

extern int gethostname(char *, size_t);

extern int getdtablesize(void);

extern void *__brk(void *);
extern int brk(void *);
extern void *sbrk(ptrdiff_t);

extern int getopt(int, char * const *, const char *);
extern char *optarg;
extern int optind, opterr, optopt;

extern int isatty(int);
extern char* ttyname(int);

extern int acct(const char* filepath);

static __inline__ int getpagesize(void) {
  extern unsigned int __page_size;
  return __page_size;
}
static __inline__ int __getpageshift(void) {
  extern unsigned int __page_shift;
  return __page_shift;
}

extern int sysconf(int name);

extern int daemon(int, int);


extern int cacheflush(long start, long end, long flags);

extern pid_t tcgetpgrp(int fd);
extern int tcsetpgrp(int fd, pid_t _pid);
# 206 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/unistd.h"
}
# 35 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/fcntl.h" 2

extern "C" {
# 46 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/fcntl.h"
extern int open(const char* path, int mode, ...);
extern int openat(int fd, const char* path, int mode, ...);
extern int unlinkat(int dirfd, const char *pathname, int flags);
extern int fcntl(int fd, int command, ...);
extern int creat(const char* path, mode_t mode);

}
# 55 "webkey-2.09/service/mongoose.cpp" 2



# 1 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/time.h" 1
# 38 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/time.h"
extern "C" {

extern time_t time(time_t *);
extern int nanosleep(const struct timespec *, struct timespec *);

extern char *strtotimeval(const char *str, struct timeval *tv);

struct tm {
   int tm_sec;
   int tm_min;
   int tm_hour;
   int tm_mday;
   int tm_mon;
   int tm_year;
   int tm_wday;
   int tm_yday;
   int tm_isdst;

   long int tm_gmtoff;
   const char *tm_zone;

};






extern char* asctime(const struct tm* a);
extern char* asctime_r(const struct tm* a, char* buf);


extern double difftime (time_t __time1, time_t __time0);
extern time_t mktime (struct tm *a);

extern struct tm* localtime(const time_t *t);
extern struct tm* localtime_r(const time_t *timep, struct tm *result);

extern struct tm* gmtime(const time_t *timep);
extern struct tm* gmtime_r(const time_t *timep, struct tm *result);

extern char* strptime(const char *buf, const char *fmt, struct tm *tm);
extern size_t strftime(char *s, size_t max, const char *format, const struct tm *tm);

extern char *ctime(const time_t *timep);
extern char *ctime_r(const time_t *timep, char *buf);

extern void tzset(void);


extern char* tzname[];







extern clock_t clock(void);


extern int clock_getres(clockid_t, struct timespec *);
extern int clock_gettime(clockid_t, struct timespec *);
extern int clock_settime(clockid_t, const struct timespec *);
extern int clock_nanosleep(clockid_t, int, const struct timespec *, struct timespec *);
# 111 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/time.h"
extern int timer_create(int, struct sigevent*, timer_t*);
extern int timer_delete(timer_t);
extern int timer_settime(timer_t timerid, int flags, const struct itimerspec *value, struct itimerspec *ovalue);
extern int timer_gettime(timer_t timerid, struct itimerspec *value);
extern int timer_getoverrun(timer_t timerid);

}
# 59 "webkey-2.09/service/mongoose.cpp" 2
# 1 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/stdlib.h" 1
# 37 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/stdlib.h"
# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stddef.h" 1
# 18 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stddef.h"
# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_cprolog.h" 1
# 19 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stddef.h" 2
# 34 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stddef.h"
# 1 "/home/petya/download/android-ndk-r8b/toolchains/arm-linux-androideabi-4.4.3/prebuilt/linux-x86/bin/../lib/gcc/arm-linux-androideabi/4.4.3/include/../include/stddef.h" 1 3 4
# 35 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stddef.h" 2




# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_epilog.h" 1
# 19 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_epilog.h"
# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_config_compat_post.h" 1
# 20 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_epilog.h" 2
# 40 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stddef.h" 2
# 38 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/stdlib.h" 2

# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stddef.h" 1
# 18 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stddef.h"
# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_cprolog.h" 1
# 19 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stddef.h" 2
# 34 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stddef.h"
# 1 "/home/petya/download/android-ndk-r8b/toolchains/arm-linux-androideabi-4.4.3/prebuilt/linux-x86/bin/../lib/gcc/arm-linux-androideabi/4.4.3/include/../include/stddef.h" 1 3 4
# 35 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stddef.h" 2




# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_epilog.h" 1
# 19 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_epilog.h"
# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_config_compat_post.h" 1
# 20 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_epilog.h" 2
# 40 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stddef.h" 2
# 40 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/stdlib.h" 2

# 1 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/alloca.h" 1
# 42 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/stdlib.h" 2
# 1 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/strings.h" 1
# 45 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/strings.h"
extern "C" {
void bcopy(const void *, void *, size_t);
void bzero(void *, size_t);
int ffs(int);
char *index(const char *, int);
int strcasecmp(const char *, const char *);
int strncasecmp(const char *, const char *, size_t);




}
# 43 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/stdlib.h" 2
# 1 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/memory.h" 1
# 44 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/stdlib.h" 2

extern "C" {




extern __attribute__((__noreturn__)) void exit(int);
extern __attribute__((__noreturn__)) void abort(void);
extern int atexit(void (*)(void));

extern char *getenv(const char *);
extern int putenv(const char *);
extern int setenv(const char *, const char *, int);
extern int unsetenv(const char *);

extern char *mktemp (char *);
extern int mkstemp (char *);

extern long strtol(const char *, char **, int);
extern long long strtoll(const char *, char **, int);
extern unsigned long strtoul(const char *, char **, int);
extern unsigned long long strtoull(const char *, char **, int);
extern double strtod(const char *nptr, char **endptr);

static __inline__ float strtof(const char *nptr, char **endptr)
{
    return (float)strtod(nptr, endptr);
}

extern int atoi(const char *);
extern long atol(const char *);
extern long long atoll(const char *);

static __inline__ double atof(const char *nptr)
{
    return (strtod(nptr, __null));
}

static __inline__ int abs(int __n) {
    return (__n < 0) ? -__n : __n;
}

static __inline__ long labs(long __n) {
    return (__n < 0L) ? -__n : __n;
}

static __inline__ long long llabs(long long __n) {
    return (__n < 0LL) ? -__n : __n;
}

extern char * realpath(const char *path, char *resolved);
extern int system(const char * string);

extern void * bsearch(const void *key, const void *base0,
 size_t nmemb, size_t size,
 int (*compar)(const void *, const void *));

extern void qsort(void *, size_t, size_t, int (*)(const void *, const void *));

extern long jrand48(unsigned short *);
extern long mrand48(void);
extern long nrand48(unsigned short *);
extern long lrand48(void);
extern unsigned short *seed48(unsigned short*);
extern double erand48(unsigned short xsubi[3]);
extern double drand48(void);
extern void srand48(long);
extern unsigned int arc4random(void);
extern void arc4random_stir(void);
extern void arc4random_addrandom(unsigned char *, int);


static __inline__ int rand(void) {
    return (int)lrand48();
}
static __inline__ void srand(unsigned int __s) {
    srand48(__s);
}
static __inline__ long random(void)
{
    return lrand48();
}
static __inline__ void srandom(unsigned int __s)
{
    srand48(__s);
}



extern int unlockpt(int);
extern char* ptsname(int);
extern char* ptsname_r(int, char*, size_t);
extern int getpt(void);

static __inline__ int grantpt(int __fd)
{
  (void)__fd;
  return 0;
}

typedef struct {
    int quot;
    int rem;
} div_t;

extern div_t div(int, int);

typedef struct {
    long int quot;
    long int rem;
} ldiv_t;

extern ldiv_t ldiv(long, long);

typedef struct {
    long long int quot;
    long long int rem;
} lldiv_t;

extern lldiv_t lldiv(long long, long long);



extern int mblen(const char *, size_t);
extern size_t mbstowcs(wchar_t *, const char *, size_t);
extern int mbtowc(wchar_t *, const char *, size_t);


extern int wctomb(char *, wchar_t);
extern size_t wcstombs(char *, const wchar_t *, size_t);
# 183 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/stdlib.h"
}
# 60 "webkey-2.09/service/mongoose.cpp" 2
# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stdarg.h" 1
# 24 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stdarg.h"
# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_cprolog.h" 1
# 25 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stdarg.h" 2
# 36 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stdarg.h"
# 1 "/home/petya/download/android-ndk-r8b/toolchains/arm-linux-androideabi-4.4.3/prebuilt/linux-x86/bin/../lib/gcc/arm-linux-androideabi/4.4.3/include/../include/stdarg.h" 1 3 4
# 40 "/home/petya/download/android-ndk-r8b/toolchains/arm-linux-androideabi-4.4.3/prebuilt/linux-x86/bin/../lib/gcc/arm-linux-androideabi/4.4.3/include/../include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
# 102 "/home/petya/download/android-ndk-r8b/toolchains/arm-linux-androideabi-4.4.3/prebuilt/linux-x86/bin/../lib/gcc/arm-linux-androideabi/4.4.3/include/../include/stdarg.h" 3 4
typedef __gnuc_va_list va_list;
# 37 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stdarg.h" 2




# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_epilog.h" 1
# 19 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_epilog.h"
# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_config_compat_post.h" 1
# 20 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_epilog.h" 2
# 42 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stdarg.h" 2
# 61 "webkey-2.09/service/mongoose.cpp" 2
# 1 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/assert.h" 1
# 62 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/assert.h"
extern "C" {
 void __assert(const char *, int, const char *);
 void __assert2(const char *, int, const char *, const char *);
}
# 62 "webkey-2.09/service/mongoose.cpp" 2

# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/string" 1
# 23 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/string"
# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_prolog.h" 1






# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_cprolog.h" 1
# 8 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_prolog.h" 2
# 17 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_prolog.h"
# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/debug/_debug.h" 1
# 18 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_prolog.h" 2
# 24 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/string" 2





# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_string.h" 1
# 23 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_string.h"
# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_alloc.h" 1
# 31 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_alloc.h"
# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_cstddef.h" 1
# 34 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_cstddef.h"
# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stddef.h" 1
# 34 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stddef.h"
# 1 "/home/petya/download/android-ndk-r8b/toolchains/arm-linux-androideabi-4.4.3/prebuilt/linux-x86/bin/../lib/gcc/arm-linux-androideabi/4.4.3/include/../include/stddef.h" 1 3 4
# 35 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stddef.h" 2
# 35 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_cstddef.h" 2



namespace std {
using ::ptrdiff_t;
using ::size_t;
}
# 32 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_alloc.h" 2



# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_cstdlib.h" 1
# 55 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_cstdlib.h"
namespace std {
using ::div_t;
using ::ldiv_t;
using ::size_t;




using ::abort;
using ::getenv;
using ::mblen;
using ::mbtowc;
using ::system;
using ::bsearch;

using ::atexit;
using ::exit;
using ::calloc;
using ::free;
using ::malloc;
using ::realloc;
using ::atof;
using ::atoi;
using ::atol;
using ::mbstowcs;
using ::strtod;
using ::strtol;
using ::strtoul;


using ::wcstombs;

using ::wctomb;


using ::qsort;
using ::labs;
using ::ldiv;


using ::llabs;
using ::lldiv_t;
using ::lldiv;






using ::rand;
using ::srand;

}
# 131 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_cstdlib.h"
inline long abs(long __x) { return ::labs(__x); }





inline ::ldiv_t div(long __x, long __y) { return ::ldiv(__x, __y); }
# 151 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_cstdlib.h"
inline long long abs(long long __x) { return ::llabs(__x); }
inline lldiv_t div(long long __x, long long __y) { return ::lldiv(__x, __y); }
# 169 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_cstdlib.h"
# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_cmath.h" 1
# 44 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_cmath.h"
# 1 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/math.h" 1
# 29 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/math.h"
extern const union __infinity_un {
 unsigned char __uc[8];
 double __ud;
} __infinity;

extern const union __nan_un {
 unsigned char __uc[sizeof(float)];
 float __uf;
} __nan;
# 165 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/math.h"
extern int signgam;
# 182 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/math.h"
extern "C" {



int __fpclassifyd(double) ;
int __fpclassifyf(float) ;
int __fpclassifyl(long double) ;
int __isfinitef(float) ;
int __isfinite(double) ;
int __isfinitel(long double) ;
int __isinff(float) ;
int __isinf(double) ;
int __isinfl(long double) ;
int __isnanl(long double) ;
int __isnormalf(float) ;
int __isnormal(double) ;
int __isnormall(long double) ;
int __signbit(double) ;
int __signbitf(float) ;
int __signbitl(long double) ;

double acos(double);
double asin(double);
double atan(double);
double atan2(double, double);
double cos(double);
double sin(double);
double tan(double);

double cosh(double);
double sinh(double);
double tanh(double);

double exp(double);
double frexp(double, int *);
double ldexp(double, int);
double log(double);
double log10(double);
double modf(double, double *);

double pow(double, double);
double sqrt(double);

double ceil(double);
double fabs(double) ;
double floor(double);
double fmod(double, double);





double acosh(double);
double asinh(double);
double atanh(double);
double cbrt(double);
double erf(double);
double erfc(double);
double exp2(double);
double expm1(double);
double fma(double, double, double);
double hypot(double, double);
int ilogb(double) ;

int (isnan)(double) ;
double lgamma(double);
long long llrint(double);
long long llround(double);
double log1p(double);
double logb(double);
long lrint(double);
long lround(double);
double nextafter(double, double);
double remainder(double, double);
double remquo(double, double, int *);
double rint(double);



double j0(double);
double j1(double);
double jn(int, double);
double scalb(double, double);
double y0(double);
double y1(double);
double yn(int, double);


double gamma(double);




double copysign(double, double) ;
double fdim(double, double);
double fmax(double, double) ;
double fmin(double, double) ;
double nearbyint(double);
double round(double);
double scalbln(double, long);
double scalbn(double, int);
double tgamma(double);
double trunc(double);






double drem(double, double);
int finite(double) ;
int isnanf(float) ;





double gamma_r(double, int *);
double lgamma_r(double, int *);




double significand(double);




float acosf(float);
float asinf(float);
float atanf(float);
float atan2f(float, float);
float cosf(float);
float sinf(float);
float tanf(float);

float coshf(float);
float sinhf(float);
float tanhf(float);

float exp2f(float);
float expf(float);
float expm1f(float);
float frexpf(float, int *);
int ilogbf(float) ;
float ldexpf(float, int);
float log10f(float);
float log1pf(float);
float logf(float);
float modff(float, float *);

float powf(float, float);
float sqrtf(float);

float ceilf(float);
float fabsf(float) ;
float floorf(float);
float fmodf(float, float);
float roundf(float);

float erff(float);
float erfcf(float);
float hypotf(float, float);
float lgammaf(float);

float acoshf(float);
float asinhf(float);
float atanhf(float);
float cbrtf(float);
float logbf(float);
float copysignf(float, float) ;
long long llrintf(float);
long long llroundf(float);
long lrintf(float);
long lroundf(float);
float nearbyintf(float);
float nextafterf(float, float);
float remainderf(float, float);
float remquof(float, float, int *);
float rintf(float);
float scalblnf(float, long);
float scalbnf(float, int);
float truncf(float);

float fdimf(float, float);
float fmaf(float, float, float);
float fmaxf(float, float) ;
float fminf(float, float) ;






float dremf(float, float);
int finitef(float) ;
float gammaf(float);
float j0f(float);
float j1f(float);
float jnf(int, float);
float scalbf(float, float);
float y0f(float);
float y1f(float);
float ynf(int, float);






float gammaf_r(float, int *);
float lgammaf_r(float, int *);




float significandf(float);
# 415 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/math.h"
long double ceill(long double);
long double copysignl(long double, long double) ;
# 426 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/math.h"
long double fabsl(long double) ;
long double fdiml(long double, long double);
long double floorl(long double);
long double fmal(long double, long double, long double);
long double fmaxl(long double, long double) ;
long double fminl(long double, long double) ;



long double frexpl(long double value, int *);



int ilogbl(long double) ;
long double ldexpl(long double, int);




long long llroundl(long double);
# 454 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/math.h"
long lroundl(long double);





long double nextafterl(long double, long double);
double nexttoward(double, long double);
float nexttowardf(float, long double);
long double nexttowardl(long double, long double);






long double roundl(long double);
long double scalblnl(long double, long);
long double scalbnl(long double, int);
# 481 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/math.h"
long double truncl(long double);


}
# 45 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_cmath.h" 2
# 424 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_cmath.h"
inline double abs(double __x)
{ return ::fabs(__x); }

inline float abs (float x) { return ::fabsf(x); } inline long double abs (long double x) { return static_cast<long double>(::fabs((double)x)); }




inline float acos (float x) { return ::acosf(x); } inline long double acos (long double x) { return static_cast<long double>(::acos((double)x)); }
inline float asin (float x) { return ::asinf(x); } inline long double asin (long double x) { return static_cast<long double>(::asin((double)x)); }
inline float atan (float x) { return ::atanf(x); } inline long double atan (long double x) { return static_cast<long double>(::atan((double)x)); }
inline float atan2 (float x, float y) { return ::atan2f(x, y); } inline long double atan2 (long double x, long double y) { return static_cast<long double>(::atan2((double)x, (double)y)); }
inline float ceil (float x) { return ::ceilf(x); } inline long double ceil (long double x) { return static_cast<long double>(::ceil((double)x)); }
inline float cos (float x) { return ::cosf(x); } inline long double cos (long double x) { return static_cast<long double>(::cos((double)x)); }
inline float cosh (float x) { return ::coshf(x); } inline long double cosh (long double x) { return static_cast<long double>(::cosh((double)x)); }
inline float exp (float x) { return ::expf(x); } inline long double exp (long double x) { return static_cast<long double>(::exp((double)x)); }
inline float fabs (float x) { return ::fabsf(x); } inline long double fabs (long double x) { return static_cast<long double>(::fabs((double)x)); }
inline float floor (float x) { return ::floorf(x); } inline long double floor (long double x) { return static_cast<long double>(::floor((double)x)); }
inline float fmod (float x, float y) { return ::fmodf(x, y); } inline long double fmod (long double x, long double y) { return static_cast<long double>(::fmod((double)x, (double)y)); }
inline float frexp (float x, int * y) { return ::frexpf(x, y); } inline long double frexp (long double x, int * y) { return static_cast<long double>(::frexp((double)x, y)); }
inline float ldexp (float x, int y) { return ::ldexpf(x, y); } inline long double ldexp (long double x, int y) { return static_cast<long double>(::ldexp((double)x, y)); }
inline float log (float x) { return ::logf(x); } inline long double log (long double x) { return static_cast<long double>(::log((double)x)); }
inline float log10 (float x) { return ::log10f(x); } inline long double log10 (long double x) { return static_cast<long double>(::log10((double)x)); }
inline float modf (float x, float * y) { return ::modff(x, y); } inline long double modf (long double x, long double *y) { double tmp1, tmp2; tmp1 = ::modf(static_cast<double>(x), &tmp2); *y = static_cast<long double>(tmp2); return static_cast<long double>(tmp1); }
inline float sin (float x) { return ::sinf(x); } inline long double sin (long double x) { return static_cast<long double>(::sin((double)x)); }
inline float sinh (float x) { return ::sinhf(x); } inline long double sinh (long double x) { return static_cast<long double>(::sinh((double)x)); }
inline float sqrt (float x) { return ::sqrtf(x); } inline long double sqrt (long double x) { return static_cast<long double>(::sqrt((double)x)); }
inline float tan (float x) { return ::tanf(x); } inline long double tan (long double x) { return static_cast<long double>(::tan((double)x)); }
inline float tanh (float x) { return ::tanhf(x); } inline long double tanh (long double x) { return static_cast<long double>(::tanh((double)x)); }
inline float pow (float x, float y) { return ::powf(x, y); } inline long double pow (long double x, long double y) { return static_cast<long double>(::pow((double)x, (double)y)); }




inline float pow(float __x, int __y) { return ::powf(__x, static_cast<float>(__y)); }






inline double pow(double __x, int __y) { return ::pow(__x, static_cast<double>(__y)); }
# 478 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_cmath.h"
inline long double pow(long double __x, int __y) { return static_cast<long double>(::pow(__x, static_cast<long double>(__y))); }
# 535 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_cmath.h"
namespace __captured {
template<typename _Tp> inline int __capture_isfinite(_Tp __f) { return ((sizeof (__f) == sizeof (float)) ? __isfinitef(__f) : (sizeof (__f) == sizeof (double)) ? __isfinite(__f) : __isfinitel(__f)); }
template<typename _Tp> inline int __capture_isinf(_Tp __f) { return ((sizeof (__f) == sizeof (float)) ? __isinff(__f) : (sizeof (__f) == sizeof (double)) ? __isinf(__f) : __isinfl(__f)); }
template<typename _Tp> inline int __capture_isnan(_Tp __f) { return ((sizeof (__f) == sizeof (float)) ? isnanf(__f) : (sizeof (__f) == sizeof (double)) ? isnan(__f) : __isnanl(__f)); }
template<typename _Tp> inline int __capture_signbit(_Tp __f) { return ((sizeof (__f) == sizeof (float)) ? __signbitf(__f) : (sizeof (__f) == sizeof (double)) ? __signbit(__f) : __signbitl(__f)); }
}




namespace __captured {
template<typename _Tp> inline int isfinite(_Tp __f) { return __capture_isfinite(__f); }
template<typename _Tp> inline int isinf(_Tp __f) { return __capture_isinf(__f); }
template<typename _Tp> inline int isnan(_Tp __f) { return __capture_isnan(__f); }
template<typename _Tp> inline int signbit(_Tp __f) { return __capture_signbit(__f); }
}

namespace std {
using ::abs;
using ::acos;
using ::asin;
using ::atan;
using ::atan2;
using ::ceil;
using ::cos;
using ::cosh;
using ::exp;
using ::fabs;
using ::floor;
using ::fmod;
using ::frexp;
# 574 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_cmath.h"
using ::hypot;


using __captured::isfinite;
using __captured::isinf;
using __captured::isnan;

using ::ldexp;
using ::log;
using ::log10;
using ::modf;
using ::pow;

using __captured::signbit;

using ::sin;
using ::sinh;
using ::sqrt;
using ::tan;
using ::tanh;
}
# 170 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_cstdlib.h" 2




namespace std {
using ::abs;
using ::div;
}
# 36 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_alloc.h" 2



# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_cstring.h" 1
# 30 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_cstring.h"
namespace std {
# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/using/cstring" 1
using ::size_t;
# 12 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/using/cstring"
using ::memmove;
using ::memcpy;




using ::strcoll;
using ::strerror;
using ::strxfrm;





using ::memchr;
using ::strchr;
using ::strpbrk;
using ::strrchr;
using ::strstr;




using ::memcmp;
using ::memset;

using ::strcat;


using ::strcmp;





using ::strcpy;



using ::strcspn;
using ::strlen;
using ::strncat;
using ::strncmp;

using ::strncpy;
using ::strspn;

using ::strtok;
# 32 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_cstring.h" 2
}
# 40 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_alloc.h" 2



# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_algobase.h" 1
# 42 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_algobase.h"
# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/climits" 1
# 43 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_algobase.h" 2







# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_pair.h" 1
# 36 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_pair.h"
# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/type_traits.h" 1
# 63 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/type_traits.h"
# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/type_manips.h" 1
# 21 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/type_manips.h"
namespace std {

struct __true_type {};
struct __false_type {};


namespace priv {
using ::std::__true_type;
using ::std::__false_type;
}



template <int _Is>
struct __bool2type
{ typedef __true_type _Ret; };

template<>
struct __bool2type<1> { typedef __true_type _Ret; };

template<>
struct __bool2type<0> { typedef __false_type _Ret; };


template <class __bool_type>
struct __type2bool { enum {_Ret = 1}; };

template<>
struct __type2bool<__true_type> { enum {_Ret = 1}; };

template<>
struct __type2bool<__false_type> { enum {_Ret = 0}; };


template <class _BoolType>
struct _Not { typedef __false_type _Ret; };

template<>
struct _Not<__false_type> { typedef __true_type _Ret; };


template <class _P1, class _P2>
struct _Land2 { typedef __false_type _Ret; };

template<>
struct _Land2<__true_type, __true_type> { typedef __true_type _Ret; };


template <class _P1, class _P2, class _P3>
struct _Land3 { typedef __false_type _Ret; };

template<>
struct _Land3<__true_type, __true_type, __true_type> { typedef __true_type _Ret; };


template <class _P1, class _P2>
struct _Lor2 { typedef __true_type _Ret; };

template<>
struct _Lor2<__false_type, __false_type> { typedef __false_type _Ret; };


template <class _P1, class _P2, class _P3>
struct _Lor3 { typedef __true_type _Ret; };

template<>
struct _Lor3<__false_type, __false_type, __false_type> { typedef __false_type _Ret; };
# 112 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/type_manips.h"
template <bool _Cond, class _Tp1, class _Tp2>
struct __select { typedef _Tp1 _Ret; };

template <class _Tp1, class _Tp2>
struct __select<false, _Tp1, _Tp2> { typedef _Tp2 _Ret; };
# 164 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/type_manips.h"
struct _NoVolatilePointerShim { _NoVolatilePointerShim(const void*); };
template <class _Tp>
char _IsCopyableFun(bool, _NoVolatilePointerShim, _Tp const*, _Tp*);
char* _IsCopyableFun(bool, ...);

template <class _Src, class _Dst>
struct _Copyable {
  static _Src* __null_src();
  static _Dst* __null_dst();
  enum { _Ret = (sizeof(_IsCopyableFun(false, __null_src(), __null_src(), __null_dst())) == sizeof(char)) };
  typedef typename __bool2type<_Ret>::_Ret _RetT;
};
# 202 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/type_manips.h"
template <class _Src, class _Dst>
struct _AreCopyable {
  enum { _Same = _Copyable<_Src, _Dst>::_Ret };
  typedef typename _Copyable<_Src, _Dst>::_RetT _Ret;
};

template <class _Tp1, class _Tp2>
struct _AreSameTypes {
  enum { _Same = 0 };
  typedef __false_type _Ret;
};


template <class _Tp>
struct _AreSameTypes<_Tp, _Tp> {
  enum { _Same = 1 };
  typedef __true_type _Ret;
};



template <class _Src, class _Dst>
struct _ConversionHelper {
  static char _Test(bool, _Dst);
  static char* _Test(bool, ...);
  static _Src _MakeSource();
};

template <class _Src, class _Dst>
struct _IsConvertible {
  typedef _ConversionHelper<_Src*, const volatile _Dst*> _H;
  enum { value = (sizeof(char) == sizeof(_H::_Test(false, _H::_MakeSource()))) };
  typedef typename __bool2type<value>::_Ret _Ret;
};
# 292 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/type_manips.h"
template <class _Src, class _Dst>
struct _IsCVConvertible {

  typedef _ConversionHelper<_Src, _Dst> _H;
  enum { value = (sizeof(char) == sizeof(_H::_Test(false, _H::_MakeSource()))) };





  typedef typename __bool2type<value>::_Ret _Ret;
};
# 319 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/type_manips.h"
}
# 64 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/type_traits.h" 2
# 72 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/type_traits.h"
namespace std {






template <class _Tp> struct _IsIntegral
{ typedef __false_type _Ret; };


template<> struct _IsIntegral<bool>
{ typedef __true_type _Ret; };


template<> struct _IsIntegral<char>
{ typedef __true_type _Ret; };


template<> struct _IsIntegral<signed char>
{ typedef __true_type _Ret; };


template<> struct _IsIntegral<unsigned char>
{ typedef __true_type _Ret; };


template<> struct _IsIntegral<wchar_t>
{ typedef __true_type _Ret; };


template<> struct _IsIntegral<short>
{ typedef __true_type _Ret; };

template<> struct _IsIntegral<unsigned short>
{ typedef __true_type _Ret; };

template<> struct _IsIntegral<int>
{ typedef __true_type _Ret; };

template<> struct _IsIntegral<unsigned int>
{ typedef __true_type _Ret; };

template<> struct _IsIntegral<long>
{ typedef __true_type _Ret; };

template<> struct _IsIntegral<unsigned long>
{ typedef __true_type _Ret; };


template<> struct _IsIntegral<long long>
{ typedef __true_type _Ret; };

template<> struct _IsIntegral<unsigned long long>
{ typedef __true_type _Ret; };


template <class _Tp> struct _IsRational
{ typedef __false_type _Ret; };

template<> struct _IsRational<float>
{ typedef __true_type _Ret; };

template<> struct _IsRational<double>
{ typedef __true_type _Ret; };


template<> struct _IsRational<long double>
{ typedef __true_type _Ret; };



template <class _Tp> struct __type_traits;
template <class _IsPOD> struct __type_traits_aux {
   typedef __false_type has_trivial_default_constructor;
   typedef __false_type has_trivial_copy_constructor;
   typedef __false_type has_trivial_assignment_operator;
   typedef __false_type has_trivial_destructor;
   typedef __false_type is_POD_type;
};

template<>
struct __type_traits_aux<__false_type> {
   typedef __false_type has_trivial_default_constructor;
   typedef __false_type has_trivial_copy_constructor;
   typedef __false_type has_trivial_assignment_operator;
   typedef __false_type has_trivial_destructor;
   typedef __false_type is_POD_type;
};

template<>
struct __type_traits_aux<__true_type> {
  typedef __true_type has_trivial_default_constructor;
  typedef __true_type has_trivial_copy_constructor;
  typedef __true_type has_trivial_assignment_operator;
  typedef __true_type has_trivial_destructor;
  typedef __true_type is_POD_type;
};

template <class _Tp>
struct _IsRef {
  typedef __false_type _Ret;
};
# 219 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/type_traits.h"
template <class _Tp> struct _IsPtr {
  typedef __false_type _Ret;
};

template <class _Tp>
struct __type_traits {
   typedef __true_type this_dummy_member_must_be_first;
# 243 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/type_traits.h"
   typedef __false_type has_trivial_default_constructor;
   typedef __false_type has_trivial_copy_constructor;
   typedef __false_type has_trivial_assignment_operator;
   typedef __false_type has_trivial_destructor;
   typedef __false_type is_POD_type;







};


template <class _Tp> struct _IsPtr<_Tp*>
{ typedef __true_type _Ret; };
template <class _Tp> struct _IsRef<_Tp&>
{ typedef __true_type _Ret; };

template <class _Tp> struct __type_traits<_Tp*> : __type_traits_aux<__true_type>
{};
# 284 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/type_traits.h"
template<> struct __type_traits< bool > : __type_traits_aux<__true_type> {}; template<> struct __type_traits< const bool > : __type_traits_aux<__true_type> {}; template<> struct __type_traits< volatile bool > : __type_traits_aux<__true_type> {}; template<> struct __type_traits< const volatile bool > : __type_traits_aux<__true_type> {};

template<> struct __type_traits< char > : __type_traits_aux<__true_type> {}; template<> struct __type_traits< const char > : __type_traits_aux<__true_type> {}; template<> struct __type_traits< volatile char > : __type_traits_aux<__true_type> {}; template<> struct __type_traits< const volatile char > : __type_traits_aux<__true_type> {};

template<> struct __type_traits< signed char > : __type_traits_aux<__true_type> {}; template<> struct __type_traits< const signed char > : __type_traits_aux<__true_type> {}; template<> struct __type_traits< volatile signed char > : __type_traits_aux<__true_type> {}; template<> struct __type_traits< const volatile signed char > : __type_traits_aux<__true_type> {};

template<> struct __type_traits< unsigned char > : __type_traits_aux<__true_type> {}; template<> struct __type_traits< const unsigned char > : __type_traits_aux<__true_type> {}; template<> struct __type_traits< volatile unsigned char > : __type_traits_aux<__true_type> {}; template<> struct __type_traits< const volatile unsigned char > : __type_traits_aux<__true_type> {};

template<> struct __type_traits< wchar_t > : __type_traits_aux<__true_type> {}; template<> struct __type_traits< const wchar_t > : __type_traits_aux<__true_type> {}; template<> struct __type_traits< volatile wchar_t > : __type_traits_aux<__true_type> {}; template<> struct __type_traits< const volatile wchar_t > : __type_traits_aux<__true_type> {};


template<> struct __type_traits< short > : __type_traits_aux<__true_type> {}; template<> struct __type_traits< const short > : __type_traits_aux<__true_type> {}; template<> struct __type_traits< volatile short > : __type_traits_aux<__true_type> {}; template<> struct __type_traits< const volatile short > : __type_traits_aux<__true_type> {};
template<> struct __type_traits< unsigned short > : __type_traits_aux<__true_type> {}; template<> struct __type_traits< const unsigned short > : __type_traits_aux<__true_type> {}; template<> struct __type_traits< volatile unsigned short > : __type_traits_aux<__true_type> {}; template<> struct __type_traits< const volatile unsigned short > : __type_traits_aux<__true_type> {};
template<> struct __type_traits< int > : __type_traits_aux<__true_type> {}; template<> struct __type_traits< const int > : __type_traits_aux<__true_type> {}; template<> struct __type_traits< volatile int > : __type_traits_aux<__true_type> {}; template<> struct __type_traits< const volatile int > : __type_traits_aux<__true_type> {};
template<> struct __type_traits< unsigned int > : __type_traits_aux<__true_type> {}; template<> struct __type_traits< const unsigned int > : __type_traits_aux<__true_type> {}; template<> struct __type_traits< volatile unsigned int > : __type_traits_aux<__true_type> {}; template<> struct __type_traits< const volatile unsigned int > : __type_traits_aux<__true_type> {};
template<> struct __type_traits< long > : __type_traits_aux<__true_type> {}; template<> struct __type_traits< const long > : __type_traits_aux<__true_type> {}; template<> struct __type_traits< volatile long > : __type_traits_aux<__true_type> {}; template<> struct __type_traits< const volatile long > : __type_traits_aux<__true_type> {};
template<> struct __type_traits< unsigned long > : __type_traits_aux<__true_type> {}; template<> struct __type_traits< const unsigned long > : __type_traits_aux<__true_type> {}; template<> struct __type_traits< volatile unsigned long > : __type_traits_aux<__true_type> {}; template<> struct __type_traits< const volatile unsigned long > : __type_traits_aux<__true_type> {};


template<> struct __type_traits< long long > : __type_traits_aux<__true_type> {}; template<> struct __type_traits< const long long > : __type_traits_aux<__true_type> {}; template<> struct __type_traits< volatile long long > : __type_traits_aux<__true_type> {}; template<> struct __type_traits< const volatile long long > : __type_traits_aux<__true_type> {};
template<> struct __type_traits< unsigned long long > : __type_traits_aux<__true_type> {}; template<> struct __type_traits< const unsigned long long > : __type_traits_aux<__true_type> {}; template<> struct __type_traits< volatile unsigned long long > : __type_traits_aux<__true_type> {}; template<> struct __type_traits< const volatile unsigned long long > : __type_traits_aux<__true_type> {};


template<> struct __type_traits< float > : __type_traits_aux<__true_type> {}; template<> struct __type_traits< const float > : __type_traits_aux<__true_type> {}; template<> struct __type_traits< volatile float > : __type_traits_aux<__true_type> {}; template<> struct __type_traits< const volatile float > : __type_traits_aux<__true_type> {};
template<> struct __type_traits< double > : __type_traits_aux<__true_type> {}; template<> struct __type_traits< const double > : __type_traits_aux<__true_type> {}; template<> struct __type_traits< volatile double > : __type_traits_aux<__true_type> {}; template<> struct __type_traits< const volatile double > : __type_traits_aux<__true_type> {};


template<> struct __type_traits< long double > : __type_traits_aux<__true_type> {}; template<> struct __type_traits< const long double > : __type_traits_aux<__true_type> {}; template<> struct __type_traits< volatile long double > : __type_traits_aux<__true_type> {}; template<> struct __type_traits< const volatile long double > : __type_traits_aux<__true_type> {};



template <class _ArePtrs, class _Src, class _Dst>
struct _IsCVConvertibleIf
{ typedef typename _IsCVConvertible<_Src, _Dst>::_Ret _Ret; };

template <class _Src, class _Dst>
struct _IsCVConvertibleIf<__false_type, _Src, _Dst>
{ typedef __false_type _Ret; };
# 352 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/type_traits.h"
template <class _Src, class _Dst>
struct _TrivialNativeTypeCopy {
  typedef typename _IsPtr<_Src>::_Ret _Ptr1;
  typedef typename _IsPtr<_Dst>::_Ret _Ptr2;
  typedef typename _Land2<_Ptr1, _Ptr2>::_Ret _BothPtrs;
  typedef typename _IsCVConvertibleIf<_BothPtrs, _Src, _Dst>::_Ret _Convertible;
  typedef typename _Land2<_BothPtrs, _Convertible>::_Ret _Trivial1;

  typedef typename __bool2type<(sizeof(_Src) == sizeof(_Dst))>::_Ret _SameSize;


  typedef typename _IsIntegral<_Src>::_Ret _Int1;




  typedef typename _IsIntegral<_Dst>::_Ret _Int2;
  typedef typename _Land2<_Int1, _Int2>::_Ret _BothInts;

  typedef typename _IsRational<_Src>::_Ret _Rat1;
  typedef typename _IsRational<_Dst>::_Ret _Rat2;
  typedef typename _Land2<_Rat1, _Rat2>::_Ret _BothRats;

  typedef typename _Lor2<_BothInts, _BothRats>::_Ret _BothNatives;

  typedef typename _Land2<_BothNatives, _SameSize>::_Ret _Trivial2;




  typedef typename _Lor2<_Trivial1, _Trivial2>::_Ret _Ret;
};

template <class _Src, class _Dst>
struct _TrivialCopy {
  typedef typename _TrivialNativeTypeCopy<_Src, _Dst>::_Ret _NativeRet;

  typedef typename __type_traits<_Src>::has_trivial_assignment_operator _Tr1;




  typedef typename _AreCopyable<_Src, _Dst>::_Ret _Tr2;
  typedef typename _Land2<_Tr1, _Tr2>::_Ret _UserRet;
  typedef typename _Lor2<_NativeRet, _UserRet>::_Ret _Ret;
  static _Ret _Answer() { return _Ret(); }
};

template <class _Src, class _Dst>
struct _TrivialUCopy {
  typedef typename _TrivialNativeTypeCopy<_Src, _Dst>::_Ret _NativeRet;

  typedef typename __type_traits<_Src>::has_trivial_copy_constructor _Tr1;




  typedef typename _AreCopyable<_Src, _Dst>::_Ret _Tr2;
  typedef typename _Land2<_Tr1, _Tr2>::_Ret _UserRet;
  typedef typename _Lor2<_NativeRet, _UserRet>::_Ret _Ret;
  static _Ret _Answer() { return _Ret(); }
};

template <class _Tp>
struct _DefaultZeroValue {
  typedef typename _IsIntegral<_Tp>::_Ret _Tr1;
  typedef typename _IsRational<_Tp>::_Ret _Tr2;
  typedef typename _IsPtr<_Tp>::_Ret _Tr3;
  typedef typename _Lor3<_Tr1, _Tr2, _Tr3>::_Ret _Ret;
};

template <class _Tp>
struct _TrivialInit {

  typedef typename __type_traits<_Tp>::has_trivial_default_constructor _Tr1;




  typedef typename _DefaultZeroValue<_Tp>::_Ret _Tr2;
  typedef typename _Not<_Tr2>::_Ret _Tr3;
  typedef typename _Land2<_Tr1, _Tr3>::_Ret _Ret;
  static _Ret _Answer() { return _Ret(); }
};



template <class _Tp>
struct _IsPtrType {
  typedef typename _IsPtr<_Tp>::_Ret _Type;
  static _Type _Ret() { return _Type(); }
};

template <class _Tp>
struct _IsRefType {
  typedef typename _IsRef<_Tp>::_Ret _Type;
  static _Type _Ret() { return _Type();}
};

template <class _Tp>
struct __call_traits {
# 461 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/type_traits.h"
  typedef const _Tp& const_param_type;
  typedef _Tp& param_type;

};


template <class _Tp>
struct __call_traits<_Tp&> {
  typedef _Tp& param_type;
  typedef const _Tp& const_param_type;
};
template <class _Tp>
struct __call_traits<const _Tp&> {
  typedef _Tp& param_type;
  typedef const _Tp& const_param_type;
};


template <class _Tp1, class _Tp2>
struct _BothPtrType {
  typedef typename _IsPtr<_Tp1>::_Ret _IsPtr1;
  typedef typename _IsPtr<_Tp2>::_Ret _IsPtr2;

  typedef typename _Land2<_IsPtr1, _IsPtr2>::_Ret _Ret;
  static _Ret _Answer() { return _Ret(); }
};

template <class _Tp1, class _Tp2, class _IsRef1, class _IsRef2>
struct _OKToSwap {
  typedef typename _AreSameTypes<_Tp1, _Tp2>::_Ret _Same;
  typedef typename _Land3<_Same, _IsRef1, _IsRef2>::_Ret _Type;
  static _Type _Answer() { return _Type(); }
};

template <class _Tp1, class _Tp2, class _IsRef1, class _IsRef2>
inline _OKToSwap<_Tp1, _Tp2, _IsRef1, _IsRef2>
_IsOKToSwap(_Tp1*, _Tp2*, const _IsRef1&, const _IsRef2&)
{ return _OKToSwap<_Tp1, _Tp2, _IsRef1, _IsRef2>(); }

template <class _Src, class _Dst>
inline _TrivialCopy<_Src, _Dst> _UseTrivialCopy(_Src*, _Dst*)
{ return _TrivialCopy<_Src, _Dst>(); }

template <class _Src, class _Dst>
inline _TrivialUCopy<_Src, _Dst> _UseTrivialUCopy(_Src*, _Dst*)
{ return _TrivialUCopy<_Src, _Dst>(); }



struct _NegativeAnswer {
  typedef __false_type _Ret;
  static _Ret _Answer() { return _Ret(); }
};

template <class _Src, class _Dst>
inline _NegativeAnswer _UseTrivialCopy(_Src*, const _Dst*)
{ return _NegativeAnswer(); }

template <class _Src, class _Dst>
inline _NegativeAnswer _UseTrivialCopy(_Src*, volatile _Dst*)
{ return _NegativeAnswer(); }

template <class _Src, class _Dst>
inline _NegativeAnswer _UseTrivialCopy(_Src*, const volatile _Dst*)
{ return _NegativeAnswer(); }

template <class _Src, class _Dst>
inline _NegativeAnswer _UseTrivialUCopy(_Src*, const _Dst*)
{ return _NegativeAnswer(); }

template <class _Src, class _Dst>
inline _NegativeAnswer _UseTrivialUCopy(_Src*, volatile _Dst*)
{ return _NegativeAnswer(); }

template <class _Src, class _Dst>
inline _NegativeAnswer _UseTrivialUCopy(_Src*, const volatile _Dst*)
{ return _NegativeAnswer(); }


template <class _Tp>
inline _TrivialInit<_Tp> _UseTrivialInit(_Tp*)
{ return _TrivialInit<_Tp>(); }

template <class _Tp>
struct _IsPOD {
  typedef typename __type_traits<_Tp>::is_POD_type _Type;
  static _Type _Answer() { return _Type(); }
};

template <class _Tp>
inline _IsPOD<_Tp> _Is_POD(_Tp*)
{ return _IsPOD<_Tp>(); }

template <class _Tp>
struct _DefaultZeroValueQuestion {
  typedef typename _DefaultZeroValue<_Tp>::_Ret _Ret;
  static _Ret _Answer() { return _Ret(); }
};

template <class _Tp>
inline _DefaultZeroValueQuestion<_Tp> _HasDefaultZeroValue(_Tp*)
{ return _DefaultZeroValueQuestion<_Tp>(); }







template <class _Tp>
struct __stlport_class
{ typedef _Tp _Type; };

template <class _Tp>
struct _IsSTLportClass {
  typedef typename _IsConvertible<_Tp, __stlport_class<_Tp> >::_Ret _Ret;



};
# 592 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/type_traits.h"
template <class _Tp>
class _TpWithState : private _Tp {
  _TpWithState();
  int _state;
};



template <class _Tp>
struct _IsStateless {
  enum { _Is = sizeof(_TpWithState<_Tp>) == sizeof(int) };
  typedef typename __bool2type<_Is>::_Ret _Ret;
};

}
# 37 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_pair.h" 2



# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_move_construct_fwk.h" 1
# 24 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_move_construct_fwk.h"
namespace std {
# 34 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_move_construct_fwk.h"
template <class _Tp>
class __move_source {
public:
  explicit __move_source (_Tp &_src) : _M_data(_src)
  {}

  _Tp& get() const
  { return _M_data; }
private:
  _Tp &_M_data;


  typedef __move_source<_Tp> _Self;
  _Self& operator = (_Self const&);
};


template <class _Tp>
struct __move_traits {
# 63 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_move_construct_fwk.h"
  typedef __false_type implemented;
# 73 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_move_construct_fwk.h"
  typedef typename __type_traits<_Tp>::has_trivial_destructor complete;

};

namespace priv {







template <class _Tp>
struct _MoveSourceTraits {
  typedef typename __move_traits<_Tp>::implemented _MvImpRet;



  enum {_MvImp = __type2bool<_MvImpRet>::_Ret};
  typedef typename __select<_MvImp,

                            __move_source<_Tp>,
                            _Tp const&>::_Ret _Type;
};


template <class _Tp>
inline typename _MoveSourceTraits<_Tp>::_Type
_AsMoveSource (_Tp &src) {
  typedef typename _MoveSourceTraits<_Tp>::_Type _SrcType;
  return _SrcType(src);
}


template <class _Tp>
struct __move_traits_aux {
  typedef typename __move_traits<_Tp>::implemented implemented;
  typedef typename __move_traits<_Tp>::complete complete;
};

template <class _Tp1, class _Tp2>
struct __move_traits_aux2 {
  typedef __move_traits<_Tp1> _MoveTraits1;
  typedef __move_traits<_Tp2> _MoveTraits2;

  typedef typename _Lor2<typename _MoveTraits1::implemented,
                         typename _MoveTraits2::implemented>::_Ret implemented;
  typedef typename _Land2<typename _MoveTraits1::complete,
                          typename _MoveTraits2::complete>::_Ret complete;
};





template <class _Tp>
struct __move_traits_help {
  typedef __true_type implemented;
  typedef typename __move_traits<_Tp>::complete complete;
};

template <class _Tp1, class _Tp2>
struct __move_traits_help1 {
  typedef __move_traits<_Tp1> _MoveTraits1;
  typedef __move_traits<_Tp2> _MoveTraits2;

  typedef typename _Lor2<typename _MoveTraits1::implemented,
                         typename _MoveTraits2::implemented>::_Ret implemented;
  typedef typename _Land2<typename _MoveTraits1::complete,
                          typename _MoveTraits2::complete>::_Ret complete;
};

template <class _Tp1, class _Tp2>
struct __move_traits_help2 {
  typedef __move_traits<_Tp1> _MoveTraits1;
  typedef __move_traits<_Tp2> _MoveTraits2;

  typedef __true_type implemented;
  typedef typename _Land2<typename _MoveTraits1::complete,
                          typename _MoveTraits2::complete>::_Ret complete;
};

}

}
# 41 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_pair.h" 2



namespace std {





template <class _T1, class _T2>
struct pair {
  typedef _T1 first_type;
  typedef _T2 second_type;

  _T1 first;
  _T2 second;



  pair() : first(_T1()), second(_T2()) {}

  pair(const _T1& __a, const _T2& __b) : first(__a), second(__b) {}


  template <class _U1, class _U2>
  pair(const pair<_U1, _U2>& __p) : first(__p.first), second(__p.second) {}

  pair(const pair<_T1,_T2>& __o) : first(__o.first), second(__o.second) {}



  pair(__move_source<pair<_T1, _T2> > src) : first(::std::priv:: _AsMoveSource(src.get().first)),
                                             second(::std::priv:: _AsMoveSource(src.get().second))
  {}


 
};

template <class _T1, class _T2>
inline bool operator==(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y)
{ return __x.first == __y.first && __x.second == __y.second; }

template <class _T1, class _T2>
inline bool operator<(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y) {
  return __x.first < __y.first ||
         (!(__y.first < __x.first) && __x.second < __y.second);
}


template <class _T1, class _T2>
inline bool operator!=(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y)
{ return !(__x == __y); }

template <class _T1, class _T2>
inline bool operator>(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y)
{ return __y < __x; }

template <class _T1, class _T2>
inline bool operator<=(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y)
{ return !(__y < __x); }

template <class _T1, class _T2>
inline bool operator>=(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y)
{ return !(__x < __y); }



template <class _T1, class _T2, int _Sz>
inline pair<_T1, _T2 const*> make_pair(_T1 const& __x,
                                       _T2 const (&__y)[_Sz])
{ return pair<_T1, _T2 const*>(__x, static_cast<_T2 const*>(__y)); }

template <class _T1, class _T2, int _Sz>
inline pair<_T1 const*, _T2> make_pair(_T1 const (&__x)[_Sz],
                                       _T2 const& __y)
{ return pair<_T1 const*, _T2>(static_cast<_T1 const*>(__x), __y); }

template <class _T1, class _T2, int _Sz1, int _Sz2>
inline pair<_T1 const*, _T2 const*> make_pair(_T1 const (&__x)[_Sz1],
                                              _T2 const (&__y)[_Sz2]) {
  return pair<_T1 const*, _T2 const*>(static_cast<_T1 const*>(__x),
                                      static_cast<_T2 const*>(__y));
}


template <class _T1, class _T2>
inline pair<_T1, _T2> make_pair(_T1 __x, _T2 __y)
{ return pair<_T1, _T2>(__x, __y); }

}


namespace std { namespace rel_ops {

template <class _Tp>
inline bool operator!=(const _Tp& __x, const _Tp& __y)
{ return !(__x == __y); }

template <class _Tp>
inline bool operator>(const _Tp& __x, const _Tp& __y)
{ return __y < __x; }

template <class _Tp>
inline bool operator<=(const _Tp& __x, const _Tp& __y)
{ return !(__y < __x); }

template <class _Tp>
inline bool operator>=(const _Tp& __x, const _Tp& __y)
{ return !(__x < __y); }

} }



namespace std {

template <class _T1, class _T2>
struct __type_traits<pair<_T1, _T2> > {
  typedef __type_traits<_T1> _T1Traits;
  typedef __type_traits<_T2> _T2Traits;
  typedef typename _Land2<typename _T1Traits::has_trivial_default_constructor,
                          typename _T2Traits::has_trivial_default_constructor>::_Ret has_trivial_default_constructor;
  typedef typename _Land2<typename _T1Traits::has_trivial_copy_constructor,
                          typename _T2Traits::has_trivial_copy_constructor>::_Ret has_trivial_copy_constructor;
  typedef typename _Land2<typename _T1Traits::has_trivial_assignment_operator,
                          typename _T2Traits::has_trivial_assignment_operator>::_Ret has_trivial_assignment_operator;
  typedef typename _Land2<typename _T1Traits::has_trivial_destructor,
                          typename _T2Traits::has_trivial_destructor>::_Ret has_trivial_destructor;
  typedef __false_type is_POD_type;
};


template <class _T1, class _T2>
struct __move_traits<pair<_T1, _T2> >
  : ::std::priv:: __move_traits_help1<_T1, _T2> {};


}
# 51 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_algobase.h" 2



# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_iterator_base.h" 1
# 49 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_iterator_base.h"
namespace std {

struct input_iterator_tag {};
struct output_iterator_tag {};
struct forward_iterator_tag : public input_iterator_tag {};
struct bidirectional_iterator_tag : public forward_iterator_tag {};
struct random_access_iterator_tag : public bidirectional_iterator_tag {};

template <class _Category, class _Tp, class _Distance = ptrdiff_t,
          class _Pointer = _Tp*, class _Reference = _Tp& >
struct iterator {
  typedef _Category iterator_category;
  typedef _Tp value_type;
  typedef _Distance difference_type;
  typedef _Pointer pointer;
  typedef _Reference reference;
};
template<>
struct iterator<output_iterator_tag, void, void, void, void> {
  typedef output_iterator_tag iterator_category;

  typedef void value_type;
  typedef void difference_type;
  typedef void pointer;
  typedef void reference;

};
# 146 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_iterator_base.h"
template <class _Iterator>
struct iterator_traits {
  typedef typename _Iterator::iterator_category iterator_category;

  typedef typename _Iterator::value_type value_type;
  typedef typename _Iterator::difference_type difference_type;
  typedef typename _Iterator::pointer pointer;
  typedef typename _Iterator::reference reference;
};
# 165 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_iterator_base.h"
template <class _Tp>
struct iterator_traits<const _Tp*> {
  typedef random_access_iterator_tag iterator_category;
  typedef _Tp value_type;
  typedef ptrdiff_t difference_type;
  typedef const _Tp* pointer;
  typedef const _Tp& reference;
};

template <class _Tp>
struct iterator_traits<_Tp*> {
  typedef random_access_iterator_tag iterator_category;
  typedef _Tp value_type;
  typedef ptrdiff_t difference_type;
  typedef _Tp* pointer;
  typedef _Tp& reference;
};
# 196 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_iterator_base.h"
}
# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_ptrs_specialize.h" 1
# 198 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_iterator_base.h" 2
namespace std {
# 267 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_iterator_base.h"
template <class _Tp, class _Distance> struct input_iterator :
  public iterator <input_iterator_tag, _Tp, _Distance, _Tp*, _Tp&> {};
struct output_iterator : public iterator <output_iterator_tag, void, void, void, void> {};
template <class _Tp, class _Distance> struct forward_iterator :
  public iterator<forward_iterator_tag, _Tp, _Distance, _Tp*, _Tp&> {};
template <class _Tp, class _Distance> struct bidirectional_iterator :
  public iterator<bidirectional_iterator_tag, _Tp, _Distance, _Tp*, _Tp&> {};
template <class _Tp, class _Distance> struct random_access_iterator :
  public iterator<random_access_iterator_tag, _Tp, _Distance, _Tp*, _Tp&> {};
# 311 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_iterator_base.h"
namespace priv {

template <class _InputIterator>
inline typename iterator_traits<_InputIterator>::difference_type
__distance(const _InputIterator& __first, const _InputIterator& __last,
           const input_iterator_tag &) {
  typename iterator_traits<_InputIterator>::difference_type __n = 0;
  _InputIterator __it(__first);
  while (__it != __last) {
    ++__it; ++__n;
  }
  return __n;
}
# 351 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_iterator_base.h"
template <class _RandomAccessIterator>
inline typename iterator_traits<_RandomAccessIterator>::difference_type
__distance(const _RandomAccessIterator& __first, const _RandomAccessIterator& __last,
           const random_access_iterator_tag &)
{ return __last - __first; }

}

template <class _InputIterator>
inline typename iterator_traits<_InputIterator>::difference_type
distance(_InputIterator __first, _InputIterator __last)
{ return ::std::priv:: __distance(__first, __last, typename ::std::iterator_traits< _InputIterator >::iterator_category()); }


template <class _InputIterator, class _Distance>
inline void distance(const _InputIterator& __first,
                                const _InputIterator& __last, _Distance& __n)
{ __n += ::std::distance(__first, __last); }
# 380 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_iterator_base.h"
template <class _Tp>
struct _Nonconst_traits;

template <class _Tp>
struct _Const_traits {
  typedef _Tp value_type;
  typedef const _Tp& reference;
  typedef const _Tp* pointer;
  typedef _Const_traits<_Tp> _ConstTraits;
  typedef _Nonconst_traits<_Tp> _NonConstTraits;
};

template <class _Tp>
struct _Nonconst_traits {
  typedef _Tp value_type;
  typedef _Tp& reference;
  typedef _Tp* pointer;
  typedef _Const_traits<_Tp> _ConstTraits;
  typedef _Nonconst_traits<_Tp> _NonConstTraits;
};





template <class _Tp>
struct _Nonconst_Const_traits;

template <class _Tp>
struct _Const_Const_traits {
  typedef _Tp value_type;
  typedef const _Tp& reference;
  typedef const _Tp* pointer;
  typedef _Const_Const_traits<_Tp> _ConstTraits;
  typedef _Nonconst_Const_traits<_Tp> _NonConstTraits;
};

template <class _Tp>
struct _Nonconst_Const_traits {
  typedef _Tp value_type;
  typedef const _Tp& reference;
  typedef const _Tp* pointer;
  typedef _Const_Const_traits<_Tp> _ConstTraits;
  typedef _Nonconst_Const_traits<_Tp> _NonConstTraits;
};
# 476 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_iterator_base.h"
namespace priv {

template <class _InputIter, class _Distance>
inline void
__advance(_InputIter& __i, _Distance __n, const input_iterator_tag &)
{ while (__n--) ++__i; }


template <class _InputIter, class _Distance>
inline void
__advance(_InputIter& __i, _Distance __n, const output_iterator_tag &)
{ while (__n--) ++__i; }
# 496 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_iterator_base.h"
template <class _BidirectionalIterator, class _Distance>
inline void
__advance(_BidirectionalIterator& __i, _Distance __n,
          const bidirectional_iterator_tag &) {
  if (__n > 0)
    while (__n--) ++__i;
  else
    while (__n++) --__i;
}

template <class _RandomAccessIterator, class _Distance>
inline void
__advance(_RandomAccessIterator& __i, _Distance __n,
          const random_access_iterator_tag &)
{ __i += __n; }

}

template <class _InputIterator, class _Distance>
inline void advance(_InputIterator& __i, _Distance __n)
{ ::std::priv:: __advance(__i, __n, typename ::std::iterator_traits< _InputIterator >::iterator_category()); }

}
# 55 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_algobase.h" 2






namespace std {
# 80 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_algobase.h"
template <class _Tp>
inline void swap(_Tp& __a, _Tp& __b) {
# 91 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_algobase.h"
  _Tp __tmp = __a;
  __a = __b;
  __b = __tmp;

}

namespace priv {

template <class _ForwardIter1, class _ForwardIter2, class _Value>
inline void __iter_swap_aux_aux(_ForwardIter1& __i1, _ForwardIter2& __i2, _Value *) {
  _Value tmp = *__i1;
  *__i1 = *__i2;
  *__i2 = tmp;
}

template <class _ForwardIter1, class _ForwardIter2>
inline void __iter_swap_aux(_ForwardIter1& __i1, _ForwardIter2& __i2, const __true_type& ) {

                  swap(*__i1, *__i2);
}

template <class _ForwardIter1, class _ForwardIter2>
inline void __iter_swap_aux(_ForwardIter1& __i1, _ForwardIter2& __i2, const __false_type& ) {
  ::std::priv:: __iter_swap_aux_aux( __i1, __i2, (typename ::std::iterator_traits< _ForwardIter1 >::value_type*)0 );
}

}

template <class _ForwardIter1, class _ForwardIter2>
inline void iter_swap(_ForwardIter1 __i1, _ForwardIter2 __i2) {
  ::std::priv:: __iter_swap_aux( __i1, __i2, _IsOKToSwap((typename ::std::iterator_traits< _ForwardIter1 >::value_type*)0, (typename ::std::iterator_traits< _ForwardIter2 >::value_type*)0,
                                                      ::std::_IsRefType< typename ::std::iterator_traits< _ForwardIter1 >::reference >::_Ret(),
                                                      ::std::_IsRefType< typename ::std::iterator_traits< _ForwardIter2 >::reference >::_Ret())._Answer());
}
# 138 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_algobase.h"
template <class _Tp>
inline const _Tp& (min)(const _Tp& __a, const _Tp& __b) { return __b < __a ? __b : __a; }
template <class _Tp>
inline const _Tp& (max)(const _Tp& __a, const _Tp& __b) { return __a < __b ? __b : __a; }
# 151 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_algobase.h"
template <class _Tp, class _Compare>
inline const _Tp& (min)(const _Tp& __a, const _Tp& __b, _Compare __comp) {
  return __comp(__b, __a) ? __b : __a;
}

template <class _Tp, class _Compare>
inline const _Tp& (max)(const _Tp& __a, const _Tp& __b, _Compare __comp) {
  return __comp(__a, __b) ? __b : __a;
}
# 181 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_algobase.h"
namespace priv {

template <class _InputIter, class _OutputIter, class _Distance>
inline _OutputIter __copy(_InputIter __first, _InputIter __last,
                          _OutputIter __result, const input_iterator_tag &, _Distance*) {
  for ( ; __first != __last; ++__result, ++__first)
    *__result = *__first;
  return __result;
}
# 209 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_algobase.h"
template <class _RandomAccessIter, class _OutputIter, class _Distance>
inline _OutputIter
__copy(_RandomAccessIter __first, _RandomAccessIter __last,
       _OutputIter __result, const random_access_iterator_tag &, _Distance*) {
  for (_Distance __n = __last - __first; __n > 0; --__n) {
    *__result = *__first;
    ++__first;
    ++__result;
  }
  return __result;
}

inline void*
__copy_trivial(const void* __first, const void* __last, void* __result) {
  size_t __n = (const char*)__last - (const char*)__first;
  return __n ? (void *)((char*)memmove(__result, __first, __n) + __n) : __result;
}




template <class _BidirectionalIter1, class _BidirectionalIter2,
          class _Distance>
inline _BidirectionalIter2 __copy_backward(_BidirectionalIter1 __first,
                                           _BidirectionalIter1 __last,
                                           _BidirectionalIter2 __result,
                                           const bidirectional_iterator_tag &,
                                           _Distance*) {
  while (__first != __last)
    *--__result = *--__last;
  return __result;
}

template <class _RandomAccessIter, class _BidirectionalIter, class _Distance>
inline _BidirectionalIter __copy_backward(_RandomAccessIter __first,
                                          _RandomAccessIter __last,
                                          _BidirectionalIter __result,
                                          const random_access_iterator_tag &,
                                          _Distance*) {
  for (_Distance __n = __last - __first; __n > 0; --__n)
    *--__result = *--__last;
  return __result;
}

inline void*
__copy_trivial_backward(const void* __first, const void* __last, void* __result) {
  const ptrdiff_t _Num = (const char*)__last - (const char*)__first;
  return (_Num > 0) ? memmove((char*)__result - _Num, __first, _Num) : __result ;
}

template <class _InputIter, class _OutputIter>
inline _OutputIter __copy_ptrs(_InputIter __first, _InputIter __last, _OutputIter __result,
                               const __false_type& ) {
  return ::std::priv:: __copy(__first, __last, __result, random_access_iterator_tag(), (ptrdiff_t*)0);
}
template <class _InputIter, class _OutputIter>
inline _OutputIter __copy_ptrs(_InputIter __first, _InputIter __last, _OutputIter __result,
                               const __true_type& ) {


  return (_OutputIter)::std::priv:: __copy_trivial(__first, __last, __result);
}

template <class _InputIter, class _OutputIter>
inline _OutputIter __copy_aux(_InputIter __first, _InputIter __last, _OutputIter __result,
                              const __true_type& ) {
  return ::std::priv:: __copy_ptrs(__first, __last, __result,
                                _UseTrivialCopy((typename ::std::iterator_traits< _InputIter >::value_type*)0,
                                                (typename ::std::iterator_traits< _OutputIter >::value_type*)0)._Answer());
}

template <class _InputIter, class _OutputIter>
inline _OutputIter __copy_aux(_InputIter __first, _InputIter __last, _OutputIter __result,
                              const __false_type& ) {
  return ::std::priv:: __copy(__first, __last, __result,
                           typename ::std::iterator_traits< _InputIter >::iterator_category(),
                           (typename ::std::iterator_traits< _InputIter >::difference_type*)0);
}

}

template <class _InputIter, class _OutputIter>
inline _OutputIter copy(_InputIter __first, _InputIter __last, _OutputIter __result) {
 
  return ::std::priv:: __copy_aux(__first, __last, __result, _BothPtrType< _InputIter, _OutputIter>::_Answer());
}

namespace priv {

template <class _InputIter, class _OutputIter>
inline _OutputIter __copy_backward_ptrs(_InputIter __first, _InputIter __last,
                                        _OutputIter __result, const __false_type& ) {
  return ::std::priv:: __copy_backward(__first, __last, __result,
                                    typename ::std::iterator_traits< _InputIter >::iterator_category(),
                                    (typename ::std::iterator_traits< _InputIter >::difference_type*)0);
}
template <class _InputIter, class _OutputIter>
inline _OutputIter __copy_backward_ptrs(_InputIter __first, _InputIter __last,
                                        _OutputIter __result, const __true_type& ) {
  return (_OutputIter)::std::priv:: __copy_trivial_backward(__first, __last, __result);
}

template <class _InputIter, class _OutputIter>
inline _OutputIter __copy_backward_aux(_InputIter __first, _InputIter __last, _OutputIter __result, const __false_type&) {
  return ::std::priv:: __copy_backward(__first, __last, __result,
                                    typename ::std::iterator_traits< _InputIter >::iterator_category(),
                                    (typename ::std::iterator_traits< _InputIter >::difference_type*)0);
}

template <class _InputIter, class _OutputIter>
inline _OutputIter __copy_backward_aux(_InputIter __first, _InputIter __last, _OutputIter __result, const __true_type&) {
  return ::std::priv:: __copy_backward_ptrs(__first, __last, __result,
                                         _UseTrivialCopy((typename ::std::iterator_traits< _InputIter >::value_type*)0,
                                                         (typename ::std::iterator_traits< _OutputIter >::value_type*)0)._Answer());
}

}

template <class _InputIter, class _OutputIter>
inline _OutputIter copy_backward(_InputIter __first, _InputIter __last, _OutputIter __result) {
 
  return ::std::priv:: __copy_backward_aux(__first, __last, __result, _BothPtrType< _InputIter, _OutputIter>::_Answer() );
}
# 373 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_algobase.h"
namespace priv {

template <class _InputIter, class _Size, class _OutputIter>
inline ::std::pair<_InputIter, _OutputIter>
__copy_n(_InputIter __first, _Size __count, _OutputIter __result,
         const input_iterator_tag &) {
  for ( ; __count > 0; --__count) {
    *__result = *__first;
    ++__first;
    ++__result;
  }
  return ::std::pair<_InputIter, _OutputIter>(__first, __result);
}

template <class _RAIter, class _Size, class _OutputIter>
inline ::std::pair<_RAIter, _OutputIter>
__copy_n(_RAIter __first, _Size __count, _OutputIter __result,
         const random_access_iterator_tag &) {
  _RAIter __last = __first + __count;
  return ::std::pair<_RAIter, _OutputIter>(__last, ::std::copy(__first, __last, __result));
}

}

template <class _InputIter, class _Size, class _OutputIter>
inline pair<_InputIter, _OutputIter>
copy_n(_InputIter __first, _Size __count, _OutputIter __result) {
 
  return ::std::priv:: __copy_n(__first, __count, __result, typename ::std::iterator_traits< _InputIter >::iterator_category());
}




namespace priv {

template <class _ForwardIter, class _Tp>
inline
void __fill_fwd(_ForwardIter __first, _ForwardIter __last, const _Tp& __val) {
  for ( ; __first != __last; ++__first)
    *__first = __val;
}

template <class _ForwardIter, class _Tp, class _Distance>
inline void __fill(_ForwardIter __first, _ForwardIter __last, const _Tp& __val,
                   const input_iterator_tag &, _Distance*) {
  ::std::priv:: __fill_fwd(__first, __last, __val);
}
# 438 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_algobase.h"
template <class _RandomAccessIter, class _Tp, class _Distance>
inline
void __fill(_RandomAccessIter __first, _RandomAccessIter __last, const _Tp& __val,
            const random_access_iterator_tag &, _Distance*) {
  for (_Distance __n = __last - __first ; __n > 0; ++__first, --__n)
    *__first = __val;
}

}

template <class _ForwardIter, class _Tp>
inline void fill(_ForwardIter __first, _ForwardIter __last, const _Tp& __val) {
 
  ::std::priv:: __fill(__first, __last, __val,
                    typename ::std::iterator_traits< _ForwardIter >::iterator_category(),
                    (typename ::std::iterator_traits< _ForwardIter >::difference_type*)0);
}


inline void fill(unsigned char* __first, unsigned char* __last,
                 const unsigned char& __val) {
  unsigned char __tmp = __val;
  memset(__first, __tmp, __last - __first);
}

inline void fill(signed char* __first, signed char* __last,
                 const signed char& __val) {
  signed char __tmp = __val;
  memset(__first, static_cast<unsigned char>(__tmp), __last - __first);
}

inline void fill(char* __first, char* __last, const char& __val) {
  char __tmp = __val;
  memset(__first, static_cast<unsigned char>(__tmp), __last - __first);
}

namespace priv {

template <class _OutputIter, class _Size, class _Tp>
inline
_OutputIter __fill_n(_OutputIter __first, _Size __n, const _Tp& __val) {
 
  for ( ; __n > 0; --__n, ++__first)
    *__first = __val;
  return __first;
}


template <class _Size>
inline unsigned char* __fill_n(unsigned char* __first, _Size __n,
                               const unsigned char& __val) {
  ::std::fill(__first, __first + __n, __val);
  return __first + __n;
}

template <class _Size>
inline signed char* __fill_n(signed char* __first, _Size __n,
                             const signed char& __val) {
  ::std::fill(__first, __first + __n, __val);
  return __first + __n;
}

template <class _Size>
inline char* __fill_n(char* __first, _Size __n,
                      const char& __val) {
  ::std::fill(__first, __first + __n, __val);
  return __first + __n;
}


}

template <class _OutputIter, class _Size, class _Tp>
inline void fill_n(_OutputIter __first, _Size __n, const _Tp& __val) {
 
  ::std::priv:: __fill_n(__first, __n, __val);
}





template <class _InputIter1, class _InputIter2>
inline
::std::pair<_InputIter1, _InputIter2> mismatch(_InputIter1 __first1,
                                                   _InputIter1 __last1,
                                                   _InputIter2 __first2) {
 
 
  while (__first1 != __last1 && *__first1 == *__first2) {
    ++__first1;
    ++__first2;
  }
  return ::std::pair<_InputIter1, _InputIter2>(__first1, __first2);
}

template <class _InputIter1, class _InputIter2, class _BinaryPredicate>
inline
::std::pair<_InputIter1, _InputIter2> mismatch(_InputIter1 __first1,
                                                   _InputIter1 __last1,
                                                   _InputIter2 __first2,
                                                   _BinaryPredicate __binary_pred) {
 
 
  while (__first1 != __last1 && __binary_pred(*__first1, *__first2)) {
    ++__first1;
    ++__first2;
  }
  return ::std::pair<_InputIter1, _InputIter2>(__first1, __first2);
}

template <class _InputIter1, class _InputIter2>
inline
bool equal(_InputIter1 __first1, _InputIter1 __last1,
           _InputIter2 __first2) {
 
 
  for ( ; __first1 != __last1; ++__first1, ++__first2)
    if (!(*__first1 == *__first2))
      return false;
  return true;
}

template <class _InputIter1, class _InputIter2, class _BinaryPredicate>
inline
bool equal(_InputIter1 __first1, _InputIter1 __last1,
           _InputIter2 __first2, _BinaryPredicate __binary_pred) {
 
 
  for ( ; __first1 != __last1; ++__first1, ++__first2)
    if (!__binary_pred(*__first1, *__first2))
      return false;
  return true;
}





template <class _InputIter1, class _InputIter2>
bool lexicographical_compare(_InputIter1 __first1, _InputIter1 __last1,
                             _InputIter2 __first2, _InputIter2 __last2);

template <class _InputIter1, class _InputIter2, class _Compare>
bool lexicographical_compare(_InputIter1 __first1, _InputIter1 __last1,
                             _InputIter2 __first2, _InputIter2 __last2,
                             _Compare __comp);

inline bool
lexicographical_compare(const unsigned char* __first1,
                        const unsigned char* __last1,
                        const unsigned char* __first2,
                        const unsigned char* __last2) {
  const size_t __len1 = __last1 - __first1;
  const size_t __len2 = __last2 - __first2;
 
 

  const int __result = memcmp(__first1, __first2, (min) (__len1, __len2));
  return __result != 0 ? (__result < 0) : (__len1 < __len2);
}



inline bool lexicographical_compare(const char* __first1, const char* __last1,
                                    const char* __first2, const char* __last2) {
 
 

  return lexicographical_compare((const unsigned char*) __first1,
                                 (const unsigned char*) __last1,
                                 (const unsigned char*) __first2,
                                 (const unsigned char*) __last2);
}


namespace priv {

template <class _InputIter1, class _InputIter2>
int __lexicographical_compare_3way(_InputIter1 __first1, _InputIter1 __last1,
                                   _InputIter2 __first2, _InputIter2 __last2);

inline int
__lexicographical_compare_3way(const unsigned char* __first1,
                               const unsigned char* __last1,
                               const unsigned char* __first2,
                               const unsigned char* __last2) {
  const ptrdiff_t __len1 = __last1 - __first1;
  const ptrdiff_t __len2 = __last2 - __first2;
  const int __result = memcmp(__first1, __first2, (min) (__len1, __len2));
  return __result != 0 ? __result
                       : (__len1 == __len2 ? 0 : (__len1 < __len2 ? -1 : 1));
}



inline int
__lexicographical_compare_3way(const char* __first1, const char* __last1,
                               const char* __first2, const char* __last2) {
  return __lexicographical_compare_3way((const unsigned char*) __first1,
                                        (const unsigned char*) __last1,
                                        (const unsigned char*) __first2,
                                        (const unsigned char*) __last2);
}


}


template <class _InputIter1, class _InputIter2>
int lexicographical_compare_3way(_InputIter1 __first1, _InputIter1 __last1,
                                 _InputIter2 __first2, _InputIter2 __last2);




template <class _InputIter, class _Tp>
inline typename iterator_traits<_InputIter>::difference_type
count(_InputIter __first, _InputIter __last, const _Tp& __val) {
 
  typename iterator_traits<_InputIter>::difference_type __n = 0;
  for ( ; __first != __last; ++__first)
    if (*__first == __val)
      ++__n;
  return __n;
}


template <class _InputIter, class _Tp>
_InputIter find(_InputIter __first, _InputIter __last, const _Tp& __val);

template <class _InputIter, class _Predicate>
_InputIter find_if(_InputIter __first, _InputIter __last, _Predicate __pred);


template <class _ForwardIter1, class _ForwardIter2, class _BinaryPred>
_ForwardIter1 search(_ForwardIter1 __first1, _ForwardIter1 __last1,
                     _ForwardIter2 __first2, _ForwardIter2 __last2, _BinaryPred __predicate);

namespace priv {


template <class _InputIter, class _ForwardIter>
_InputIter __find_first_of(_InputIter __first1, _InputIter __last1,
                           _ForwardIter __first2, _ForwardIter __last2);

template <class _InputIter, class _ForwardIter, class _BinaryPredicate>
_InputIter __find_first_of(_InputIter __first1, _InputIter __last1,
                           _ForwardIter __first2, _ForwardIter __last2,
                           _BinaryPredicate __comp);

}

template <class _ForwardIter1, class _ForwardIter2,
          class _BinaryPredicate>
_ForwardIter1
find_end(_ForwardIter1 __first1, _ForwardIter1 __last1,
         _ForwardIter2 __first2, _ForwardIter2 __last2,
         _BinaryPredicate __comp);


template <class _ForwardIter, class _Tp>
inline void
replace(_ForwardIter __first, _ForwardIter __last,
        const _Tp& __old_value, const _Tp& __new_value) {
 
  for ( ; __first != __last; ++__first)
    if (*__first == __old_value)
      *__first = __new_value;
}

namespace priv {

template <class _ForwardIter, class _Tp, class _Compare1, class _Compare2, class _Distance>
_ForwardIter __lower_bound(_ForwardIter __first, _ForwardIter __last,
                           const _Tp& __val, _Compare1 __comp1, _Compare2 __comp2, _Distance*);

}

}


# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_algobase.c" 1
# 33 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_algobase.c"
# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_function_base.h" 1
# 37 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_function_base.h"
namespace std {

template <class _Arg, class _Result>
struct unary_function {
  typedef _Arg argument_type;
  typedef _Result result_type;

protected:



  ~unary_function() {}

};

template <class _Arg1, class _Arg2, class _Result>
struct binary_function {
  typedef _Arg1 first_argument_type;
  typedef _Arg2 second_argument_type;
  typedef _Result result_type;

protected:

  ~binary_function() {}

};

template <class _Tp>
struct equal_to : public binary_function<_Tp, _Tp, bool> {
  bool operator()(const _Tp& __x, const _Tp& __y) const { return __x == __y; }
};

template <class _Tp>
struct less : public binary_function<_Tp,_Tp,bool>





              , public __stlport_class<less<_Tp> >

{
  bool operator()(const _Tp& __x, const _Tp& __y) const { return __x < __y; }




};


template <class _Tp>
struct __type_traits<less<_Tp> > {

  typedef typename _IsSTLportClass<less<_Tp> >::_Ret _STLportLess;




  typedef _STLportLess has_trivial_default_constructor;
  typedef _STLportLess has_trivial_copy_constructor;
  typedef _STLportLess has_trivial_assignment_operator;
  typedef _STLportLess has_trivial_destructor;
  typedef _STLportLess is_POD_type;
};


namespace priv {

template <class _Tp>
less<_Tp> __less(_Tp* ) { return less<_Tp>(); }

template <class _Tp>
equal_to<_Tp> __equal_to(_Tp* ) { return equal_to<_Tp>(); }

}

template <class _Tp>
struct plus : public binary_function<_Tp, _Tp, _Tp> {
  _Tp operator()(const _Tp& __x, const _Tp& __y) const { return __x + __y; }
};

template <class _Tp>
struct minus : public binary_function<_Tp, _Tp, _Tp> {
  _Tp operator()(const _Tp& __x, const _Tp& __y) const { return __x - __y; }
};

namespace priv {

template <class _Tp>
plus<_Tp> __plus(_Tp* ) { return plus<_Tp>(); }

template <class _Tp>
minus<_Tp> __minus(_Tp* ) { return minus<_Tp>(); }

}

template <class _Tp>
struct multiplies : public binary_function<_Tp, _Tp, _Tp> {
  _Tp operator()(const _Tp& __x, const _Tp& __y) const { return __x * __y; }
};

namespace priv {

template <class _Pair>
struct _Select1st : public unary_function<_Pair, typename _Pair::first_type> {
  const typename _Pair::first_type& operator()(const _Pair& __x) const {
    return __x.first;
  }
};

template <class _Pair>
struct _Select2nd : public unary_function<_Pair, typename _Pair::second_type> {
  const typename _Pair::second_type& operator()(const _Pair& __x) const {
    return __x.second;
  }
};


template <class _Arg1, class _Arg2>
struct _Project1st : public binary_function<_Arg1, _Arg2, _Arg1> {
  _Arg1 operator()(const _Arg1& __x, const _Arg2&) const { return __x; }
};

template <class _Arg1, class _Arg2>
struct _Project2nd : public binary_function<_Arg1, _Arg2, _Arg2> {
  _Arg2 operator()(const _Arg1&, const _Arg2& __y) const { return __y; }
};
# 177 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_function_base.h"
template <class _Tp>
struct _Identity : public unary_function<_Tp,_Tp> {
  const _Tp& operator()(const _Tp& __x) const { return __x; }
};

template <class _Result, class _Argument>
struct _Constant_unary_fun {
  typedef _Argument argument_type;
  typedef _Result result_type;
  result_type _M_val;

  _Constant_unary_fun(const result_type& __v) : _M_val(__v) {}
  const result_type& operator()(const _Argument&) const { return _M_val; }
};

template <class _Result, class _Arg1, class _Arg2>
struct _Constant_binary_fun {
  typedef _Arg1 first_argument_type;
  typedef _Arg2 second_argument_type;
  typedef _Result result_type;
  _Result _M_val;

  _Constant_binary_fun(const _Result& __v) : _M_val(__v) {}
  const result_type& operator()(const _Arg1&, const _Arg2&) const {
    return _M_val;
  }
};


template <class _Tp> inline _Tp __identity_element(plus<_Tp>) { return _Tp(0); }
template <class _Tp> inline _Tp __identity_element(multiplies<_Tp>) { return _Tp(1); }

}

}
# 34 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_algobase.c" 2


namespace std {

template <class _InputIter1, class _InputIter2>
bool lexicographical_compare(_InputIter1 __first1, _InputIter1 __last1,
                             _InputIter2 __first2, _InputIter2 __last2) {
 
 
  for ( ; __first1 != __last1 && __first2 != __last2
        ; ++__first1, ++__first2) {
    if (*__first1 < *__first2) {
     
      return true;
    }
    if (*__first2 < *__first1)
      return false;
  }
  return __first1 == __last1 && __first2 != __last2;
}

template <class _InputIter1, class _InputIter2, class _Compare>
bool lexicographical_compare(_InputIter1 __first1, _InputIter1 __last1,
                             _InputIter2 __first2, _InputIter2 __last2,
                             _Compare __comp) {
 
 
  for ( ; __first1 != __last1 && __first2 != __last2
        ; ++__first1, ++__first2) {
    if (__comp(*__first1, *__first2)) {
     

      return true;
    }
    if (__comp(*__first2, *__first1))
      return false;
  }
  return __first1 == __last1 && __first2 != __last2;
}


namespace priv {

template <class _InputIter1, class _InputIter2>
int __lexicographical_compare_3way(_InputIter1 __first1, _InputIter1 __last1,
                                   _InputIter2 __first2, _InputIter2 __last2) {
  while (__first1 != __last1 && __first2 != __last2) {
    if (*__first1 < *__first2) {
     
      return -1;
    }
    if (*__first2 < *__first1)
      return 1;
    ++__first1;
    ++__first2;
  }
  if (__first2 == __last2) {
    return !(__first1 == __last1);
  }
  else {
    return -1;
  }
}

}

template <class _InputIter1, class _InputIter2>
int lexicographical_compare_3way(_InputIter1 __first1, _InputIter1 __last1,
                                 _InputIter2 __first2, _InputIter2 __last2) {
 
 
  return ::std::priv:: __lexicographical_compare_3way(__first1, __last1, __first2, __last2);
}


namespace priv {

template <class _RandomAccessIter, class _Tp>
inline _RandomAccessIter __find(_RandomAccessIter __first, _RandomAccessIter __last,
                                           const _Tp& __val,
                                           const random_access_iterator_tag &) {
  typename iterator_traits<_RandomAccessIter>::difference_type __trip_count = (__last - __first) >> 2;

  for ( ; __trip_count > 0 ; --__trip_count) {
    if (*__first == __val) return __first;
    ++__first;

    if (*__first == __val) return __first;
    ++__first;

    if (*__first == __val) return __first;
    ++__first;

    if (*__first == __val) return __first;
    ++__first;
  }

  switch (__last - __first) {
  case 3:
    if (*__first == __val) return __first;
    ++__first;
  case 2:
    if (*__first == __val) return __first;
    ++__first;
  case 1:
    if (*__first == __val) return __first;

  case 0:
  default:
    return __last;
  }
}

inline char*
__find(char* __first, char* __last, char __val, const random_access_iterator_tag &) {
  void *res = memchr(__first, __val, __last - __first);
  return res != 0 ? static_cast<char*>(res) : __last;
}
inline const char*
__find(const char* __first, const char* __last, char __val, const random_access_iterator_tag &) {
  const void *res = memchr(__first, __val, __last - __first);
  return res != 0 ? static_cast<const char*>(res) : __last;
}

template <class _RandomAccessIter, class _Predicate>
inline _RandomAccessIter __find_if(_RandomAccessIter __first, _RandomAccessIter __last,
                                              _Predicate __pred,
                                              const random_access_iterator_tag &) {
  typename iterator_traits<_RandomAccessIter>::difference_type __trip_count = (__last - __first) >> 2;

  for ( ; __trip_count > 0 ; --__trip_count) {
    if (__pred(*__first)) return __first;
    ++__first;

    if (__pred(*__first)) return __first;
    ++__first;

    if (__pred(*__first)) return __first;
    ++__first;

    if (__pred(*__first)) return __first;
    ++__first;
  }

  switch(__last - __first) {
  case 3:
    if (__pred(*__first)) return __first;
    ++__first;
  case 2:
    if (__pred(*__first)) return __first;
    ++__first;
  case 1:
    if (__pred(*__first)) return __first;

  case 0:
  default:
    return __last;
  }
}

template <class _InputIter, class _Tp>
inline _InputIter __find(_InputIter __first, _InputIter __last,
                                    const _Tp& __val,
                                    const input_iterator_tag &) {
  while (__first != __last && !(*__first == __val)) ++__first;
  return __first;
}

template <class _InputIter, class _Predicate>
inline _InputIter __find_if(_InputIter __first, _InputIter __last,
                                       _Predicate __pred,
                                       const input_iterator_tag &) {
  while (__first != __last && !__pred(*__first))
    ++__first;
  return __first;
}

}

template <class _InputIter, class _Predicate>
_InputIter find_if(_InputIter __first, _InputIter __last,
                   _Predicate __pred) {
 
  return ::std::priv:: __find_if(__first, __last, __pred, typename ::std::iterator_traits< _InputIter >::iterator_category());
}

template <class _InputIter, class _Tp>
_InputIter find(_InputIter __first, _InputIter __last, const _Tp& __val) {
 
  return ::std::priv:: __find(__first, __last, __val, typename ::std::iterator_traits< _InputIter >::iterator_category());
}

template <class _ForwardIter1, class _ForwardIter2, class _BinaryPred>
_ForwardIter1 search(_ForwardIter1 __first1, _ForwardIter1 __last1,
                     _ForwardIter2 __first2, _ForwardIter2 __last2,
                     _BinaryPred __pred) {
 
 

  if (__first1 == __last1 || __first2 == __last2)
    return __first1;


  _ForwardIter2 __p1(__first2);

  if ( ++__p1 == __last2 ) {
    while (__first1 != __last1 && !__pred(*__first1, *__first2)) {
      ++__first1;
    }
    return __first1;
  }



  for ( ; ; ) {
    while (__first1 != __last1 && !__pred(*__first1, *__first2)) {
      ++__first1;
    }
    if (__first1 == __last1) {
      return __last1;
    }
    _ForwardIter2 __p = __p1;
    _ForwardIter1 __current = __first1;
    if (++__current == __last1) return __last1;

    while (__pred(*__current, *__p)) {
      if (++__p == __last2)
        return __first1;
      if (++__current == __last1)
        return __last1;
    }
    ++__first1;
  }
  return __first1;
}

namespace priv {
template <class _Tp>
struct _IsCharLikeType
{ typedef __false_type _Ret; };

template<> struct _IsCharLikeType<char>
{ typedef __true_type _Ret; };

template<> struct _IsCharLikeType<unsigned char>
{ typedef __true_type _Ret; };


template<> struct _IsCharLikeType<signed char>
{ typedef __true_type _Ret; };


template <class _Tp1, class _Tp2>
inline bool __stlp_eq(_Tp1 __val1, _Tp2 __val2)
{ return __val1 == __val2; }


template <class _Tp>
inline bool __stlp_eq(_Tp, _Tp)
{ return true; }


template <class _InputIter, class _ForwardIter, class _Tp2, class _Predicate>
inline _InputIter __find_first_of_aux2(_InputIter __first1, _InputIter __last1,
                                       _ForwardIter __first2, _ForwardIter __last2,
                                       _Tp2*, _Predicate __pred,
                                       const __true_type& ) {
  unsigned char __hints[(0xffU + 1) / 8];
  memset(__hints, 0, sizeof(__hints) / sizeof(unsigned char));
  for (; __first2 != __last2; ++__first2) {
    unsigned char __tmp = (unsigned char)*__first2;
    __hints[__tmp / 8] |= (1 << (__tmp % 8));
  }

  for (; __first1 != __last1; ++__first1) {
    _Tp2 __tmp = (_Tp2)*__first1;
    if (__stlp_eq(*__first1, __tmp) &&
        __pred((__hints[(unsigned char)__tmp / 8] & (1 << ((unsigned char)__tmp % 8))) != 0))
      break;
  }
  return __first1;
}

template <class _InputIter, class _ForwardIter, class _Tp2, class _Predicate>
inline _InputIter __find_first_of_aux2(_InputIter __first1, _InputIter __last1,
                                       _ForwardIter __first2, _ForwardIter __last2,
                                       _Tp2* , _Predicate ,
                                       const __false_type& ) {
  return ::std::priv:: __find_first_of(__first1, __last1, __first2, __last2,
                                    ::std::priv:: __equal_to((typename ::std::iterator_traits< _InputIter >::value_type*)0));
}

template <class _InputIter, class _ForwardIter, class _Tp1, class _Tp2>
inline _InputIter __find_first_of_aux1(_InputIter __first1, _InputIter __last1,
                                       _ForwardIter __first2, _ForwardIter __last2,
                                       _Tp1* __pt1, _Tp2* __pt2) {
  typedef typename ::std::_IsIntegral<_Tp1>::_Ret _IsIntegral;
  typedef typename ::std::priv:: _IsCharLikeType<_Tp2>::_Ret _IsCharLike;
  typedef typename ::std::_Land2<_IsIntegral, _IsCharLike>::_Ret _UseStrcspnLikeAlgo;
  return ::std::priv:: __find_first_of_aux2(__first1, __last1,
                                         __first2, __last2,
                                         __pt2, _Identity<bool>(), _UseStrcspnLikeAlgo());
}

template <class _InputIter, class _ForwardIter>
inline _InputIter __find_first_of(_InputIter __first1, _InputIter __last1,
                                  _ForwardIter __first2, _ForwardIter __last2) {
  return ::std::priv:: __find_first_of_aux1(__first1, __last1, __first2, __last2,
                                         (typename ::std::iterator_traits< _InputIter >::value_type*)0,
                                         (typename ::std::iterator_traits< _ForwardIter >::value_type*)0);
}


template <class _InputIter, class _ForwardIter, class _BinaryPredicate>
_InputIter __find_first_of(_InputIter __first1, _InputIter __last1,
                           _ForwardIter __first2, _ForwardIter __last2,
                           _BinaryPredicate __comp) {
  for ( ; __first1 != __last1; ++__first1) {
    for (_ForwardIter __iter = __first2; __iter != __last2; ++__iter) {
      if (__comp(*__first1, *__iter)) {
        return __first1;
      }
    }
  }
  return __last1;
}







template <class _ForwardIter1, class _ForwardIter2,
  class _BinaryPredicate>
_ForwardIter1 __find_end(_ForwardIter1 __first1, _ForwardIter1 __last1,
                         _ForwardIter2 __first2, _ForwardIter2 __last2,
                         const forward_iterator_tag &, const forward_iterator_tag &,
                         _BinaryPredicate __comp) {
  if (__first2 == __last2)
    return __last1;
  else {
    _ForwardIter1 __result = __last1;
    for (;;) {
      _ForwardIter1 __new_result = ::std::search(__first1, __last1, __first2, __last2, __comp);
      if (__new_result == __last1)
        return __result;
      else {
        __result = __new_result;
        __first1 = __new_result;
        ++__first1;
      }
    }
  }
}

}





}
# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_iterator.h" 1
# 37 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_iterator.h"
namespace std {
# 46 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_iterator.h"
template <class _Iterator>
class reverse_iterator :
  public iterator<typename iterator_traits<_Iterator>::iterator_category,
                  typename iterator_traits<_Iterator>::value_type,
                  typename iterator_traits<_Iterator>::difference_type,
                  typename iterator_traits<_Iterator>::pointer,
                  typename iterator_traits<_Iterator>::reference> {
protected:
  _Iterator current;
  typedef reverse_iterator<_Iterator> _Self;
public:
  typedef typename iterator_traits<_Iterator>::difference_type difference_type;

  typedef typename iterator_traits<_Iterator>::pointer pointer;
  typedef typename iterator_traits<_Iterator>::reference reference;
  typedef _Iterator iterator_type;
public:
  reverse_iterator() {}
  explicit reverse_iterator(iterator_type __x) : current(__x) {}
  reverse_iterator(const _Self& __x) : current(__x.current) {}
  _Self& operator = (const _Self& __x) { current = __x.base(); return *this; }

  template <class _Iter>
  reverse_iterator(const reverse_iterator<_Iter>& __x) : current(__x.base()) {}
  template <class _Iter>
  _Self& operator = (const reverse_iterator<_Iter>& __x) { current = __x.base(); return *this; }


  iterator_type base() const { return current; }
  reference operator*() const {
    _Iterator __tmp = current;
    return *--__tmp;
  }
  pointer operator->() const { return &(operator*()); }
  _Self& operator++() {
    --current;
    return *this;
  }
  _Self operator++(int) {
    _Self __tmp = *this;
    --current;
    return __tmp;
  }
  _Self& operator--() {
    ++current;
    return *this;
  }
  _Self operator--(int) {
    _Self __tmp = *this;
    ++current;
    return __tmp;
  }

  _Self operator+(difference_type __n) const { return _Self(current - __n); }
  _Self& operator+=(difference_type __n) {
    current -= __n;
    return *this;
  }
  _Self operator-(difference_type __n) const { return _Self(current + __n); }
  _Self& operator-=(difference_type __n) {
    current += __n;
    return *this;
  }
  reference operator[](difference_type __n) const { return *(*this + __n); }
};

template <class _Iterator>
inline bool operator==(const reverse_iterator<_Iterator>& __x,
                                   const reverse_iterator<_Iterator>& __y)
{ return __x.base() == __y.base(); }

template <class _Iterator>
inline bool operator<(const reverse_iterator<_Iterator>& __x,
                                 const reverse_iterator<_Iterator>& __y)
{ return __y.base() < __x.base(); }


template <class _Iterator>
inline bool operator!=(const reverse_iterator<_Iterator>& __x,
                                  const reverse_iterator<_Iterator>& __y)
{ return !(__x == __y); }

template <class _Iterator>
inline bool operator>(const reverse_iterator<_Iterator>& __x,
                                 const reverse_iterator<_Iterator>& __y)
{ return __y < __x; }

template <class _Iterator>
inline bool operator<=(const reverse_iterator<_Iterator>& __x,
                                  const reverse_iterator<_Iterator>& __y)
{ return !(__y < __x); }

template <class _Iterator>
inline bool operator>=(const reverse_iterator<_Iterator>& __x,
                                  const reverse_iterator<_Iterator>& __y)
{ return !(__x < __y); }


template <class _Iterator>



inline typename reverse_iterator<_Iterator>::difference_type

operator-(const reverse_iterator<_Iterator>& __x,
          const reverse_iterator<_Iterator>& __y)
{ return __y.base() - __x.base(); }

template <class _Iterator, class _DifferenceType>
inline reverse_iterator<_Iterator>
operator+(_DifferenceType n,const reverse_iterator<_Iterator>& x)
{ return x.operator+(n); }


template <class _Container>
class back_insert_iterator
  : public iterator<output_iterator_tag, void, void, void, void> {
  typedef back_insert_iterator<_Container> _Self;
protected:

  _Container *container;
public:
  typedef _Container container_type;
  typedef output_iterator_tag iterator_category;

  explicit back_insert_iterator(_Container& __x) : container(&__x) {}

  _Self& operator=(const _Self& __other) {
    container = __other.container;
    return *this;
  }
  _Self& operator=(const typename _Container::value_type& __val) {
    container->push_back(__val);
    return *this;
  }
  _Self& operator*() { return *this; }
  _Self& operator++() { return *this; }
  _Self operator++(int) { return *this; }
};

template <class _Container>
inline back_insert_iterator<_Container> back_inserter(_Container& __x)
{ return back_insert_iterator<_Container>(__x); }

template <class _Container>
class front_insert_iterator
  : public iterator<output_iterator_tag, void, void, void, void> {
  typedef front_insert_iterator<_Container> _Self;
protected:

  _Container *container;
public:
  typedef _Container container_type;
  typedef output_iterator_tag iterator_category;
  explicit front_insert_iterator(_Container& __x) : container(&__x) {}

  _Self& operator=(const _Self& __other) {
    container = __other.container;
    return *this;
  }
  _Self& operator=(const typename _Container::value_type& __val) {
    container->push_front(__val);
    return *this;
  }
  _Self& operator*() { return *this; }
  _Self& operator++() { return *this; }
  _Self operator++(int) { return *this; }
};

template <class _Container>
inline front_insert_iterator<_Container> front_inserter(_Container& __x)
{ return front_insert_iterator<_Container>(__x); }

template <class _Container>
class insert_iterator
  : public iterator<output_iterator_tag, void, void, void, void> {
  typedef insert_iterator<_Container> _Self;
protected:

  _Container *container;
  typename _Container::iterator _M_iter;
public:
  typedef _Container container_type;
  typedef output_iterator_tag iterator_category;
  insert_iterator(_Container& __x, typename _Container::iterator __i)
    : container(&__x), _M_iter(__i) {}

  _Self& operator=(_Self const& __other) {
    container = __other.container;
    _M_iter = __other._M_iter;
    return *this;
  }
  _Self& operator=(const typename _Container::value_type& __val) {
    _M_iter = container->insert(_M_iter, __val);
    ++_M_iter;
    return *this;
  }
  _Self& operator*() { return *this; }
  _Self& operator++() { return *this; }
  _Self& operator++(int) { return *this; }
};

template <class _Container, class _Iterator>
inline insert_iterator<_Container>
inserter(_Container& __x, _Iterator __i) {
  typedef typename _Container::iterator __iter;
  return insert_iterator<_Container>(__x, __iter(__i));
}

}
# 398 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_algobase.c" 2
namespace std {


namespace priv {

template <class _BidirectionalIter1, class _BidirectionalIter2,
          class _BinaryPredicate>
_BidirectionalIter1
__find_end(_BidirectionalIter1 __first1, _BidirectionalIter1 __last1,
           _BidirectionalIter2 __first2, _BidirectionalIter2 __last2,
           const bidirectional_iterator_tag &, const bidirectional_iterator_tag &,
           _BinaryPredicate __comp) {
  typedef ::std::reverse_iterator<_BidirectionalIter1> _RevIter1;
  typedef ::std::reverse_iterator<_BidirectionalIter2> _RevIter2;

  _RevIter1 __rlast1(__first1);
  _RevIter2 __rlast2(__first2);
  _RevIter1 __rresult = ::std::search(_RevIter1(__last1), __rlast1,
                                          _RevIter2(__last2), __rlast2,
                                          __comp);

  if (__rresult == __rlast1)
    return __last1;
  else {
    _BidirectionalIter1 __result = __rresult.base();
    ::std::advance(__result, -::std::distance(__first2, __last2));
    return __result;
  }
}

}


template <class _ForwardIter1, class _ForwardIter2,
          class _BinaryPredicate>
_ForwardIter1
find_end(_ForwardIter1 __first1, _ForwardIter1 __last1,
         _ForwardIter2 __first2, _ForwardIter2 __last2,
         _BinaryPredicate __comp) {
 
 
  return ::std::priv:: __find_end(__first1, __last1, __first2, __last2,

                               typename ::std::iterator_traits< _ForwardIter1 >::iterator_category(),
                               typename ::std::iterator_traits< _ForwardIter2 >::iterator_category(),




                               __comp);
}

namespace priv {

template <class _ForwardIter, class _Tp, class _Compare1, class _Compare2, class _Distance>
_ForwardIter __lower_bound(_ForwardIter __first, _ForwardIter __last, const _Tp& __val,
                           _Compare1 __comp1, _Compare2 __comp2, _Distance*) {
  _Distance __len = ::std::distance(__first, __last);
  _Distance __half;
  _ForwardIter __middle;

  while (__len > 0) {
    __half = __len >> 1;
    __middle = __first;
    ::std::advance(__middle, __half);
    if (__comp1(*__middle, __val)) {
     
      __first = __middle;
      ++__first;
      __len = __len - __half - 1;
    }
    else
      __len = __half;
  }
  return __first;
}

}

}
# 721 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_algobase.h" 2
# 44 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_alloc.h" 2



# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_new.h" 1
# 47 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_new.h"
# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/../../gabi++/include/new" 1
# 33 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/../../gabi++/include/new"
# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/cstddef" 1
# 34 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/cstddef"
# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/../../gabi++/include/cstddef" 1
# 39 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/../../gabi++/include/cstddef"
# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stddef.h" 1
# 34 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stddef.h"
# 1 "/home/petya/download/android-ndk-r8b/toolchains/arm-linux-androideabi-4.4.3/prebuilt/linux-x86/bin/../lib/gcc/arm-linux-androideabi/4.4.3/include/../include/stddef.h" 1 3 4
# 35 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stddef.h" 2
# 40 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/../../gabi++/include/cstddef" 2

extern "C++" {

namespace std {
using ::ptrdiff_t;
using ::size_t;
}

}
# 35 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/cstddef" 2
# 34 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/../../gabi++/include/new" 2

namespace std
{
  struct nothrow_t {};
  extern const nothrow_t nothrow;
  typedef void (*new_handler)();
}


void* operator new(std::size_t size) throw( );
void* operator new(std::size_t size, const std::nothrow_t&) throw();
void* operator new[](std::size_t size) throw( );
void* operator new[](std::size_t size, const std::nothrow_t&) throw();

void operator delete[](void* ptr) throw();
void operator delete[](void* const, std::nothrow_t&) throw();
void operator delete(void* ptr) throw();
void operator delete(void*, const std::nothrow_t&) throw();

inline void* operator new(std::size_t, void* p) throw() { return p; }
inline void* operator new[](std::size_t, void* p) throw() { return p; }
inline void operator delete(void*, void*) throw() {}
inline void operator delete[](void*, void*) throw() {}
# 48 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_new.h" 2
# 114 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_new.h"
# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_cstdio.h" 1
# 34 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_cstdio.h"
# 1 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/stdio.h" 1
# 46 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/stdio.h"
# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stdarg.h" 1
# 47 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/stdio.h" 2



# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stddef.h" 1
# 34 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stddef.h"
# 1 "/home/petya/download/android-ndk-r8b/toolchains/arm-linux-androideabi-4.4.3/prebuilt/linux-x86/bin/../lib/gcc/arm-linux-androideabi/4.4.3/include/../include/stddef.h" 1 3 4
# 35 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stddef.h" 2
# 51 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/stdio.h" 2

# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stddef.h" 1
# 34 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stddef.h"
# 1 "/home/petya/download/android-ndk-r8b/toolchains/arm-linux-androideabi-4.4.3/prebuilt/linux-x86/bin/../lib/gcc/arm-linux-androideabi/4.4.3/include/../include/stddef.h" 1 3 4
# 35 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stddef.h" 2
# 53 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/stdio.h" 2
# 78 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/stdio.h"
typedef off_t fpos_t;
# 87 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/stdio.h"
struct __sbuf {
 unsigned char *_base;
 int _size;
};
# 119 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/stdio.h"
typedef struct __sFILE {
 unsigned char *_p;
 int _r;
 int _w;
 short _flags;
 short _file;
 struct __sbuf _bf;
 int _lbfsize;


 void *_cookie;
 int (*_close)(void *);
 int (*_read)(void *, char *, int);
 fpos_t (*_seek)(void *, fpos_t, int);
 int (*_write)(void *, const char *, int);


 struct __sbuf _ext;

 unsigned char *_up;
 int _ur;


 unsigned char _ubuf[3];
 unsigned char _nbuf[1];


 struct __sbuf _lb;


 int _blksize;
 fpos_t _offset;
} FILE;

extern "C" {
extern FILE __sF[];
}
# 223 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/stdio.h"
extern "C" {
void clearerr(FILE *);
int fclose(FILE *);
int feof(FILE *);
int ferror(FILE *);
int fflush(FILE *);
int fgetc(FILE *);
int fgetpos(FILE *, fpos_t *);
char *fgets(char *, int, FILE *);
FILE *fopen(const char *, const char *);
int fprintf(FILE *, const char *, ...);
int fputc(int, FILE *);
int fputs(const char *, FILE *);
size_t fread(void *, size_t, size_t, FILE *);
FILE *freopen(const char *, const char *, FILE *);
int fscanf(FILE *, const char *, ...);
int fseek(FILE *, long, int);
int fseeko(FILE *, off_t, int);
int fsetpos(FILE *, const fpos_t *);
long ftell(FILE *);
off_t ftello(FILE *);
size_t fwrite(const void *, size_t, size_t, FILE *);
int getc(FILE *);
int getchar(void);
char *gets(char *);



extern int sys_nerr;
extern char *sys_errlist[];

void perror(const char *);
int printf(const char *, ...);
int putc(int, FILE *);
int putchar(int);
int puts(const char *);
int remove(const char *);
int rename(const char *, const char *);
void rewind(FILE *);
int scanf(const char *, ...);
void setbuf(FILE *, char *);
int setvbuf(FILE *, char *, int, size_t);
int sprintf(char *, const char *, ...);
int sscanf(const char *, const char *, ...);
FILE *tmpfile(void);
char *tmpnam(char *);
int ungetc(int, FILE *);
int vfprintf(FILE *, const char *, __va_list);
int vprintf(const char *, __va_list);
int vsprintf(char *, const char *, __va_list);


int snprintf(char *, size_t, const char *, ...)
  __attribute__((__format__ (printf, 3, 4)))
  __attribute__((__nonnull__ (3)));
int vfscanf(FILE *, const char *, __va_list)
  __attribute__((__format__ (scanf, 2, 0)))
  __attribute__((__nonnull__ (2)));
int vscanf(const char *, __va_list)
  __attribute__((__format__ (scanf, 1, 0)))
  __attribute__((__nonnull__ (1)));
int vsnprintf(char *, size_t, const char *, __va_list)
  __attribute__((__format__ (printf, 3, 0)))
  __attribute__((__nonnull__ (3)));
int vsscanf(const char *, const char *, __va_list)
  __attribute__((__format__ (scanf, 2, 0)))
  __attribute__((__nonnull__ (2)));


}
# 302 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/stdio.h"
extern "C" {




FILE *fdopen(int, const char *);
int fileno(FILE *);


int pclose(FILE *);
FILE *popen(const char *, const char *);



void flockfile(FILE *);
int ftrylockfile(FILE *);
void funlockfile(FILE *);





int getc_unlocked(FILE *);
int getchar_unlocked(void);
int putc_unlocked(int, FILE *);
int putchar_unlocked(int);



char *tempnam(const char *, const char *);

}







extern "C" {
int asprintf(char **, const char *, ...)
  __attribute__((__format__ (printf, 2, 3)))
  __attribute__((__nonnull__ (2)));
char *fgetln(FILE *, size_t *);
int fpurge(FILE *);
int getw(FILE *);
int putw(int, FILE *);
void setbuffer(FILE *, char *, int);
int setlinebuf(FILE *);
int vasprintf(char **, const char *, __va_list)
  __attribute__((__format__ (printf, 2, 0)))
  __attribute__((__nonnull__ (2)));
}




extern "C" {
FILE *funopen(const void *,
  int (*)(void *, char *, int),
  int (*)(void *, const char *, int),
  fpos_t (*)(void *, fpos_t, int),
  int (*)(void *));
}







extern "C" {
int __srget(FILE *);
int __swbuf(int, FILE *);
}







static inline int __sputc(int _c, FILE *_p) {
 if (--_p->_w >= 0 || (_p->_w >= _p->_lbfsize && (char)_c != '\n'))
  return (*_p->_p++ = _c);
 else
  return (__swbuf(_c, _p));
}
# 35 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_cstdio.h" 2
# 52 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_cstdio.h"
namespace std {
using ::FILE;
using ::fpos_t;
using ::size_t;
# 66 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_cstdio.h"
using ::clearerr;
using ::fclose;
using ::feof;
using ::ferror;
using ::fflush;
using ::fgetc;
using ::fgetpos;
using ::fgets;
using ::fopen;
using ::fprintf;
using ::fputc;
using ::fputs;
using ::fread;

using ::freopen;

using ::fscanf;
using ::fseek;
using ::fsetpos;
using ::ftell;
using ::fwrite;



 using ::getc;
 using ::putc;

 using ::getchar;
 using ::putchar;


using ::gets;

using ::perror;

using ::printf;
using ::puts;

using ::remove;
using ::rename;
using ::rewind;
using ::setbuf;
using ::tmpfile;
using ::tmpnam;

using ::scanf;
using ::setvbuf;
using ::sprintf;
using ::sscanf;
using ::ungetc;
using ::vfprintf;
using ::vprintf;
using ::vsprintf;





}
# 115 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_new.h" 2
# 128 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_new.h"
namespace std {





inline void* __stl_new(size_t __n) { return ::operator new(__n); }
inline void __stl_delete(void* __p) { ::operator delete(__p); }

}
# 48 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_alloc.h" 2



# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_construct.h" 1
# 53 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_construct.h"
namespace std {

template <class _Tp>
inline void __destroy_aux(_Tp* __pointer, const __false_type& )
{ __pointer->~_Tp(); }

template <class _Tp>
inline void __destroy_aux(_Tp*, const __true_type& ) {}

template <class _Tp>
inline void _Destroy(_Tp* __pointer) {
  typedef typename __type_traits<_Tp>::has_trivial_destructor _Trivial_destructor;
  __destroy_aux(__pointer, _Trivial_destructor());



}

template <class _Tp>
inline void _Destroy_Moved(_Tp* __pointer) {

  typedef typename __move_traits<_Tp>::complete _Trivial_destructor;
  __destroy_aux(__pointer, _Trivial_destructor());






}






template <class _T1>
inline void _Construct_aux (_T1* __p, const __false_type&) {
  new(__p) _T1();
}

template <class _T1>
inline void _Construct_aux (_T1* __p, const __true_type&) {





  *__p = _T1();

}

template <class _T1>
inline void _Construct(_T1* __p) {






  _Construct_aux (__p, _Is_POD(__p)._Answer());

}

template <class _Tp>
inline void _Copy_Construct_aux(_Tp* __p, const _Tp& __val, const __false_type&) {
  new(__p) _Tp(__val);
}

template <class _Tp>
inline void _Copy_Construct_aux(_Tp* __p, const _Tp& __val, const __true_type&) {


  *__p = __val;
}

template <class _Tp>
inline void _Copy_Construct(_Tp* __p, const _Tp& __val) {



  _Copy_Construct_aux(__p, __val, _Is_POD(__p)._Answer());
}

template <class _T1, class _T2>
inline void _Param_Construct_aux(_T1* __p, const _T2& __val, const __false_type&) {
  new(__p) _T1(__val);
}

template <class _T1, class _T2>
inline void _Param_Construct_aux(_T1* __p, const _T2& __val, const __true_type&) {


  *__p = _T1(__val);
}

template <class _T1, class _T2>
inline void _Param_Construct(_T1* __p, const _T2& __val) {



  _Param_Construct_aux(__p, __val, _Is_POD(__p)._Answer());
}

template <class _T1, class _T2>
inline void _Move_Construct_Aux(_T1* __p, _T2& __val, const __false_type& ) {

  new(__p) _T1(::std::priv:: _AsMoveSource(__val));



}

template <class _T1, class _T2>
inline void _Move_Construct_Aux(_T1* __p, _T2& __val, const __true_type& ) {


  *__p = _T1(__val);
}

template <class _T1, class _T2>
inline void _Move_Construct(_T1* __p, _T2& __val) {



  _Move_Construct_Aux(__p, __val, _Is_POD(__p)._Answer());
}
# 188 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_construct.h"
template <class _ForwardIterator, class _Tp>
inline void
__destroy_range_aux(_ForwardIterator __first, _ForwardIterator __last, _Tp*, const __false_type& ) {
  for ( ; __first != __last; ++__first) {
    __destroy_aux(&(*__first), __false_type());



  }
}

template <class _ForwardIterator, class _Tp>







inline void
__destroy_range_aux(_ForwardIterator, _ForwardIterator, _Tp*, const __true_type& ) {}


template <class _ForwardIterator, class _Tp>
inline void
__destroy_range(_ForwardIterator __first, _ForwardIterator __last, _Tp *__ptr) {
  typedef typename __type_traits<_Tp>::has_trivial_destructor _Trivial_destructor;
  __destroy_range_aux(__first, __last, __ptr, _Trivial_destructor());
}

template <class _ForwardIterator>
inline void _Destroy_Range(_ForwardIterator __first, _ForwardIterator __last) {
  __destroy_range(__first, __last, (typename ::std::iterator_traits< _ForwardIterator >::value_type*)0);
}

inline void _Destroy_Range(char*, char*) {}

inline void _Destroy_Range(wchar_t*, wchar_t*) {}
inline void _Destroy_Range(const wchar_t*, const wchar_t*) {}



template <class _ForwardIterator, class _Tp>
inline void
__destroy_mv_srcs(_ForwardIterator __first, _ForwardIterator __last, _Tp *__ptr) {
  typedef typename __move_traits<_Tp>::complete _CompleteMove;
  __destroy_range_aux(__first, __last, __ptr, _CompleteMove());
}


template <class _ForwardIterator>
inline void _Destroy_Moved_Range(_ForwardIterator __first, _ForwardIterator __last)

{ __destroy_mv_srcs(__first, __last, (typename ::std::iterator_traits< _ForwardIterator >::value_type*)0); }
# 273 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_construct.h"
template <class _T1, class _T2>
inline void construct(_T1* __p, const _T2& __val) {_Param_Construct(__p, __val); }
template <class _T1>
inline void construct(_T1* __p) { ::std::_Construct(__p); }
template <class _Tp>
inline void destroy(_Tp* __pointer) { ::std::_Destroy(__pointer); }
template <class _ForwardIterator>
inline void destroy(_ForwardIterator __first, _ForwardIterator __last) { ::std::_Destroy_Range(__first, __last); }


}
# 52 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_alloc.h" 2


namespace std {





typedef void (* __oom_handler_type)();


class __attribute__((visibility("default"))) __malloc_alloc {
public:

  typedef char value_type;
  static void* allocate(size_t __n)

  ;
# 80 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_alloc.h"
  static void deallocate(void* __p, size_t ) { free((char*)__p); }

  static __oom_handler_type set_malloc_handler(__oom_handler_type __f);

};



class __attribute__((visibility("default"))) __new_alloc {
public:

  typedef char value_type;
  static void* allocate(size_t __n) { return __stl_new(__n); }
  static void deallocate(void* __p, size_t) { __stl_delete(__p); }
};
# 103 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_alloc.h"
template <class _Alloc>
class __debug_alloc : public _Alloc {
public:
  typedef _Alloc __allocator_type;
  typedef typename _Alloc::value_type value_type;
private:
  struct __alloc_header {
    size_t __magic: 16;
    size_t __type_size:16;
    unsigned long _M_size;
  };

  enum { __pad = 8, __magic = 0xdeba, __deleted_magic = 0xdebd,
         __shred_byte = 0xA3 };

  enum { __extra_before = 16, __extra_after = 8 };



  static size_t __extra_before_chunk() {
    return (long)__extra_before / sizeof(value_type) +
      (size_t)((long)__extra_before % sizeof(value_type) > 0);
  }
  static size_t __extra_after_chunk() {
    return (long)__extra_after / sizeof(value_type) +
      (size_t)((long)__extra_after % sizeof(value_type) > 0);
  }
public:
  __debug_alloc() {}
  ~__debug_alloc() {}
  static void* allocate(size_t);
  static void deallocate(void *, size_t);
};





enum { _MAX_BYTES = 32 * sizeof(void*) };






class __attribute__((visibility("default"))) __node_alloc {
  static void * _M_allocate(size_t& __n);

  static void _M_deallocate(void *__p, size_t __n);

public:

  typedef char value_type;

  static void* allocate(size_t& __n)
  { return (__n > (size_t)_MAX_BYTES) ? __stl_new(__n) : _M_allocate(__n); }

  static void deallocate(void *__p, size_t __n)
  { if (__n > (size_t)_MAX_BYTES) __stl_delete(__p); else _M_deallocate(__p, __n); }
};
# 196 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_alloc.h"
template <class _Tp, class _Allocator>
struct _Alloc_traits {
  typedef _Allocator _Orig;

  typedef typename _Allocator::template rebind<_Tp> _Rebind_type;
  typedef typename _Rebind_type::other allocator_type;
  static allocator_type create_allocator(const _Orig& __a)
  { return allocator_type(__a); }





};
# 224 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_alloc.h"
typedef __node_alloc __alloc_type;





typedef __alloc_type __sgi_alloc;



typedef __sgi_alloc __single_client_alloc;
typedef __sgi_alloc __multithreaded_alloc;
# 269 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_alloc.h"
template <class _Tp>
class allocator



                : public __stlport_class<allocator<_Tp> >
{
public:
  typedef _Tp value_type;
  typedef _Tp* pointer;
  typedef const _Tp* const_pointer;
  typedef _Tp& reference;
  typedef const _Tp& const_reference;
  typedef size_t size_type;
  typedef ptrdiff_t difference_type;

  template <class _Tp1> struct rebind {
    typedef allocator<_Tp1> other;
  };

  allocator() {}

  template <class _Tp1> allocator(const allocator<_Tp1>&) {}

  allocator(const allocator<_Tp>&) {}

  allocator(__move_source<allocator<_Tp> > src) {}

  ~allocator() {}
  pointer address(reference __x) const {return &__x;}
  const_pointer address(const_reference __x) const { return &__x; }

  _Tp* allocate(size_type __n, const void* = 0) {
    if (__n > max_size()) {
      puts("out of memory\n"); exit(1);
    }
    if (__n != 0) {
      size_type __buf_size = __n * sizeof(value_type);
      _Tp* __ret = reinterpret_cast<_Tp*>(__sgi_alloc::allocate(__buf_size));



      return __ret;
    }

    return 0;
  }

  void deallocate(pointer __p, size_type __n) {
   
    if (__p != 0) {



      __sgi_alloc::deallocate((void*)__p, __n * sizeof(value_type));
    }
  }


  void deallocate(pointer __p) const { if (__p != 0) __sgi_alloc::deallocate((void*)__p, sizeof(value_type)); }

  size_type max_size() const { return size_t(-1) / sizeof(value_type); }
  void construct(pointer __p, const_reference __val) { ::std::_Copy_Construct(__p, __val); }
  void destroy(pointer __p) { ::std::_Destroy(__p); }
# 341 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_alloc.h"
  _Tp* _M_allocate(size_type __n, size_type& __allocated_n) {
    if (__n > max_size()) {
      puts("out of memory\n"); exit(1);
    }

    if (__n != 0) {
      size_type __buf_size = __n * sizeof(value_type);
      _Tp* __ret = reinterpret_cast<_Tp*>(__sgi_alloc::allocate(__buf_size));



      __allocated_n = __buf_size / sizeof(value_type);
      return __ret;
    }

    return 0;
  }



};

template<>
class __attribute__((visibility("default"))) allocator<void> {
public:
  typedef size_t size_type;
  typedef ptrdiff_t difference_type;
  typedef void* pointer;
  typedef const void* const_pointer;

  typedef void value_type;


  template <class _Tp1> struct rebind {
    typedef allocator<_Tp1> other;
  };

};

template <class _T1, class _T2>
inline bool operator==(const allocator<_T1>&, const allocator<_T2>&)
{ return true; }
template <class _T1, class _T2>
inline bool operator!=(const allocator<_T1>&, const allocator<_T2>&)
{ return false; }
# 397 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_alloc.h"
namespace priv {

template <class _Tp>
struct __alloc_type_traits {

  typedef typename _IsSTLportClass<allocator<_Tp> >::_Ret _STLportAlloc;






  typedef _STLportAlloc has_trivial_default_constructor;
  typedef _STLportAlloc has_trivial_copy_constructor;
  typedef _STLportAlloc has_trivial_assignment_operator;
  typedef _STLportAlloc has_trivial_destructor;
  typedef _STLportAlloc is_POD_type;
};

}


template <class _Tp>
struct __type_traits<allocator<_Tp> > : ::std::priv:: __alloc_type_traits<_Tp> {};
# 451 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_alloc.h"
template <class _Tp, class _Alloc>
inline typename _Alloc_traits<_Tp, _Alloc>::allocator_type
__stl_alloc_create(const _Alloc& __a, const _Tp*) {
  typedef typename _Alloc::template rebind<_Tp>::other _Rebound_type;
  return _Rebound_type(__a);
}
# 468 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_alloc.h"
namespace priv {


template <class _Value, class _Tp, class _MaybeReboundAlloc>
class _STLP_alloc_proxy : public _MaybeReboundAlloc {
private:
  typedef _MaybeReboundAlloc _Base;
  typedef typename _Base::size_type size_type;
  typedef _STLP_alloc_proxy<_Value, _Tp, _MaybeReboundAlloc> _Self;
public:
  _Value _M_data;

  _STLP_alloc_proxy (const _MaybeReboundAlloc& __a, _Value __p) :
    _MaybeReboundAlloc(__a), _M_data(__p) {}


  _STLP_alloc_proxy (__move_source<_Self> src) :
    _Base(::std::priv:: _AsMoveSource(src.get()._M_base())),
    _M_data(::std::priv:: _AsMoveSource(src.get()._M_data)) {}

  _Base& _M_base()
  { return *this; }


private:




  void _M_swap_alloc(_Self&, const __true_type& )
  {}

  void _M_swap_alloc(_Self& __x, const __false_type& ) {
    _MaybeReboundAlloc &__base_this = *this;
    _MaybeReboundAlloc &__base_x = __x;
    ::std::swap(__base_this, __base_x);
  }

public:
  void _M_swap_alloc(_Self& __x) {

    typedef typename _IsStateless<_MaybeReboundAlloc>::_Ret _StatelessAlloc;



    _M_swap_alloc(__x, _StatelessAlloc());
  }





  void swap(_Self& __x) {
    _M_swap_alloc(__x);
    ::std::swap(_M_data, __x._M_data);
  }

  _Tp* allocate(size_type __n, size_type& __allocated_n) {

    typedef typename _IsSTLportClass<_MaybeReboundAlloc>::_Ret _STLportAlloc;



    return allocate(__n, __allocated_n, _STLportAlloc());
  }
# 547 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_alloc.h"
  _Tp* allocate(size_type __n)
  { return _Base::allocate(__n); }
private:
  _Tp* allocate(size_type __n, size_type& __allocated_n, const __true_type& )
  { return _Base::_M_allocate(__n, __allocated_n); }


  _Tp* allocate(size_type __n, size_type& __allocated_n, const __false_type& )
  { __allocated_n = __n; return allocate(__n); }
};
# 568 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_alloc.h"
}
}


# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_alloc.c" 1
# 35 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_alloc.c"
namespace std {

template <class _Alloc>
void * __debug_alloc<_Alloc>::allocate(size_t __n) {
  size_t __total_extra = __extra_before_chunk() + __extra_after_chunk();
  size_t __real_n = __n + __total_extra;
  if (__real_n < __n) {

    puts("out of memory\n"); exit(1);
  }
  __alloc_header *__result = (__alloc_header *)__allocator_type::allocate(__real_n);
  memset((char*)__result, __shred_byte, __real_n * sizeof(value_type));
  __result->__magic = __magic;
  __result->__type_size = sizeof(value_type);
  __result->_M_size = (unsigned long)__n;
  return ((char*)__result) + (long)__extra_before;
}

template <class _Alloc>
void
__debug_alloc<_Alloc>::deallocate(void *__p, size_t __n) {
  __alloc_header * __real_p = (__alloc_header*)((char *)__p -(long)__extra_before);

 
 
 
 

  unsigned char* __tmp;
  for (__tmp = (unsigned char*)(__real_p + 1); __tmp < (unsigned char*)__p; ++__tmp) {
   
  }

  size_t __real_n = __n + __extra_before_chunk() + __extra_after_chunk();

  for (__tmp= ((unsigned char*)__p) + __n * sizeof(value_type);
       __tmp < ((unsigned char*)__real_p) + __real_n ; ++__tmp) {
   
  }


  __real_p->__magic = __deleted_magic;
  memset((char*)__p, __shred_byte, __n * sizeof(value_type));
  __allocator_type::deallocate(__real_p, __real_n);
}

}
# 573 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_alloc.h" 2
# 24 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_string.h" 2



# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_string_fwd.h" 1
# 23 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_string_fwd.h"
# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_iosfwd.h" 1
# 22 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_iosfwd.h"
# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/char_traits.h" 1
# 48 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/char_traits.h"
# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_cwchar.h" 1
# 68 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_cwchar.h"
# 1 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/../include/wchar.h" 1
# 36 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/../include/wchar.h"
# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stddef.h" 1
# 34 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stddef.h"
# 1 "/home/petya/download/android-ndk-r8b/toolchains/arm-linux-androideabi-4.4.3/prebuilt/linux-x86/bin/../lib/gcc/arm-linux-androideabi/4.4.3/include/../include/stddef.h" 1 3 4
# 35 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stddef.h" 2
# 37 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/../include/wchar.h" 2

# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stdarg.h" 1
# 39 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/../include/wchar.h" 2



# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stddef.h" 1
# 34 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stddef.h"
# 1 "/home/petya/download/android-ndk-r8b/toolchains/arm-linux-androideabi-4.4.3/prebuilt/linux-x86/bin/../lib/gcc/arm-linux-androideabi/4.4.3/include/../include/stddef.h" 1 3 4
# 35 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stddef.h" 2
# 43 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/../include/wchar.h" 2
# 51 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/../include/wchar.h"
extern "C" {

typedef int wint_t;
typedef struct { int dummy; } mbstate_t;

typedef enum {
    WC_TYPE_INVALID = 0,
    WC_TYPE_ALNUM,
    WC_TYPE_ALPHA,
    WC_TYPE_BLANK,
    WC_TYPE_CNTRL,
    WC_TYPE_DIGIT,
    WC_TYPE_GRAPH,
    WC_TYPE_LOWER,
    WC_TYPE_PRINT,
    WC_TYPE_PUNCT,
    WC_TYPE_SPACE,
    WC_TYPE_UPPER,
    WC_TYPE_XDIGIT,
    WC_TYPE_MAX
} wctype_t;





extern wint_t btowc(int);
extern int fwprintf(FILE *, const wchar_t *, ...);
extern int fwscanf(FILE *, const wchar_t *, ...);
extern int iswalnum(wint_t);
extern int iswalpha(wint_t);
extern int iswcntrl(wint_t);
extern int iswdigit(wint_t);
extern int iswgraph(wint_t);
extern int iswlower(wint_t);
extern int iswprint(wint_t);
extern int iswpunct(wint_t);
extern int iswspace(wint_t);
extern int iswupper(wint_t);
extern int iswxdigit(wint_t);
extern int iswctype(wint_t, wctype_t);
extern wint_t fgetwc(FILE *);
extern wchar_t *fgetws(wchar_t *, int, FILE *);
extern wint_t fputwc(wchar_t, FILE *);
extern int fputws(const wchar_t *, FILE *);
extern int fwide(FILE *, int);
extern wint_t getwc(FILE *);
extern wint_t getwchar(void);
extern int mbsinit(const mbstate_t *);
extern size_t mbrlen(const char *, size_t, mbstate_t *);
extern size_t mbrtowc(wchar_t *, const char *, size_t, mbstate_t *);
extern size_t mbsrtowcs(wchar_t *, const char **, size_t, mbstate_t *);
extern wint_t putwc(wchar_t, FILE *);
extern wint_t putwchar(wchar_t);
extern int swprintf(wchar_t *, size_t, const wchar_t *, ...);
extern int swscanf(const wchar_t *, const wchar_t *, ...);
extern wint_t towlower(wint_t);
extern wint_t towupper(wint_t);
extern wint_t ungetwc(wint_t, FILE *);
extern int vfwprintf(FILE *, const wchar_t *, va_list);
extern int vwprintf(const wchar_t *, va_list);
extern int vswprintf(wchar_t *, size_t, const wchar_t *, va_list);
extern size_t wcrtomb(char *, wchar_t, mbstate_t *);
extern wchar_t *wcscat(wchar_t *, const wchar_t *);
extern wchar_t *wcschr(const wchar_t *, wchar_t);
extern int wcscmp(const wchar_t *, const wchar_t *);
extern int wcscoll(const wchar_t *, const wchar_t *);
extern wchar_t *wcscpy(wchar_t *, const wchar_t *);
extern size_t wcscspn(const wchar_t *, const wchar_t *);
extern size_t wcsftime(wchar_t *, size_t, const wchar_t *, const struct tm *);
extern size_t wcslen(const wchar_t *);
extern wchar_t *wcsncat(wchar_t *, const wchar_t *, size_t);
extern int wcsncmp(const wchar_t *, const wchar_t *, size_t);
extern wchar_t *wcsncpy(wchar_t *, const wchar_t *, size_t);
extern wchar_t *wcspbrk(const wchar_t *, const wchar_t *);
extern wchar_t *wcsrchr(const wchar_t *, wchar_t);
extern size_t wcsrtombs(char *, const wchar_t **, size_t, mbstate_t *);
extern size_t wcsspn(const wchar_t *, const wchar_t *);
extern wchar_t *wcsstr(const wchar_t *, const wchar_t *);
extern double wcstod(const wchar_t *, wchar_t **);
extern wchar_t *wcstok(wchar_t *, const wchar_t *, wchar_t **);
extern long int wcstol(const wchar_t *, wchar_t **, int);
extern unsigned long int wcstoul(const wchar_t *, wchar_t **, int);
extern wchar_t *wcswcs(const wchar_t *, const wchar_t *);
extern int wcswidth(const wchar_t *, size_t);
extern size_t wcsxfrm(wchar_t *, const wchar_t *, size_t);
extern int wctob(wint_t);
extern wctype_t wctype(const char *);
extern int wcwidth(wchar_t);
extern wchar_t *wmemchr(const wchar_t *, wchar_t, size_t);
extern int wmemcmp(const wchar_t *, const wchar_t *, size_t);
extern wchar_t *wmemcpy(wchar_t *, const wchar_t *, size_t);
extern wchar_t *wmemmove(wchar_t *, const wchar_t *, size_t);
extern wchar_t *wmemset(wchar_t *, wchar_t, size_t);
extern int wprintf(const wchar_t *, ...);
extern int wscanf(const wchar_t *, ...);


typedef void *wctrans_t;
extern wint_t towctrans(wint_t, wctrans_t);
extern wctrans_t wctrans (const char *);

}
# 69 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_cwchar.h" 2
# 113 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_cwchar.h"
# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_mbstate_t.h" 1
# 114 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_cwchar.h" 2
# 170 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_cwchar.h"
namespace std {







using ::wint_t;





using ::size_t;


using ::mbstate_t;
# 213 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_cwchar.h"
using ::fgetwc;
using ::fgetws;
using ::fputwc;
using ::fputws;





using ::fwide;

using ::fwprintf;
using ::fwscanf;
using ::getwchar;




using ::getwc;

using ::ungetwc;

using ::putwc;

using ::putwchar;
# 251 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_cwchar.h"
using ::swprintf;
using ::vswprintf;

using ::swscanf;
using ::vfwprintf;
using ::vwprintf;




using ::wcsftime;

using ::wcstok;




using ::wcscoll;
using ::wcsxfrm;

using ::wcscat;
using ::wcsrchr;
using ::wcscmp;

using ::wcscpy;
using ::wcscspn;

using ::wcslen;
using ::wcsncat;
using ::wcsncmp;
using ::wcsncpy;
using ::wcspbrk;
using ::wcschr;

using ::wcsspn;


using ::wcstod;
using ::wcstol;



using ::wcsstr;
using ::wmemchr;



using ::wctob;


using ::wmemcmp;
using ::wmemmove;

using ::wprintf;
using ::wscanf;
# 327 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_cwchar.h"
using ::wmemcpy;
using ::wmemset;




}
# 49 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/char_traits.h" 2


namespace std {

template <class _Tp> class allocator;
# 72 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/char_traits.h"
typedef off64_t streamoff;
# 81 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/char_traits.h"
typedef ptrdiff_t streamsize;





template <class _StateT> class fpos {
public:
  fpos(streamoff __pos) : _M_pos(__pos), _M_st(_StateT()) {}
  fpos() : _M_pos(0), _M_st(_StateT()) {}

  operator streamoff() const { return _M_pos; }

  bool operator==(const fpos& __y) const
  { return _M_pos == __y._M_pos; }
  bool operator!=(const fpos& __y) const
  { return _M_pos != __y._M_pos; }

  fpos& operator+=(streamoff __off) {
    _M_pos += __off;
    return *this;
  }
  fpos& operator-=(streamoff __off) {
    _M_pos -= __off;
    return *this;
  }

  fpos operator+(streamoff __off) {
    fpos __tmp(*this);
    __tmp += __off;
    return __tmp;
  }
  fpos operator-(streamoff __off) {
    fpos __tmp(*this);
    __tmp -= __off;
    return __tmp;
  }

public:
  _StateT state() const { return _M_st; }
  void state(_StateT __st) { _M_st = __st; }
private:
  streamoff _M_pos;
  _StateT _M_st;
};

typedef fpos<mbstate_t> streampos;
typedef fpos<mbstate_t> wstreampos;


template <class _CharT, class _IntT>
class __char_traits_base {
public:
  typedef _CharT char_type;
  typedef _IntT int_type;
  typedef streamoff off_type;
  typedef streampos pos_type;
  typedef mbstate_t state_type;

  static void assign(char_type& __c1, const char_type& __c2) { __c1 = __c2; }
  static bool eq(const char_type& __c1, const char_type& __c2)
  { return __c1 == __c2; }
  static bool lt(const char_type& __c1, const char_type& __c2)
  { return __c1 < __c2; }

  static int compare(const char_type* __s1, const char_type* __s2, size_t __n) {
    for (size_t __i = 0; __i < __n; ++__i)
      if (!eq(__s1[__i], __s2[__i]))
        return __s1[__i] < __s2[__i] ? -1 : 1;
    return 0;
  }

  static size_t length(const char_type* __s) {
    const char_type _NullChar = char_type();
    size_t __i(0);
    for (; !eq(__s[__i], _NullChar); ++__i) {}
    return __i;
  }

  static const char_type* find(const char_type* __s, size_t __n, const char_type& __c) {
    for ( ; __n > 0 ; ++__s, --__n)
      if (eq(*__s, __c))
        return __s;
    return 0;
  }

  static char_type* move(char_type* __s1, const char_type* __s2, size_t _Sz)
  { return (_Sz == 0 ? __s1 : (char_type*)memmove(__s1, __s2, _Sz * sizeof(char_type))); }

  static char_type* copy(char_type* __s1, const char_type* __s2, size_t __n) {
    return (__n == 0 ? __s1 :
      (char_type*)memcpy(__s1, __s2, __n * sizeof(char_type)));
  }

  static char_type* assign(char_type* __s, size_t __n, char_type __c) {
    for (size_t __i = 0; __i < __n; ++__i)
      __s[__i] = __c;
    return __s;
  }

  static int_type not_eof(const int_type& __c)
  { return !eq_int_type(__c, eof()) ? __c : static_cast<int_type>(0); }

  static char_type to_char_type(const int_type& __c)
  { return (char_type)__c; }

  static int_type to_int_type(const char_type& __c)
  { return (int_type)__c; }

  static bool eq_int_type(const int_type& __c1, const int_type& __c2)
  { return __c1 == __c2; }

  static int_type eof()
  { return (int_type)-1; }
};






template <class _CharT>
class char_traits
  : public __char_traits_base<_CharT, _CharT> {};



template<>
class __attribute__((visibility("default"))) char_traits<char>
  : public __char_traits_base<char, int>,
    public __stlport_class<char_traits<char> > {
public:
  typedef char char_type;
  typedef int int_type;
  typedef streamoff off_type;
  typedef streampos pos_type;
  typedef mbstate_t state_type;

  static char to_char_type(const int& __c)
  { return (char)(unsigned char)__c; }

  static int to_int_type(const char& __c)
  { return (unsigned char)__c; }

  static int compare(const char* __s1, const char* __s2, size_t __n)
  { return memcmp(__s1, __s2, __n); }

  static size_t length(const char* __s)
  { return strlen(__s); }

  static void assign(char& __c1, const char& __c2)
  { __c1 = __c2; }

  static char* assign(char* __s, size_t __n, char __c) {
    memset(__s, __c, __n);
    return __s;
  }
};



template<>
class __attribute__((visibility("default"))) char_traits<wchar_t>
  : public __char_traits_base<wchar_t, wint_t> {

public:

  static wchar_t* move(wchar_t* __dest, const wchar_t* __src, size_t __n)
  { return wmemmove(__dest, __src, __n); }


  static wchar_t* copy(wchar_t* __dest, const wchar_t* __src, size_t __n)
  { return wmemcpy(__dest, __src, __n); }


  static int compare(const wchar_t* __s1, const wchar_t* __s2, size_t __n)
  { return wmemcmp(__s1, __s2, __n); }


  static wchar_t* assign(wchar_t* __s, size_t __n, wchar_t __c)
  { return wmemset(__s, __c, __n); }

  static size_t length(const wchar_t* __s)
  { return wcslen(__s); }

  static void assign(wchar_t& __c1, const wchar_t& __c2)
  { __c1 = __c2; }

};


}
# 23 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_iosfwd.h" 2


namespace std {

class ios_base;

template <class _CharT, class _Traits = char_traits<_CharT> >
class basic_ios;

template <class _CharT, class _Traits = char_traits<_CharT> >
class basic_streambuf;

template <class _CharT, class _Traits = char_traits<_CharT> >
class basic_istream;

template <class _CharT, class _Traits = char_traits<_CharT> >
class basic_ostream;

template <class _CharT, class _Traits = char_traits<_CharT> >
class basic_iostream;

template <class _CharT, class _Traits = char_traits<_CharT>,
          class _Allocator = allocator<_CharT> >
class basic_stringbuf;

template <class _CharT, class _Traits = char_traits<_CharT>,
          class _Allocator = allocator<_CharT> >
class basic_istringstream;

template <class _CharT, class _Traits = char_traits<_CharT>,
          class _Allocator = allocator<_CharT> >
class basic_ostringstream;

template <class _CharT, class _Traits = char_traits<_CharT>,
          class _Allocator = allocator<_CharT> >
class basic_stringstream;

template <class _CharT, class _Traits = char_traits<_CharT> >
class basic_filebuf;

template <class _CharT, class _Traits = char_traits<_CharT> >
class basic_ifstream;

template <class _CharT, class _Traits = char_traits<_CharT> >
class basic_ofstream;

template <class _CharT, class _Traits = char_traits<_CharT> >
class basic_fstream;

template <class _CharT, class _Traits = char_traits<_CharT> >
class istreambuf_iterator;

template <class _CharT, class _Traits = char_traits<_CharT> >
class ostreambuf_iterator;

typedef basic_ios<char, char_traits<char> > ios;


typedef basic_ios<wchar_t, char_traits<wchar_t> > wios;



class locale;
template <class _Facet>
# 95 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_iosfwd.h"
inline const _Facet& use_facet(const locale&);


template <class _CharT> class ctype;
template <class _CharT> class ctype_byname;
template <class _CharT> class collate;
template <class _CharT> class collate_byname;

template<> class ctype<char>;
template<> class ctype_byname<char>;
template<> class collate<char>;
template<> class collate_byname<char>;


template<> class ctype<wchar_t>;
template<> class ctype_byname<wchar_t>;
template<> class collate<wchar_t>;
template<> class collate_byname<wchar_t>;







typedef basic_istream<char, char_traits<char> > istream;
typedef basic_ostream<char, char_traits<char> > ostream;
typedef basic_iostream<char, char_traits<char> > iostream;
typedef basic_streambuf<char,char_traits<char> > streambuf;

typedef basic_stringbuf<char, char_traits<char>, allocator<char> > stringbuf;
typedef basic_istringstream<char, char_traits<char>, allocator<char> > istringstream;
typedef basic_ostringstream<char, char_traits<char>, allocator<char> > ostringstream;
typedef basic_stringstream<char, char_traits<char>, allocator<char> > stringstream;

typedef basic_filebuf<char, char_traits<char> > filebuf;
typedef basic_ifstream<char, char_traits<char> > ifstream;
typedef basic_ofstream<char, char_traits<char> > ofstream;
typedef basic_fstream<char, char_traits<char> > fstream;



typedef basic_streambuf<wchar_t, char_traits<wchar_t> > wstreambuf;
typedef basic_istream<wchar_t, char_traits<wchar_t> > wistream;
typedef basic_ostream<wchar_t, char_traits<wchar_t> > wostream;
typedef basic_iostream<wchar_t, char_traits<wchar_t> > wiostream;

typedef basic_stringbuf<wchar_t, char_traits<wchar_t>, allocator<wchar_t> > wstringbuf;
typedef basic_istringstream<wchar_t, char_traits<wchar_t>, allocator<wchar_t> > wistringstream;
typedef basic_ostringstream<wchar_t, char_traits<wchar_t>, allocator<wchar_t> > wostringstream;
typedef basic_stringstream<wchar_t, char_traits<wchar_t>, allocator<wchar_t> > wstringstream;

typedef basic_filebuf<wchar_t, char_traits<wchar_t> > wfilebuf;
typedef basic_ifstream<wchar_t, char_traits<wchar_t> > wifstream;
typedef basic_ofstream<wchar_t, char_traits<wchar_t> > wofstream;
typedef basic_fstream<wchar_t, char_traits<wchar_t> > wfstream;


}
# 24 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_string_fwd.h" 2


namespace std {


template <class _CharT,
          class _Traits = char_traits<_CharT>,
          class _Alloc = allocator<_CharT> >
class basic_string;







typedef basic_string<char, char_traits<char>, allocator<char> > string;


typedef basic_string<wchar_t, char_traits<wchar_t>, allocator<wchar_t> > wstring;


namespace priv {



const char* __get_c_string(const string& __str);

}

}
# 28 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_string.h" 2
# 43 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_string.h"
# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_uninitialized.h" 1
# 45 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_uninitialized.h"
namespace std {

namespace priv {



template <class _InputIter, class _OutputIter, class _Distance>
inline _OutputIter __ucopy(_InputIter __first, _InputIter __last,
                           _OutputIter __result, _Distance*) {
  _OutputIter __cur = __result;
  {
    for ( ; __first != __last; ++__first, ++__cur)
      _Param_Construct(&*__cur, *__first);
    return __cur;
  }
 
 
}

template <class _InputIter, class _OutputIter, class _Distance>
inline _OutputIter __ucopy(_InputIter __first, _InputIter __last,
                           _OutputIter __result, const input_iterator_tag &, _Distance* __d)
{ return __ucopy(__first, __last, __result, __d); }
# 81 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_uninitialized.h"
template <class _RandomAccessIter, class _OutputIter, class _Distance>
inline _OutputIter __ucopy(_RandomAccessIter __first, _RandomAccessIter __last,
                           _OutputIter __result, const random_access_iterator_tag &, _Distance*) {
  _OutputIter __cur = __result;
  {
    for (_Distance __n = __last - __first; __n > 0; --__n) {
      _Param_Construct(&*__cur, *__first);
      ++__first;
      ++__cur;
    }
    return __cur;
  }
 
 
}


template <class _RandomAccessIter, class _OutputIter>
inline _OutputIter __ucopy(_RandomAccessIter __first, _RandomAccessIter __last, _OutputIter __result)
{ return __ucopy(__first, __last, __result, random_access_iterator_tag(), (ptrdiff_t*)0); }

inline void*
__ucopy_trivial(const void* __first, const void* __last, void* __result) {

  return (__last == __first) ? __result :
    ((char*)memcpy(__result, __first, ((const char*)__last - (const char*)__first))) +
    ((const char*)__last - (const char*)__first);
}

template <class _InputIter, class _OutputIter>
inline _OutputIter __ucopy_ptrs(_InputIter __first, _InputIter __last, _OutputIter __result,
                                const __false_type& )
{ return __ucopy(__first, __last, __result, random_access_iterator_tag(), (ptrdiff_t*)0); }

template <class _InputIter, class _OutputIter>
inline _OutputIter __ucopy_ptrs(_InputIter __first, _InputIter __last, _OutputIter __result,
                                const __true_type& ) {


  return (_OutputIter)__ucopy_trivial(__first, __last, __result);
}

template <class _InputIter, class _OutputIter>
inline _OutputIter __ucopy_aux(_InputIter __first, _InputIter __last, _OutputIter __result,
                               const __true_type& ) {
  return __ucopy_ptrs(__first, __last, __result,
                      _UseTrivialUCopy((typename ::std::iterator_traits< _InputIter >::value_type*)0,
                                       (typename ::std::iterator_traits< _OutputIter >::value_type*)0)._Answer());
}

template <class _InputIter, class _OutputIter>
inline _OutputIter __ucopy_aux(_InputIter __first, _InputIter __last, _OutputIter __result,
                               const __false_type& ) {
  return __ucopy(__first, __last, __result,
                 typename ::std::iterator_traits< _InputIter >::iterator_category(),
                 (typename ::std::iterator_traits< _InputIter >::difference_type*)0);
}

}

template <class _InputIter, class _ForwardIter>
inline _ForwardIter
uninitialized_copy(_InputIter __first, _InputIter __last, _ForwardIter __result)
{ return ::std::priv:: __ucopy_aux(__first, __last, __result, _BothPtrType< _InputIter, _ForwardIter>::_Answer()); }

inline char*
uninitialized_copy(const char* __first, const char* __last, char* __result)
{ return (char*)::std::priv:: __ucopy_trivial(__first, __last, __result); }


inline wchar_t*
uninitialized_copy(const wchar_t* __first, const wchar_t* __last, wchar_t* __result)
{ return (wchar_t*)::std::priv:: __ucopy_trivial (__first, __last, __result); }



namespace priv {

template <class _InputIter, class _Size, class _ForwardIter>
inline
pair<_InputIter, _ForwardIter>
__ucopy_n(_InputIter __first, _Size __count, _ForwardIter __result,
          const input_iterator_tag &) {
  _ForwardIter __cur = __result;
  {
    for ( ; __count > 0 ; --__count, ++__first, ++__cur)
      _Param_Construct(&*__cur, *__first);
    return pair<_InputIter, _ForwardIter>(__first, __cur);
  }
 
 
}
# 190 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_uninitialized.h"
template <class _RandomAccessIter, class _Size, class _ForwardIter>
inline pair<_RandomAccessIter, _ForwardIter>
__ucopy_n(_RandomAccessIter __first, _Size __count, _ForwardIter __result,
                       const random_access_iterator_tag &) {
  _RandomAccessIter __last = __first + __count;
  return pair<_RandomAccessIter, _ForwardIter>(__last, uninitialized_copy(__first, __last, __result));
}


template <class _InputIter, class _Size, class _ForwardIter>
inline pair<_InputIter, _ForwardIter>
__ucopy_n(_InputIter __first, _Size __count, _ForwardIter __result)
{ return ::std::priv:: __ucopy_n(__first, __count, __result, typename ::std::iterator_traits< _InputIter >::iterator_category()); }



}

template <class _InputIter, class _Size, class _ForwardIter>
inline pair<_InputIter, _ForwardIter>
uninitialized_copy_n(_InputIter __first, _Size __count, _ForwardIter __result)
{ return ::std::priv:: __ucopy_n(__first, __count, __result); }

namespace priv {



template <class _ForwardIter, class _Tp, class _Distance>
inline void __ufill(_ForwardIter __first, _ForwardIter __last, const _Tp& __x, _Distance*) {
  _ForwardIter __cur = __first;
  {
    for ( ; __cur != __last; ++__cur)
      _Param_Construct(&*__cur, __x);
  }
 
}

template <class _ForwardIter, class _Tp, class _Distance>
inline void __ufill(_ForwardIter __first, _ForwardIter __last,
                    const _Tp& __x, const input_iterator_tag &, _Distance* __d)
{ __ufill(__first, __last, __x, __d); }
# 244 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_uninitialized.h"
template <class _ForwardIter, class _Tp, class _Distance>
inline void __ufill(_ForwardIter __first, _ForwardIter __last,
                    const _Tp& __x, const random_access_iterator_tag &, _Distance*) {
  _ForwardIter __cur = __first;
  {
    for (_Distance __n = __last - __first; __n > 0; --__n, ++__cur)
      _Param_Construct(&*__cur, __x);
  }
 
}

}

template <class _ForwardIter, class _Tp>
inline void uninitialized_fill(_ForwardIter __first, _ForwardIter __last, const _Tp& __x) {
  ::std::priv:: __ufill(__first, __last, __x,
                     typename ::std::iterator_traits< _ForwardIter >::iterator_category(),
                     (typename ::std::iterator_traits< _ForwardIter >::difference_type*)0);
}


inline void uninitialized_fill(unsigned char* __first, unsigned char* __last,
                               const unsigned char& __val) {
  unsigned char __tmp = __val;
  memset(__first, __tmp, __last - __first);
}

inline void uninitialized_fill(signed char* __first, signed char* __last,
                               const signed char& __val) {
  signed char __tmp = __val;
  memset(__first, static_cast<unsigned char>(__tmp), __last - __first);
}

inline void uninitialized_fill(char* __first, char* __last, const char& __val) {
  char __tmp = __val;
  memset(__first, static_cast<unsigned char>(__tmp), __last - __first);
}

namespace priv {

template <class _ForwardIter, class _Size, class _Tp>
inline _ForwardIter __ufill_n(_ForwardIter __first, _Size __n, const _Tp& __x) {
  _ForwardIter __cur = __first;
  {
    for ( ; __n > 0; --__n, ++__cur)
      _Param_Construct(&*__cur, __x);
  }
 
  return __cur;
}

template <class _ForwardIter, class _Size, class _Tp>
inline _ForwardIter __ufill_n(_ForwardIter __first, _Size __n, const _Tp& __x,
                              const input_iterator_tag &)
{ return __ufill_n(__first, __n, __x); }
# 312 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_uninitialized.h"
template <class _ForwardIter, class _Size, class _Tp>
inline _ForwardIter __uninitialized_fill_n(_ForwardIter __first, _Size __n, const _Tp& __x) {
  _ForwardIter __last = __first + __n;
  __ufill(__first, __last, __x, random_access_iterator_tag(), (ptrdiff_t*)0);
  return __last;
}

template <class _ForwardIter, class _Size, class _Tp>
inline _ForwardIter __ufill_n(_ForwardIter __first, _Size __n, const _Tp& __x,
                              const random_access_iterator_tag &)
{ return __uninitialized_fill_n(__first, __n, __x); }





template <class _ForwardIter, class _Size, class _Tp>
inline _ForwardIter __uinit_aux_aux(_ForwardIter __first, _Size __n, const _Tp& __val,
                                    const __false_type& )
{ return __uninitialized_fill_n(__first, __n, __val); }

template <class _ForwardIter, class _Size, class _Tp>
inline _ForwardIter __uinit_aux_aux(_ForwardIter __first, _Size __n, const _Tp& ,
                                    const __true_type& ) {
  memset((unsigned char*)__first, 0, __n * sizeof(_Tp));
  return __first + __n;
}

template <class _ForwardIter, class _Size, class _Tp>
inline _ForwardIter __uinit_aux(_ForwardIter __first, _Size __n, const _Tp&,
                                const __true_type& )
{ return __first + __n; }

template <class _ForwardIter, class _Size, class _Tp>
inline _ForwardIter __uinit_aux(_ForwardIter __first, _Size __n, const _Tp& __val,
                                const __false_type& )
{ return __uinit_aux_aux(__first, __n, __val, _HasDefaultZeroValue(__first)._Answer()); }

template <class _ForwardIter, class _Size, class _Tp>
inline _ForwardIter __uninitialized_init(_ForwardIter __first, _Size __n, const _Tp& __val)
{ return __uinit_aux(__first, __n, __val, _UseTrivialInit(__first)._Answer()); }

}

template <class _ForwardIter, class _Size, class _Tp>
inline void
uninitialized_fill_n(_ForwardIter __first, _Size __n, const _Tp& __x)
{ ::std::priv:: __ufill_n(__first, __n, __x, typename ::std::iterator_traits< _ForwardIter >::iterator_category()); }
# 369 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_uninitialized.h"
namespace priv {

template <class _InputIter1, class _InputIter2, class _ForwardIter>
inline _ForwardIter
__uninitialized_copy_copy(_InputIter1 __first1, _InputIter1 __last1,
                          _InputIter2 __first2, _InputIter2 __last2,
                          _ForwardIter __result) {
  _ForwardIter __new_result = uninitialized_copy(__first1, __last1, __result);
  {
    return uninitialized_copy(__first2, __last2, __new_result);
  }
 
 
}




template <class _ForwardIter, class _Tp, class _InputIter>
inline _ForwardIter
__uninitialized_fill_copy(_ForwardIter __result, _ForwardIter __mid, const _Tp& __x,
                          _InputIter __first, _InputIter __last) {
  uninitialized_fill(__result, __mid, __x);
  {
    return uninitialized_copy(__first, __last, __mid);
  }
 
 
}




template <class _Iter, class _Tp>
inline void
__uninitialized_copy_fill(_Iter __first1, _Iter __last1, _Iter __first2, _Iter __last2,
                          const _Tp& __x) {
  _Iter __mid2 = uninitialized_copy(__first1, __last1, __first2);
  {
    uninitialized_fill(__mid2, __last2, __x);
  }
 
}




template <class _InputIter, class _ForwardIter, class _TrivialUCpy>
inline _ForwardIter
__uninitialized_move(_InputIter __first, _InputIter __last, _ForwardIter __result,
                     _TrivialUCpy __trivial_ucpy, const __false_type& )
{ return __ucopy_ptrs(__first, __last, __result, __trivial_ucpy); }

template <class _InputIter, class _ForwardIter, class _TrivialUCpy>
inline
_ForwardIter
__uninitialized_move(_InputIter __first, _InputIter __last, _ForwardIter __result,
                     _TrivialUCpy , const __true_type& ) {

  for (ptrdiff_t __n = __last - __first ; __n > 0; --__n) {
    _Move_Construct(&*__result, *__first);
    ++__first; ++__result;
  }
  return __result;
}

}

}
# 44 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_string.h" 2
# 78 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_string.h"
# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_string_base.h" 1
# 36 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_string_base.h"
namespace std {

namespace priv {

template <class _Tp, class _Alloc>
class _String_base {
    typedef _String_base<_Tp, _Alloc> _Self;
protected:
 
public:

  enum {_DEFAULT_SIZE = 4 * sizeof( void * )};

  typedef _Alloc allocator_type;
  typedef _STLP_alloc_proxy<_Tp*, _Tp, allocator_type> _AllocProxy;
  typedef size_t size_type;
private:

  union _Buffers {
    _Tp* _M_end_of_storage;
    _Tp _M_static_buf[_DEFAULT_SIZE];
  } _M_buffers;



protected:

  bool _M_using_static_buf() const
  { return (_M_start_of_storage._M_data == _M_buffers._M_static_buf); }
  _Tp const* _M_Start() const { return _M_start_of_storage._M_data; }
  _Tp* _M_Start() { return _M_start_of_storage._M_data; }
  _Tp const* _M_End() const
  { return _M_using_static_buf() ? _M_buffers._M_static_buf + _DEFAULT_SIZE : _M_buffers._M_end_of_storage; }
  _Tp* _M_End()
  { return _M_using_static_buf() ? _M_buffers._M_static_buf + _DEFAULT_SIZE : _M_buffers._M_end_of_storage; }
  size_type _M_capacity() const
  { return _M_using_static_buf() ? _DEFAULT_SIZE : _M_buffers._M_end_of_storage - _M_start_of_storage._M_data; }
  size_type _M_rest() const
  { return _M_using_static_buf() ? _DEFAULT_SIZE - (_M_finish - _M_buffers._M_static_buf) : _M_buffers._M_end_of_storage - _M_finish; }
# 86 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_string_base.h"
  _Tp* _M_finish;
  _AllocProxy _M_start_of_storage;

  _Tp const* _M_Finish() const {return _M_finish;}
  _Tp* _M_Finish() {return _M_finish;}


  void _M_allocate_block(size_t __n = _DEFAULT_SIZE);
  void _M_deallocate_block() {

    if (!_M_using_static_buf() && (_M_start_of_storage._M_data != 0))
      _M_start_of_storage.deallocate(_M_start_of_storage._M_data, _M_buffers._M_end_of_storage - _M_start_of_storage._M_data);




  }

  size_t max_size() const {
    const size_type __string_max_size = size_type(-1) / sizeof(_Tp);
    typename allocator_type::size_type __alloc_max_size = _M_start_of_storage.max_size();
    return (min)(__alloc_max_size, __string_max_size) - 1;
  }

  _String_base(const allocator_type& __a)

    : _M_finish(_M_buffers._M_static_buf), _M_start_of_storage(__a, _M_buffers._M_static_buf)



    {}

  _String_base(const allocator_type& __a, size_t __n)

    : _M_finish(_M_buffers._M_static_buf), _M_start_of_storage(__a, _M_buffers._M_static_buf) {



      _M_allocate_block(__n);
    }


  void _M_move_src (_Self &src) {
    if (src._M_using_static_buf()) {
      _M_buffers = src._M_buffers;
      _M_finish = _M_buffers._M_static_buf + (src._M_finish - src._M_start_of_storage._M_data);
      _M_start_of_storage._M_data = _M_buffers._M_static_buf;
    }
    else {
      _M_start_of_storage._M_data = src._M_start_of_storage._M_data;
      _M_finish = src._M_finish;
      _M_buffers._M_end_of_storage = src._M_buffers._M_end_of_storage;
      src._M_start_of_storage._M_data = 0;
    }
  }



  _String_base(__move_source<_Self> src)

    : _M_start_of_storage(__move_source<_AllocProxy>(src.get()._M_start_of_storage)) {
      _M_move_src(src.get());





    }


  ~_String_base() { _M_deallocate_block(); }

  void _M_reset(_Tp *__start, _Tp *__finish, _Tp *__end_of_storage) {

    _M_buffers._M_end_of_storage = __end_of_storage;



    _M_finish = __finish;
    _M_start_of_storage._M_data = __start;
  }

  void _M_swap(_Self &__s) {

    if (_M_using_static_buf()) {
      if (__s._M_using_static_buf()) {
        ::std::swap(_M_buffers, __s._M_buffers);
        _Tp *__tmp = _M_finish;
        _M_finish = _M_start_of_storage._M_data + (__s._M_finish - __s._M_start_of_storage._M_data);
        __s._M_finish = __s._M_buffers._M_static_buf + (__tmp - _M_start_of_storage._M_data);

        _M_start_of_storage.swap(__s._M_start_of_storage);
        _M_start_of_storage._M_data = _M_buffers._M_static_buf;
        __s._M_start_of_storage._M_data = __s._M_buffers._M_static_buf;
      } else {
        __s._M_swap(*this);
        return;
      }
    }
    else if (__s._M_using_static_buf()) {
      _Tp *__tmp = _M_start_of_storage._M_data;
      _Tp *__tmp_finish = _M_finish;
      _Tp *__tmp_end_data = _M_buffers._M_end_of_storage;
      _M_buffers = __s._M_buffers;

      _M_start_of_storage.swap(__s._M_start_of_storage);
      _M_start_of_storage._M_data = _M_buffers._M_static_buf;
      _M_finish = _M_buffers._M_static_buf + (__s._M_finish - __s._M_buffers._M_static_buf);
      __s._M_buffers._M_end_of_storage = __tmp_end_data;
      __s._M_start_of_storage._M_data = __tmp;
      __s._M_finish = __tmp_finish;
    }
    else {
      ::std::swap(_M_buffers._M_end_of_storage, __s._M_buffers._M_end_of_storage);
      _M_start_of_storage.swap(__s._M_start_of_storage);
      ::std::swap(_M_finish, __s._M_finish);
    }





  }

  void _M_throw_length_error() const;
  void _M_throw_out_of_range() const;
};
# 221 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_string_base.h"
}

}
# 79 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_string.h" 2

namespace std {
# 98 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_string.h"
namespace priv {
struct _String_reserve_t {};
}
# 120 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_string.h"
template <class _CharT, class _Traits, class _Alloc>
class basic_string : private ::std::priv:: _String_base<_CharT,_Alloc>



{
private:
  typedef ::std::priv:: _String_base<_CharT,_Alloc> _Base;
  typedef basic_string<_CharT, _Traits, _Alloc> _Self;

public:
  typedef _CharT value_type;
  typedef _Traits traits_type;

  typedef value_type* pointer;
  typedef const value_type* const_pointer;
  typedef value_type& reference;
  typedef const value_type& const_reference;
  typedef typename _Base::size_type size_type;
  typedef ptrdiff_t difference_type;
  typedef random_access_iterator_tag _Iterator_category;

  typedef const value_type* const_iterator;
  typedef value_type* iterator;

  typedef ::std::reverse_iterator<const_iterator> const_reverse_iterator; typedef ::std::reverse_iterator<iterator> reverse_iterator;

# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_string_npos.h" 1
# 26 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_string_npos.h"
  static const size_t npos = ~(size_t)0;
# 148 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_string.h" 2

  typedef ::std::priv:: _String_reserve_t _Reserve_t;

public:
  typedef typename _Base::allocator_type allocator_type;

  allocator_type get_allocator() const
  { return (const allocator_type&)this->_M_start_of_storage; }


  explicit basic_string(const allocator_type& __a = allocator_type())






      : ::std::priv:: _String_base<_CharT,_Alloc>(__a, _Base::_DEFAULT_SIZE)
  { _M_terminate_string(); }


  basic_string(_Reserve_t, size_t __n,
               const allocator_type& __a = allocator_type())






    : ::std::priv:: _String_base<_CharT,_Alloc>(__a, __n + 1)
  { _M_terminate_string(); }

  basic_string(const _Self&);


  basic_string(const _Self& __s, size_type __pos, size_type __n = npos,
               const allocator_type& __a = allocator_type())
# 204 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_string.h"
    : ::std::priv:: _String_base<_CharT,_Alloc>(__a) {
    if (__pos > __s.size())
      this->_M_throw_out_of_range();
    else
      _M_range_initialize(__s._M_Start() + __pos,
                          __s._M_Start() + __pos + (min) (__n, __s.size() - __pos));
  }


  basic_string(const _CharT* __s, size_type __n,
               const allocator_type& __a = allocator_type())
# 223 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_string.h"
    : ::std::priv:: _String_base<_CharT,_Alloc>(__a) {
     
      _M_range_initialize(__s, __s + __n);
    }


  basic_string(const _CharT* __s,
               const allocator_type& __a = allocator_type());






  basic_string(size_type __n, _CharT __c,
               const allocator_type& __a = allocator_type())
# 247 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_string.h"
    : ::std::priv:: _String_base<_CharT,_Alloc>(__a, __n + 1) {
    this->_M_finish = ::std::priv:: __uninitialized_fill_n(this->_M_Start(), __n, __c);
    _M_terminate_string();
  }


  basic_string(__move_source<_Self> src)
    : ::std::priv:: _String_base<_CharT,_Alloc>(__move_source<_Base>(src.get())) {}





  template <class _InputIterator>
  basic_string(_InputIterator __f, _InputIterator __l,
               const allocator_type & __a = allocator_type())
    : ::std::priv:: _String_base<_CharT,_Alloc>(__a) {
    typedef typename _IsIntegral<_InputIterator>::_Ret _Integral;
    _M_initialize_dispatch(__f, __l, _Integral());
  }
# 301 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_string.h"
private:
  size_type _M_compute_next_size(size_type __n) {
    const size_type __size = size();
    if (__n > max_size() - __size)
      this->_M_throw_length_error();
    size_type __len = __size + (max)(__n, __size) + 1;
    if (__len > max_size() || __len < __size)
      __len = max_size();
    return __len;
  }

  template <class _InputIter>
  void _M_range_initialize(_InputIter __f, _InputIter __l,
                           const input_iterator_tag &__tag) {
    this->_M_allocate_block();
    _M_construct_null(this->_M_Finish());
    _M_appendT(__f, __l, __tag);
  }

  template <class _ForwardIter>
  void _M_range_initialize(_ForwardIter __f, _ForwardIter __l,
                           const forward_iterator_tag &) {
    difference_type __n = ::std::distance(__f, __l);
    this->_M_allocate_block(__n + 1);
    this->_M_finish = uninitialized_copy(__f, __l, this->_M_Start());
    this->_M_terminate_string();
  }

  template <class _InputIter>
  void _M_range_initializeT(_InputIter __f, _InputIter __l) {
    _M_range_initialize(__f, __l, typename ::std::iterator_traits< _InputIter >::iterator_category());
  }

  template <class _Integer>
  void _M_initialize_dispatch(_Integer __n, _Integer __x, const __true_type& ) {
    this->_M_allocate_block(__n + 1);
    this->_M_finish = ::std::priv:: __uninitialized_fill_n(this->_M_Start(), __n, __x);
    this->_M_terminate_string();
  }

  template <class _InputIter>
  void _M_initialize_dispatch(_InputIter __f, _InputIter __l, const __false_type& ) {
    _M_range_initializeT(__f, __l);
  }

public:
  _Self& operator=(const _Self& __s) {
    if (&__s != this)
      _M_assign(__s._M_Start(), __s._M_Finish());
    return *this;
  }

  _Self& operator=(const _CharT* __s) {
   
    return _M_assign(__s, __s + traits_type::length(__s));
  }

  _Self& operator=(_CharT __c)
  { return assign(static_cast<size_type>(1), __c); }

private:
  static _CharT _M_null()
  { return _CharT(); }

private:

  void _M_construct_null(_CharT* __p) const
  { ::std::_Construct(__p); }
  void _M_terminate_string()
  { _M_construct_null(this->_M_Finish()); }
  bool _M_inside(const _CharT* __s) const {
   
    return (__s >= this->_M_Start()) && (__s < this->_M_Finish());
  }

  void _M_range_initialize(const _CharT* __f, const _CharT* __l) {
   
    ptrdiff_t __n = __l - __f;
    this->_M_allocate_block(__n + 1);
    this->_M_finish = uninitialized_copy(__f, __l, this->_M_Start());
    _M_terminate_string();
  }

public:
  iterator begin() { return this->_M_Start(); }
  iterator end() { return this->_M_Finish(); }
  const_iterator begin() const { return this->_M_Start(); }
  const_iterator end() const { return this->_M_Finish(); }

  reverse_iterator rbegin()
  { return reverse_iterator(this->_M_Finish()); }
  reverse_iterator rend()
  { return reverse_iterator(this->_M_Start()); }
  const_reverse_iterator rbegin() const
  { return const_reverse_iterator(this->_M_Finish()); }
  const_reverse_iterator rend() const
  { return const_reverse_iterator(this->_M_Start()); }

public:
  size_type size() const { return this->_M_Finish() - this->_M_Start(); }
  size_type length() const { return size(); }
  size_type max_size() const { return _Base::max_size(); }

  void resize(size_type __n, _CharT __c) {
    if (__n <= size())
      erase(begin() + __n, end());
    else
      append(__n - size(), __c);
  }

  void resize(size_type __n) { resize(__n, _M_null()); }

private:
  void _M_reserve(size_type);
public:
  void reserve(size_type = 0);

  size_type capacity() const
  { return this->_M_capacity() - 1; }

  void clear() {
    if (!empty()) {
      _Traits::assign(*(this->_M_Start()), _M_null());
      this->_M_finish = this->_M_Start();
    }
  }

  bool empty() const { return this->_M_Start() == this->_M_Finish(); }

public:

  const_reference operator[](size_type __n) const
  { return *(this->_M_Start() + __n); }
  reference operator[](size_type __n)
  { return *(this->_M_Start() + __n); }

  const_reference at(size_type __n) const {
    if (__n >= size())
      this->_M_throw_out_of_range();
    return *(this->_M_Start() + __n);
  }

  reference at(size_type __n) {
    if (__n >= size())
      this->_M_throw_out_of_range();
    return *(this->_M_Start() + __n);
  }

public:

  _Self& operator+=(const _Self& __s) { return append(__s); }
  _Self& operator+=(const _CharT* __s) { return append(__s); }
  _Self& operator+=(_CharT __c) { push_back(__c); return *this; }

private:
  _Self& _M_append(const _CharT* __first, const _CharT* __last);


  template <class _InputIter>
  _Self& _M_appendT(_InputIter __first, _InputIter __last,
                    const input_iterator_tag &) {
    for ( ; __first != __last ; ++__first)
      push_back(*__first);
    return *this;
  }

  template <class _ForwardIter>
  _Self& _M_appendT(_ForwardIter __first, _ForwardIter __last,
                    const forward_iterator_tag &) {
    if (__first != __last) {
      size_type __n = static_cast<size_type>(::std::distance(__first, __last));
      if (__n >= this->_M_rest()) {
        size_type __len = _M_compute_next_size(__n);
        pointer __new_start = this->_M_start_of_storage.allocate(__len, __len);
        pointer __new_finish = uninitialized_copy(this->_M_Start(), this->_M_Finish(), __new_start);
        __new_finish = uninitialized_copy(__first, __last, __new_finish);
        _M_construct_null(__new_finish);
        this->_M_deallocate_block();
        this->_M_reset(__new_start, __new_finish, __new_start + __len);
      }
      else {
        _Traits::assign(*this->_M_finish, *__first++);
        uninitialized_copy(__first, __last, this->_M_Finish() + 1);
        _M_construct_null(this->_M_Finish() + __n);
        this->_M_finish += __n;
      }
    }
    return *this;
  }

  template <class _Integer>
  _Self& _M_append_dispatch(_Integer __n, _Integer __x, const __true_type& )
  { return append((size_type) __n, (_CharT) __x); }

  template <class _InputIter>
  _Self& _M_append_dispatch(_InputIter __f, _InputIter __l, const __false_type& )
  { return _M_appendT(__f, __l, typename ::std::iterator_traits< _InputIter >::iterator_category()); }

public:


  template <class _InputIter>
  _Self& append(_InputIter __first, _InputIter __last) {
    typedef typename _IsIntegral<_InputIter>::_Ret _Integral;
    return _M_append_dispatch(__first, __last, _Integral());
  }
# 515 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_string.h"
public:
  _Self& append(const _Self& __s)
  { return _M_append(__s._M_Start(), __s._M_Finish()); }

  _Self& append(const _Self& __s,
                size_type __pos, size_type __n) {
    if (__pos > __s.size())
      this->_M_throw_out_of_range();
    return _M_append(__s._M_Start() + __pos,
                     __s._M_Start() + __pos + (min) (__n, __s.size() - __pos));
  }

  _Self& append(const _CharT* __s, size_type __n)
  { return _M_append(__s, __s+__n); }
  _Self& append(const _CharT* __s)
  { return _M_append(__s, __s + traits_type::length(__s)); }
  _Self& append(size_type __n, _CharT __c);

public:
  void push_back(_CharT __c) {
    if (this->_M_rest() == 1 )
      _M_reserve(_M_compute_next_size(1));
    _M_construct_null(this->_M_Finish() + 1);
    _Traits::assign(*(this->_M_Finish()), __c);
    ++this->_M_finish;
  }

  void pop_back() {
    _Traits::assign(*(this->_M_Finish() - 1), _M_null());
    --this->_M_finish;
  }

public:
  _Self& assign(const _Self& __s)
  { return _M_assign(__s._M_Start(), __s._M_Finish()); }

  _Self& assign(const _Self& __s,
                size_type __pos, size_type __n) {
    if (__pos > __s.size())
      this->_M_throw_out_of_range();
    return _M_assign(__s._M_Start() + __pos,
                     __s._M_Start() + __pos + (min) (__n, __s.size() - __pos));
  }

  _Self& assign(const _CharT* __s, size_type __n)
  { return _M_assign(__s, __s + __n); }

  _Self& assign(const _CharT* __s)
  { return _M_assign(__s, __s + _Traits::length(__s)); }

  _Self& assign(size_type __n, _CharT __c);

private:
  _Self& _M_assign(const _CharT* __f, const _CharT* __l);



  template <class _Integer>
  _Self& _M_assign_dispatch(_Integer __n, _Integer __x, const __true_type& )
  { return assign((size_type) __n, (_CharT) __x); }

  template <class _InputIter>
  _Self& _M_assign_dispatch(_InputIter __f, _InputIter __l, const __false_type& ) {
    pointer __cur = this->_M_Start();
    while (__f != __l && __cur != this->_M_Finish()) {
      _Traits::assign(*__cur, *__f);
      ++__f;
      ++__cur;
    }
    if (__f == __l)
      erase(__cur, this->end());
    else
      _M_appendT(__f, __l, typename ::std::iterator_traits< _InputIter >::iterator_category());
    return *this;
  }

public:


  template <class _InputIter>
  _Self& assign(_InputIter __first, _InputIter __last) {
    typedef typename _IsIntegral<_InputIter>::_Ret _Integral;
    return _M_assign_dispatch(__first, __last, _Integral());
  }
# 607 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_string.h"
public:
  _Self& insert(size_type __pos, const _Self& __s) {
    if (__pos > size())
      this->_M_throw_out_of_range();
    if (__s.size() > max_size() - size())
      this->_M_throw_length_error();
    _M_insert(begin() + __pos, __s._M_Start(), __s._M_Finish(), &__s == this);
    return *this;
  }

  _Self& insert(size_type __pos, const _Self& __s,
                size_type __beg, size_type __n) {
    if (__pos > size() || __beg > __s.size())
      this->_M_throw_out_of_range();
    size_type __len = (min) (__n, __s.size() - __beg);
    if (__len > max_size() - size())
      this->_M_throw_length_error();
    _M_insert(begin() + __pos,
              __s._M_Start() + __beg, __s._M_Start() + __beg + __len, &__s == this);
    return *this;
  }
  _Self& insert(size_type __pos, const _CharT* __s, size_type __n) {
   
    if (__pos > size())
      this->_M_throw_out_of_range();
    if (__n > max_size() - size())
      this->_M_throw_length_error();
    _M_insert(begin() + __pos, __s, __s + __n, _M_inside(__s));
    return *this;
  }

  _Self& insert(size_type __pos, const _CharT* __s) {
   
    if (__pos > size())
      this->_M_throw_out_of_range();
    size_type __len = _Traits::length(__s);
    if (__len > max_size() - size())
      this->_M_throw_length_error();
    _M_insert(this->_M_Start() + __pos, __s, __s + __len, _M_inside(__s));
    return *this;
  }

  _Self& insert(size_type __pos, size_type __n, _CharT __c) {
    if (__pos > size())
      this->_M_throw_out_of_range();
    if (__n > max_size() - size())
      this->_M_throw_length_error();
    insert(begin() + __pos, __n, __c);
    return *this;
  }

  iterator insert(iterator __p, _CharT __c) {
   
    if (__p == end()) {
      push_back(__c);
      return this->_M_Finish() - 1;
    }
    else
      return _M_insert_aux(__p, __c);
  }

  void insert(iterator __p, size_t __n, _CharT __c);

private:
  void _M_insert(iterator __p, const _CharT* __first, const _CharT* __last, bool __self_ref);

  pointer _M_insert_aux(pointer, _CharT);

  void _M_copy(const _CharT* __f, const _CharT* __l, _CharT* __res) {
   
   
    _Traits::copy(__res, __f, __l - __f);
  }

  void _M_move(const _CharT* __f, const _CharT* __l, _CharT* __res) {
   
    _Traits::move(__res, __f, __l - __f);
  }



  template <class _ForwardIter>
  void _M_insert_overflow(iterator __pos, _ForwardIter __first, _ForwardIter __last,
                          size_type __n) {
    size_type __len = _M_compute_next_size(__n);
    pointer __new_start = this->_M_start_of_storage.allocate(__len, __len);
    pointer __new_finish = uninitialized_copy(this->_M_Start(), __pos, __new_start);
    __new_finish = uninitialized_copy(__first, __last, __new_finish);
    __new_finish = uninitialized_copy(__pos, this->_M_Finish(), __new_finish);
    _M_construct_null(__new_finish);
    this->_M_deallocate_block();
    this->_M_reset(__new_start, __new_finish, __new_start + __len);
  }

  template <class _InputIter>
  void _M_insertT(iterator __p, _InputIter __first, _InputIter __last,
                  const input_iterator_tag &) {
    for ( ; __first != __last; ++__first) {
      __p = insert(__p, *__first);
      ++__p;
    }
  }

  template <class _ForwardIter>
  void _M_insertT(iterator __pos, _ForwardIter __first, _ForwardIter __last,
                  const forward_iterator_tag &) {
    if (__first != __last) {
      size_type __n = ::std::distance(__first, __last);
      if (__n < this->_M_rest()) {
        const size_type __elems_after = this->_M_finish - __pos;
        if (__elems_after >= __n) {
          uninitialized_copy((this->_M_Finish() - __n) + 1, this->_M_Finish() + 1, this->_M_Finish() + 1);
          this->_M_finish += __n;
          _Traits::move(__pos + __n, __pos, (__elems_after - __n) + 1);
          _M_copyT(__first, __last, __pos);
        }
        else {
          pointer __old_finish = this->_M_Finish();
          _ForwardIter __mid = __first;
          ::std::advance(__mid, __elems_after + 1);
          ::std::uninitialized_copy(__mid, __last, this->_M_Finish() + 1);
          this->_M_finish += __n - __elems_after;
          uninitialized_copy(__pos, __old_finish + 1, this->_M_Finish());
          this->_M_finish += __elems_after;
          _M_copyT(__first, __mid, __pos);
        }
      }
      else {
        _M_insert_overflow(__pos, __first, __last, __n);
      }
    }
  }

  template <class _Integer>
  void _M_insert_dispatch(iterator __p, _Integer __n, _Integer __x,
                          const __true_type& )
  { insert(__p, (size_type) __n, (_CharT) __x); }

  template <class _InputIter>
  void _M_insert_dispatch(iterator __p, _InputIter __first, _InputIter __last,
                          const __false_type& ) {
   

    const _Self __self(__first, __last, get_allocator());
    _M_insertT(__p, __self.begin(), __self.end(), forward_iterator_tag());
  }

  template <class _InputIterator>
  void _M_copyT(_InputIterator __first, _InputIterator __last, pointer __result) {
   
    for ( ; __first != __last; ++__first, ++__result)
      _Traits::assign(*__result, *__first);
  }


  void _M_copyT(const _CharT* __f, const _CharT* __l, _CharT* __res) {
   
   
    _Traits::copy(__res, __f, __l - __f);
  }

public:


  template <class _InputIter>
  void insert(iterator __p, _InputIter __first, _InputIter __last) {
    typedef typename _IsIntegral<_InputIter>::_Ret _Integral;
    _M_insert_dispatch(__p, __first, __last, _Integral());
  }




public:
  void insert(iterator __p, const _CharT* __f, const _CharT* __l) {
   
    _M_insert(__p, __f, __l, _M_inside(__f));
  }


public:
  _Self& erase(size_type __pos = 0, size_type __n = npos) {
    if (__pos > size())
      this->_M_throw_out_of_range();
    erase(begin() + __pos, begin() + __pos + (min) (__n, size() - __pos));
    return *this;
  }

  iterator erase(iterator __pos) {

    _Traits::move(__pos, __pos + 1, this->_M_Finish() - __pos);
    --this->_M_finish;
    return __pos;
  }

  iterator erase(iterator __first, iterator __last) {
    if (__first != __last) {

      traits_type::move(__first, __last, (this->_M_Finish() - __last) + 1);
      this->_M_finish = this->_M_Finish() - (__last - __first);
    }
    return __first;
  }

public:

  _Self& replace(size_type __pos, size_type __n, const _Self& __s) {
    const size_type __size = size();
    if (__pos > __size)
      this->_M_throw_out_of_range();
    const size_type __len = (min) (__n, __size - __pos);
    if (__s.size() > max_size() - (__size - __len))
      this->_M_throw_length_error();
    return _M_replace(begin() + __pos, begin() + __pos + __len,
                      __s._M_Start(), __s._M_Finish(), &__s == this);
  }

  _Self& replace(size_type __pos1, size_type __n1, const _Self& __s,
                 size_type __pos2, size_type __n2) {
    const size_type __size1 = size();
    const size_type __size2 = __s.size();
    if (__pos1 > __size1 || __pos2 > __size2)
      this->_M_throw_out_of_range();
    const size_type __len1 = (min) (__n1, __size1 - __pos1);
    const size_type __len2 = (min) (__n2, __size2 - __pos2);
    if (__len2 > max_size() - (__size1 - __len1))
      this->_M_throw_length_error();
    return _M_replace(begin() + __pos1, begin() + __pos1 + __len1,
                      __s._M_Start() + __pos2, __s._M_Start() + __pos2 + __len2, &__s == this);
  }

  _Self& replace(size_type __pos, size_type __n1,
                 const _CharT* __s, size_type __n2) {
   
    const size_type __size = size();
    if (__pos > __size)
      this->_M_throw_out_of_range();
    const size_type __len = (min) (__n1, __size - __pos);
    if (__n2 > max_size() - (__size - __len))
      this->_M_throw_length_error();
    return _M_replace(begin() + __pos, begin() + __pos + __len,
                      __s, __s + __n2, _M_inside(__s));
  }

  _Self& replace(size_type __pos, size_type __n1, const _CharT* __s) {
   
    return replace(__pos, __n1, __s, _Traits::length(__s));
  }

  _Self& replace(size_type __pos, size_type __n1,
                 size_type __n2, _CharT __c) {
    const size_type __size = size();
    if (__pos > __size)
      this->_M_throw_out_of_range();
    const size_type __len = (min) (__n1, __size - __pos);
    if (__n2 > max_size() - (__size - __len))
      this->_M_throw_length_error();
    return replace(begin() + __pos, begin() + __pos + __len, __n2, __c);
  }

  _Self& replace(iterator __first, iterator __last, const _Self& __s) {
   
    return _M_replace(__first, __last, __s._M_Start(), __s._M_Finish(), &__s == this);
  }

  _Self& replace(iterator __first, iterator __last,
                 const _CharT* __s, size_type __n) {
   
   
    return _M_replace(__first, __last, __s, __s + __n, _M_inside(__s));
  }

  _Self& replace(iterator __first, iterator __last,
                 const _CharT* __s) {
   
   
    return _M_replace(__first, __last, __s, __s + _Traits::length(__s), _M_inside(__s));
  }

  _Self& replace(iterator __first, iterator __last, size_type __n, _CharT __c);

private:
  _Self& _M_replace(iterator __first, iterator __last,
                    const _CharT* __f, const _CharT* __l, bool __self_ref);


  template <class _Integer>
  _Self& _M_replace_dispatch(iterator __first, iterator __last,
                             _Integer __n, _Integer __x, const __true_type& ) {
   
    return replace(__first, __last, (size_type) __n, (_CharT) __x);
  }

  template <class _InputIter>
  _Self& _M_replace_dispatch(iterator __first, iterator __last,
                             _InputIter __f, _InputIter __l, const __false_type& ) {
   

    const _Self __self(__f, __l, get_allocator());
    return _M_replace(__first, __last, __self._M_Start(), __self._M_Finish(), false);
  }

public:


  template <class _InputIter>
  _Self& replace(iterator __first, iterator __last,
                 _InputIter __f, _InputIter __l) {
   
    typedef typename _IsIntegral<_InputIter>::_Ret _Integral;
    return _M_replace_dispatch(__first, __last, __f, __l, _Integral());
  }



public:
  _Self& replace(iterator __first, iterator __last,
                 const _CharT* __f, const _CharT* __l) {
   
   
    return _M_replace(__first, __last, __f, __l, _M_inside(__f));
  }


public:

  size_type copy(_CharT* __s, size_type __n, size_type __pos = 0) const {
   
    if (__pos > size())
      this->_M_throw_out_of_range();
    const size_type __len = (min) (__n, size() - __pos);
    _Traits::copy(__s, this->_M_Start() + __pos, __len);
    return __len;
  }

  void swap(_Self& __s) { this->_M_swap(__s); }




public:

  const _CharT* c_str() const { return this->_M_Start(); }
  const _CharT* data() const { return this->_M_Start(); }

public:
  size_type find(const _Self& __s, size_type __pos = 0) const
  { return find(__s._M_Start(), __pos, __s.size()); }

  size_type find(const _CharT* __s, size_type __pos = 0) const
  { return find(__s, __pos, _Traits::length(__s)); }

  size_type find(const _CharT* __s, size_type __pos, size_type __n) const;


  size_type find(_CharT __c) const { return find(__c, 0); }
  size_type find(_CharT __c, size_type __pos ) const;

public:
  size_type rfind(const _Self& __s, size_type __pos = npos) const
  { return rfind(__s._M_Start(), __pos, __s.size()); }

  size_type rfind(const _CharT* __s, size_type __pos = npos) const
  { return rfind(__s, __pos, _Traits::length(__s)); }

  size_type rfind(const _CharT* __s, size_type __pos, size_type __n) const;
  size_type rfind(_CharT __c, size_type __pos = npos) const;

public:
  size_type find_first_of(const _Self& __s, size_type __pos = 0) const
  { return find_first_of(__s._M_Start(), __pos, __s.size()); }

  size_type find_first_of(const _CharT* __s, size_type __pos = 0) const
  { return find_first_of(__s, __pos, _Traits::length(__s)); }

  size_type find_first_of(const _CharT* __s, size_type __pos, size_type __n) const;

  size_type find_first_of(_CharT __c, size_type __pos = 0) const
  { return find(__c, __pos); }

public:
  size_type find_last_of(const _Self& __s, size_type __pos = npos) const
  { return find_last_of(__s._M_Start(), __pos, __s.size()); }

  size_type find_last_of(const _CharT* __s, size_type __pos = npos) const
  { return find_last_of(__s, __pos, _Traits::length(__s)); }

  size_type find_last_of(const _CharT* __s, size_type __pos, size_type __n) const;

  size_type find_last_of(_CharT __c, size_type __pos = npos) const
  { return rfind(__c, __pos); }

public:
  size_type find_first_not_of(const _Self& __s, size_type __pos = 0) const
  { return find_first_not_of(__s._M_Start(), __pos, __s.size()); }

  size_type find_first_not_of(const _CharT* __s, size_type __pos = 0) const
  { return find_first_not_of(__s, __pos, _Traits::length(__s)); }

  size_type find_first_not_of(const _CharT* __s, size_type __pos, size_type __n) const;

  size_type find_first_not_of(_CharT __c, size_type __pos = 0) const;

public:
  size_type find_last_not_of(const _Self& __s, size_type __pos = npos) const
  { return find_last_not_of(__s._M_Start(), __pos, __s.size()); }

  size_type find_last_not_of(const _CharT* __s, size_type __pos = npos) const
  { return find_last_not_of(__s, __pos, _Traits::length(__s)); }

  size_type find_last_not_of(const _CharT* __s, size_type __pos, size_type __n) const;

  size_type find_last_not_of(_CharT __c, size_type __pos = npos) const;

public:
  _Self substr(size_type __pos = 0, size_type __n = npos) const
  { return _Self(*this, __pos, __n, get_allocator()); }

public:
  int compare(const _Self& __s) const
  { return _M_compare(this->_M_Start(), this->_M_Finish(), __s._M_Start(), __s._M_Finish()); }

  int compare(size_type __pos1, size_type __n1, const _Self& __s) const {
    if (__pos1 > size())
      this->_M_throw_out_of_range();
    return _M_compare(this->_M_Start() + __pos1,
                      this->_M_Start() + __pos1 + (min) (__n1, size() - __pos1),
                      __s._M_Start(), __s._M_Finish());
  }

  int compare(size_type __pos1, size_type __n1, const _Self& __s,
              size_type __pos2, size_type __n2) const {
    if (__pos1 > size() || __pos2 > __s.size())
      this->_M_throw_out_of_range();
    return _M_compare(this->_M_Start() + __pos1,
                      this->_M_Start() + __pos1 + (min) (__n1, size() - __pos1),
                      __s._M_Start() + __pos2,
                      __s._M_Start() + __pos2 + (min) (__n2, __s.size() - __pos2));
  }

  int compare(const _CharT* __s) const {
   
    return _M_compare(this->_M_Start(), this->_M_Finish(), __s, __s + _Traits::length(__s));
  }

  int compare(size_type __pos1, size_type __n1, const _CharT* __s) const {
   
    if (__pos1 > size())
      this->_M_throw_out_of_range();
    return _M_compare(this->_M_Start() + __pos1,
                      this->_M_Start() + __pos1 + (min) (__n1, size() - __pos1),
                      __s, __s + _Traits::length(__s));
  }

  int compare(size_type __pos1, size_type __n1, const _CharT* __s, size_type __n2) const {
   
    if (__pos1 > size())
      this->_M_throw_out_of_range();
    return _M_compare(this->_M_Start() + __pos1,
                      this->_M_Start() + __pos1 + (min) (__n1, size() - __pos1),
                      __s, __s + __n2);
  }

public:
  static int _M_compare(const _CharT* __f1, const _CharT* __l1,
                                   const _CharT* __f2, const _CharT* __l2) {
    const ptrdiff_t __n1 = __l1 - __f1;
    const ptrdiff_t __n2 = __l2 - __f2;
    const int cmp = _Traits::compare(__f1, __f2, (min) (__n1, __n2));
    return cmp != 0 ? cmp : (__n1 < __n2 ? -1 : (__n1 > __n2 ? 1 : 0));
  }





};
# 1104 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_string.h"
}
# 1114 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_string.h"
namespace std {





template <class _CharT, class _Traits, class _Alloc>
inline void
swap(basic_string<_CharT,_Traits,_Alloc>& __x,
     basic_string<_CharT,_Traits,_Alloc>& __y)
{ __x.swap(__y); }
# 1135 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_string.h"
template <class _CharT, class _Traits, class _Alloc>
struct __move_traits<basic_string<_CharT, _Traits, _Alloc> > {
  typedef __true_type implemented;

  typedef typename __move_traits<_Alloc>::complete complete;
};
# 1150 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_string.h"
namespace priv {

template <class _CharT, class _Traits, class _Alloc>
void _S_string_copy(const basic_string<_CharT,_Traits,_Alloc>& __s,
                               _CharT* __buf, size_t __n);







inline const char*
__get_c_string(const string& __str) { return __str.c_str(); }

}

}

# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_string_operators.h" 1
# 19 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_string_operators.h"
namespace std {







template <class _CharT, class _Traits, class _Alloc>
inline basic_string<_CharT,_Traits,_Alloc>
operator+(const basic_string<_CharT,_Traits,_Alloc>& __s,
          const basic_string<_CharT,_Traits,_Alloc>& __y) {
  typedef basic_string<_CharT,_Traits,_Alloc> _Str;
  typedef typename _Str::_Reserve_t _Reserve_t;


  _Str __result = _Str(_Reserve_t(), __s.size() + __y.size(), __s.get_allocator());



  __result.append(__s);
  __result.append(__y);
  return __result;
}

template <class _CharT, class _Traits, class _Alloc>
inline basic_string<_CharT,_Traits,_Alloc>
operator+(const _CharT* __s,
          const basic_string<_CharT,_Traits,_Alloc>& __y) {
 
  typedef basic_string<_CharT,_Traits,_Alloc> _Str;
  typedef typename _Str::_Reserve_t _Reserve_t;
  const size_t __n = _Traits::length(__s);

  _Str __result = _Str(_Reserve_t(), __n + __y.size(), __y.get_allocator());



  __result.append(__s, __s + __n);
  __result.append(__y);
  return __result;
}

template <class _CharT, class _Traits, class _Alloc>
inline basic_string<_CharT,_Traits,_Alloc>
operator+(_CharT __c,
          const basic_string<_CharT,_Traits,_Alloc>& __y) {
  typedef basic_string<_CharT,_Traits,_Alloc> _Str;
  typedef typename _Str::_Reserve_t _Reserve_t;

  _Str __result = _Str(_Reserve_t(), 1 + __y.size(), __y.get_allocator());



  __result.push_back(__c);
  __result.append(__y);
  return __result;
}

template <class _CharT, class _Traits, class _Alloc>
inline basic_string<_CharT,_Traits,_Alloc>
operator+(const basic_string<_CharT,_Traits,_Alloc>& __x,
          const _CharT* __s) {
 
  typedef basic_string<_CharT,_Traits,_Alloc> _Str;
  typedef typename _Str::_Reserve_t _Reserve_t;
  const size_t __n = _Traits::length(__s);

  _Str __result = _Str(_Reserve_t(), __x.size() + __n, __x.get_allocator());



  __result.append(__x);
  __result.append(__s, __s + __n);
  return __result;
}

template <class _CharT, class _Traits, class _Alloc>
inline basic_string<_CharT,_Traits,_Alloc>
operator+(const basic_string<_CharT,_Traits,_Alloc>& __x,
          const _CharT __c) {
  typedef basic_string<_CharT,_Traits,_Alloc> _Str;
  typedef typename _Str::_Reserve_t _Reserve_t;

  _Str __result = _Str(_Reserve_t(), __x.size() + 1, __x.get_allocator());



  __result.append(__x);
  __result.push_back(__c);
  return __result;
}
# 285 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_string_operators.h"
template <class _CharT, class _Traits, class _Alloc>
inline bool
operator==(const basic_string<_CharT,_Traits,_Alloc>& __x,
           const basic_string<_CharT,_Traits,_Alloc>& __y) {
  return __x.size() == __y.size() && _Traits::compare(__x.data(), __y.data(), __x.size()) == 0;
}
# 309 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_string_operators.h"
template <class _CharT, class _Traits, class _Alloc>
inline bool
operator==(const _CharT* __s,
           const basic_string<_CharT,_Traits,_Alloc>& __y) {
 
  size_t __n = _Traits::length(__s);
  return __n == __y.size() && _Traits::compare(__s, __y.data(), __n) == 0;
}

template <class _CharT, class _Traits, class _Alloc>
inline bool
operator==(const basic_string<_CharT,_Traits,_Alloc>& __x,
           const _CharT* __s) {
 
  size_t __n = _Traits::length(__s);
  return __x.size() == __n && _Traits::compare(__x.data(), __s, __n) == 0;
}
# 349 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_string_operators.h"
template <class _CharT, class _Traits, class _Alloc>
inline bool
operator<(const basic_string<_CharT,_Traits,_Alloc>& __x,
          const basic_string<_CharT,_Traits,_Alloc>& __y) {
  return basic_string<_CharT,_Traits,_Alloc> ::_M_compare(__x.begin(), __x.end(),
                                                          __y.begin(), __y.end()) < 0;
}
# 375 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_string_operators.h"
template <class _CharT, class _Traits, class _Alloc>
inline bool
operator<(const _CharT* __s,
          const basic_string<_CharT,_Traits,_Alloc>& __y) {
 
  size_t __n = _Traits::length(__s);
  return basic_string<_CharT,_Traits,_Alloc> ::_M_compare(__s, __s + __n,
                                                          __y.begin(), __y.end()) < 0;
}

template <class _CharT, class _Traits, class _Alloc>
inline bool
operator<(const basic_string<_CharT,_Traits,_Alloc>& __x,
          const _CharT* __s) {
 
  size_t __n = _Traits::length(__s);
  return basic_string<_CharT,_Traits,_Alloc> ::_M_compare(__x.begin(), __x.end(),
                                                          __s, __s + __n) < 0;
}
# 423 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_string_operators.h"
template <class _CharT, class _Traits, class _Alloc>
inline bool
operator!=(const basic_string<_CharT,_Traits,_Alloc>& __x,
           const basic_string<_CharT,_Traits,_Alloc>& __y)
{ return !(__x == __y); }

template <class _CharT, class _Traits, class _Alloc>
inline bool
operator>(const basic_string<_CharT,_Traits,_Alloc>& __x,
          const basic_string<_CharT,_Traits,_Alloc>& __y)
{ return __y < __x; }

template <class _CharT, class _Traits, class _Alloc>
inline bool
operator<=(const basic_string<_CharT,_Traits,_Alloc>& __x,
           const basic_string<_CharT,_Traits,_Alloc>& __y)
{ return !(__y < __x); }

template <class _CharT, class _Traits, class _Alloc>
inline bool
operator>=(const basic_string<_CharT,_Traits,_Alloc>& __x,
           const basic_string<_CharT,_Traits,_Alloc>& __y)
{ return !(__x < __y); }
# 463 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_string_operators.h"
template <class _CharT, class _Traits, class _Alloc>
inline bool
operator!=(const _CharT* __s,
           const basic_string<_CharT,_Traits,_Alloc>& __y) {
 
  return !(__s == __y);
}

template <class _CharT, class _Traits, class _Alloc>
inline bool
operator!=(const basic_string<_CharT,_Traits,_Alloc>& __x,
           const _CharT* __s) {
 
  return !(__x == __s);
}
# 497 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_string_operators.h"
template <class _CharT, class _Traits, class _Alloc>
inline bool
operator>(const _CharT* __s,
          const basic_string<_CharT,_Traits,_Alloc>& __y) {
 
  return __y < __s;
}

template <class _CharT, class _Traits, class _Alloc>
inline bool
operator>(const basic_string<_CharT,_Traits,_Alloc>& __x,
          const _CharT* __s) {
 
  return __s < __x;
}
# 531 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_string_operators.h"
template <class _CharT, class _Traits, class _Alloc>
inline bool
operator<=(const _CharT* __s,
           const basic_string<_CharT,_Traits,_Alloc>& __y) {
 
  return !(__y < __s);
}

template <class _CharT, class _Traits, class _Alloc>
inline bool
operator<=(const basic_string<_CharT,_Traits,_Alloc>& __x,
           const _CharT* __s) {
 
  return !(__s < __x);
}
# 565 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_string_operators.h"
template <class _CharT, class _Traits, class _Alloc>
inline bool
operator>=(const _CharT* __s,
           const basic_string<_CharT,_Traits,_Alloc>& __y) {
 
  return !(__s < __y);
}

template <class _CharT, class _Traits, class _Alloc>
inline bool
operator>=(const basic_string<_CharT,_Traits,_Alloc>& __x,
           const _CharT* __s) {
 
  return !(__x < __s);
}
# 599 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_string_operators.h"
}
# 1170 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_string.h" 2



# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_string.c" 1
# 32 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_string.c"
# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_ctraits_fns.h" 1
# 28 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_ctraits_fns.h"
namespace std {

namespace priv {

template <class _Traits>
struct _Eq_traits
  : public binary_function<typename _Traits::char_type,
                           typename _Traits::char_type,
                           bool> {
  bool operator()(const typename _Traits::char_type& __x,
                  const typename _Traits::char_type& __y) const
  { return _Traits::eq(__x, __y); }
};

template <class _Traits>
struct _Eq_char_bound
  : public unary_function<typename _Traits::char_type, bool> {
  typename _Traits::char_type __val;
  _Eq_char_bound(typename _Traits::char_type __c) : __val(__c) {}
  bool operator()(const typename _Traits::char_type& __x) const
  { return _Traits::eq(__x, __val); }
};

template <class _Traits>
struct _Neq_char_bound
  : public unary_function<typename _Traits::char_type, bool>
{
  typename _Traits::char_type __val;
  _Neq_char_bound(typename _Traits::char_type __c) : __val(__c) {}
  bool operator()(const typename _Traits::char_type& __x) const
  { return !_Traits::eq(__x, __val); }
};

template <class _Traits>
struct _Eq_int_bound
  : public unary_function<typename _Traits::char_type, bool> {
  typename _Traits::int_type __val;

  _Eq_int_bound(typename _Traits::int_type __c) : __val(__c) {}
  bool operator()(const typename _Traits::char_type& __x) const
  { return _Traits::eq_int_type(_Traits::to_int_type(__x), __val); }
};
# 83 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_ctraits_fns.h"
}

}
# 33 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_string.c" 2



# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_function.h" 1
# 41 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_function.h"
namespace std {

template <class _Tp>
struct not_equal_to : public binary_function<_Tp, _Tp, bool> {
  bool operator()(const _Tp& __x, const _Tp& __y) const { return __x != __y; }
};

template <class _Tp>
struct greater : public binary_function<_Tp, _Tp, bool> {
  bool operator()(const _Tp& __x, const _Tp& __y) const { return __x > __y; }
};

template <class _Tp>
struct greater_equal : public binary_function<_Tp, _Tp, bool> {
  bool operator()(const _Tp& __x, const _Tp& __y) const { return __x >= __y; }
};

template <class _Tp>
struct less_equal : public binary_function<_Tp, _Tp, bool> {
  bool operator()(const _Tp& __x, const _Tp& __y) const { return __x <= __y; }
};

template <class _Tp>
struct divides : public binary_function<_Tp, _Tp, _Tp> {
  _Tp operator()(const _Tp& __x, const _Tp& __y) const { return __x / __y; }
};

template <class _Tp>
struct modulus : public binary_function<_Tp, _Tp, _Tp> {
  _Tp operator()(const _Tp& __x, const _Tp& __y) const { return __x % __y; }
};

template <class _Tp>
struct negate : public unary_function<_Tp, _Tp> {
  _Tp operator()(const _Tp& __x) const { return -__x; }
};

template <class _Tp>
struct logical_and : public binary_function<_Tp, _Tp, bool> {
  bool operator()(const _Tp& __x, const _Tp& __y) const { return __x && __y; }
};

template <class _Tp>
struct logical_or : public binary_function<_Tp, _Tp,bool> {
  bool operator()(const _Tp& __x, const _Tp& __y) const { return __x || __y; }
};

template <class _Tp>
struct logical_not : public unary_function<_Tp, bool> {
  bool operator()(const _Tp& __x) const { return !__x; }
};



template <class _Tp> inline _Tp identity_element(plus<_Tp>) { return _Tp(0); }
template <class _Tp> inline _Tp identity_element(multiplies<_Tp>) { return _Tp(1); }
# 135 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_function.h"
template <class _Predicate>
class unary_negate
    : public unary_function<typename _Predicate::argument_type, bool> {
  typedef unary_function<typename _Predicate::argument_type, bool> _Base;
public:
  typedef typename _Base::argument_type argument_type;
private:
  typedef typename __call_traits<argument_type>::const_param_type _ArgParamType;
protected:
  _Predicate _M_pred;
public:
  explicit unary_negate(const _Predicate& __x) : _M_pred(__x) {}
  bool operator()(_ArgParamType __x) const {
    return !_M_pred(__x);
  }
};

template <class _Predicate>
inline unary_negate<_Predicate>
not1(const _Predicate& __pred) {
  return unary_negate<_Predicate>(__pred);
}

template <class _Predicate>
class binary_negate
    : public binary_function<typename _Predicate::first_argument_type,
                             typename _Predicate::second_argument_type,
                             bool> {
  typedef binary_function<typename _Predicate::first_argument_type,
                          typename _Predicate::second_argument_type,
                          bool> _Base;
public:
  typedef typename _Base::first_argument_type first_argument_type;
  typedef typename _Base::second_argument_type second_argument_type;
private:
  typedef typename __call_traits<first_argument_type>::const_param_type _FstArgParamType;
  typedef typename __call_traits<second_argument_type>::const_param_type _SndArgParamType;
protected:
  _Predicate _M_pred;
public:
  explicit binary_negate(const _Predicate& __x) : _M_pred(__x) {}
  bool operator()(_FstArgParamType __x, _SndArgParamType __y) const {
    return !_M_pred(__x, __y);
  }
};

template <class _Predicate>
inline binary_negate<_Predicate>
not2(const _Predicate& __pred) {
  return binary_negate<_Predicate>(__pred);
}

template <class _Operation>
class binder1st :
    public unary_function<typename _Operation::second_argument_type,
                          typename _Operation::result_type > {
  typedef unary_function<typename _Operation::second_argument_type,
                         typename _Operation::result_type > _Base;
public:
  typedef typename _Base::argument_type argument_type;
  typedef typename _Base::result_type result_type;
private:
  typedef typename __call_traits<argument_type>::param_type _ArgParamType;
  typedef typename __call_traits<argument_type>::const_param_type _ConstArgParamType;
  typedef typename __call_traits<typename _Operation::first_argument_type>::const_param_type _ValueParamType;
protected:

  _Operation op;
  typename _Operation::first_argument_type _M_value;
public:
  binder1st(const _Operation& __x, _ValueParamType __y)
    : op(__x), _M_value(__y) {}

  result_type operator()(_ConstArgParamType __x) const
  { return op(_M_value, __x); }

  result_type operator()(_ArgParamType __x) const
  { return op(_M_value, __x); }
};

template <class _Operation, class _Tp>
inline binder1st<_Operation>
bind1st(const _Operation& __fn, const _Tp& __x) {
  typedef typename _Operation::first_argument_type _Arg1_type;
  return binder1st<_Operation>(__fn, _Arg1_type(__x));
}

template <class _Operation>
class binder2nd
  : public unary_function<typename _Operation::first_argument_type,
                          typename _Operation::result_type> {
  typedef unary_function<typename _Operation::first_argument_type,
                         typename _Operation::result_type> _Base;
public:
  typedef typename _Base::argument_type argument_type;
  typedef typename _Base::result_type result_type;
private:
  typedef typename __call_traits<argument_type>::param_type _ArgParamType;
  typedef typename __call_traits<argument_type>::const_param_type _ConstArgParamType;
  typedef typename __call_traits<typename _Operation::second_argument_type>::const_param_type _ValueParamType;
protected:

  _Operation op;
  typename _Operation::second_argument_type value;
public:
  binder2nd(const _Operation& __x, _ValueParamType __y)
      : op(__x), value(__y) {}

  result_type operator()(_ConstArgParamType __x) const
  { return op(__x, value); }

  result_type operator()(_ArgParamType __x) const
  { return op(__x, value); }
};

template <class _Operation, class _Tp>
inline binder2nd<_Operation>
bind2nd(const _Operation& __fn, const _Tp& __x) {
  typedef typename _Operation::second_argument_type _Arg2_type;
  return binder2nd<_Operation>(__fn, _Arg2_type(__x));
}




template <class _Operation1, class _Operation2>
class unary_compose :
  public unary_function<typename _Operation2::argument_type,
                        typename _Operation1::result_type> {
  typedef unary_function<typename _Operation2::argument_type,
                         typename _Operation1::result_type> _Base;
public:
  typedef typename _Base::argument_type argument_type;
  typedef typename _Base::result_type result_type;
private:
  typedef typename __call_traits<argument_type>::const_param_type _ArgParamType;
protected:
  _Operation1 _M_fn1;
  _Operation2 _M_fn2;
public:
  unary_compose(const _Operation1& __x, const _Operation2& __y)
    : _M_fn1(__x), _M_fn2(__y) {}

  result_type operator()(_ArgParamType __x) const {
    return _M_fn1(_M_fn2(__x));
  }
};

template <class _Operation1, class _Operation2>
inline unary_compose<_Operation1,_Operation2>
compose1(const _Operation1& __fn1, const _Operation2& __fn2) {
  return unary_compose<_Operation1,_Operation2>(__fn1, __fn2);
}

template <class _Operation1, class _Operation2, class _Operation3>
class binary_compose :
    public unary_function<typename _Operation2::argument_type,
                          typename _Operation1::result_type> {
  typedef unary_function<typename _Operation2::argument_type,
                         typename _Operation1::result_type> _Base;
public:
  typedef typename _Base::argument_type argument_type;
  typedef typename _Base::result_type result_type;
private:
  typedef typename __call_traits<argument_type>::const_param_type _ArgParamType;
protected:
  _Operation1 _M_fn1;
  _Operation2 _M_fn2;
  _Operation3 _M_fn3;
public:
  binary_compose(const _Operation1& __x, const _Operation2& __y,
                 const _Operation3& __z)
    : _M_fn1(__x), _M_fn2(__y), _M_fn3(__z) { }

  result_type operator()(_ArgParamType __x) const {
    return _M_fn1(_M_fn2(__x), _M_fn3(__x));
  }
};

template <class _Operation1, class _Operation2, class _Operation3>
inline binary_compose<_Operation1, _Operation2, _Operation3>
compose2(const _Operation1& __fn1, const _Operation2& __fn2,
         const _Operation3& __fn3) {
  return binary_compose<_Operation1,_Operation2,_Operation3>(__fn1, __fn2, __fn3);
}


template <class _Tp> struct identity : public ::std::priv:: _Identity<_Tp> {};

template <class _Pair> struct select1st : public ::std::priv:: _Select1st<_Pair> {};
template <class _Pair> struct select2nd : public ::std::priv:: _Select2nd<_Pair> {};

template <class _Arg1, class _Arg2>
struct project1st : public ::std::priv:: _Project1st<_Arg1, _Arg2> {};

template <class _Arg1, class _Arg2>
struct project2nd : public ::std::priv:: _Project2nd<_Arg1, _Arg2> {};






namespace priv {

template <class _Result>
struct _Constant_void_fun {
  typedef _Result result_type;
  result_type _M_val;

  _Constant_void_fun(const result_type& __v) : _M_val(__v) {}
  const result_type& operator()() const { return _M_val; }
};

}

template <class _Result>
struct constant_void_fun : public ::std::priv:: _Constant_void_fun<_Result> {
  constant_void_fun(const _Result& __v)
    : ::std::priv:: _Constant_void_fun<_Result>(__v) {}
};

template <class _Result, class _Argument = _Result >
struct constant_unary_fun : public ::std::priv:: _Constant_unary_fun<_Result, _Argument> {
  constant_unary_fun(const _Result& __v)
    : ::std::priv:: _Constant_unary_fun<_Result, _Argument>(__v) {}
};

template <class _Result, class _Arg1 = _Result, class _Arg2 = _Arg1 >
struct constant_binary_fun
  : public ::std::priv:: _Constant_binary_fun<_Result, _Arg1, _Arg2> {
  constant_binary_fun(const _Result& __v)
    : ::std::priv:: _Constant_binary_fun<_Result, _Arg1, _Arg2>(__v) {}
};

template <class _Result>
inline constant_void_fun<_Result> constant0(const _Result& __val) {
  return constant_void_fun<_Result>(__val);
}

template <class _Result>
inline constant_unary_fun<_Result,_Result> constant1(const _Result& __val) {
  return constant_unary_fun<_Result,_Result>(__val);
}

template <class _Result>
inline constant_binary_fun<_Result,_Result,_Result>
constant2(const _Result& __val) {
  return constant_binary_fun<_Result,_Result,_Result>(__val);
}



class subtractive_rng : public unary_function<unsigned long, unsigned long> {
private:
  unsigned long _M_table[55];
  unsigned long _M_index1;
  unsigned long _M_index2;
public:
  unsigned long operator()(unsigned long __limit) {
    _M_index1 = (_M_index1 + 1) % 55;
    _M_index2 = (_M_index2 + 1) % 55;
    _M_table[_M_index1] = _M_table[_M_index1] - _M_table[_M_index2];
    return _M_table[_M_index1] % __limit;
  }

  void _M_initialize(unsigned long __seed) {
    unsigned long __k = 1;
    _M_table[54] = __seed;
    unsigned long __i;
    for (__i = 0; __i < 54; __i++) {
        unsigned long __ii = (21 * (__i + 1) % 55) - 1;
        _M_table[__ii] = __k;
        __k = __seed - __k;
        __seed = _M_table[__ii];
    }
    for (int __loop = 0; __loop < 4; __loop++) {
        for (__i = 0; __i < 55; __i++)
            _M_table[__i] = _M_table[__i] - _M_table[(1 + __i + 30) % 55];
    }
    _M_index1 = 0;
    _M_index2 = 31;
  }

  subtractive_rng(unsigned int __seed) { _M_initialize(__seed); }
  subtractive_rng() { _M_initialize(161803398ul); }
};



}

# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_function_adaptors.h" 1
# 58 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_function_adaptors.h"
namespace std {
# 498 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_function_adaptors.h"
template <class _Ret, class _Tp>
class mem_fun_t : public unary_function<_Tp*,_Ret> {
  typedef _Ret (_Tp::*__fun_type)(void);
public:
  explicit mem_fun_t(__fun_type __pf) : _M_f(__pf) {}
  _Ret operator()(_Tp* __p) const { return (__p->*_M_f)(); }
private:
  __fun_type _M_f;
};

template <class _Ret, class _Tp>
class const_mem_fun_t : public unary_function<const _Tp*,_Ret> {
  typedef _Ret (_Tp::*__fun_type)(void) const;
public:
  explicit const_mem_fun_t(__fun_type __pf) : _M_f(__pf) {}
  _Ret operator()(const _Tp* __p) const { return (__p->*_M_f)(); }
private:
  __fun_type _M_f;
};

template <class _Ret, class _Tp>
class mem_fun_ref_t : public unary_function<_Tp,_Ret> {
  typedef _Ret (_Tp::*__fun_type)(void);
public:
  explicit mem_fun_ref_t(__fun_type __pf) : _M_f(__pf) {}
  _Ret operator()(_Tp& __r) const { return (__r.*_M_f)(); }
private:
  __fun_type _M_f;
};

template <class _Ret, class _Tp>
class const_mem_fun_ref_t : public unary_function<_Tp,_Ret> {
  typedef _Ret (_Tp::*__fun_type)(void) const;
public:
  explicit const_mem_fun_ref_t(__fun_type __pf) : _M_f(__pf) {}
  _Ret operator()(const _Tp& __r) const { return (__r.*_M_f)(); }
private:
  __fun_type _M_f;
};

template <class _Ret, class _Tp, class _Arg>
class mem_fun1_t : public binary_function<_Tp*,_Arg,_Ret> {
  typedef _Ret (_Tp::*__fun_type)(_Arg);
public:
  explicit mem_fun1_t(__fun_type __pf) : _M_f(__pf) {}
  _Ret operator()(_Tp* __p, _Arg __x) const { return (__p->*_M_f)(__x); }
private:
  __fun_type _M_f;
};

template <class _Ret, class _Tp, class _Arg>
class const_mem_fun1_t : public binary_function<const _Tp*,_Arg,_Ret> {
  typedef _Ret (_Tp::*__fun_type)(_Arg) const;
public:
  explicit const_mem_fun1_t(__fun_type __pf) : _M_f(__pf) {}
  _Ret operator()(const _Tp* __p, _Arg __x) const
    { return (__p->*_M_f)(__x); }
private:
  __fun_type _M_f;
};

template <class _Ret, class _Tp, class _Arg>
class mem_fun1_ref_t : public binary_function<_Tp,_Arg,_Ret> {
  typedef _Ret (_Tp::*__fun_type)(_Arg);
public:
  explicit mem_fun1_ref_t(__fun_type __pf) : _M_f(__pf) {}
  _Ret operator()(_Tp& __r, _Arg __x) const { return (__r.*_M_f)(__x); }
private:
  __fun_type _M_f;
};

template <class _Ret, class _Tp, class _Arg>
class const_mem_fun1_ref_t : public binary_function<_Tp,_Arg,_Ret> {
  typedef _Ret (_Tp::*__fun_type)(_Arg) const;
public:
  explicit const_mem_fun1_ref_t(__fun_type __pf) : _M_f(__pf) {}
  _Ret operator()(const _Tp& __r, _Arg __x) const { return (__r.*_M_f)(__x); }
private:
  __fun_type _M_f;
};

template <class _Arg, class _Result>
class pointer_to_unary_function : public unary_function<_Arg, _Result> {
protected:
  _Result (*_M_ptr)(_Arg);
public:
  pointer_to_unary_function() {}
  explicit pointer_to_unary_function(_Result (*__x)(_Arg)) : _M_ptr(__x) {}
  _Result operator()(_Arg __x) const { return _M_ptr(__x); }
};

template <class _Arg1, class _Arg2, class _Result>
class pointer_to_binary_function :
  public binary_function<_Arg1,_Arg2,_Result> {
protected:
    _Result (*_M_ptr)(_Arg1, _Arg2);
public:
    pointer_to_binary_function() {}
    explicit pointer_to_binary_function(_Result (*__x)(_Arg1, _Arg2))
      : _M_ptr(__x) {}
    _Result operator()(_Arg1 __x, _Arg2 __y) const {
      return _M_ptr(__x, __y);
    }
};
# 718 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_function_adaptors.h"
template <class _Result, class _Tp>
inline mem_fun_t<_Result,_Tp>
mem_fun(_Result (_Tp::*__f)()) { return mem_fun_t<_Result,_Tp>(__f); }

template <class _Result, class _Tp>
inline const_mem_fun_t<_Result,_Tp>
mem_fun(_Result (_Tp::*__f)() const) { return const_mem_fun_t<_Result,_Tp>(__f); }

template <class _Result, class _Tp>
inline mem_fun_ref_t<_Result,_Tp>
mem_fun_ref(_Result (_Tp::*__f)()) { return mem_fun_ref_t<_Result,_Tp>(__f); }

template <class _Result, class _Tp>
inline const_mem_fun_ref_t<_Result,_Tp>
mem_fun_ref(_Result (_Tp::*__f)() const) { return const_mem_fun_ref_t<_Result,_Tp>(__f); }

template <class _Result, class _Tp, class _Arg>
inline mem_fun1_t<_Result,_Tp,_Arg>
mem_fun(_Result (_Tp::*__f)(_Arg)) { return mem_fun1_t<_Result,_Tp,_Arg>(__f); }

template <class _Result, class _Tp, class _Arg>
inline const_mem_fun1_t<_Result,_Tp,_Arg>
mem_fun(_Result (_Tp::*__f)(_Arg) const) { return const_mem_fun1_t<_Result,_Tp,_Arg>(__f); }

template <class _Result, class _Tp, class _Arg>
inline mem_fun1_ref_t<_Result,_Tp,_Arg>
mem_fun_ref(_Result (_Tp::*__f)(_Arg)) { return mem_fun1_ref_t<_Result,_Tp,_Arg>(__f); }

template <class _Result, class _Tp, class _Arg>
inline const_mem_fun1_ref_t<_Result,_Tp,_Arg>
mem_fun_ref(_Result (_Tp::*__f)(_Arg) const) { return const_mem_fun1_ref_t<_Result,_Tp,_Arg>(__f); }




template <class _Result, class _Tp, class _Arg>
inline mem_fun1_t<_Result,_Tp,_Arg>
mem_fun1(_Result (_Tp::*__f)(_Arg)) { return mem_fun1_t<_Result,_Tp,_Arg>(__f); }

template <class _Result, class _Tp, class _Arg>
inline const_mem_fun1_t<_Result,_Tp,_Arg>
mem_fun1(_Result (_Tp::*__f)(_Arg) const) { return const_mem_fun1_t<_Result,_Tp,_Arg>(__f); }

template <class _Result, class _Tp, class _Arg>
inline mem_fun1_ref_t<_Result,_Tp,_Arg>
mem_fun1_ref(_Result (_Tp::*__f)(_Arg)) { return mem_fun1_ref_t<_Result,_Tp,_Arg>(__f); }

template <class _Result, class _Tp, class _Arg>
inline const_mem_fun1_ref_t<_Result,_Tp,_Arg>
mem_fun1_ref(_Result (_Tp::*__f)(_Arg) const) { return const_mem_fun1_ref_t<_Result,_Tp,_Arg>(__f); }





template <class _Arg, class _Result>
inline pointer_to_unary_function<_Arg, _Result>
ptr_fun(_Result (*__f)(_Arg))
{ return pointer_to_unary_function<_Arg, _Result>(__f); }

template <class _Arg1, class _Arg2, class _Result>
inline pointer_to_binary_function<_Arg1,_Arg2,_Result>
ptr_fun(_Result (*__f)(_Arg1, _Arg2))
{ return pointer_to_binary_function<_Arg1,_Arg2,_Result>(__f); }

}
# 428 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_function.h" 2
# 37 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_string.c" 2
# 53 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_string.c"
namespace std {

namespace priv {


template <class _Traits>
struct _Not_within_traits : public unary_function<typename _Traits::char_type, bool> {
  typedef typename _Traits::char_type _CharT;
  const _CharT* _M_first;
  const _CharT* _M_last;

  _Not_within_traits(const _CharT* __f, const _CharT* __l)
    : _M_first(__f), _M_last(__l) {}

  bool operator()(const _CharT& __x) const {
    return find_if(_M_first, _M_last,
                   ::std::priv:: _Eq_char_bound<_Traits>(__x)) == _M_last;
  }
};

template <class _InputIter, class _CharT, class _Traits>
inline _InputIter __str_find_first_of_aux(_InputIter __first1, _InputIter __last1,
                                          const _CharT* __first2, const _CharT* __last2,
                                          _Traits*, const __true_type& )
{ return __find_first_of(__first1, __last1, __first2, __last2); }

template <class _InputIter, class _CharT, class _Traits>
inline _InputIter __str_find_first_of_aux(_InputIter __first1, _InputIter __last1,
                                          const _CharT* __first2, const _CharT* __last2,
                                          _Traits*, const __false_type& )
{ return __find_first_of(__first1, __last1, __first2, __last2, ::std::priv:: _Eq_traits<_Traits>()); }

template <class _InputIter, class _CharT, class _Traits>
inline _InputIter __str_find_first_of(_InputIter __first1, _InputIter __last1,
                                      const _CharT* __first2, const _CharT* __last2,
                                      _Traits* __traits) {

  typedef typename _IsSTLportClass<_Traits>::_Ret _STLportTraits;




  return __str_find_first_of_aux(__first1, __last1, __first2, __last2, __traits, _STLportTraits());
}

template <class _InputIter, class _CharT, class _Traits>
inline _InputIter __str_find_first_not_of_aux3(_InputIter __first1, _InputIter __last1,
                                               const _CharT* __first2, const _CharT* __last2,
                                               _Traits* , const __true_type& __useStrcspnLikeAlgo)
{ return __find_first_of_aux2(__first1, __last1, __first2, __last2, __first2, not1(_Identity<bool>()), __useStrcspnLikeAlgo); }

template <class _InputIter, class _CharT, class _Traits>
inline _InputIter __str_find_first_not_of_aux3(_InputIter __first1, _InputIter __last1,
                                               const _CharT* __first2, const _CharT* __last2,
                                               _Traits* , const __false_type& )
{ return ::std::find_if(__first1, __last1, ::std::priv:: _Not_within_traits<_Traits>(__first2, __last2)); }

template <class _InputIter, class _CharT, class _Tp, class _Traits>
inline _InputIter __str_find_first_not_of_aux2(_InputIter __first1, _InputIter __last1,
                                               const _CharT* __first2, const _CharT* __last2,
                                               _Tp* __pt, _Traits* __traits) {
  typedef typename _IsIntegral<_Tp>::_Ret _IsIntegral;
  typedef typename _IsCharLikeType<_CharT>::_Ret _IsCharLike;
  typedef typename _Land2<_IsIntegral, _IsCharLike>::_Ret _UseStrcspnLikeAlgo;
  return __str_find_first_not_of_aux3(__first1, __last1, __first2, __last2, __traits, _UseStrcspnLikeAlgo());
}

template <class _InputIter, class _CharT, class _Traits>
inline _InputIter __str_find_first_not_of_aux1(_InputIter __first1, _InputIter __last1,
                                               const _CharT* __first2, const _CharT* __last2,
                                               _Traits* __traits, const __true_type& )
{ return __str_find_first_not_of_aux2(__first1, __last1, __first2, __last2,
                                      (typename ::std::iterator_traits< _InputIter >::value_type*)0, __traits); }

template <class _InputIter, class _CharT, class _Traits>
inline _InputIter __str_find_first_not_of_aux1(_InputIter __first1, _InputIter __last1,
                                               const _CharT* __first2, const _CharT* __last2,
                                               _Traits*, const __false_type& )
{ return ::std::find_if(__first1, __last1, ::std::priv:: _Not_within_traits<_Traits>(__first2, __last2)); }

template <class _InputIter, class _CharT, class _Traits>
inline _InputIter __str_find_first_not_of(_InputIter __first1, _InputIter __last1,
                                          const _CharT* __first2, const _CharT* __last2,
                                          _Traits* __traits) {

  typedef typename _IsSTLportClass<_Traits>::_Ret _STLportTraits;




  return __str_find_first_not_of_aux1(__first1, __last1, __first2, __last2, __traits, _STLportTraits());
}





}






template <class _CharT, class _Traits, class _Alloc>
void basic_string<_CharT,_Traits,_Alloc>::reserve(size_type __res_arg) {
  if (__res_arg > max_size())
    this->_M_throw_length_error();

  size_type __n = (max)(__res_arg, size()) + 1;
  if (__n < this->_M_capacity())
    return;

  _M_reserve(__n);
}

template <class _CharT, class _Traits, class _Alloc>
void basic_string<_CharT,_Traits,_Alloc>::_M_reserve(size_type __n) {
  pointer __new_start = this->_M_start_of_storage.allocate(__n, __n);
  pointer __new_finish = ::std::priv:: __ucopy(this->_M_Start(), this->_M_Finish(), __new_start);
  _M_construct_null(__new_finish);
  this->_M_deallocate_block();
  this->_M_reset(__new_start, __new_finish, __new_start + __n);
}

template <class _CharT, class _Traits, class _Alloc>
basic_string<_CharT,_Traits,_Alloc>&
basic_string<_CharT,_Traits,_Alloc>::append(size_type __n, _CharT __c) {
  if (__n > 0) {
    if (__n > max_size() - size())
      this->_M_throw_length_error();
    if (__n >= this->_M_rest())
      _M_reserve(_M_compute_next_size(__n));
    ::std::priv:: __uninitialized_fill_n(this->_M_finish + 1, __n - 1, __c);
    _M_construct_null(this->_M_finish + __n);
    _Traits::assign(*end(), __c);
    this->_M_finish += __n;
  }
  return *this;
}

template <class _CharT, class _Traits, class _Alloc>
basic_string<_CharT, _Traits, _Alloc>&
basic_string<_CharT, _Traits, _Alloc>::_M_append(const _CharT* __first, const _CharT* __last) {
  if (__first != __last) {
    size_type __n = static_cast<size_type>(__last - __first);
    if (__n >= this->_M_rest()) {
      size_type __len = _M_compute_next_size(__n);
      pointer __new_start = this->_M_start_of_storage.allocate(__len, __len);
      pointer __new_finish = ::std::priv:: __ucopy(this->_M_Start(), this->_M_Finish(), __new_start);
      __new_finish = ::std::priv:: __ucopy(__first, __last, __new_finish);
      _M_construct_null(__new_finish);
      this->_M_deallocate_block();
      this->_M_reset(__new_start, __new_finish, __new_start + __len);
    }
    else {
      const _CharT* __f1 = __first;
      ++__f1;
      ::std::priv:: __ucopy(__f1, __last, this->_M_finish + 1);
      _M_construct_null(this->_M_finish + __n);
      _Traits::assign(*end(), *__first);
      this->_M_finish += __n;
    }
  }
  return *this;
}

template <class _CharT, class _Traits, class _Alloc>
basic_string<_CharT,_Traits,_Alloc>&
basic_string<_CharT,_Traits,_Alloc>::assign(size_type __n, _CharT __c) {
  if (__n <= size()) {
    _Traits::assign(this->_M_Start(), __n, __c);
    erase(begin() + __n, end());
  }
  else {
    if (__n < capacity()) {
      _Traits::assign(this->_M_Start(), size(), __c);
      append(__n - size(), __c);
    }
    else {
      _Self __str(__n, __c);
      this->swap(__str);
    }
  }
  return *this;
}

template <class _CharT, class _Traits, class _Alloc>
basic_string<_CharT,_Traits,_Alloc>&
basic_string<_CharT,_Traits,_Alloc>::_M_assign(const _CharT* __f, const _CharT* __l) {
  ptrdiff_t __n = __l - __f;
  if (static_cast<size_type>(__n) <= size()) {
    _Traits::move(this->_M_Start(), __f, __n);
    erase(begin() + __n, end());
  }
  else {
    _Traits::move(this->_M_Start(), __f, size());
    _M_append(__f + size(), __l);
  }
  return *this;
}

template <class _CharT, class _Traits, class _Alloc>
_CharT* basic_string<_CharT,_Traits,_Alloc> ::_M_insert_aux(_CharT* __p,
                                                            _CharT __c) {
  pointer __new_pos = __p;
  if (this->_M_rest() > 1 ) {
    _M_construct_null(this->_M_finish + 1);
    _Traits::move(__p + 1, __p, this->_M_finish - __p);
    _Traits::assign(*__p, __c);
    ++this->_M_finish;
  }
  else {
    size_type __len = _M_compute_next_size(1);
    pointer __new_start = this->_M_start_of_storage.allocate(__len, __len);
    __new_pos = ::std::priv:: __ucopy(this->_M_Start(), __p, __new_start);
    _Traits::assign(*__new_pos, __c);
    pointer __new_finish = __new_pos + 1;
    __new_finish = ::std::priv:: __ucopy(__p, this->_M_finish, __new_finish);
    _M_construct_null(__new_finish);
    this->_M_deallocate_block();
    this->_M_reset(__new_start, __new_finish, __new_start + __len);
  }
  return __new_pos;
}

template <class _CharT, class _Traits, class _Alloc>
void basic_string<_CharT,_Traits,_Alloc>::insert(iterator __pos,
                                                 size_t __n, _CharT __c) {
  if (__n != 0) {
    if (this->_M_rest() > __n) {
      const size_type __elems_after = this->_M_finish - __pos;
      pointer __old_finish = this->_M_finish;
      if (__elems_after >= __n) {
        ::std::priv:: __ucopy((this->_M_finish - __n) + 1, this->_M_finish + 1, this->_M_finish + 1);
        this->_M_finish += __n;
        _Traits::move(__pos + __n, __pos, (__elems_after - __n) + 1);
        _Traits::assign(__pos, __n, __c);
      }
      else {
        ::std::priv:: __uninitialized_fill_n(this->_M_finish + 1, __n - __elems_after - 1, __c);
        this->_M_finish += __n - __elems_after;
        ::std::priv:: __ucopy(__pos, __old_finish + 1, this->_M_finish);
        this->_M_finish += __elems_after;
        _Traits::assign(__pos, __elems_after + 1, __c);
      }
    }
    else {
      size_type __len = _M_compute_next_size(__n);
      pointer __new_start = this->_M_start_of_storage.allocate(__len, __len);
      pointer __new_finish = ::std::priv:: __ucopy(this->_M_Start(), __pos, __new_start);
      __new_finish = ::std::priv:: __uninitialized_fill_n(__new_finish, __n, __c);
      __new_finish = ::std::priv:: __ucopy(__pos, this->_M_finish, __new_finish);
      _M_construct_null(__new_finish);
      this->_M_deallocate_block();
      this->_M_reset(__new_start, __new_finish, __new_start + __len);
    }
  }
}

template <class _CharT, class _Traits, class _Alloc>
void basic_string<_CharT,_Traits,_Alloc>::_M_insert(iterator __pos,
                                                    const _CharT* __first, const _CharT* __last,
                                                    bool __self_ref) {

  if (__first != __last) {
    const size_t __n = __last - __first;
    if (this->_M_rest() > __n) {
      const size_t __elems_after = this->_M_finish - __pos;
      pointer __old_finish = this->_M_finish;
      if (__elems_after >= __n) {
        ::std::priv:: __ucopy((this->_M_finish - __n) + 1, this->_M_finish + 1, this->_M_finish + 1);
        this->_M_finish += __n;
        _Traits::move(__pos + __n, __pos, (__elems_after - __n) + 1);
        if (!__self_ref || __last < __pos) {
          _M_copy(__first, __last, __pos);
        }
        else {

          if (__first >= __pos) {

            __first += __n;
            __last += __n;
            _M_copy(__first, __last, __pos);
          }
          else {

            _M_move(__first, __last, __pos);
          }
        }
      }
      else {
        const_iterator __mid = __first;
        __mid += __elems_after + 1;
        ::std::priv:: __ucopy(__mid, __last, this->_M_finish + 1);
        this->_M_finish += __n - __elems_after;
        ::std::priv:: __ucopy(__pos, __old_finish + 1, this->_M_finish);
        this->_M_finish += __elems_after;
        if (!__self_ref)
          _M_copy(__first, __mid, __pos);
        else
          _M_move(__first, __mid, __pos);
      }
    }
    else {
      size_type __len = _M_compute_next_size(__n);
      pointer __new_start = this->_M_start_of_storage.allocate(__len, __len);
      pointer __new_finish = ::std::priv:: __ucopy(this->_M_Start(), __pos, __new_start);
      __new_finish = ::std::priv:: __ucopy(__first, __last, __new_finish);
      __new_finish = ::std::priv:: __ucopy(__pos, this->_M_finish, __new_finish);
      _M_construct_null(__new_finish);
      this->_M_deallocate_block();
      this->_M_reset(__new_start, __new_finish, __new_start + __len);
    }
  }
}

template <class _CharT, class _Traits, class _Alloc>
basic_string<_CharT,_Traits,_Alloc>&
basic_string<_CharT,_Traits,_Alloc> ::replace(iterator __first, iterator __last,
                                              size_type __n, _CharT __c) {
  size_type __len = (size_type)(__last - __first);

  if (__len >= __n) {
    _Traits::assign(__first, __n, __c);
    erase(__first + __n, __last);
  }
  else {
    _Traits::assign(__first, __len, __c);
    insert(__last, __n - __len, __c);
  }
  return *this;
}

template <class _CharT, class _Traits, class _Alloc>
basic_string<_CharT,_Traits,_Alloc>&
basic_string<_CharT,_Traits,_Alloc> ::_M_replace(iterator __first, iterator __last,
                                                 const _CharT* __f, const _CharT* __l,
                                                 bool __self_ref) {
  const ptrdiff_t __n = __l - __f;
  const difference_type __len = __last - __first;
  if (__len >= __n) {
    if (!__self_ref || __l < __first || __f >= __last)
      _M_copy(__f, __l, __first);
    else
      _M_move(__f, __l, __first);
    erase(__first + __n, __last);
  } else if (!__self_ref || (__f >= __last) || (__l <= __first)) {
    const_iterator __m = __f + __len;
    _M_copy(__f, __m, __first);
    _M_insert(__last, __m, __l, __self_ref );
  } else if (__f < __first) {
    const_iterator __m = __f + __len;

    const difference_type __off_dest = __first - this->begin();
    const difference_type __off_src = __f - this->begin();
    _M_insert(__last, __m, __l, true);
    _Traits::move(begin() + __off_dest, begin() + __off_src, __len);
  } else {
    const_iterator __m = __f + __len;
    _Traits::move(__first, __f, __len);
    _M_insert(__last, __m, __l, true);
  }
  return *this;
}

template <class _CharT, class _Traits, class _Alloc>
typename basic_string<_CharT,_Traits,_Alloc>::size_type basic_string<_CharT,_Traits,_Alloc>::find( const _CharT* __s, size_type __pos,
                                                         size_type __n) const
{
  const size_t __len = size();
  if (__pos >= __len || __pos + __n > __len) {
    if ( __n == 0 && __pos <= __len ) {
      return __pos;
    }
    return npos;
  }

  const_pointer __result =
    ::std::search(this->_M_Start() + __pos, this->_M_Finish(),
                      __s, __s + __n, ::std::priv:: _Eq_traits<_Traits>());
  return __result != this->_M_Finish() ? __result - this->_M_Start() : npos;
}

template <class _CharT, class _Traits, class _Alloc>
typename basic_string<_CharT,_Traits,_Alloc>::size_type basic_string<_CharT,_Traits,_Alloc>::find(_CharT __c, size_type __pos) const
{
  if (__pos >= size()) {
    return npos;
  }

  const_pointer __result =
    ::std::find_if(this->_M_Start() + __pos, this->_M_Finish(),
                       ::std::priv:: _Eq_char_bound<_Traits>(__c));
  return __result != this->_M_Finish() ? __result - this->_M_Start() : npos;
}

template <class _CharT, class _Traits, class _Alloc>
typename basic_string<_CharT,_Traits,_Alloc>::size_type basic_string<_CharT,_Traits,_Alloc>::rfind(const _CharT* __s, size_type __pos,
                                                         size_type __n) const
{
  const size_type __len = size();
  if ( __len < __n ) {
    return npos;
  }
  const_pointer __last = this->_M_Start() + (min)( __len - __n, __pos) + __n;
  if ( __n == 0 ) {
    return __last - this->_M_Start();
  }
  const_pointer __result = ::std::find_end(this->_M_Start(), __last,
                                               __s, __s + __n, ::std::priv:: _Eq_traits<_Traits>());
  return __result != __last ? __result - this->_M_Start() : npos;
}

template <class _CharT, class _Traits, class _Alloc>
typename basic_string<_CharT,_Traits,_Alloc>::size_type basic_string<_CharT,_Traits,_Alloc>::rfind(_CharT __c, size_type __pos) const
{
  const size_type __len = size();
  if ( __len < 1 ) {
    return npos;
  }
  const_iterator __last = begin() + (min)(__len - 1, __pos) + 1;
  const_reverse_iterator __rresult =
    ::std::find_if(const_reverse_iterator(__last), rend(),
                       ::std::priv:: _Eq_char_bound<_Traits>(__c));
  return __rresult != rend() ? (__rresult.base() - 1) - begin() : npos;
}

template <class _CharT, class _Traits, class _Alloc> typename basic_string<_CharT,_Traits,_Alloc>::size_type
basic_string<_CharT,_Traits,_Alloc> ::find_first_of(const _CharT* __s, size_type __pos,
                                                    size_type __n) const {
  if (__pos >= size())
    return npos;
  else {
    const_iterator __result = ::std::priv:: __str_find_first_of(begin() + __pos, end(),
                                                             __s, __s + __n,
                                                             static_cast<_Traits*>(0));
    return __result != end() ? __result - begin() : npos;
  }
}

template <class _CharT, class _Traits, class _Alloc>
 typename basic_string<_CharT,_Traits,_Alloc>::size_type
basic_string<_CharT,_Traits,_Alloc> ::find_last_of(const _CharT* __s, size_type __pos,
                                                   size_type __n) const
{
  const size_type __len = size();
  if ( __len < 1 ) {
    return npos;
  }
  const const_iterator __last = begin() + (min)(__len - 1, __pos) + 1;
  const const_reverse_iterator __rresult =
    ::std::priv:: __str_find_first_of(const_reverse_iterator(__last), rend(),
                                   __s, __s + __n,
                                   static_cast<_Traits*>(0));
  return __rresult != rend() ? (__rresult.base() - 1) - begin() : npos;
}


template <class _CharT, class _Traits, class _Alloc> typename basic_string<_CharT,_Traits,_Alloc>::size_type
basic_string<_CharT,_Traits,_Alloc> ::find_first_not_of(const _CharT* __s, size_type __pos,
                                                        size_type __n) const {
  typedef typename _Traits::char_type _CharType;
  if (__pos >= size())
    return npos;
  else {
    const_pointer __result = ::std::priv:: __str_find_first_not_of(this->_M_Start() + __pos, this->_M_Finish(),
                                                                static_cast<const _CharType*>(__s),
                                                                static_cast<const _CharType*>(__s) + __n,
                                                                static_cast<_Traits*>(0));
    return __result != this->_M_finish ? __result - this->_M_Start() : npos;
  }
}

template <class _CharT, class _Traits, class _Alloc> typename basic_string<_CharT,_Traits,_Alloc>::size_type
basic_string<_CharT,_Traits,_Alloc> ::find_first_not_of(_CharT __c, size_type __pos) const {
  if (1 > size())
    return npos;
  else {
    const_pointer __result = ::std::find_if(this->_M_Start() + __pos, this->_M_Finish(),
                                                ::std::priv:: _Neq_char_bound<_Traits>(__c));
    return __result != this->_M_finish ? __result - this->_M_Start() : npos;
  }
}

template <class _CharT, class _Traits, class _Alloc>
typename basic_string<_CharT,_Traits,_Alloc>::size_type
basic_string<_CharT,_Traits,_Alloc>::find_last_not_of(const _CharT* __s, size_type __pos, size_type __n) const
{
  typedef typename _Traits::char_type _CharType;
  const size_type __len = size();
  if ( __len < 1 ) {
    return npos;
  }
  const_iterator __last = begin() + (min)(__len - 1, __pos) + 1;
  const_reverse_iterator __rlast = const_reverse_iterator(__last);
  const_reverse_iterator __rresult =
    ::std::priv:: __str_find_first_not_of(__rlast, rend(),
                                       static_cast<const _CharType*>(__s),
                                       static_cast<const _CharType*>(__s) + __n,
                                       static_cast<_Traits*>(0));
  return __rresult != rend() ? (__rresult.base() - 1) - begin() : npos;
}

template <class _CharT, class _Traits, class _Alloc>
typename basic_string<_CharT,_Traits,_Alloc>::size_type
basic_string<_CharT, _Traits, _Alloc>::find_last_not_of(_CharT __c, size_type __pos) const
{
  const size_type __len = size();
  if ( __len < 1 ) {
    return npos;
  }
  const_iterator __last = begin() + (min)(__len - 1, __pos) + 1;
  const_reverse_iterator __rlast = const_reverse_iterator(__last);
  const_reverse_iterator __rresult =
    ::std::find_if(__rlast, rend(),
                       ::std::priv:: _Neq_char_bound<_Traits>(__c));
  return __rresult != rend() ? (__rresult.base() - 1) - begin() : npos;
}


namespace priv {


template <class _CharT, class _Traits, class _Alloc>
void _S_string_copy(const basic_string<_CharT,_Traits,_Alloc>& __s,
                               _CharT* __buf, size_t __n) {
  if (__n > 0) {
    __n = (min) (__n - 1, __s.size());
    ::std::copy(__s.begin(), __s.begin() + __n, __buf);
    __buf[__n] = _CharT();
  }
}

}

}

# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_range_errors.h" 1
# 34 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_range_errors.h"
namespace std {
void __attribute__((visibility("default"))) __stl_throw_runtime_error(const char* __msg);
void __attribute__((visibility("default"))) __stl_throw_range_error(const char* __msg);
void __attribute__((visibility("default"))) __stl_throw_out_of_range(const char* __msg);
void __attribute__((visibility("default"))) __stl_throw_length_error(const char* __msg);
void __attribute__((visibility("default"))) __stl_throw_invalid_argument(const char* __msg);
void __attribute__((visibility("default"))) __stl_throw_overflow_error(const char* __msg);
# 50 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_range_errors.h"
}
# 592 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_string.c" 2

namespace std {

namespace priv {


template <class _Tp, class _Alloc>
void _String_base<_Tp,_Alloc>::_M_throw_length_error() const
{ __stl_throw_length_error("basic_string"); }

template <class _Tp, class _Alloc>
void _String_base<_Tp, _Alloc>::_M_throw_out_of_range() const
{ __stl_throw_out_of_range("basic_string"); }

template <class _Tp, class _Alloc>
void _String_base<_Tp, _Alloc>::_M_allocate_block(size_t __n) {
  if ((__n <= (max_size() + 1)) && (__n > 0)) {

    if (__n > _DEFAULT_SIZE) {
      this->_M_start_of_storage._M_data = _M_start_of_storage.allocate(__n, __n);
      this->_M_finish = this->_M_start_of_storage._M_data;
      this->_M_buffers._M_end_of_storage = this->_M_start_of_storage._M_data + __n;
    }





  } else {
    this->_M_throw_length_error();
  }
}


}
# 638 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_string.c"
template <class _CharT, class _Traits, class _Alloc>
basic_string<_CharT, _Traits, _Alloc>::basic_string(const _CharT* __s,
                                                    const allocator_type& __a)
  : ::std::priv:: _String_base<_CharT,_Alloc>(__a) {
 
  _M_range_initialize(__s, __s + traits_type::length(__s));
}

template <class _CharT, class _Traits, class _Alloc>
basic_string<_CharT, _Traits, _Alloc>::basic_string(const basic_string<_CharT, _Traits, _Alloc> & __s)
  : ::std::priv:: _String_base<_CharT,_Alloc>(__s.get_allocator())
{ _M_range_initialize(__s._M_Start(), __s._M_Finish()); }







template <class _CharT, class _Traits, class _Alloc>
const size_t basic_string<_CharT, _Traits, _Alloc>::npos;


}
# 1174 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_string.h" 2
# 30 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/string" 2



# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_string_hash.h" 1
# 23 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_string_hash.h"
# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_hash_fun.h" 1
# 38 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_hash_fun.h"
namespace std {

template <class _Key> struct hash { };

namespace priv {

inline size_t __stl_hash_string(const char* __s) {
 
  unsigned long __h = 0;
  for ( ; *__s; ++__s)
    __h = 5*__h + *__s;

  return size_t(__h);
}

}

template<>
struct hash<char*> {
  size_t operator()(const char* __s) const {
   
    return ::std::priv:: __stl_hash_string(__s);
  }
};

template<>
struct hash<const char*> {
  size_t operator()(const char* __s) const {
   
    return ::std::priv:: __stl_hash_string(__s);
  }
};

template<> struct hash<char> {
  size_t operator()(char __x) const { return __x; }
};
template<> struct hash<unsigned char> {
  size_t operator()(unsigned char __x) const { return __x; }
};

template<> struct hash<signed char> {
  size_t operator()(unsigned char __x) const { return __x; }
};

template<> struct hash<short> {
  size_t operator()(short __x) const { return __x; }
};
template<> struct hash<unsigned short> {
  size_t operator()(unsigned short __x) const { return __x; }
};
template<> struct hash<int> {
  size_t operator()(int __x) const { return __x; }
};


template<> struct hash<unsigned int> {
  size_t operator()(unsigned int __x) const { return __x; }
};
# 108 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_hash_fun.h"
template<> struct hash<long> {
  size_t operator()(long __x) const { return __x; }
};
template<> struct hash<unsigned long> {
  size_t operator()(unsigned long __x) const { return __x; }
};


template<> struct hash<long long> {
  size_t operator()(long long x) const { return (size_t)x; }
};
template<> struct hash<unsigned long long> {
  size_t operator()(unsigned long long x) const { return (size_t)x; }
};


template<>
struct hash<void *>
{
    union __vp {
        size_t s;
        void *p;
    };

    size_t operator()(void *__x) const
      {
        __vp vp;
        vp.p = __x;
        return vp.s;
      }
};

}
# 24 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_string_hash.h" 2






namespace std {

template <class _CharT, class _Traits, class _Alloc>
inline size_t
__stl_string_hash(const basic_string<_CharT,_Traits,_Alloc>& __s) {
  unsigned long __h = 0;
  size_t __len = __s.size();
  const _CharT* __data = __s.data();
  for ( size_t __i = 0; __i < __len; ++__i)
    __h = (__h << 2) + __h + __data[__i];
  return size_t(__h);
}



template <class _CharT, class _Traits, class _Alloc>
struct hash<basic_string<_CharT,_Traits,_Alloc> > {
  size_t operator()(const basic_string<_CharT,_Traits,_Alloc>& __s) const
    { return __stl_string_hash(__s); }
};
# 69 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_string_hash.h"
}
# 34 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/string" 2



# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_string_io.h" 1
# 23 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_string_io.h"
# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_ostream.h" 1
# 24 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_ostream.h"
# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_ios.h" 1
# 23 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_ios.h"
# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_ios_base.h" 1
# 22 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_ios_base.h"
# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_stdexcept_base.h" 1
# 25 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_stdexcept_base.h"
# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_exception.h" 1
# 158 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_exception.h"
namespace std {


class __attribute__((visibility("default"))) exception {
public:

  exception() ;
  virtual ~exception() ;
  virtual const char* what() const ;





};


class __attribute__((visibility("default"))) bad_exception : public exception {
public:

  bad_exception() ;
  ~bad_exception() ;
  const char* what() const ;





};


class __Named_exception;
}
# 26 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_stdexcept_base.h" 2
# 40 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_stdexcept_base.h"
namespace std {
# 65 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_stdexcept_base.h"
class __attribute__((visibility("default"))) __Named_exception : public exception {
public:
  __Named_exception(const string& __str);
  __Named_exception(const __Named_exception&);
  __Named_exception& operator = (const __Named_exception&);

  const char* what() const ;
  ~__Named_exception() ;

private:
  enum { _S_bufsize = 256 };
  char _M_static_name[_S_bufsize];
  char *_M_name;
};
# 90 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_stdexcept_base.h"
}
# 23 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_ios_base.h" 2







# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_locale.h" 1
# 35 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_locale.h"
# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_threads.h" 1
# 82 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_threads.h"
# 1 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/pthread.h" 1
# 33 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/pthread.h"
# 1 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/sched.h" 1
# 34 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/sched.h"
extern "C" {






struct sched_param {
    int sched_priority;
};

extern int sched_setscheduler(pid_t, int, const struct sched_param *);
extern int sched_getscheduler(pid_t);
extern int sched_yield(void);
extern int sched_get_priority_max(int policy);
extern int sched_get_priority_min(int policy);
extern int sched_setparam(pid_t, const struct sched_param *);
extern int sched_getparam(pid_t, struct sched_param *);
extern int sched_rr_get_interval(pid_t pid, struct timespec *tp);

}
# 34 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/pthread.h" 2






typedef struct
{
    int volatile value;
} pthread_mutex_t;





enum {
    PTHREAD_MUTEX_NORMAL = 0,
    PTHREAD_MUTEX_RECURSIVE = 1,
    PTHREAD_MUTEX_ERRORCHECK = 2,

    PTHREAD_MUTEX_ERRORCHECK_NP = PTHREAD_MUTEX_ERRORCHECK,
    PTHREAD_MUTEX_RECURSIVE_NP = PTHREAD_MUTEX_RECURSIVE,

    PTHREAD_MUTEX_DEFAULT = PTHREAD_MUTEX_NORMAL
};



typedef struct
{
    int volatile value;
} pthread_cond_t;

typedef struct
{
    uint32_t flags;
    void * stack_base;
    size_t stack_size;
    size_t guard_size;
    int32_t sched_policy;
    int32_t sched_priority;
} pthread_attr_t;

typedef long pthread_mutexattr_t;
typedef long pthread_condattr_t;

typedef int pthread_key_t;
typedef long pthread_t;

typedef volatile int pthread_once_t;
# 107 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/pthread.h"
extern "C" {


int pthread_attr_init(pthread_attr_t * attr);
int pthread_attr_destroy(pthread_attr_t * attr);

int pthread_attr_setdetachstate(pthread_attr_t * attr, int state);
int pthread_attr_getdetachstate(pthread_attr_t const * attr, int * state);

int pthread_attr_setschedpolicy(pthread_attr_t * attr, int policy);
int pthread_attr_getschedpolicy(pthread_attr_t const * attr, int * policy);

int pthread_attr_setschedparam(pthread_attr_t * attr, struct sched_param const * param);
int pthread_attr_getschedparam(pthread_attr_t const * attr, struct sched_param * param);

int pthread_attr_setstacksize(pthread_attr_t * attr, size_t stack_size);
int pthread_attr_getstacksize(pthread_attr_t const * attr, size_t * stack_size);

int pthread_attr_setstackaddr(pthread_attr_t * attr, void * stackaddr);
int pthread_attr_getstackaddr(pthread_attr_t const * attr, void ** stackaddr);

int pthread_attr_setstack(pthread_attr_t * attr, void * stackaddr, size_t stack_size);
int pthread_attr_getstack(pthread_attr_t const * attr, void ** stackaddr, size_t * stack_size);

int pthread_attr_setguardsize(pthread_attr_t * attr, size_t guard_size);
int pthread_attr_getguardsize(pthread_attr_t const * attr, size_t * guard_size);

int pthread_attr_setscope(pthread_attr_t *attr, int scope);
int pthread_attr_getscope(pthread_attr_t const *attr);

int pthread_getattr_np(pthread_t thid, pthread_attr_t * attr);

int pthread_create(pthread_t *thread, pthread_attr_t const * attr,
                   void *(*start_routine)(void *), void * arg);
void pthread_exit(void * retval);
int pthread_join(pthread_t thid, void ** ret_val);
int pthread_detach(pthread_t thid);

pthread_t pthread_self(void);
int pthread_equal(pthread_t one, pthread_t two);

int pthread_getschedparam(pthread_t thid, int * policy,
                          struct sched_param * param);
int pthread_setschedparam(pthread_t thid, int poilcy,
                          struct sched_param const * param);

int pthread_mutexattr_init(pthread_mutexattr_t *attr);
int pthread_mutexattr_destroy(pthread_mutexattr_t *attr);
int pthread_mutexattr_gettype(const pthread_mutexattr_t *attr, int *type);
int pthread_mutexattr_settype(pthread_mutexattr_t *attr, int type);
int pthread_mutexattr_setpshared(pthread_mutexattr_t *attr, int pshared);
int pthread_mutexattr_getpshared(pthread_mutexattr_t *attr, int *pshared);

int pthread_mutex_init(pthread_mutex_t *mutex,
                       const pthread_mutexattr_t *attr);
int pthread_mutex_destroy(pthread_mutex_t *mutex);
int pthread_mutex_lock(pthread_mutex_t *mutex);
int pthread_mutex_unlock(pthread_mutex_t *mutex);
int pthread_mutex_trylock(pthread_mutex_t *mutex);
int pthread_mutex_timedlock(pthread_mutex_t *mutex, struct timespec* ts);

int pthread_cond_init(pthread_cond_t *cond,
                      const pthread_condattr_t *attr);
int pthread_cond_destroy(pthread_cond_t *cond);
int pthread_cond_broadcast(pthread_cond_t *cond);
int pthread_cond_signal(pthread_cond_t *cond);
int pthread_cond_wait(pthread_cond_t *cond, pthread_mutex_t *mutex);
int pthread_cond_timedwait(pthread_cond_t *cond,
                           pthread_mutex_t * mutex,
                           const struct timespec *abstime);





int pthread_cond_timedwait_monotonic(pthread_cond_t *cond,
                                     pthread_mutex_t *mutex,
                                     const struct timespec *abstime);

int pthread_cond_timeout_np(pthread_cond_t *cond,
                            pthread_mutex_t * mutex,
                            unsigned msecs);

int pthread_key_create(pthread_key_t *key, void (*destructor_function)(void *));
int pthread_key_delete (pthread_key_t);
int pthread_setspecific(pthread_key_t key, const void *value);
void *pthread_getspecific(pthread_key_t key);

int pthread_kill(pthread_t tid, int sig);
int pthread_sigmask(int how, const sigset_t *set, sigset_t *oset);

int pthread_getcpuclockid(pthread_t tid, clockid_t *clockid);

int pthread_once(pthread_once_t *once_control, void (*init_routine)(void));

typedef void (*__pthread_cleanup_func_t)(void*);

typedef struct __pthread_cleanup_t {
    struct __pthread_cleanup_t* __cleanup_prev;
    __pthread_cleanup_func_t __cleanup_routine;
    void* __cleanup_arg;
} __pthread_cleanup_t;

extern void __pthread_cleanup_push(__pthread_cleanup_t* c,
                                    __pthread_cleanup_func_t routine,
                                    void* arg);

extern void __pthread_cleanup_pop(__pthread_cleanup_t* c,
                                   int execute);
# 235 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/pthread.h"
}
# 83 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_threads.h" 2
# 127 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_threads.h"
typedef size_t __stl_atomic_t;
# 245 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_threads.h"
namespace std {




template <int __inst>
struct _STLP_mutex_spin {
  enum { __low_max = 30, __high_max = 1000 };

  static unsigned __max;
  static unsigned __last;
  static void _M_do_lock(volatile __stl_atomic_t* __lock);
  static void _S_nsec_sleep(int __log_nsec, unsigned int& __iteration);
};
# 275 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_threads.h"
struct __attribute__((visibility("default"))) _STLP_mutex_base {
# 338 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_threads.h"
  pthread_mutex_t _M_lock;
  inline void _M_initialize()
  { pthread_mutex_init(&_M_lock,0); }
  inline void _M_destroy()
  { pthread_mutex_destroy(&_M_lock); }
  inline void _M_acquire_lock() {



    pthread_mutex_lock(&_M_lock);
  }
  inline void _M_release_lock() { pthread_mutex_unlock(&_M_lock); }
# 403 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_threads.h"
};




class __attribute__((visibility("default"))) _STLP_mutex : public _STLP_mutex_base {
  public:
    inline _STLP_mutex () { _M_initialize(); }
    inline ~_STLP_mutex () { _M_destroy(); }
  private:
    _STLP_mutex(const _STLP_mutex&);
    void operator=(const _STLP_mutex&);
};







struct __attribute__((visibility("default"))) _STLP_auto_lock {
  _STLP_auto_lock(_STLP_mutex_base& __lock) : _M_lock(__lock)
  { _M_lock._M_acquire_lock(); }
  ~_STLP_auto_lock()
  { _M_lock._M_release_lock(); }

private:
  _STLP_mutex_base& _M_lock;
  void operator=(const _STLP_auto_lock&);
  _STLP_auto_lock(const _STLP_auto_lock&);
};







class __attribute__((visibility("default"))) _Refcount_Base {




  volatile __stl_atomic_t _M_ref_count;





  _STLP_mutex _M_mutex;


  public:

  _Refcount_Base(__stl_atomic_t __n) : _M_ref_count(__n) {}
# 469 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_threads.h"
  __stl_atomic_t _M_incr() {
    _STLP_auto_lock l(_M_mutex);
    return ++_M_ref_count;
  }
  __stl_atomic_t _M_decr() {
    _STLP_auto_lock l(_M_mutex);
    return --_M_ref_count;
  }





};
# 496 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_threads.h"
template <int __use_ptr_atomic_swap>
class _Atomic_swap_struct {
public:





  static _STLP_mutex_base _S_swap_lock;


  static __stl_atomic_t _S_swap(volatile __stl_atomic_t* __p, __stl_atomic_t __q) {




  _S_swap_lock._M_acquire_lock();
  __stl_atomic_t __result = *__p;
  *__p = __q;
  _S_swap_lock._M_release_lock();
  return __result;
# 526 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_threads.h"
  }

  static void* _S_swap_ptr(void* volatile* __p, void* __q) {
# 538 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_threads.h"
  _S_swap_lock._M_acquire_lock();
  void *__result = *__p;
  *__p = __q;
  _S_swap_lock._M_release_lock();
  return __result;
# 552 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_threads.h"
  }
};

template<>
class _Atomic_swap_struct<0> {
public:





  static _STLP_mutex_base _S_swap_lock;


  static __stl_atomic_t _S_swap(volatile __stl_atomic_t* __p, __stl_atomic_t __q) {
# 575 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_threads.h"
  _S_swap_lock._M_acquire_lock();
  __stl_atomic_t __result = *__p;
  *__p = __q;
  _S_swap_lock._M_release_lock();
  return __result;
# 589 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_threads.h"
  }

  static void* _S_swap_ptr(void* volatile* __p, void* __q) {
# 601 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_threads.h"
  _S_swap_lock._M_acquire_lock();
  void *__result = *__p;
  *__p = __q;
  _S_swap_lock._M_release_lock();
  return __result;
# 615 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_threads.h"
  }
};






inline __stl_atomic_t _Atomic_swap(volatile __stl_atomic_t * __p, __stl_atomic_t __q) {
  const int __use_ptr_atomic_swap = sizeof(__stl_atomic_t) == sizeof(void*);
  return _Atomic_swap_struct<__use_ptr_atomic_swap>::_S_swap(__p, __q);
}

inline void* _Atomic_swap_ptr(void* volatile* __p, void* __q) {
  const int __use_ptr_atomic_swap = sizeof(__stl_atomic_t) == sizeof(void*);
  return _Atomic_swap_struct<__use_ptr_atomic_swap>::_S_swap_ptr(__p, __q);
}
# 677 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_threads.h"
}


# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_threads.c" 1
# 39 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_threads.c"
# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_ctime.h" 1
# 32 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_ctime.h"
namespace std {
using ::size_t;
using ::clock_t;
using ::time_t;
using ::tm;

using ::clock;
using ::asctime;
using ::ctime;
using ::gmtime;


using ::difftime;

using ::mktime;
using ::localtime;
using ::strftime;
using ::time;

}
# 40 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_threads.c" 2







namespace std {


template<int __32bits>
_STLP_mutex_base
_Atomic_swap_struct<__32bits>::_S_swap_lock ;




template <int __inst>
unsigned _STLP_mutex_spin<__inst>::__max = _STLP_mutex_spin<__inst>::__low_max;

template <int __inst>
unsigned _STLP_mutex_spin<__inst>::__last = 0;
# 74 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_threads.c"
template <int __inst>
void
_STLP_mutex_spin<__inst>::_S_nsec_sleep(int __log_nsec, unsigned int& __iteration) {
# 108 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_threads.c"
  timespec __ts;

  __ts.tv_sec = 0;
  __ts.tv_nsec = 1 << __log_nsec;
  nanosleep(&__ts, 0);

}

template <int __inst>
void
_STLP_mutex_spin<__inst>::_M_do_lock(volatile __stl_atomic_t* __lock) {
# 157 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_threads.c"
}


}
# 681 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_threads.h" 2
# 36 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_locale.h" 2
# 44 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_locale.h"
# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_facets_fwd.h" 1






namespace std {




template <class _CharT, class _InputIter = istreambuf_iterator<_CharT, char_traits<_CharT> > >

class money_get;




template <class _CharT, class _OutputIter = ostreambuf_iterator<_CharT, char_traits<_CharT> > >

class money_put;




template <class _CharT, class _InputIter = istreambuf_iterator<_CharT, char_traits<_CharT> > >

class num_get;




template <class _CharT, class _OutputIter = ostreambuf_iterator<_CharT, char_traits<_CharT> > >

class num_put;




template <class _Ch, class _InIt = istreambuf_iterator<_Ch, char_traits<_Ch> > >

class time_get;




template <class _Ch, class _OutIt = ostreambuf_iterator<_Ch, char_traits<_Ch> > >

class time_put;

}
# 45 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_locale.h" 2

namespace std {

class _Locale_impl;
class locale;

template <class _CharT, class _Traits, class _Alloc>
bool __locale_do_operator_call(const locale& __loc,
                               const basic_string<_CharT, _Traits, _Alloc>& __x,
                               const basic_string<_CharT, _Traits, _Alloc>& __y);

__attribute__((visibility("default"))) _Locale_impl * _get_Locale_impl( _Locale_impl *locimpl );
__attribute__((visibility("default"))) _Locale_impl * _copy_Nameless_Locale_impl( _Locale_impl *locimpl );

namespace priv {

template <class _Facet>
bool _HasFacet(const locale& __loc, const _Facet* __facet) ;

template <class _Facet>
_Facet* _UseFacet(const locale& __loc, const _Facet* __facet);

template <class _Facet>
void _InsertFacet(locale& __loc, _Facet* __facet);

}






class __attribute__((visibility("default"))) locale {
public:

  class __attribute__((visibility("default"))) facet : protected _Refcount_Base {
  protected:




    explicit facet(size_t __init_count = 0) : _Refcount_Base( __init_count == 0 ? 0 : 1 ) {}
    virtual ~facet();
    friend class locale;
    friend class _Locale_impl;
    friend facet * _get_facet( facet * );
    friend void _release_facet( facet *& );

  private:
    facet(const facet& ) ;
    void operator=(const facet&);
  };




  class

  __attribute__((visibility("default"))) id {
  public:
    size_t _M_index;
    static size_t _S_max;
  };

  typedef int category;
  static const category none = 0x000;
  static const category collate = 0x010;
  static const category ctype = 0x020;
  static const category monetary = 0x040;
  static const category numeric = 0x100;
  static const category time = 0x200;
  static const category messages = 0x400;
  static const category all = collate | ctype | monetary | numeric | time | messages;


  locale() ;
  locale(const locale&) ;
  explicit locale(const char *);
  locale(const locale&, const char*, category);


  template <class _Facet>
  locale(const locale& __loc, _Facet* __f) {
    if ( __f != 0 ) {
      this->_M_impl = _get_Locale_impl( _copy_Nameless_Locale_impl( __loc._M_impl ) );
      ::std::priv:: _InsertFacet(*this, __f);
    } else {
      this->_M_impl = _get_Locale_impl( __loc._M_impl );
    }
  }


protected:

  locale(_Locale_impl*);

public:
  locale(const locale&, const locale&, category);
  const locale& operator=(const locale&) ;




   ~locale() ;

public:


  template <class _Facet>
  locale combine(const locale& __loc) const {
    _Facet *__facet = 0;
    if (!::std::priv:: _HasFacet(__loc, __facet))
      _M_throw_on_combine_error(__loc.name());

    return locale(*this, ::std::priv:: _UseFacet(__loc, __facet));
  }



  string name() const;

  bool operator==(const locale&) const;
  bool operator!=(const locale&) const;







  template <class _CharT, class _Traits, class _Alloc>
  bool operator()(const basic_string<_CharT, _Traits, _Alloc>& __x,
                  const basic_string<_CharT, _Traits, _Alloc>& __y) const
  { return __locale_do_operator_call(*this, __x, __y); }




  static locale global(const locale&);



  static const locale& classic();


  facet* _M_get_facet(const id&) const;

  facet* _M_use_facet(const id&) const;
  static void _M_throw_on_combine_error(const string& name);
  static void _M_throw_on_null_name();
  static void _M_throw_on_creation_failure(int __err_code,
                                                                            const char* name, const char* facet);


  void _M_insert(facet* __f, id& __id);


  friend class _Locale_impl;

protected:
  _Locale_impl* _M_impl;
  _Locale_impl* _M_get_impl() const { return _M_impl; }
};
# 287 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_locale.h"
template <class _Facet>
inline const _Facet&



use_facet(const locale& __loc)

{
  _Facet *__facet = 0;
  return *(::std::priv:: _UseFacet(__loc, __facet));
}

template <class _Facet>






inline bool has_facet(const locale& __loc)

{
  _Facet *__facet = 0;
  return ::std::priv:: _HasFacet(__loc, __facet);
}





namespace priv {







template <class _Facet>
inline locale::id& _GetFacetId(const _Facet*)
{ return _Facet::id; }

__attribute__((visibility("default"))) locale::id& _GetFacetId(const money_get<char, istreambuf_iterator<char, char_traits<char> > >*);
__attribute__((visibility("default"))) locale::id& _GetFacetId(const money_put<char, ostreambuf_iterator<char, char_traits<char> > >*);
__attribute__((visibility("default"))) locale::id& _GetFacetId(const num_get<char, istreambuf_iterator<char, char_traits<char> > >*);
__attribute__((visibility("default"))) locale::id& _GetFacetId(const num_put<char, ostreambuf_iterator<char, char_traits<char> > >*);
__attribute__((visibility("default"))) locale::id& _GetFacetId(const time_get<char, istreambuf_iterator<char, char_traits<char> > >*);
__attribute__((visibility("default"))) locale::id& _GetFacetId(const time_put<char, ostreambuf_iterator<char, char_traits<char> > >*);


__attribute__((visibility("default"))) locale::id& _GetFacetId(const money_get<wchar_t, istreambuf_iterator<wchar_t, char_traits<wchar_t> > >*);
__attribute__((visibility("default"))) locale::id& _GetFacetId(const money_put<wchar_t, ostreambuf_iterator<wchar_t, char_traits<wchar_t> > >*);
__attribute__((visibility("default"))) locale::id& _GetFacetId(const num_get<wchar_t, istreambuf_iterator<wchar_t, char_traits<wchar_t> > >*);
__attribute__((visibility("default"))) locale::id& _GetFacetId(const num_put<wchar_t, ostreambuf_iterator<wchar_t, char_traits<wchar_t> > >*);
__attribute__((visibility("default"))) locale::id& _GetFacetId(const time_get<wchar_t, istreambuf_iterator<wchar_t, char_traits<wchar_t> > >*);
__attribute__((visibility("default"))) locale::id& _GetFacetId(const time_put<wchar_t, ostreambuf_iterator<wchar_t, char_traits<wchar_t> > >*);


template <class _Facet>
inline bool _HasFacet(const locale& __loc, const _Facet* __facet)
{ return (__loc._M_get_facet(_GetFacetId(__facet)) != 0); }

template <class _Facet>
inline _Facet* _UseFacet(const locale& __loc, const _Facet* __facet)
{ return static_cast<_Facet*>(__loc._M_use_facet(_GetFacetId(__facet))); }

template <class _Facet>
inline void _InsertFacet(locale& __loc, _Facet* __facet)
{ __loc._M_insert(__facet, _GetFacetId(__facet)); }

}

}
# 31 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_ios_base.h" 2






namespace std {
# 48 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_ios_base.h"
class __attribute__((visibility("default"))) ios_base {
public:

  class __attribute__((visibility("default"))) failure : public __Named_exception {
  public:
    explicit failure(const string&);
    virtual ~failure() ;
  };

  typedef int fmtflags;
  typedef int iostate;
  typedef int openmode;
  typedef int seekdir;


  typedef fmtflags fmt_flags;



  static const int left = 0x0001;
  static const int right = 0x0002;
  static const int internal = 0x0004;
  static const int dec = 0x0008;
  static const int hex = 0x0010;
  static const int oct = 0x0020;
  static const int fixed = 0x0040;
  static const int scientific = 0x0080;
  static const int boolalpha = 0x0100;
  static const int showbase = 0x0200;
  static const int showpoint = 0x0400;
  static const int showpos = 0x0800;
  static const int skipws = 0x1000;
  static const int unitbuf = 0x2000;
  static const int uppercase = 0x4000;
  static const int adjustfield = left | right | internal;
  static const int basefield = dec | hex | oct;
  static const int floatfield = scientific | fixed;


  static const int goodbit = 0x00;
  static const int badbit = 0x01;
  static const int eofbit = 0x02;
  static const int failbit = 0x04;


  static const int __default_mode = 0x0;
  static const int app = 0x01;
  static const int ate = 0x02;
  static const int binary = 0x04;
  static const int in = 0x08;
  static const int out = 0x10;
  static const int trunc = 0x20;


  static const int beg = 0x01;
  static const int cur = 0x02;
  static const int end = 0x04;

public:
  fmtflags flags() const { return _M_fmtflags; }
  fmtflags flags(fmtflags __flags) {
    fmtflags __tmp = _M_fmtflags;
    _M_fmtflags = __flags;
    return __tmp;
  }

  fmtflags setf(fmtflags __flag) {
    fmtflags __tmp = _M_fmtflags;
    _M_fmtflags |= __flag;
    return __tmp;
  }
  fmtflags setf(fmtflags __flag, fmtflags __mask) {
    fmtflags __tmp = _M_fmtflags;
    _M_fmtflags &= ~__mask;
    _M_fmtflags |= __flag & __mask;
    return __tmp;
  }
  void unsetf(fmtflags __mask) { _M_fmtflags &= ~__mask; }

  streamsize precision() const { return _M_precision; }
  streamsize precision(streamsize __newprecision) {
    streamsize __tmp = _M_precision;
    _M_precision = __newprecision;
    return __tmp;
  }

  streamsize width() const { return _M_width; }
  streamsize width(streamsize __newwidth) {
    streamsize __tmp = _M_width;
    _M_width = __newwidth;
    return __tmp;
  }

public:
  locale imbue(const locale&);
  locale getloc() const { return _M_locale; }

public:
  static int xalloc();
  long& iword(int __index);
  void*& pword(int __index);

public:
  virtual ~ios_base();

public:
  enum event { erase_event, imbue_event, copyfmt_event };
  typedef void (*event_callback)(event, ios_base&, int __index);
  void register_callback(event_callback __fn, int __index);

public:


  static bool sync_with_stdio(bool __sync = true);

public:



  operator void*() const { return !fail() ? (void*) const_cast<ios_base*>(this) : (void*) 0; }
  bool operator!() const { return fail(); }

  iostate rdstate() const { return _M_iostate; }

  bool good() const { return _M_iostate == 0; }
  bool eof() const { return (_M_iostate & eofbit) != 0; }
  bool fail() const { return (_M_iostate & (failbit | badbit)) != 0; }
  bool bad() const { return (_M_iostate & badbit) != 0; }

protected:





  void _M_copy_state(const ios_base& __x);

  void _M_setstate_nothrow(iostate __state) { _M_iostate |= __state; }
  void _M_clear_nothrow(iostate __state) { _M_iostate = __state; }
  iostate _M_get_exception_mask() const { return _M_exception_mask; }
  void _M_set_exception_mask(iostate __mask) { _M_exception_mask = __mask; }
  void _M_check_exception_mask() {
    if (_M_iostate & _M_exception_mask)
      _M_throw_failure();
  }

  void _M_invoke_callbacks(event);
  void _M_throw_failure();

  ios_base();

protected:
  static void _S_initialize();
  static void _S_uninitialize();
  static bool _S_is_synced;

private:

  ios_base(const ios_base&);
  void operator=(const ios_base&);

private:

  fmtflags _M_fmtflags;
  iostate _M_iostate;
  openmode _M_openmode;
  seekdir _M_seekdir;
  iostate _M_exception_mask;

  streamsize _M_precision;
  streamsize _M_width;

  locale _M_locale;

  pair<event_callback, int>* _M_callbacks;
  size_t _M_num_callbacks;
  size_t _M_callback_index;


  long* _M_iwords;
  size_t _M_num_iwords;

  void** _M_pwords;
  size_t _M_num_pwords;

public:





  class __attribute__((visibility("default"))) Init
  {
    public:
      Init();
      ~Init();
    private:
      static long _S_count;
      friend class ios_base;
  };

  friend class Init;

public:


  typedef iostate io_state;
  typedef openmode open_mode;
  typedef seekdir seek_dir;
  typedef ::std::streamoff streamoff;
  typedef ::std::streampos streampos;

};






inline ios_base& boolalpha(ios_base& __s)
  { __s.setf(ios_base::boolalpha); return __s;}

inline ios_base& noboolalpha(ios_base& __s)
  { __s.unsetf(ios_base::boolalpha); return __s;}

inline ios_base& showbase(ios_base& __s)
  { __s.setf(ios_base::showbase); return __s;}

inline ios_base& noshowbase(ios_base& __s)
  { __s.unsetf(ios_base::showbase); return __s;}

inline ios_base& showpoint(ios_base& __s)
  { __s.setf(ios_base::showpoint); return __s;}

inline ios_base& noshowpoint(ios_base& __s)
  { __s.unsetf(ios_base::showpoint); return __s;}

inline ios_base& showpos(ios_base& __s)
  { __s.setf(ios_base::showpos); return __s;}

inline ios_base& noshowpos(ios_base& __s)
  { __s.unsetf(ios_base::showpos); return __s;}

inline ios_base& skipws(ios_base& __s)
  { __s.setf(ios_base::skipws); return __s;}

inline ios_base& noskipws(ios_base& __s)
  { __s.unsetf(ios_base::skipws); return __s;}

inline ios_base& uppercase(ios_base& __s)
  { __s.setf(ios_base::uppercase); return __s;}

inline ios_base& nouppercase(ios_base& __s)
  { __s.unsetf(ios_base::uppercase); return __s;}

inline ios_base& unitbuf(ios_base& __s)
  { __s.setf(ios_base::unitbuf); return __s;}

inline ios_base& nounitbuf(ios_base& __s)
  { __s.unsetf(ios_base::unitbuf); return __s;}



inline ios_base& internal(ios_base& __s)
  { __s.setf(ios_base::internal, ios_base::adjustfield); return __s; }

inline ios_base& left(ios_base& __s)
  { __s.setf(ios_base::left, ios_base::adjustfield); return __s; }

inline ios_base& right(ios_base& __s)
  { __s.setf(ios_base::right, ios_base::adjustfield); return __s; }


inline ios_base& dec(ios_base& __s)
  { __s.setf(ios_base::dec, ios_base::basefield); return __s; }

inline ios_base& hex(ios_base& __s)
  { __s.setf(ios_base::hex, ios_base::basefield); return __s; }

inline ios_base& oct(ios_base& __s)
  { __s.setf(ios_base::oct, ios_base::basefield); return __s; }



inline ios_base& fixed(ios_base& __s)
  { __s.setf(ios_base::fixed, ios_base::floatfield); return __s; }

inline ios_base& scientific(ios_base& __s)
  { __s.setf(ios_base::scientific, ios_base::floatfield); return __s; }

}
# 24 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_ios.h" 2



# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_ctype.h" 1
# 26 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_ctype.h"
# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/c_locale.h" 1
# 88 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/c_locale.h"
struct _Locale_ctype;
struct _Locale_codecvt;
struct _Locale_numeric;
struct _Locale_time;
struct _Locale_collate;
struct _Locale_monetary;
struct _Locale_messages;
# 27 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_ctype.h" 2
# 37 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_ctype.h"
namespace std {

class __attribute__((visibility("default"))) ctype_base {
public:
  enum mask {
    space = 0x0001,
    print = 0x0002,
    cntrl = 0x0004,
    upper = 0x0008,
    lower = 0x0010,
    alpha = 0x0020,
    digit = 0x0040,
    punct = 0x0080,
    xdigit = 0x0100,
    alnum = alpha | digit,
    graph = alnum | punct
  };
};



template <class charT> class ctype {};
template <class charT> class ctype_byname {};



template<>
class __attribute__((visibility("default"))) ctype<char> : public locale::facet, public ctype_base {





    friend class ctype<wchar_t>;


public:

  typedef char char_type;

  explicit ctype(const mask* __tab = 0, bool __del = false, size_t __refs = 0);
  bool is(mask __m, char __c) const
  { return ((*(_M_ctype_table+(unsigned char)__c)) & __m) != 0; }

  const char* is(const char* __low, const char* __high, mask* __vec) const {
    for (const char* __p = __low;__p != __high; ++__p, ++__vec) {
      *__vec = _M_ctype_table[(unsigned char)*__p];
    }
    return __high;
  }

  const char* scan_is(mask __m, const char* __low, const char* __high) const;
  const char* scan_not(mask __m, const char* __low, const char* __high) const;

  char (toupper)(char __c) const { return do_toupper(__c); }
  const char* (toupper)(char* __low, const char* __high) const {
    return do_toupper(__low, __high);
  }

  char (tolower)(char __c) const { return do_tolower(__c); }
  const char* (tolower)(char* __low, const char* __high) const {
    return do_tolower(__low, __high);
  }

  char widen(char __c) const { return do_widen(__c); }
  const char* widen(const char* __low, const char* __high, char* __to) const {
    return do_widen(__low, __high, __to);
  }

  char narrow(char __c, char __dfault) const {
    return do_narrow(__c, __dfault);
  }
  const char* narrow(const char* __low, const char* __high,
                     char __dfault, char* __to) const {
    return do_narrow(__low, __high, __dfault, __to);
  }

  static locale::id id;
  static const size_t table_size = 256;

protected:
  const mask* table() const { return _M_ctype_table; }
  static const mask* classic_table() ;

  ~ctype();

  virtual char do_toupper(char __c) const;
  virtual char do_tolower(char __c) const;
  virtual const char* do_toupper(char* __low, const char* __high) const;
  virtual const char* do_tolower(char* __low, const char* __high) const;
  virtual char do_widen(char __c) const;
  virtual const char* do_widen(const char* __low, const char* __high,
                               char* __to) const;
  virtual char do_narrow(char __c, char ) const;
  virtual const char* do_narrow(const char* __low, const char* __high,
                                char , char* __to) const;
private:
  struct _Is_mask {
    mask __m;
    _Is_mask(mask __x): __m(__x) {}
   bool operator()(char __c) {return (__m & (unsigned char) __c) != 0;}
  };

protected:
  const mask* _M_ctype_table;
private:
  bool _M_delete;
};

template<>
class __attribute__((visibility("default"))) ctype_byname<char>: public ctype<char> {
  friend class _Locale_impl;
public:
  explicit ctype_byname(const char*, size_t = 0);
  ~ctype_byname();

  virtual char do_toupper(char __c) const;
  virtual char do_tolower(char __c) const;

  virtual const char* do_toupper(char*, const char*) const;
  virtual const char* do_tolower(char*, const char*) const;

private:
  ctype_byname(_Locale_ctype* __ctype)
    : _M_ctype(__ctype)
  { _M_init(); }

  void _M_init();


  typedef ctype_byname<char> _Self;
  ctype_byname(_Self const&);
  _Self& operator = (_Self const&);

  mask _M_byname_table[table_size];
  _Locale_ctype* _M_ctype;
};


template<>
class __attribute__((visibility("default"))) ctype<wchar_t> : public locale::facet, public ctype_base {
public:
  typedef wchar_t char_type;

  explicit ctype(size_t __refs = 0) : locale::facet(__refs) {}

  bool is(mask __m, wchar_t __c) const
    { return do_is(__m, __c); }

  const wchar_t* is(const wchar_t* __low, const wchar_t* __high,
                    mask* __vec) const
    { return do_is(__low, __high, __vec); }

  const wchar_t* scan_is(mask __m,
                         const wchar_t* __low, const wchar_t* __high) const
    { return do_scan_is(__m, __low, __high); }

  const wchar_t* scan_not (mask __m,
                           const wchar_t* __low, const wchar_t* __high) const
    { return do_scan_not(__m, __low, __high); }

  wchar_t (toupper)(wchar_t __c) const { return do_toupper(__c); }
  const wchar_t* (toupper)(wchar_t* __low, const wchar_t* __high) const
    { return do_toupper(__low, __high); }

  wchar_t (tolower)(wchar_t __c) const { return do_tolower(__c); }
  const wchar_t* (tolower)(wchar_t* __low, const wchar_t* __high) const
    { return do_tolower(__low, __high); }

  wchar_t widen(char __c) const { return do_widen(__c); }
  const char* widen(const char* __low, const char* __high,
                    wchar_t* __to) const
    { return do_widen(__low, __high, __to); }

  char narrow(wchar_t __c, char __dfault) const
    { return do_narrow(__c, __dfault); }
  const wchar_t* narrow(const wchar_t* __low, const wchar_t* __high,
                        char __dfault, char* __to) const
    { return do_narrow(__low, __high, __dfault, __to); }

  static locale::id id;

protected:
  ~ctype();

  virtual bool do_is(mask __m, wchar_t __c) const;
  virtual const wchar_t* do_is(const wchar_t*, const wchar_t*, mask*) const;
  virtual const wchar_t* do_scan_is(mask,
                                    const wchar_t*, const wchar_t*) const;
  virtual const wchar_t* do_scan_not(mask,
                                     const wchar_t*, const wchar_t*) const;
  virtual wchar_t do_toupper(wchar_t __c) const;
  virtual const wchar_t* do_toupper(wchar_t*, const wchar_t*) const;
  virtual wchar_t do_tolower(wchar_t c) const;
  virtual const wchar_t* do_tolower(wchar_t*, const wchar_t*) const;
  virtual wchar_t do_widen(char c) const;
  virtual const char* do_widen(const char*, const char*, wchar_t*) const;
  virtual char do_narrow(wchar_t __c, char __dfault) const;
  virtual const wchar_t* do_narrow(const wchar_t*, const wchar_t*,
                                   char, char*) const;
};

template<>
class __attribute__((visibility("default"))) ctype_byname<wchar_t>: public ctype<wchar_t> {
  friend class _Locale_impl;
public:
  explicit ctype_byname(const char* __name, size_t __refs = 0);

protected:
  ~ctype_byname();

  virtual bool do_is(mask __m, wchar_t __c) const;
  virtual const wchar_t* do_is(const wchar_t*, const wchar_t*, mask*) const;
  virtual const wchar_t* do_scan_is(mask,
                                    const wchar_t*, const wchar_t*) const;
  virtual const wchar_t* do_scan_not(mask,
                                     const wchar_t*, const wchar_t*) const;
  virtual wchar_t do_toupper(wchar_t __c) const;
  virtual const wchar_t* do_toupper(wchar_t*, const wchar_t*) const;
  virtual wchar_t do_tolower(wchar_t c) const;
  virtual const wchar_t* do_tolower(wchar_t*, const wchar_t*) const;

private:
  ctype_byname(_Locale_ctype* __ctype)
    : _M_ctype(__ctype) {}


  typedef ctype_byname<wchar_t> _Self;
  ctype_byname(_Self const&);
  _Self& operator = (_Self const&);

  _Locale_ctype* _M_ctype;
};



}
# 28 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_ios.h" 2



# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_numpunct.h" 1
# 38 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_numpunct.h"
namespace std {




template <class _CharT> class numpunct {};
template <class _CharT> class numpunct_byname {};
template <class _Ch, class _InIt> class num_get;

template<>
class __attribute__((visibility("default"))) numpunct<char> : public locale::facet {
public:
  typedef char char_type;
  typedef string string_type;

  explicit numpunct(size_t __refs = 0)
    : locale::facet(__refs) {}

  char decimal_point() const { return do_decimal_point(); }
  char thousands_sep() const { return do_thousands_sep(); }
  string grouping() const { return do_grouping(); }
  string truename() const { return do_truename(); }
  string falsename() const { return do_falsename(); }

  static locale::id id;

protected:
  ~numpunct();

  virtual char do_decimal_point() const;
  virtual char do_thousands_sep() const;
  virtual string do_grouping() const;
  virtual string do_truename() const;
  virtual string do_falsename() const;
};



template<>
class __attribute__((visibility("default"))) numpunct<wchar_t> : public locale::facet {
public:
  typedef wchar_t char_type;
  typedef wstring string_type;

  explicit numpunct(size_t __refs = 0)
    : locale::facet(__refs) {}

  wchar_t decimal_point() const { return do_decimal_point(); }
  wchar_t thousands_sep() const { return do_thousands_sep(); }
  string grouping() const { return do_grouping(); }
  wstring truename() const { return do_truename(); }
  wstring falsename() const { return do_falsename(); }

  static locale::id id;

protected:
  ~numpunct();

  virtual wchar_t do_decimal_point() const;
  virtual wchar_t do_thousands_sep() const;
  virtual string do_grouping() const;
  virtual wstring do_truename() const;
  virtual wstring do_falsename() const;
};



template<>
class __attribute__((visibility("default"))) numpunct_byname<char> : public numpunct<char> {
  friend class _Locale_impl;
public:
  typedef char char_type;
  typedef string string_type;

  explicit numpunct_byname(const char* __name, size_t __refs = 0);

protected:

  ~numpunct_byname();

  virtual char do_decimal_point() const;
  virtual char do_thousands_sep() const;
  virtual string do_grouping() const;
  virtual string do_truename() const;
  virtual string do_falsename() const;

private:
  numpunct_byname(_Locale_numeric *__numeric)
    : _M_numeric(__numeric) {}


  typedef numpunct_byname<char> _Self;
  numpunct_byname(_Self const&);
  _Self& operator = (_Self const&);

  _Locale_numeric* _M_numeric;
};


template<>
class __attribute__((visibility("default"))) numpunct_byname<wchar_t>: public numpunct<wchar_t> {
  friend class _Locale_impl;
public:
  typedef wchar_t char_type;
  typedef wstring string_type;

  explicit numpunct_byname(const char* __name, size_t __refs = 0);

protected:
  ~numpunct_byname();

  virtual wchar_t do_decimal_point() const;
  virtual wchar_t do_thousands_sep() const;
  virtual string do_grouping() const;
  virtual wstring do_truename() const;
  virtual wstring do_falsename() const;

private:
  numpunct_byname(_Locale_numeric *__numeric)
    : _M_numeric(__numeric) {}


  typedef numpunct_byname<wchar_t> _Self;
  numpunct_byname(_Self const&);
  _Self& operator = (_Self const&);

  _Locale_numeric* _M_numeric;
};



}
# 32 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_ios.h" 2


namespace std {
# 47 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_ios.h"
template <class _CharT, class _Traits>
class basic_ios : public ios_base {
  friend class ios_base;
public:
  typedef _CharT char_type;
  typedef typename _Traits::int_type int_type;
  typedef typename _Traits::pos_type pos_type;
  typedef typename _Traits::off_type off_type;
  typedef _Traits traits_type;

public:
  explicit basic_ios(basic_streambuf<_CharT, _Traits>* __streambuf);
  virtual ~basic_ios() {}

public:
  basic_ostream<_CharT, _Traits>* tie() const {
    return _M_tied_ostream;
  }
  basic_ostream<_CharT, _Traits>*
  tie(basic_ostream<char_type, traits_type>* __new_tied_ostream) {
    basic_ostream<char_type, traits_type>* __tmp = _M_tied_ostream;
    _M_tied_ostream = __new_tied_ostream;
    return __tmp;
  }

  basic_streambuf<_CharT, _Traits>* rdbuf() const
    { return _M_streambuf; }

  basic_streambuf<_CharT, _Traits>*
  rdbuf(basic_streambuf<char_type, traits_type>*);


  basic_ios<_CharT, _Traits>& copyfmt(const basic_ios<_CharT, _Traits>& __x);

  char_type fill() const { return _M_fill; }
  char_type fill(char_type __fill) {
    char_type __tmp(_M_fill);
    _M_fill = __fill;
    return __tmp;
  }

public:


  void clear(iostate __state = goodbit) {
    _M_clear_nothrow(this->rdbuf() ? __state : iostate(__state|ios_base::badbit));
    _M_check_exception_mask();
  }
  void setstate(iostate __state) { this->clear(rdstate() | __state); }

  iostate exceptions() const { return this->_M_get_exception_mask(); }
  void exceptions(iostate __mask) {
    this->_M_set_exception_mask(__mask);
    this->clear(this->rdstate());
  }

public:
  locale imbue(const locale&);

  inline char narrow(_CharT, char) const ;
  inline _CharT widen(char) const;


  static bool _S_eof(int_type __c) {
    const int_type __eof = _Traits::eof();
    return _Traits::eq_int_type(__c, __eof);
  }

protected:

  const ctype<char_type>* _M_cached_ctype;

public:

  const ctype<char_type>* _M_ctype_facet() const { return _M_cached_ctype; }

protected:
  basic_ios();

  void init(basic_streambuf<_CharT, _Traits>* __streambuf);

public:



  void _M_handle_exception(ios_base::iostate __flag);

private:
  char_type _M_fill;

  basic_streambuf<_CharT, _Traits>* _M_streambuf;
  basic_ostream<_CharT, _Traits>* _M_tied_ostream;

};


template <class _CharT, class _Traits>
inline char
basic_ios<_CharT, _Traits>::narrow(_CharT __c, char __default) const
{ return _M_ctype_facet()->narrow(__c, __default); }

template <class _CharT, class _Traits>
inline _CharT
basic_ios<_CharT, _Traits>::widen(char __c) const
{ return _M_ctype_facet()->widen(__c); }


template<>
inline char
basic_ios<char, char_traits<char> >::narrow(char __c, char) const
{
  return __c;
}

template<>
inline char
basic_ios<char, char_traits<char> >::widen(char __c) const
{
  return __c;
}
# 176 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_ios.h"
}


# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_ios.c" 1
# 26 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_ios.c"
# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_streambuf.h" 1
# 25 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_streambuf.h"
namespace std {
# 47 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_streambuf.h"
template <class _CharT, class _Traits>
class basic_streambuf {
  friend class basic_istream<_CharT, _Traits>;
  friend class basic_ostream<_CharT, _Traits>;

public:
  typedef _CharT char_type;
  typedef typename _Traits::int_type int_type;
  typedef typename _Traits::pos_type pos_type;
  typedef typename _Traits::off_type off_type;
  typedef _Traits traits_type;

private:

  char_type* _M_gbegin;
  char_type* _M_gnext;
  char_type* _M_gend;

  char_type* _M_pbegin;
  char_type* _M_pnext;
  char_type* _M_pend;

  locale _M_locale;

public:
  virtual ~basic_streambuf();

protected:
  basic_streambuf()







  ;


protected:
  char_type* eback() const { return _M_gbegin; }
  char_type* gptr() const { return _M_gnext; }
  char_type* egptr() const { return _M_gend; }

  void gbump(int __n) { _M_gnext += __n; }
  void setg(char_type* __gbegin, char_type* __gnext, char_type* __gend) {
    _M_gbegin = __gbegin;
    _M_gnext = __gnext;
    _M_gend = __gend;
  }

public:



  char_type* _M_eback() const { return eback(); }
  char_type* _M_gptr() const { return gptr(); }
  char_type* _M_egptr() const { return egptr(); }
  void _M_gbump(int __n) { gbump(__n); }
  void _M_setg(char_type* __gbegin, char_type* __gnext, char_type* __gend)
  { this->setg(__gbegin, __gnext, __gend); }

protected:

  char_type* pbase() const { return _M_pbegin; }
  char_type* pptr() const { return _M_pnext; }
  char_type* epptr() const { return _M_pend; }

  void pbump(int __n) { _M_pnext += __n; }
  void setp(char_type* __pbegin, char_type* __pend) {
    _M_pbegin = __pbegin;
    _M_pnext = __pbegin;
    _M_pend = __pend;
  }

protected:

  virtual basic_streambuf<_CharT, _Traits>* setbuf(char_type*, streamsize);



  virtual pos_type seekoff(off_type, ios_base::seekdir,
                           ios_base::openmode = ios_base::in | ios_base::out);



  virtual pos_type
  seekpos(pos_type, ios_base::openmode = ios_base::in | ios_base::out);



  virtual int sync();


public:
  basic_streambuf<_CharT, _Traits>* pubsetbuf(char_type* __s, streamsize __n)
  { return this->setbuf(__s, __n); }

  pos_type pubseekoff(off_type __offset, ios_base::seekdir __way,
                      ios_base::openmode __mod = ios_base::in | ios_base::out)
  { return this->seekoff(__offset, __way, __mod); }

  pos_type pubseekpos(pos_type __sp,
                      ios_base::openmode __mod = ios_base::in | ios_base::out)
  { return this->seekpos(__sp, __mod); }

  int pubsync() { return this->sync(); }

protected:





  virtual streamsize showmanyc();



  virtual streamsize xsgetn(char_type* __s, streamsize __n);




  virtual int_type underflow();



  virtual int_type uflow();




  virtual int_type pbackfail(int_type = traits_type::eof());

protected:




  virtual streamsize xsputn(const char_type* __s, streamsize __n);



  virtual streamsize _M_xsputnc(char_type __c, streamsize __n);



  virtual int_type overflow(int_type = traits_type::eof());

public:

  int_type sputc(char_type __c) {
    return ((_M_pnext < _M_pend) ? _Traits::to_int_type(*_M_pnext++ = __c)
      : this->overflow(_Traits::to_int_type(__c)));
  }


  streamsize sputn(const char_type* __s, streamsize __n)
  { return this->xsputn(__s, __n); }


  streamsize _M_sputnc(char_type __c, streamsize __n)
  { return this->_M_xsputnc(__c, __n); }

private:
  int_type _M_snextc_aux();

public:
  streamsize in_avail() {
    return (_M_gnext < _M_gend) ? (_M_gend - _M_gnext) : this->showmanyc();
  }


  int_type snextc() {
  return ( _M_gend - _M_gnext > 1 ?
             _Traits::to_int_type(*++_M_gnext) :
             this->_M_snextc_aux());
  }


  int_type sbumpc() {
    return _M_gnext < _M_gend ? _Traits::to_int_type(*_M_gnext++)
      : this->uflow();
  }


  int_type sgetc() {
    return _M_gnext < _M_gend ? _Traits::to_int_type(*_M_gnext)
      : this->underflow();
  }

  streamsize sgetn(char_type* __s, streamsize __n)
  { return this->xsgetn(__s, __n); }

  int_type sputbackc(char_type __c) {
    return ((_M_gbegin < _M_gnext) && _Traits::eq(__c, *(_M_gnext - 1)))
      ? _Traits::to_int_type(*--_M_gnext)
      : this->pbackfail(_Traits::to_int_type(__c));
  }

  int_type sungetc() {
    return (_M_gbegin < _M_gnext)
      ? _Traits::to_int_type(*--_M_gnext)
      : this->pbackfail();
  }

protected:





  virtual void imbue(const locale&);

public:
  locale pubimbue(const locale&);
  locale getloc() const { return _M_locale; }


  void stossc() { this->sbumpc(); }

};
# 277 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_streambuf.h"
}


# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_streambuf.c" 1
# 25 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_streambuf.c"
namespace std {




template <class _CharT, class _Traits>
basic_streambuf<_CharT, _Traits>::basic_streambuf()
  : _M_gbegin(0), _M_gnext(0), _M_gend(0),
    _M_pbegin(0), _M_pnext(0), _M_pend(0),
    _M_locale() {

}


template <class _CharT, class _Traits>
basic_streambuf<_CharT, _Traits>::~basic_streambuf()
{}

template <class _CharT, class _Traits>
locale
basic_streambuf<_CharT, _Traits>::pubimbue(const locale& __loc) {
  this->imbue(__loc);
  locale __tmp = _M_locale;
  _M_locale = __loc;
  return __tmp;
}

template <class _CharT, class _Traits>
streamsize
basic_streambuf<_CharT, _Traits>::xsgetn(_CharT* __s, streamsize __n) {
  streamsize __result = 0;
  const int_type __eof = _Traits::eof();

  while (__result < __n) {
    if (_M_gnext < _M_gend) {
      size_t __chunk = (min) (static_cast<size_t>(_M_gend - _M_gnext),
                              static_cast<size_t>(__n - __result));
      _Traits::copy(__s, _M_gnext, __chunk);
      __result += __chunk;
      __s += __chunk;
      _M_gnext += __chunk;
    }
    else {
      int_type __c = this->sbumpc();
      if (!_Traits::eq_int_type(__c, __eof)) {
        *__s = _Traits::to_char_type(__c);
        ++__result;
        ++__s;
      }
      else
        break;
    }
  }

  return __result;
}

template <class _CharT, class _Traits>
streamsize
basic_streambuf<_CharT, _Traits>::xsputn(const _CharT* __s, streamsize __n)
{
  streamsize __result = 0;
  const int_type __eof = _Traits::eof();

  while (__result < __n) {
    if (_M_pnext < _M_pend) {
      size_t __chunk = (min) (static_cast<size_t>(_M_pend - _M_pnext),
                           static_cast<size_t>(__n - __result));
      _Traits::copy(_M_pnext, __s, __chunk);
      __result += __chunk;
      __s += __chunk;
      _M_pnext += __chunk;
    }

    else if (!_Traits::eq_int_type(this->overflow(_Traits::to_int_type(*__s)),
                                   __eof)) {
      ++__result;
      ++__s;
    }
    else
      break;
  }
  return __result;
}

template <class _CharT, class _Traits>
streamsize
basic_streambuf<_CharT, _Traits>::_M_xsputnc(_CharT __c, streamsize __n)
{
  streamsize __result = 0;
  const int_type __eof = _Traits::eof();

  while (__result < __n) {
    if (_M_pnext < _M_pend) {
      size_t __chunk = (min) (static_cast<size_t>(_M_pend - _M_pnext),
                           static_cast<size_t>(__n - __result));
      _Traits::assign(_M_pnext, __chunk, __c);
      __result += __chunk;
      _M_pnext += __chunk;
    }

    else if (!_Traits::eq_int_type(this->overflow(_Traits::to_int_type(__c)),
                                   __eof))
      ++__result;
    else
      break;
  }
  return __result;
}

template <class _CharT, class _Traits>
typename basic_streambuf<_CharT, _Traits>::int_type
basic_streambuf<_CharT, _Traits>::_M_snextc_aux()
{
  int_type __eof = _Traits::eof();
  if (_M_gend == _M_gnext)
    return _Traits::eq_int_type(this->uflow(), __eof) ? __eof : this->sgetc();
  else {
    _M_gnext = _M_gend;
    return this->underflow();
  }
}

template <class _CharT, class _Traits>
typename basic_streambuf<_CharT, _Traits>::int_type
basic_streambuf<_CharT, _Traits>::pbackfail(int_type) {
 return _Traits::eof();
}

template <class _CharT, class _Traits>
typename basic_streambuf<_CharT, _Traits>::int_type
basic_streambuf<_CharT, _Traits>::overflow(int_type) {
  return _Traits::eof();
}

template <class _CharT, class _Traits>
typename basic_streambuf<_CharT, _Traits>::int_type
basic_streambuf<_CharT, _Traits>::uflow() {
    return ( _Traits::eq_int_type(this->underflow(),_Traits::eof()) ?
             _Traits::eof() :
             _Traits::to_int_type(*_M_gnext++));
}

template <class _CharT, class _Traits>
typename basic_streambuf<_CharT, _Traits>::int_type
basic_streambuf<_CharT, _Traits>::underflow()
{ return _Traits::eof(); }

template <class _CharT, class _Traits>
streamsize
basic_streambuf<_CharT, _Traits>::showmanyc()
{ return 0; }

template <class _CharT, class _Traits>
void
basic_streambuf<_CharT, _Traits>::imbue(const locale&) {}

template <class _CharT, class _Traits>
int
basic_streambuf<_CharT, _Traits>::sync() { return 0; }

template <class _CharT, class _Traits>
typename basic_streambuf<_CharT, _Traits>::pos_type
basic_streambuf<_CharT, _Traits>::seekpos(pos_type, ios_base::openmode)
{ return pos_type(-1); }

template <class _CharT, class _Traits>
typename basic_streambuf<_CharT, _Traits>::pos_type
basic_streambuf<_CharT, _Traits>::seekoff(off_type, ios_base::seekdir,
                                          ios_base::openmode)
{ return pos_type(-1); }

template <class _CharT, class _Traits>
basic_streambuf<_CharT, _Traits>*
basic_streambuf<_CharT, _Traits>:: setbuf(char_type*, streamsize)
{ return this; }

}
# 281 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_streambuf.h" 2
# 27 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_ios.c" 2






namespace std {




template <class _CharT, class _Traits>
basic_ios<_CharT, _Traits>
  ::basic_ios(basic_streambuf<_CharT, _Traits>* __streambuf)
    : ios_base(), _M_cached_ctype(0),
      _M_fill(_CharT()), _M_streambuf(0), _M_tied_ostream(0) {
  basic_ios<_CharT, _Traits>::init(__streambuf);
}

template <class _CharT, class _Traits>
basic_streambuf<_CharT, _Traits>*
basic_ios<_CharT, _Traits>::rdbuf(basic_streambuf<_CharT, _Traits>* __buf) {
  basic_streambuf<_CharT, _Traits>* __tmp = _M_streambuf;
  _M_streambuf = __buf;
  this->clear();
  return __tmp;
}

template <class _CharT, class _Traits>
basic_ios<_CharT, _Traits>&
basic_ios<_CharT, _Traits>::copyfmt(const basic_ios<_CharT, _Traits>& __x) {
  _M_invoke_callbacks(erase_event);
  _M_copy_state(__x);
  _M_cached_ctype = __x._M_cached_ctype;
  _M_fill = __x._M_fill;
  _M_tied_ostream = __x._M_tied_ostream;
  _M_invoke_callbacks(copyfmt_event);
  this->_M_set_exception_mask(__x.exceptions());
  return *this;
}

template <class _CharT, class _Traits>
locale basic_ios<_CharT, _Traits>::imbue(const locale& __loc) {
  locale __tmp = ios_base::imbue(__loc);
  {
    if (_M_streambuf)
      _M_streambuf->pubimbue(__loc);


    _M_cached_ctype = &use_facet<ctype<char_type> >(__loc);
  }
  if (false) {
    __tmp = ios_base::imbue(__tmp);
    _M_handle_exception(ios_base::failbit);
  }
  return __tmp;
}





template <class _CharT, class _Traits>
basic_ios<_CharT, _Traits>::basic_ios()
  : ios_base(),
    _M_fill(_CharT()), _M_streambuf(0), _M_tied_ostream(0)
{}

template <class _CharT, class _Traits>
void
basic_ios<_CharT, _Traits>::init(basic_streambuf<_CharT, _Traits>* __sb)
{
  this->rdbuf(__sb);
  this->imbue(locale());
  this->tie(0);
  this->_M_set_exception_mask(ios_base::goodbit);
  this->_M_clear_nothrow(__sb != 0 ? ios_base::goodbit : ios_base::badbit);
  ios_base::flags(ios_base::skipws | ios_base::dec);
  ios_base::width(0);
  ios_base::precision(6);
  this->fill(widen(' '));


}


template <class _CharT, class _Traits>
void basic_ios<_CharT, _Traits>::_M_handle_exception(ios_base::iostate __flag)
{
  this->_M_setstate_nothrow(__flag);
  if (this->_M_get_exception_mask() & __flag)
    {};
}

}
# 180 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_ios.h" 2
# 25 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_ostream.h" 2



# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_ostreambuf_iterator.h" 1
# 30 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_ostreambuf_iterator.h"
namespace std {

namespace priv {

template<class _CharT, class _Traits>
extern basic_streambuf<_CharT, _Traits>* __get_ostreambuf(basic_ostream<_CharT, _Traits>&);

}


template <class _CharT, class _Traits>
class ostreambuf_iterator :
  public iterator<output_iterator_tag, void, void, void, void> {
public:
  typedef _CharT char_type;
  typedef _Traits traits_type;
  typedef typename _Traits::int_type int_type;
  typedef basic_streambuf<_CharT, _Traits> streambuf_type;
  typedef basic_ostream<_CharT, _Traits> ostream_type;

  typedef output_iterator_tag iterator_category;
  typedef void value_type;
  typedef void difference_type;
  typedef void pointer;
  typedef void reference;

public:
  ostreambuf_iterator(streambuf_type* __buf) : _M_buf(__buf), _M_ok(__buf!=0) {}

  inline ostreambuf_iterator(ostream_type& __o) ;

  ostreambuf_iterator<_CharT, _Traits>& operator=(char_type __c) {
    _M_ok = _M_ok && !traits_type::eq_int_type(_M_buf->sputc(__c),
                                               traits_type::eof());
    return *this;
  }

  ostreambuf_iterator<_CharT, _Traits>& operator*() { return *this; }
  ostreambuf_iterator<_CharT, _Traits>& operator++() { return *this; }
  ostreambuf_iterator<_CharT, _Traits>& operator++(int) { return *this; }

  bool failed() const { return !_M_ok; }

private:
  streambuf_type* _M_buf;
  bool _M_ok;
};

template <class _CharT, class _Traits>
inline ostreambuf_iterator<_CharT, _Traits>::ostreambuf_iterator(basic_ostream<_CharT, _Traits>& __o)
  : _M_buf(::std::priv:: __get_ostreambuf(__o)), _M_ok(_M_buf != 0) {}
# 95 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_ostreambuf_iterator.h"
}
# 29 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_ostream.h" 2






namespace std {






namespace priv {

template <class _CharT, class _Traits>
bool __init_bostr(basic_ostream<_CharT, _Traits>& __str);

}




template <class _CharT, class _Traits>
class basic_ostream : virtual public basic_ios<_CharT, _Traits> {
  typedef basic_ostream<_CharT, _Traits> _Self;







public:
  typedef _CharT char_type;
  typedef typename _Traits::int_type int_type;
  typedef typename _Traits::pos_type pos_type;
  typedef typename _Traits::off_type off_type;
  typedef _Traits traits_type;
  typedef basic_ios<_CharT, _Traits> _Basic_ios;

public:
  explicit basic_ostream(basic_streambuf<_CharT, _Traits>* __buf);
  ~basic_ostream();

public:
  typedef basic_ios<_CharT, _Traits>& ( *__ios_fn)(basic_ios<_CharT, _Traits>&);
  typedef ios_base& ( *__ios_base_fn)(ios_base&);
  typedef _Self& ( *__ostream_fn)(_Self&);
  _Self& operator<< (__ostream_fn __f) { return __f(*this); }
  _Self & operator<< (__ios_base_fn __f) { __f(*this); return *this; }
  _Self& operator<< (__ios_fn __ff) { __ff(*this); return *this; }

private:
  bool _M_copy_buffered(basic_streambuf<_CharT, _Traits>* __from,
                        basic_streambuf<_CharT, _Traits>* __to);
  bool _M_copy_unbuffered(basic_streambuf<_CharT, _Traits>* __from,
                          basic_streambuf<_CharT, _Traits>* __to);

public:
  void _M_put_char(_CharT __c);

  void _M_put_nowiden(const _CharT* __s);
  void _M_put_widen(const char* __s);
  bool _M_put_widen_aux(const char* __s, streamsize __n);

public:
  _Self& put(char_type __c);
  _Self& write(const char_type* __s, streamsize __n);

public:

  _Self& operator<<(basic_streambuf<_CharT, _Traits>* __buf);


  _Self& operator<<(unsigned char __x) { _M_put_char(__x); return *this; }

  _Self& operator<<(short __x);
  _Self& operator<<(unsigned short __x);
  _Self& operator<<(int __x);

  _Self& operator<<(unsigned int __x);






  _Self& operator<<(long __x);
  _Self& operator<<(unsigned long __x);

  _Self& operator<< (long long __x);
  _Self& operator<< (unsigned long long __x);

  _Self& operator<<(float __x);
  _Self& operator<<(double __x);

  _Self& operator<<(long double __x);

  _Self& operator<<(const void* __x);

  _Self& operator<<(bool __x);


public:
  _Self& flush() {
    if (this->rdbuf())
      if (this->rdbuf()->pubsync() == -1)
        this->setstate(ios_base::badbit);
    return *this;
  }

  pos_type tellp() {
    return this->rdbuf() && !this->fail()
      ? this->rdbuf()->pubseekoff(0, ios_base::cur, ios_base::out)
      : pos_type(-1);
  }

  _Self& seekp(pos_type __pos) {
    if (this->rdbuf() && !this->fail()) {
      if (this->rdbuf()->pubseekpos(__pos, ios_base::out) == pos_type(-1)) {
        this->setstate(ios_base::failbit);
      }
    }
    return *this;
  }

  _Self& seekp(off_type __off, ios_base::seekdir __dir) {
    if (this->rdbuf() && !this->fail())
      this->rdbuf()->pubseekoff(__off, __dir, ios_base::out);
    return *this;
  }
# 172 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_ostream.h"
    class sentry {
      typedef sentry _Self;

    private:
      basic_ostream<_CharT, _Traits>& _M_str;

      bool _M_ok;
    public:
      explicit sentry(basic_ostream<_CharT, _Traits>& __str)
        : _M_str(__str), _M_ok(::std::priv:: __init_bostr(__str))
      {}

      ~sentry() {
        if (_M_str.flags() & ios_base::unitbuf)



            _M_str.flush();
      }

      operator bool() const { return _M_ok; }
    private:

      sentry(const _Self& __s) : _M_str(__s._M_str) {}
      _Self& operator=(const _Self&) { return *this; }
    };




};
# 214 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_ostream.h"
namespace priv {


template <class _CharT, class _Traits>
bool __init_bostr(basic_ostream<_CharT, _Traits>& __str) {
  if (__str.good()) {

    if (!__str.rdbuf())
      __str.setstate(ios_base::badbit);
    if (__str.tie())
      __str.tie()->flush();
    return __str.good();
  }
  else
    return false;
}

template <class _CharT, class _Traits>
inline basic_streambuf<_CharT, _Traits>*
__get_ostreambuf(basic_ostream<_CharT, _Traits>& __St)
{ return __St.rdbuf(); }

}


template <class _CharT, class _Traits>
inline basic_ostream<_CharT, _Traits>&
operator<<(basic_ostream<_CharT, _Traits>& __os, _CharT __c){
  __os._M_put_char(__c);
  return __os;
}

template <class _CharT, class _Traits>
inline basic_ostream<_CharT, _Traits>&
operator<<(basic_ostream<_CharT, _Traits>& __os, const _CharT* __s) {
  __os._M_put_nowiden(__s);
  return __os;
}
# 295 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_ostream.h"
template <class _CharT, class _Traits>
inline basic_ostream<_CharT, _Traits>&
operator<<(basic_ostream<_CharT, _Traits>& __os, char __c) {
  __os._M_put_char(__os.widen(__c));
  return __os;
}

template <class _Traits>
inline basic_ostream<char, _Traits>&
operator<<(basic_ostream<char, _Traits>& __os, char __c) {
  __os._M_put_char(__c);
  return __os;
}

template <class _Traits>
inline basic_ostream<char, _Traits>&
operator<<(basic_ostream<char, _Traits>& __os, signed char __c) {
  __os._M_put_char(__c);
  return __os;
}

template <class _Traits>
inline basic_ostream<char, _Traits>&
operator<<(basic_ostream<char, _Traits>& __os, unsigned char __c) {
  __os._M_put_char(__c);
  return __os;
}

template <class _CharT, class _Traits>
inline basic_ostream<_CharT, _Traits>&
operator<<(basic_ostream<_CharT, _Traits>& __os, const char* __s) {
  __os._M_put_widen(__s);
  return __os;
}

template <class _Traits>
inline basic_ostream<char, _Traits>&
operator<<(basic_ostream<char, _Traits>& __os, const char* __s) {
  __os._M_put_nowiden(__s);
  return __os;
}

template <class _Traits>
inline basic_ostream<char, _Traits>&
operator<<(basic_ostream<char, _Traits>& __os, const signed char* __s) {
  __os._M_put_nowiden(reinterpret_cast<const char*>(__s));
  return __os;
}

template <class _Traits>
inline basic_ostream<char, _Traits>&
operator<<(basic_ostream<char, _Traits>& __os, const unsigned char* __s) {
  __os._M_put_nowiden(reinterpret_cast<const char*>(__s));
  return __os;
}





template <class _CharT, class _Traits>
inline basic_ostream<_CharT, _Traits>&
endl(basic_ostream<_CharT, _Traits>& __os) {
  __os.put(__os.widen('\n'));
  __os.flush();
  return __os;
}

template <class _CharT, class _Traits>
inline basic_ostream<_CharT, _Traits>&
ends(basic_ostream<_CharT, _Traits>& __os) {
  __os.put(_CharT());
  return __os;
}

template <class _CharT, class _Traits>
inline basic_ostream<_CharT, _Traits>&
flush(basic_ostream<_CharT, _Traits>& __os) {
  __os.flush();
  return __os;
}

}


# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_ostream.c" 1
# 26 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_ostream.c"
# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_num_put.h" 1
# 39 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_num_put.h"
# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_iostream_string.h" 1
# 36 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_iostream_string.h"
namespace std {

namespace priv {

template <class _CharT>
class __iostring_allocator : public allocator<_CharT> {
public:
  enum { _STR_SIZE = 256 };

private:
  enum { _BUF_SIZE = _STR_SIZE + 1 };
  typedef allocator<_CharT> _Base;
  _CharT _M_static_buf[_BUF_SIZE];

public:
  typedef typename _Base::size_type size_type;
  typedef typename _Base::pointer pointer;

  template <class _Tp1> struct rebind {

    typedef __iostring_allocator<_Tp1> other;



  };


  _CharT* allocate(size_type __n, const void* __ptr = 0) {
    if (__n > _BUF_SIZE) {
      return _Base::allocate(__n, __ptr);
    }
    return _M_static_buf;
  }
  void deallocate(pointer __p, size_type __n) {
    if (__p != _M_static_buf) _Base::deallocate(__p, __n);
  }
};
# 96 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_iostream_string.h"
template <class _CharT>
struct __basic_iostring : public basic_string<_CharT, char_traits<_CharT>, __iostring_allocator<_CharT> > {






  typedef __basic_iostring<_CharT> _Self;
  typedef basic_string<_CharT, char_traits<_CharT>, __iostring_allocator<_CharT> > _Base;
  typedef typename _Base::_Reserve_t _Reserve_t;

  __basic_iostring() : _Base(_Reserve_t(), __iostring_allocator<_CharT>::_STR_SIZE)
  {}

  _Self& operator=(const _CharT* __s) {
    _Base::operator=(__s);
    return *this;
  }
};

typedef __basic_iostring<char> __iostring;


typedef __basic_iostring<wchar_t> __iowstring;
# 136 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_iostream_string.h"
}

}
# 40 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_num_put.h" 2






namespace std {




template <class _CharT, class _OutputIter>
class num_put: public locale::facet {
public:
  typedef _CharT char_type;
  typedef _OutputIter iter_type;

  explicit num_put(size_t __refs = 0) : locale::facet(__refs) {}


  iter_type put(iter_type __s, ios_base& __f, char_type __fill,
                bool __val) const {
    return do_put(__s, __f, __fill, __val);
  }

  iter_type put(iter_type __s, ios_base& __f, char_type __fill,
               long __val) const {
    return do_put(__s, __f, __fill, __val);
  }

  iter_type put(iter_type __s, ios_base& __f, char_type __fill,
                unsigned long __val) const {
    return do_put(__s, __f, __fill, __val);
  }


  iter_type put(iter_type __s, ios_base& __f, char_type __fill,
                long long __val) const {
    return do_put(__s, __f, __fill, __val);
  }

  iter_type put(iter_type __s, ios_base& __f, char_type __fill,
                unsigned long long __val) const {
    return do_put(__s, __f, __fill, __val);
  }


  iter_type put(iter_type __s, ios_base& __f, char_type __fill,
                double __val) const {
    return do_put(__s, __f, __fill, (double)__val);
  }


  iter_type put(iter_type __s, ios_base& __f, char_type __fill,
                long double __val) const {
    return do_put(__s, __f, __fill, __val);
  }


  iter_type put(iter_type __s, ios_base& __f, char_type __fill,
                const void * __val) const {
    return do_put(__s, __f, __fill, __val);
  }

  static locale::id id;

protected:
  ~num_put() {}

  virtual _OutputIter do_put(_OutputIter __s, ios_base& __f, _CharT __fill, bool __val) const;

  virtual _OutputIter do_put(_OutputIter __s, ios_base& __f, _CharT __fill, long __val) const;
  virtual _OutputIter do_put(_OutputIter __s, ios_base& __f, _CharT __fill, unsigned long __val) const;
  virtual _OutputIter do_put(_OutputIter __s, ios_base& __f, _CharT __fill, double __val) const;

  virtual _OutputIter do_put(_OutputIter __s, ios_base& __f, _CharT __fill, long double __val) const;



  virtual _OutputIter do_put(_OutputIter __s, ios_base& __f, _CharT __fill, long long __val) const;
  virtual _OutputIter do_put(_OutputIter __s, ios_base& __f, _CharT __fill,
                           unsigned long long __val) const ;

  virtual _OutputIter do_put(_OutputIter __s, ios_base& __f, _CharT __fill, const void* __val) const;
};
# 135 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_num_put.h"
namespace priv {

template <class _Integer>
char*
__write_integer_backward(char* __buf, ios_base::fmtflags __flags, _Integer __x);





extern size_t __write_float(__iostring&, ios_base::fmtflags, int, double);

extern size_t __write_float(__iostring&, ios_base::fmtflags, int, long double);





void __get_floor_digits(__iostring&, long double);

template <class _CharT>
void __get_money_digits(::std::priv:: __basic_iostring<_CharT>&, ios_base&, long double);


extern void __convert_float_buffer(__iostring const&, __iowstring&, const ctype<wchar_t>&, wchar_t, bool = true);

extern void __adjust_float_buffer(__iostring&, char);

extern char*
__write_integer(char* buf, ios_base::fmtflags flags, long x);

extern ptrdiff_t __insert_grouping(char* first, char* last, const string&, char, char, char, int);
extern void __insert_grouping(__iostring&, size_t, const string&, char, char, char, int);

extern ptrdiff_t __insert_grouping(wchar_t*, wchar_t*, const string&, wchar_t, wchar_t, wchar_t, int);
extern void __insert_grouping(__iowstring&, size_t, const string&, wchar_t, wchar_t, wchar_t, int);


}



}


# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_num_put.c" 1
# 26 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_num_put.c"
# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_limits.h" 1
# 32 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_limits.h"
# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/cfloat" 1
# 33 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/cfloat"
# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/float.h" 1
# 32 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/float.h"
# 1 "/home/petya/download/android-ndk-r8b/toolchains/arm-linux-androideabi-4.4.3/prebuilt/linux-x86/bin/../lib/gcc/arm-linux-androideabi/4.4.3/include/../include/float.h" 1 3 4
# 33 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/float.h" 2
# 34 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/cfloat" 2
# 33 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_limits.h" 2






namespace std {

enum float_round_style {
  round_indeterminate = -1,
  round_toward_zero = 0,
  round_to_nearest = 1,
  round_toward_infinity = 2,
  round_toward_neg_infinity = 3
};

enum float_denorm_style {
  denorm_indeterminate = -1,
  denorm_absent = 0,
  denorm_present = 1
};

namespace priv {


template <class __number>
class _Numeric_limits_base {
public:

  static __number ( min)() { return __number(); }
  static __number ( max)() { return __number(); }

  static const int digits = 0;
  static const int digits10 = 0;
  static const int radix = 0;
  static const int min_exponent = 0;
  static const int min_exponent10 = 0;
  static const int max_exponent = 0;
  static const int max_exponent10 = 0;

  static const float_denorm_style has_denorm = denorm_absent;
  static const float_round_style round_style = round_toward_zero;

  static const bool is_specialized = false;
  static const bool is_signed = false;
  static const bool is_integer = false;
  static const bool is_exact = false;
  static const bool has_infinity = false;
  static const bool has_quiet_NaN = false;
  static const bool has_signaling_NaN = false;
  static const bool has_denorm_loss = false;
  static const bool is_iec559 = false;
  static const bool is_bounded = false;
  static const bool is_modulo = false;
  static const bool traps = false;
  static const bool tinyness_before = false;

  static __number epsilon() { return __number(); }
  static __number round_error() { return __number(); }

  static __number infinity() { return __number(); }
  static __number quiet_NaN() { return __number(); }
  static __number signaling_NaN() { return __number(); }
  static __number denorm_min() { return __number(); }
};
# 114 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_limits.h"
template <class _Int,
          _Int __imin,
          _Int __imax,
          int __idigits, bool __ismod>
class _Integer_limits : public _Numeric_limits_base<_Int> {
public:

  static _Int ( min) () { return (_Int)__imin; }
  static _Int ( max) () { return (_Int)__imax; }

  static const int digits = (__idigits < 0) ? ((int)((sizeof(_Int) * (8))) - ((__imin == 0) ? 0 : 1)) : (__idigits);
  static const int digits10 = (digits * 301UL) / 1000;
  static const int radix = 2;
  static const bool is_specialized = true;
  static const bool is_signed = (__imin != 0);
  static const bool is_integer = true;
  static const bool is_exact = true;
  static const bool is_bounded = true;
  static const bool is_modulo = __ismod;
};


template <class __number,
         int __Digits, int __Digits10,
         int __MinExp, int __MaxExp,
         int __MinExp10, int __MaxExp10,
         bool __IsIEC559,
         float_denorm_style __DenormStyle,
         float_round_style __RoundStyle>
class _Floating_limits : public _Numeric_limits_base<__number> {
public:

  static const int digits = __Digits;
  static const int digits10 = __Digits10;
  static const int radix = 2;
  static const int min_exponent = __MinExp;
  static const int max_exponent = __MaxExp;
  static const int min_exponent10 = __MinExp10;
  static const int max_exponent10 = __MaxExp10;

  static const float_denorm_style has_denorm = __DenormStyle;
  static const float_round_style round_style = __RoundStyle;

  static const bool is_specialized = true;
  static const bool is_signed = true;

  static const bool has_infinity = true;



  static const bool has_quiet_NaN = true;
  static const bool has_signaling_NaN = true;





  static const bool is_iec559 = __IsIEC559 && has_infinity && has_quiet_NaN && has_signaling_NaN && (has_denorm == denorm_present);
  static const bool has_denorm_loss = false;
  static const bool is_bounded = true;
  static const bool traps = true;
  static const bool tinyness_before = false;
};

}





template<class _Tp>
class numeric_limits : public ::std::priv:: _Numeric_limits_base<_Tp> {};




template<>
class numeric_limits<bool>
  : public ::std::priv:: _Integer_limits<bool, false, true, 1, false>
{};


template<>
class numeric_limits<char>
  : public ::std::priv:: _Integer_limits<char, 0, 0xff, -1, true>
{};


template<>
class numeric_limits<signed char>
  : public ::std::priv:: _Integer_limits<signed char, (-0x7f-1), 0x7f, -1, true>
{};


template<>
class numeric_limits<unsigned char>
  : public ::std::priv:: _Integer_limits<unsigned char, 0, 0xffU, -1, true>
{};



template<>
class numeric_limits<wchar_t>
  : public ::std::priv:: _Integer_limits<wchar_t, 0, 255, -1, true>
{};



template<>
class numeric_limits<short>
  : public ::std::priv:: _Integer_limits<short, (-0x7fff-1), 0x7fff, -1, true>
{};

template<>
class numeric_limits<unsigned short>
  : public ::std::priv:: _Integer_limits<unsigned short, 0, 0xffffU, -1, true>
{};






template<>
class numeric_limits<int>
  : public ::std::priv:: _Integer_limits<int, (-0x7fffffff-1), 0x7fffffff, -1, true>
{};

template<>
class numeric_limits<unsigned int>
  : public ::std::priv:: _Integer_limits<unsigned int, 0, 0xffffffffU, -1, true>
{};

template<>
class numeric_limits<long>
  : public ::std::priv:: _Integer_limits<long, (-0x7fffffffL-1), 0x7fffffffL, -1, true>
{};

template<>
class numeric_limits<unsigned long>
  : public ::std::priv:: _Integer_limits<unsigned long, 0, 0xffffffffUL, -1, true>
{};
# 277 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_limits.h"
template<>
class numeric_limits<long long>
  : public ::std::priv:: _Integer_limits<long long, (-9223372036854775807LL-1), 9223372036854775807LL, -1, true>
{};

template<>
class numeric_limits<unsigned long long>
  : public ::std::priv:: _Integer_limits<unsigned long long, 0, 18446744073709551615ULL, -1, true>
{};
# 337 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_limits.h"
namespace priv {


template <class __dummy>
class _LimG {
public:
  static float get_F_inf();
  static float get_F_qNaN();
  static float get_F_sNaN();
  static float get_F_denormMin();
  static double get_D_inf();
  static double get_D_qNaN();
  static double get_D_sNaN();
  static double get_D_denormMin();


  static long double get_LD_inf();
  static long double get_LD_qNaN();
  static long double get_LD_sNaN();
  static long double get_LD_denormMin();

};
# 397 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_limits.h"
}

template<>
class numeric_limits<float>
  : public ::std::priv:: _Floating_limits<float,
                                       24,
                                       6,
                                       (-125),
                                       128,
                                       (-37),
                                       38,
                                       true,
                                       denorm_present,
                                       round_to_nearest> {
public:
  static float ( min) () { return 1.17549435e-38F; }
  static float denorm_min()

  { return 1.40129846e-45F; }



  static float ( max) () { return 3.40282347e+38F; }
  static float epsilon() { return 1.19209290e-7F; }
  static float round_error() { return 0.5f; }
  static float infinity() { return ::std::priv:: _LimG<bool>::get_F_inf(); }
  static float quiet_NaN() { return ::std::priv:: _LimG<bool>::get_F_qNaN(); }
  static float signaling_NaN() { return ::std::priv:: _LimG<bool>::get_F_sNaN(); }
};




template<>
class numeric_limits<double>
  : public ::std::priv:: _Floating_limits<double,
                                       53,
                                       15,
                                       (-1021),
                                       1024,
                                       (-307),
                                       308,
                                       true,
                                       denorm_present,
                                       round_to_nearest> {
public:
  static double ( min)() { return 2.2250738585072014e-308; }
  static double denorm_min()

  { return 4.9406564584124654e-324; }



  static double ( max)() { return 1.7976931348623157e+308; }
  static double epsilon() { return 2.2204460492503131e-16; }
  static double round_error() { return 0.5; }
  static double infinity() { return ::std::priv:: _LimG<bool>::get_D_inf(); }
  static double quiet_NaN() { return ::std::priv:: _LimG<bool>::get_D_qNaN(); }
  static double signaling_NaN() { return ::std::priv:: _LimG<bool>::get_D_sNaN(); }
};



template<>
class numeric_limits<long double>
  : public ::std::priv:: _Floating_limits<long double,
                                       53,
                                       15,
                                       (-1021),
                                       1024,
                                       (-307),
                                       308,
                                       false,
                                       denorm_present,
                                       round_to_nearest> {
public:
  static long double ( min) () { return 2.2250738585072014e-308L; }
  static long double denorm_min()

  { return 4.9406564584124654e-324L; }



  static const bool is_iec559 = false;
  static long double ( max) () { return 1.7976931348623157e+308L; }
  static long double epsilon() { return 2.2204460492503131e-16L; }
  static long double round_error() { return 0.5l; }
  static long double infinity()


  { return ::std::priv:: _LimG<bool>::get_LD_inf(); }



  static long double quiet_NaN()

  { return ::std::priv:: _LimG<bool>::get_LD_qNaN(); }



  static long double signaling_NaN()

  { return ::std::priv:: _LimG<bool>::get_LD_sNaN(); }



};





}


# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_limits.c" 1
# 30 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_limits.c"
namespace std {

namespace priv {







template <class __number> const bool _Numeric_limits_base<__number>:: is_specialized;
template <class __number> const int _Numeric_limits_base<__number>:: digits;
template <class __number> const int _Numeric_limits_base<__number>:: digits10;
template <class __number> const bool _Numeric_limits_base<__number>:: is_signed;
template <class __number> const bool _Numeric_limits_base<__number>:: is_integer;
template <class __number> const bool _Numeric_limits_base<__number>:: is_exact;
template <class __number> const int _Numeric_limits_base<__number>:: radix;
template <class __number> const int _Numeric_limits_base<__number>:: min_exponent;
template <class __number> const int _Numeric_limits_base<__number>:: max_exponent;
template <class __number> const int _Numeric_limits_base<__number>:: min_exponent10;
template <class __number> const int _Numeric_limits_base<__number>:: max_exponent10;
template <class __number> const bool _Numeric_limits_base<__number>:: has_infinity;
template <class __number> const bool _Numeric_limits_base<__number>:: has_quiet_NaN;
template <class __number> const bool _Numeric_limits_base<__number>:: has_signaling_NaN;
template <class __number> const float_denorm_style _Numeric_limits_base<__number>:: has_denorm;
template <class __number> const bool _Numeric_limits_base<__number>:: has_denorm_loss;
template <class __number> const bool _Numeric_limits_base<__number>:: is_iec559;
template <class __number> const bool _Numeric_limits_base<__number>:: is_bounded;
template <class __number> const bool _Numeric_limits_base<__number>:: is_modulo;
template <class __number> const bool _Numeric_limits_base<__number>:: traps;
template <class __number> const bool _Numeric_limits_base<__number>:: tinyness_before;
template <class __number> const float_round_style _Numeric_limits_base<__number>:: round_style;







template <class _Int, _Int __imin, _Int __imax, int __idigits, bool __ismod> const bool _Integer_limits<_Int, __imin, __imax, __idigits, __ismod>:: is_specialized;
template <class _Int, _Int __imin, _Int __imax, int __idigits, bool __ismod> const int _Integer_limits<_Int, __imin, __imax, __idigits, __ismod>:: digits;
template <class _Int, _Int __imin, _Int __imax, int __idigits, bool __ismod> const int _Integer_limits<_Int, __imin, __imax, __idigits, __ismod>:: digits10;
template <class _Int, _Int __imin, _Int __imax, int __idigits, bool __ismod> const bool _Integer_limits<_Int, __imin, __imax, __idigits, __ismod>:: is_signed;
template <class _Int, _Int __imin, _Int __imax, int __idigits, bool __ismod> const bool _Integer_limits<_Int, __imin, __imax, __idigits, __ismod>:: is_integer;
template <class _Int, _Int __imin, _Int __imax, int __idigits, bool __ismod> const bool _Integer_limits<_Int, __imin, __imax, __idigits, __ismod>:: is_exact;
template <class _Int, _Int __imin, _Int __imax, int __idigits, bool __ismod> const int _Integer_limits<_Int, __imin, __imax, __idigits, __ismod>:: radix;
template <class _Int, _Int __imin, _Int __imax, int __idigits, bool __ismod> const bool _Integer_limits<_Int, __imin, __imax, __idigits, __ismod>:: is_bounded;
template <class _Int, _Int __imin, _Int __imax, int __idigits, bool __ismod> const bool _Integer_limits<_Int, __imin, __imax, __idigits, __ismod>:: is_modulo;
# 115 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_limits.c"
template <class __number, int __Digits, int __Digits10, int __MinExp, int __MaxExp, int __MinExp10, int __MaxExp10, bool __IsIEC559, float_denorm_style __DenormStyle, float_round_style __RoundStyle> const bool _Floating_limits< __number, __Digits, __Digits10, __MinExp, __MaxExp, __MinExp10, __MaxExp10, __IsIEC559, __DenormStyle, __RoundStyle>:: is_specialized;
template <class __number, int __Digits, int __Digits10, int __MinExp, int __MaxExp, int __MinExp10, int __MaxExp10, bool __IsIEC559, float_denorm_style __DenormStyle, float_round_style __RoundStyle> const int _Floating_limits< __number, __Digits, __Digits10, __MinExp, __MaxExp, __MinExp10, __MaxExp10, __IsIEC559, __DenormStyle, __RoundStyle>:: digits;
template <class __number, int __Digits, int __Digits10, int __MinExp, int __MaxExp, int __MinExp10, int __MaxExp10, bool __IsIEC559, float_denorm_style __DenormStyle, float_round_style __RoundStyle> const int _Floating_limits< __number, __Digits, __Digits10, __MinExp, __MaxExp, __MinExp10, __MaxExp10, __IsIEC559, __DenormStyle, __RoundStyle>:: digits10;
template <class __number, int __Digits, int __Digits10, int __MinExp, int __MaxExp, int __MinExp10, int __MaxExp10, bool __IsIEC559, float_denorm_style __DenormStyle, float_round_style __RoundStyle> const bool _Floating_limits< __number, __Digits, __Digits10, __MinExp, __MaxExp, __MinExp10, __MaxExp10, __IsIEC559, __DenormStyle, __RoundStyle>:: is_signed;
template <class __number, int __Digits, int __Digits10, int __MinExp, int __MaxExp, int __MinExp10, int __MaxExp10, bool __IsIEC559, float_denorm_style __DenormStyle, float_round_style __RoundStyle> const int _Floating_limits< __number, __Digits, __Digits10, __MinExp, __MaxExp, __MinExp10, __MaxExp10, __IsIEC559, __DenormStyle, __RoundStyle>:: radix;
template <class __number, int __Digits, int __Digits10, int __MinExp, int __MaxExp, int __MinExp10, int __MaxExp10, bool __IsIEC559, float_denorm_style __DenormStyle, float_round_style __RoundStyle> const int _Floating_limits< __number, __Digits, __Digits10, __MinExp, __MaxExp, __MinExp10, __MaxExp10, __IsIEC559, __DenormStyle, __RoundStyle>:: min_exponent;
template <class __number, int __Digits, int __Digits10, int __MinExp, int __MaxExp, int __MinExp10, int __MaxExp10, bool __IsIEC559, float_denorm_style __DenormStyle, float_round_style __RoundStyle> const int _Floating_limits< __number, __Digits, __Digits10, __MinExp, __MaxExp, __MinExp10, __MaxExp10, __IsIEC559, __DenormStyle, __RoundStyle>:: max_exponent;
template <class __number, int __Digits, int __Digits10, int __MinExp, int __MaxExp, int __MinExp10, int __MaxExp10, bool __IsIEC559, float_denorm_style __DenormStyle, float_round_style __RoundStyle> const int _Floating_limits< __number, __Digits, __Digits10, __MinExp, __MaxExp, __MinExp10, __MaxExp10, __IsIEC559, __DenormStyle, __RoundStyle>:: min_exponent10;
template <class __number, int __Digits, int __Digits10, int __MinExp, int __MaxExp, int __MinExp10, int __MaxExp10, bool __IsIEC559, float_denorm_style __DenormStyle, float_round_style __RoundStyle> const int _Floating_limits< __number, __Digits, __Digits10, __MinExp, __MaxExp, __MinExp10, __MaxExp10, __IsIEC559, __DenormStyle, __RoundStyle>:: max_exponent10;
template <class __number, int __Digits, int __Digits10, int __MinExp, int __MaxExp, int __MinExp10, int __MaxExp10, bool __IsIEC559, float_denorm_style __DenormStyle, float_round_style __RoundStyle> const bool _Floating_limits< __number, __Digits, __Digits10, __MinExp, __MaxExp, __MinExp10, __MaxExp10, __IsIEC559, __DenormStyle, __RoundStyle>:: has_infinity;
template <class __number, int __Digits, int __Digits10, int __MinExp, int __MaxExp, int __MinExp10, int __MaxExp10, bool __IsIEC559, float_denorm_style __DenormStyle, float_round_style __RoundStyle> const bool _Floating_limits< __number, __Digits, __Digits10, __MinExp, __MaxExp, __MinExp10, __MaxExp10, __IsIEC559, __DenormStyle, __RoundStyle>:: has_quiet_NaN;
template <class __number, int __Digits, int __Digits10, int __MinExp, int __MaxExp, int __MinExp10, int __MaxExp10, bool __IsIEC559, float_denorm_style __DenormStyle, float_round_style __RoundStyle> const bool _Floating_limits< __number, __Digits, __Digits10, __MinExp, __MaxExp, __MinExp10, __MaxExp10, __IsIEC559, __DenormStyle, __RoundStyle>:: has_signaling_NaN;
template <class __number, int __Digits, int __Digits10, int __MinExp, int __MaxExp, int __MinExp10, int __MaxExp10, bool __IsIEC559, float_denorm_style __DenormStyle, float_round_style __RoundStyle> const float_denorm_style _Floating_limits< __number, __Digits, __Digits10, __MinExp, __MaxExp, __MinExp10, __MaxExp10, __IsIEC559, __DenormStyle, __RoundStyle>:: has_denorm;
template <class __number, int __Digits, int __Digits10, int __MinExp, int __MaxExp, int __MinExp10, int __MaxExp10, bool __IsIEC559, float_denorm_style __DenormStyle, float_round_style __RoundStyle> const bool _Floating_limits< __number, __Digits, __Digits10, __MinExp, __MaxExp, __MinExp10, __MaxExp10, __IsIEC559, __DenormStyle, __RoundStyle>:: has_denorm_loss;
template <class __number, int __Digits, int __Digits10, int __MinExp, int __MaxExp, int __MinExp10, int __MaxExp10, bool __IsIEC559, float_denorm_style __DenormStyle, float_round_style __RoundStyle> const bool _Floating_limits< __number, __Digits, __Digits10, __MinExp, __MaxExp, __MinExp10, __MaxExp10, __IsIEC559, __DenormStyle, __RoundStyle>:: is_iec559;
template <class __number, int __Digits, int __Digits10, int __MinExp, int __MaxExp, int __MinExp10, int __MaxExp10, bool __IsIEC559, float_denorm_style __DenormStyle, float_round_style __RoundStyle> const bool _Floating_limits< __number, __Digits, __Digits10, __MinExp, __MaxExp, __MinExp10, __MaxExp10, __IsIEC559, __DenormStyle, __RoundStyle>:: is_bounded;
template <class __number, int __Digits, int __Digits10, int __MinExp, int __MaxExp, int __MinExp10, int __MaxExp10, bool __IsIEC559, float_denorm_style __DenormStyle, float_round_style __RoundStyle> const bool _Floating_limits< __number, __Digits, __Digits10, __MinExp, __MaxExp, __MinExp10, __MaxExp10, __IsIEC559, __DenormStyle, __RoundStyle>:: traps;
template <class __number, int __Digits, int __Digits10, int __MinExp, int __MaxExp, int __MinExp10, int __MaxExp10, bool __IsIEC559, float_denorm_style __DenormStyle, float_round_style __RoundStyle> const bool _Floating_limits< __number, __Digits, __Digits10, __MinExp, __MaxExp, __MinExp10, __MaxExp10, __IsIEC559, __DenormStyle, __RoundStyle>:: tinyness_before;
template <class __number, int __Digits, int __Digits10, int __MinExp, int __MaxExp, int __MinExp10, int __MaxExp10, bool __IsIEC559, float_denorm_style __DenormStyle, float_round_style __RoundStyle> const float_round_style _Floating_limits< __number, __Digits, __Digits10, __MinExp, __MaxExp, __MinExp10, __MaxExp10, __IsIEC559, __DenormStyle, __RoundStyle>:: round_style;
# 154 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_limits.c"
template<class _Number, unsigned short _Word>
struct float_helper {
  union _WordsNumber {
    unsigned short _Words[8];
    _Number _num;
  };
  static _Number get_word_higher() {
    _WordsNumber __tmp = { { _Word, 0, 0, 0, 0, 0, 0, 0 } };
    return __tmp._num;
  }
  static _Number get_word_lower() {
    _WordsNumber __tmp = { { 0, 0, 0, 0, 0, 0, 0, 0 } };
    __tmp._Words[(sizeof(_Number) >= 12 ? 10 : sizeof(_Number)) / sizeof(unsigned short) - 1] = _Word;
    return __tmp._num;
  }
  static _Number get_from_last_word() {



    return get_word_lower();

  }
  static _Number get_from_first_word() {



    return get_word_higher();

  }
};


template<class _Number, unsigned short _Word1, unsigned short _Word2>
struct float_helper2 {
  union _WordsNumber {
    unsigned short _Words[8];
    _Number _num;
  };




  static _Number get_word_lower() {
    _WordsNumber __tmp = { { 0, 0, 0, 0, 0, 0, 0, 0 } };
    __tmp._Words[(sizeof(_Number) >= 12 ? 10 : sizeof(_Number)) / sizeof(unsigned short) - 2] = _Word1;
    __tmp._Words[(sizeof(_Number) >= 12 ? 10 : sizeof(_Number)) / sizeof(unsigned short) - 1] = _Word2;
    return __tmp._num;
  }
  static _Number get_from_last_word() {



    return get_word_lower();

  }
};
# 288 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_limits.c"
template <class __dummy>
float _LimG<__dummy>::get_F_inf() {
  typedef float_helper<float, 0x7f80u> _FloatHelper;
  return _FloatHelper::get_from_last_word();
}
template <class __dummy>
float _LimG<__dummy>::get_F_qNaN() {
  typedef float_helper<float, 0x7f81u> _FloatHelper;
  return _FloatHelper::get_from_last_word();
}
template <class __dummy>
float _LimG<__dummy>::get_F_sNaN() {
  typedef float_helper<float, 0x7fc1u> _FloatHelper;
  return _FloatHelper::get_from_last_word();
}
template <class __dummy>
float _LimG<__dummy>::get_F_denormMin() {
  typedef float_helper<float, 0x0001u> _FloatHelper;
  return _FloatHelper::get_from_first_word();
}

template <int __use_double_limits>
class _NumericLimitsAccess;

template<>
class _NumericLimitsAccess<1> {
public:
  static double get_inf() {
    typedef float_helper<double, 0x7ff0u> _FloatHelper;
    return _FloatHelper::get_from_last_word();
  }
  static double get_qNaN() {
    typedef float_helper<double, 0x7ff1u> _FloatHelper;
    return _FloatHelper::get_from_last_word();
  }
  static double get_sNaN() {
    typedef float_helper<double, 0x7ff9u> _FloatHelper;
    return _FloatHelper::get_from_last_word();
  }
};

template <class __dummy>
double _LimG<__dummy>::get_D_inf()
{ return _NumericLimitsAccess<1>::get_inf(); }
template <class __dummy>
double _LimG<__dummy>::get_D_qNaN()
{ return _NumericLimitsAccess<1>::get_qNaN(); }
template <class __dummy>
double _LimG<__dummy>::get_D_sNaN()
{ return _NumericLimitsAccess<1>::get_sNaN(); }
template <class __dummy>
double _LimG<__dummy>::get_D_denormMin() {
  typedef float_helper<double, 0x0001u> _FloatHelper;
  return _FloatHelper::get_from_first_word();
}


template<>
class _NumericLimitsAccess<0> {
public:
  static long double get_inf() {



    typedef float_helper2<long double, 0x8000u, 0x7fffu> _FloatHelper;

    return _FloatHelper::get_from_last_word();
  }
  static long double get_qNaN() {



    typedef float_helper2<long double, 0xc000u, 0x7fffu> _FloatHelper;

    return _FloatHelper::get_from_last_word();
  }
  static long double get_sNaN() {



    typedef float_helper2<long double, 0x9000u, 0x7fffu> _FloatHelper;

    return _FloatHelper::get_from_last_word();
  }
};

template <class __dummy>
long double _LimG<__dummy>::get_LD_inf() {
  const int __use_double_limits = sizeof(double) == sizeof(long double) ? 1 : 0;
  return _NumericLimitsAccess<__use_double_limits>::get_inf();
}
template <class __dummy>
long double _LimG<__dummy>::get_LD_qNaN() {
  const int __use_double_limits = sizeof(double) == sizeof(long double) ? 1 : 0;
  return _NumericLimitsAccess<__use_double_limits>::get_qNaN();
}
template <class __dummy>
long double _LimG<__dummy>::get_LD_sNaN() {
  const int __use_double_limits = sizeof(double) == sizeof(long double) ? 1 : 0;
  return _NumericLimitsAccess<__use_double_limits>::get_sNaN();
}
template <class __dummy>
long double _LimG<__dummy>::get_LD_denormMin() {
  typedef float_helper<long double, 0x0001u> _FloatHelper;
  return _FloatHelper::get_from_first_word();
}







}

}
# 513 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_limits.h" 2
# 27 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_num_put.c" 2


namespace std {

namespace priv {
# 40 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_num_put.c"
template <class _CharT, class _OutputIter>
_OutputIter
__copy_float_and_fill(const _CharT* __first, const _CharT* __last,
                      _OutputIter __oi,
                      ios_base::fmtflags __flags,
                      streamsize __width, _CharT __fill,
                      _CharT __xplus, _CharT __xminus) {
  if (__width <= __last - __first)
    return ::std::copy(__first, __last, __oi);
  else {
    streamsize __pad = __width - (__last - __first);
    ios_base::fmtflags __dir = __flags & ios_base::adjustfield;

    if (__dir == ios_base::left) {
      __oi = ::std::copy(__first, __last, __oi);
      return ::std::priv:: __fill_n(__oi, __pad, __fill);
    }
    else if (__dir == ios_base::internal && __first != __last &&
             (*__first == __xplus || *__first == __xminus)) {
      *__oi++ = *__first++;
      __oi = ::std::priv:: __fill_n(__oi, __pad, __fill);
      return ::std::copy(__first, __last, __oi);
    }
    else {
      __oi = ::std::priv:: __fill_n(__oi, __pad, __fill);
      return ::std::copy(__first, __last, __oi);
    }
  }
}



template <class _OutputIter>
_OutputIter
__put_float(__iostring &__str, _OutputIter __oi,
            ios_base& __f, wchar_t __fill,
            wchar_t __decimal_point, wchar_t __sep,
            size_t __group_pos, const string& __grouping) {
  const ctype<wchar_t>& __ct = use_facet<ctype<wchar_t> >(__f.getloc());

  __iowstring __wbuf;
  __convert_float_buffer(__str, __wbuf, __ct, __decimal_point);

  if (!__grouping.empty()) {
    __insert_grouping(__wbuf, __group_pos, __grouping,
                      __sep, __ct.widen('+'), __ct.widen('-'), 0);
  }

  return __copy_float_and_fill(__wbuf.data(), __wbuf.data() + __wbuf.size(), __oi,
                               __f.flags(), __f.width(0), __fill, __ct.widen('+'), __ct.widen('-'));
}



template <class _OutputIter>
_OutputIter
__put_float(__iostring &__str, _OutputIter __oi,
            ios_base& __f, char __fill,
            char __decimal_point, char __sep,
            size_t __group_pos, const string& __grouping) {
  if ((__group_pos < __str.size()) && (__str[__group_pos] == '.')) {
    __str[__group_pos] = __decimal_point;
  }

  if (!__grouping.empty()) {
    __insert_grouping(__str, __group_pos,
                      __grouping, __sep, '+', '-', 0);
  }

  return __copy_float_and_fill(__str.data(), __str.data() + __str.size(), __oi,
                               __f.flags(), __f.width(0), __fill, '+', '-');
}

template <class _CharT, class _OutputIter, class _Float>
_OutputIter
__do_put_float(_OutputIter __s, ios_base& __f,
                _CharT __fill, _Float __x) {
  __iostring __buf;

  size_t __group_pos = __write_float(__buf, __f.flags(), (int)__f.precision(), __x);

  const numpunct<_CharT>& __np = use_facet<numpunct<_CharT> >(__f.getloc());
  return __put_float(__buf, __s, __f, __fill,
                     __np.decimal_point(), __np.thousands_sep(),
                     __group_pos, __np.grouping());
}

inline void __get_money_digits_aux (__iostring &__buf, ios_base &, long double __x)
{ __get_floor_digits(__buf, __x); }


inline void __get_money_digits_aux (__iowstring &__wbuf, ios_base &__f, long double __x) {
  __iostring __buf;
  __get_floor_digits(__buf, __x);

  const ctype<wchar_t>& __ct = use_facet<ctype<wchar_t> >(__f.getloc());
  __convert_float_buffer(__buf, __wbuf, __ct, wchar_t(0), false);
}


template <class _CharT>
void __get_money_digits(::std::priv:: __basic_iostring<_CharT> &__buf, ios_base& __f, long double __x)
{ __get_money_digits_aux(__buf, __f, __x); }



template <class _CharT, class _OutputIter>
_OutputIter
__copy_integer_and_fill(const _CharT* __buf, ptrdiff_t __len,
                        _OutputIter __oi,
                        ios_base::fmtflags __flg, streamsize __wid, _CharT __fill,
                        _CharT __xplus, _CharT __xminus) {
  if (__len >= __wid)
    return ::std::copy(__buf, __buf + __len, __oi);
  else {


    typedef char __static_assert[(sizeof(streamsize) > sizeof(ptrdiff_t)) || ((sizeof(streamsize) == sizeof(ptrdiff_t)) && numeric_limits<ptrdiff_t>::is_signed) ? 1 : -1];

    ptrdiff_t __pad = static_cast<ptrdiff_t>((min) (static_cast<streamsize>((numeric_limits<ptrdiff_t>::max)()), static_cast<streamsize>(__wid - __len)));

    ios_base::fmtflags __dir = __flg & ios_base::adjustfield;

    if (__dir == ios_base::left) {
      __oi = ::std::copy(__buf, __buf + __len, __oi);
      return ::std::priv:: __fill_n(__oi, __pad, __fill);
    }
    else if (__dir == ios_base::internal && __len != 0 &&
             (__buf[0] == __xplus || __buf[0] == __xminus)) {
      *__oi++ = __buf[0];
      __oi = __fill_n(__oi, __pad, __fill);
      return ::std::copy(__buf + 1, __buf + __len, __oi);
    }
    else if (__dir == ios_base::internal && __len >= 2 &&
             (__flg & ios_base::showbase) &&
             (__flg & ios_base::basefield) == ios_base::hex) {
      *__oi++ = __buf[0];
      *__oi++ = __buf[1];
      __oi = __fill_n(__oi, __pad, __fill);
      return ::std::copy(__buf + 2, __buf + __len, __oi);
    }
    else {
      __oi = __fill_n(__oi, __pad, __fill);
      return ::std::copy(__buf, __buf + __len, __oi);
    }
  }
}



template <class _OutputIter>
_OutputIter
__put_integer(char* __buf, char* __iend, _OutputIter __s,
              ios_base& __f,
              ios_base::fmtflags __flags, wchar_t __fill) {
  locale __loc = __f.getloc();
  const ctype<wchar_t>& __ct = use_facet<ctype<wchar_t> >(__loc);

  wchar_t __xplus = __ct.widen('+');
  wchar_t __xminus = __ct.widen('-');

  wchar_t __wbuf[64];
  __ct.widen(__buf, __iend, __wbuf);
  ptrdiff_t __len = __iend - __buf;
  wchar_t* __eend = __wbuf + __len;

  const numpunct<wchar_t>& __np = use_facet<numpunct<wchar_t> >(__loc);
  const string& __grouping = __np.grouping();

  if (!__grouping.empty()) {
    int __basechars;
    if (__flags & ios_base::showbase)
      switch (__flags & ios_base::basefield) {
        case ios_base::hex: __basechars = 2; break;
        case ios_base::oct: __basechars = 1; break;
        default: __basechars = 0;
      }
    else
      __basechars = 0;

    __len = __insert_grouping(__wbuf, __eend, __grouping, __np.thousands_sep(),
                              __xplus, __xminus, __basechars);
  }

  return __copy_integer_and_fill((wchar_t*)__wbuf, __len, __s,
                                 __flags, __f.width(0), __fill, __xplus, __xminus);
}



template <class _OutputIter>
_OutputIter
__put_integer(char* __buf, char* __iend, _OutputIter __s,
              ios_base& __f, ios_base::fmtflags __flags, char __fill) {
  char __grpbuf[64];
  ptrdiff_t __len = __iend - __buf;

  const numpunct<char>& __np = use_facet<numpunct<char> >(__f.getloc());
  const string& __grouping = __np.grouping();

  if (!__grouping.empty()) {
    int __basechars;
    if (__flags & ios_base::showbase)
      switch (__flags & ios_base::basefield) {
        case ios_base::hex: __basechars = 2; break;
        case ios_base::oct: __basechars = 1; break;
        default: __basechars = 0;
      }
    else
      __basechars = 0;



    ::std::copy(__buf, __iend, (char *) __grpbuf);
    __buf = __grpbuf;
    __iend = __grpbuf + __len;
    __len = __insert_grouping(__buf, __iend, __grouping, __np.thousands_sep(),
                              '+', '-', __basechars);
  }

  return __copy_integer_and_fill(__buf, __len, __s, __flags, __f.width(0), __fill, '+', '-');
}


typedef long long __max_int_t;
typedef unsigned long long __umax_int_t;





__attribute__((visibility("default"))) const char* __hex_char_table_lo();
__attribute__((visibility("default"))) const char* __hex_char_table_hi();

template <class _Integer>
inline char*
__write_decimal_backward(char* __ptr, _Integer __x, ios_base::fmtflags __flags, const __true_type& ) {
  const bool __negative = __x < 0 ;
  __max_int_t __temp = __x;
  __umax_int_t __utemp = __negative?-__temp:__temp;

  for (; __utemp != 0; __utemp /= 10)
    *--__ptr = (char)((int)(__utemp % 10) + '0');

  if (__negative)
    *--__ptr = '-';
  else if (__flags & ios_base::showpos)
    *--__ptr = '+';
  return __ptr;
}

template <class _Integer>
inline char*
__write_decimal_backward(char* __ptr, _Integer __x, ios_base::fmtflags __flags, const __false_type& ) {
  for (; __x != 0; __x /= 10)
    *--__ptr = (char)((int)(__x % 10) + '0');

  if (__flags & ios_base::showpos)
    *--__ptr = '+';
  return __ptr;
}

template <class _Integer>
char*
__write_integer_backward(char* __buf, ios_base::fmtflags __flags, _Integer __x) {
  char* __ptr = __buf;

  if (__x == 0) {
    *--__ptr = '0';
    if ((__flags & ios_base::showpos) && ((__flags & (ios_base::oct | ios_base::hex)) == 0))
      *--__ptr = '+';

  }
  else {
    switch (__flags & ios_base::basefield) {
      case ios_base::oct:
        {
          __umax_int_t __temp = __x;

          if ( sizeof(__x) < 8 && sizeof(__umax_int_t) >= 8 )
            __temp &= 0xFFFFFFFF;

          for (; __temp != 0; __temp >>=3)
            *--__ptr = (char)((((unsigned)__temp)& 0x7) + '0');


          if (__flags & ios_base::showbase)
            *--__ptr = '0';
        }
        break;
      case ios_base::hex:
        {
          const char* __table_ptr = (__flags & ios_base::uppercase) ?
            __hex_char_table_hi() : __hex_char_table_lo();
          __umax_int_t __temp = __x;

          if ( sizeof(__x) < 8 && sizeof(__umax_int_t) >= 8 )
            __temp &= 0xFFFFFFFF;

          for (; __temp != 0; __temp >>=4)
            *--__ptr = __table_ptr[((unsigned)__temp & 0xF)];

          if (__flags & ios_base::showbase) {
            *--__ptr = __table_ptr[16];
            *--__ptr = '0';
          }
        }
        break;

      default:
        {







          typedef typename __bool2type<numeric_limits<_Integer>::is_signed>::_Ret _IsSigned;
          __ptr = __write_decimal_backward(__ptr, __x, __flags, _IsSigned());

        }
        break;
    }
  }


  return __ptr;
}

template <class _CharT, class _OutputIter, class _Integer>
_OutputIter
__do_put_integer(_OutputIter __s, ios_base& __f, _CharT __fill, _Integer __x) {




  char __buf[sizeof(_Integer) * 3 + 2];
  const ptrdiff_t __buf_size = sizeof(__buf) / sizeof(char);
  ios_base::fmtflags __flags = __f.flags();
  char* __ibeg = __write_integer_backward((char*)__buf + __buf_size, __flags, __x);
  return __put_integer(__ibeg, (char*)__buf + __buf_size, __s, __f, __flags, __fill);
}

template <class _CharT, class _OutputIter>
_OutputIter
__do_put_bool(_OutputIter __s, ios_base& __f, _CharT __fill, bool __x) {
  const numpunct<_CharT>& __np = use_facet<numpunct<_CharT> >(__f.getloc());

  basic_string<_CharT, char_traits<_CharT>, allocator<_CharT> > __str = __x ? __np.truename() : __np.falsename();

  streamsize __wid = __f.width(0);
  if (__str.size() >= static_cast<size_t>(__wid))
    return ::std::copy(__str.begin(), __str.end(), __s);
  else {
    streamsize __pad = __wid - __str.size();
    ios_base::fmtflags __dir = __f.flags() & ios_base::adjustfield;

    if (__dir == ios_base::left) {
      __s = ::std::copy(__str.begin(), __str.end(), __s);
      return __fill_n(__s, __pad, __fill);
    }
    else {
      __s = __fill_n(__s, __pad, __fill);
      return ::std::copy(__str.begin(), __str.end(), __s);
    }
  }
}
}





template <class _CharT, class _OutputIterator>
locale::id num_put<_CharT, _OutputIterator>::id;


template <class _CharT, class _OutputIter>
_OutputIter
num_put<_CharT, _OutputIter>::do_put(_OutputIter __s, ios_base& __f, _CharT __fill,
                                     bool __val) const {
  if (!(__f.flags() & ios_base::boolalpha))

    return do_put(__s, __f, __fill, static_cast<long>(__val));

  return ::std::priv:: __do_put_bool(__s, __f, __fill, __val);
}


template <class _CharT, class _OutputIter>
_OutputIter
num_put<_CharT, _OutputIter>::do_put(_OutputIter __s, ios_base& __f, _CharT __fill,
                                     long __val) const
{ return ::std::priv:: __do_put_integer(__s, __f, __fill, __val); }

template <class _CharT, class _OutputIter>
_OutputIter
num_put<_CharT, _OutputIter>::do_put(_OutputIter __s, ios_base& __f, _CharT __fill,
                                     unsigned long __val) const
{ return ::std::priv:: __do_put_integer(__s, __f, __fill, __val); }

template <class _CharT, class _OutputIter>
_OutputIter
num_put<_CharT, _OutputIter>::do_put(_OutputIter __s, ios_base& __f, _CharT __fill,
                                     double __val) const
{ return ::std::priv:: __do_put_float(__s, __f, __fill, __val); }


template <class _CharT, class _OutputIter>
_OutputIter
num_put<_CharT, _OutputIter>::do_put(_OutputIter __s, ios_base& __f, _CharT __fill,
                                     long double __val) const
{ return ::std::priv:: __do_put_float(__s, __f, __fill, __val); }



template <class _CharT, class _OutputIter>
_OutputIter
num_put<_CharT, _OutputIter>::do_put(_OutputIter __s, ios_base& __f, _CharT __fill,
                                     long long __val) const
{ return ::std::priv:: __do_put_integer(__s, __f, __fill, __val); }

template <class _CharT, class _OutputIter>
_OutputIter
num_put<_CharT, _OutputIter>::do_put(_OutputIter __s, ios_base& __f, _CharT __fill,
                                     unsigned long long __val) const
{ return ::std::priv:: __do_put_integer(__s, __f, __fill, __val); }





template <class _CharT, class _OutputIter>
_OutputIter
num_put<_CharT, _OutputIter>::do_put(_OutputIter __s, ios_base& __f, _CharT ,
                                     const void* __val) const {
  const ctype<_CharT>& __c_type = use_facet<ctype<_CharT> >(__f.getloc());
  ios_base::fmtflags __save_flags = __f.flags();

  __f.setf(ios_base::hex, ios_base::basefield);
  __f.setf(ios_base::showbase);
  __f.setf(ios_base::internal, ios_base::adjustfield);
  __f.width((sizeof(void*) * 2) + 2);
  if ( __val == 0 ) {


    const char* __table_ptr = (__save_flags & ios_base::uppercase) ?
            ::std::priv:: __hex_char_table_hi() : ::std::priv:: __hex_char_table_lo();
    __s++ = __c_type.widen( '0' );
    __s++ = __c_type.widen( __table_ptr[16] );
    __f.width((sizeof(void*) * 2));
  } else {
    __f.width((sizeof(void*) * 2) + 2);
  }




  _OutputIter result =

    ( sizeof(void*) == sizeof(unsigned long) ) ?

    ::std::priv:: __do_put_integer(__s, __f, __c_type.widen('0'), reinterpret_cast<unsigned long>(__val))

      :
    ::std::priv:: __do_put_integer(__s, __f, __c_type.widen('0'), reinterpret_cast<unsigned long long>(__val))

        ;



  __f.flags(__save_flags);
  return result;
}

}
# 181 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_num_put.h" 2
# 27 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_ostream.c" 2


namespace std {






template <class _CharT, class _Traits>
basic_ostream<_CharT, _Traits>::basic_ostream(basic_streambuf<_CharT, _Traits>* __buf)
    : basic_ios<_CharT, _Traits>() {
  this->init(__buf);
}

template <class _CharT, class _Traits>
basic_ostream<_CharT, _Traits>::~basic_ostream()
{}


template <class _CharT, class _Traits>
basic_ostream<_CharT, _Traits>&
basic_ostream<_CharT, _Traits>::operator<<(basic_streambuf<_CharT, _Traits>* __from) {
  sentry __sentry(*this);
  if (__sentry) {
    if (__from) {
      bool __any_inserted = __from->gptr() != __from->egptr()
        ? this->_M_copy_buffered(__from, this->rdbuf())
        : this->_M_copy_unbuffered(__from, this->rdbuf());
      if (!__any_inserted)
        this->setstate(ios_base::failbit);
    }
    else
      this->setstate(ios_base::badbit);
  }

  return *this;
}






template <class _CharT, class _Traits>
bool basic_ostream<_CharT, _Traits>
  ::_M_copy_buffered(basic_streambuf<_CharT, _Traits>* __from,
                     basic_streambuf<_CharT, _Traits>* __to) {
  bool __any_inserted = false;

  while (__from->egptr() != __from->gptr()) {
    const ptrdiff_t __avail = __from->egptr() - __from->gptr();

    streamsize __nwritten;
    {
      __nwritten = __to->sputn(__from->gptr(), __avail);
      __from->gbump((int)__nwritten);
    }
    if (false) {
      this->_M_handle_exception(ios_base::badbit);
      return __any_inserted;
    }

    if (__nwritten == __avail) {
      {
        if (this->_S_eof(__from->sgetc()))
          return true;
        else
          __any_inserted = true;
      }
      if (false) {
        this->_M_handle_exception(ios_base::failbit);
        return false;
      }
    }
    else if (__nwritten != 0)
      return true;
    else
      return __any_inserted;
  }



  return __any_inserted || this->_M_copy_unbuffered(__from, __to);
}





template <class _CharT, class _Traits>
struct _SPutBackC {
  typedef basic_streambuf<_CharT, _Traits> _StreamBuf;
  typedef typename _StreamBuf::int_type int_type;
  _SPutBackC(_StreamBuf *pfrom)
    : __pfrom(pfrom), __c(0), __do_guard(false) {}
  ~_SPutBackC() {
    if (__do_guard) {
      __pfrom->sputbackc(_Traits::to_char_type(__c));
    }
  }

  void guard(int_type c) {
    __c = c;
    __do_guard = true;
  }
  void release() {
    __do_guard = false;
  }

private:
  _StreamBuf *__pfrom;
  int_type __c;
  bool __do_guard;
};

template <class _CharT, class _Traits>
bool basic_ostream<_CharT, _Traits>
  ::_M_copy_unbuffered(basic_streambuf<_CharT, _Traits>* __from,
                       basic_streambuf<_CharT, _Traits>* __to) {
  typedef _SPutBackC<_CharT, _Traits> _SPutBackCGuard;
  bool __any_inserted = false;
  int_type __c;

  {
    _SPutBackCGuard __cguard(__from);
    for (;;) {
      {
        __c = __from->sbumpc();
      }
      if (false) {
        this->_M_handle_exception(ios_base::failbit);
        break;
      }

      if (this->_S_eof(__c))
        break;

      __cguard.guard(__c);



      if (this->_S_eof(__to->sputc(_Traits::to_char_type(__c))))
        break;
# 179 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_ostream.c"
      __cguard.release();
      __any_inserted = true;
    }
  }
  if (false) {
    this->_M_handle_exception(ios_base::badbit);
  }
  return __any_inserted;
}

namespace priv {


template <class _CharT, class _Traits, class _Number>
basic_ostream<_CharT, _Traits>&
__put_num(basic_ostream<_CharT, _Traits>& __os, _Number __x) {
  typedef typename basic_ostream<_CharT, _Traits>::sentry _Sentry;
  _Sentry __sentry(__os);
  bool __failed = true;

  if (__sentry) {
    {
      typedef num_put<_CharT, ostreambuf_iterator<_CharT, _Traits> > _NumPut;
      __failed = (use_facet<_NumPut>(__os.getloc())).put(ostreambuf_iterator<_CharT, _Traits>(__os.rdbuf()),
                                                         __os, __os.fill(),
                                                         __x).failed();
    }
    if (false) {
      __os._M_handle_exception(ios_base::badbit);
    }
  }
  if (__failed)
    __os.setstate(ios_base::badbit);
  return __os;
}

}





template <class _CharT, class _Traits>
basic_ostream<_CharT, _Traits>& basic_ostream<_CharT, _Traits>::operator<<(short __x) {
  typedef char __static_assert[sizeof(short) <= sizeof(long) ? 1 : -1];
  long __tmp = ((this->flags() & _Basic_ios::basefield) != ios_base::dec) ?
                  static_cast<long>(static_cast<unsigned short>(__x)): __x;
  return ::std::priv:: __put_num(*this, __tmp);
}

template <class _CharT, class _Traits>
basic_ostream<_CharT, _Traits>& basic_ostream<_CharT, _Traits>::operator<<(unsigned short __x) {
  typedef char __static_assert[sizeof(unsigned short) <= sizeof(unsigned long) ? 1 : -1];
  return ::std::priv:: __put_num(*this, static_cast<unsigned long>(__x));
}

template <class _CharT, class _Traits>
basic_ostream<_CharT, _Traits>& basic_ostream<_CharT, _Traits>::operator<<(int __x) {
  typedef char __static_assert[sizeof(int) <= sizeof(long) ? 1 : -1];
  long __tmp = ((this->flags() & _Basic_ios::basefield) != ios_base::dec) ?
                  static_cast<long>(static_cast<unsigned int>(__x)): __x;
  return ::std::priv:: __put_num(*this, __tmp);
}

template <class _CharT, class _Traits>

basic_ostream<_CharT, _Traits>& basic_ostream<_CharT, _Traits>::operator<<(unsigned int __x) {
  typedef char __static_assert[sizeof(unsigned int) <= sizeof(unsigned long) ? 1 : -1];







  return ::std::priv:: __put_num(*this, static_cast<unsigned long>(__x));
}

template <class _CharT, class _Traits>
basic_ostream<_CharT, _Traits>& basic_ostream<_CharT, _Traits>::operator<<(long __x)
{ return ::std::priv:: __put_num(*this, __x); }

template <class _CharT, class _Traits>
basic_ostream<_CharT, _Traits>& basic_ostream<_CharT, _Traits>::operator<<(unsigned long __x)
{ return ::std::priv:: __put_num(*this, __x); }


template <class _CharT, class _Traits>
basic_ostream<_CharT, _Traits>& basic_ostream<_CharT, _Traits>::operator<< (long long __x)
{ return ::std::priv:: __put_num(*this, __x); }

template <class _CharT, class _Traits>
basic_ostream<_CharT, _Traits>& basic_ostream<_CharT, _Traits>::operator<< (unsigned long long __x)
{ return ::std::priv:: __put_num(*this, __x); }


template <class _CharT, class _Traits>
basic_ostream<_CharT, _Traits>& basic_ostream<_CharT, _Traits>::operator<<(float __x)
{ return ::std::priv:: __put_num(*this, static_cast<double>(__x)); }

template <class _CharT, class _Traits>
basic_ostream<_CharT, _Traits>& basic_ostream<_CharT, _Traits>::operator<<(double __x)
{ return ::std::priv:: __put_num(*this, __x); }


template <class _CharT, class _Traits>
basic_ostream<_CharT, _Traits>& basic_ostream<_CharT, _Traits>::operator<<(long double __x)
{ return ::std::priv:: __put_num(*this, __x); }


template <class _CharT, class _Traits>
basic_ostream<_CharT, _Traits>& basic_ostream<_CharT, _Traits>::operator<<(const void* __x)
{ return ::std::priv:: __put_num(*this, __x); }


template <class _CharT, class _Traits>
basic_ostream<_CharT, _Traits>& basic_ostream<_CharT, _Traits>::operator<<(bool __x)
{ return ::std::priv:: __put_num(*this, __x); }


template <class _CharT, class _Traits>
void basic_ostream<_CharT, _Traits>::_M_put_char(_CharT __c) {
  sentry __sentry(*this);
  if (__sentry) {
    bool __failed = true;
    {
      streamsize __npad = this->width() > 0 ? this->width() - 1 : 0;

      if (__npad == 0)
        __failed = this->_S_eof(this->rdbuf()->sputc(__c));
      else if ((this->flags() & ios_base::adjustfield) == ios_base::left) {
        __failed = this->_S_eof(this->rdbuf()->sputc(__c));
        __failed = __failed ||
                   this->rdbuf()->_M_sputnc(this->fill(), __npad) != __npad;
      }
      else {
        __failed = this->rdbuf()->_M_sputnc(this->fill(), __npad) != __npad;
        __failed = __failed || this->_S_eof(this->rdbuf()->sputc(__c));
      }

      this->width(0);
    }
    if (false) {
      this->_M_handle_exception(ios_base::badbit);
    }

    if (__failed)
      this->setstate(ios_base::badbit);
  }
}

template <class _CharT, class _Traits>
void basic_ostream<_CharT, _Traits>::_M_put_nowiden(const _CharT* __s) {
  sentry __sentry(*this);
  if (__sentry) {
    bool __failed = true;
    streamsize __n = _Traits::length(__s);
    streamsize __npad = this->width() > __n ? this->width() - __n : 0;

    {
      if (__npad == 0)
        __failed = this->rdbuf()->sputn(__s, __n) != __n;
      else if ((this->flags() & ios_base::adjustfield) == ios_base::left) {
        __failed = this->rdbuf()->sputn(__s, __n) != __n;
        __failed = __failed ||
                   this->rdbuf()->_M_sputnc(this->fill(), __npad) != __npad;
      }
      else {
        __failed = this->rdbuf()->_M_sputnc(this->fill(), __npad) != __npad;
        __failed = __failed || this->rdbuf()->sputn(__s, __n) != __n;
      }

      this->width(0);
    }
    if (false) {
      this->_M_handle_exception(ios_base::badbit);
    }

    if (__failed)
      this->setstate(ios_base::failbit);
  }
}

template <class _CharT, class _Traits>
void basic_ostream<_CharT, _Traits>::_M_put_widen(const char* __s) {
  sentry __sentry(*this);
  if (__sentry) {
    bool __failed = true;
    streamsize __n = char_traits<char>::length(__s);
    streamsize __npad = this->width() > __n ? this->width() - __n : 0;

    {
      if (__npad == 0)
        __failed = !this->_M_put_widen_aux(__s, __n);
      else if ((this->flags() & ios_base::adjustfield) == ios_base::left) {
        __failed = !this->_M_put_widen_aux(__s, __n);
        __failed = __failed ||
                   this->rdbuf()->_M_sputnc(this->fill(), __npad) != __npad;
      }
      else {
        __failed = this->rdbuf()->_M_sputnc(this->fill(), __npad) != __npad;
        __failed = __failed || !this->_M_put_widen_aux(__s, __n);
      }

      this->width(0);
    }
    if (false) {
      this->_M_handle_exception(ios_base::badbit);
    }

    if (__failed)
      this->setstate(ios_base::failbit);
  }
}

template <class _CharT, class _Traits>
bool basic_ostream<_CharT, _Traits>::_M_put_widen_aux(const char* __s,
                                                      streamsize __n) {
  basic_streambuf<_CharT, _Traits>* __buf = this->rdbuf();

  for ( ; __n > 0 ; --__n)
    if (this->_S_eof(__buf->sputc(this->widen(*__s++))))
      return false;
  return true;
}


template <class _CharT, class _Traits>
basic_ostream<_CharT, _Traits>&
basic_ostream<_CharT, _Traits>::put(char_type __c) {
  sentry __sentry(*this);
  bool __failed = true;

  if (__sentry) {
    {
      __failed = this->_S_eof(this->rdbuf()->sputc(__c));
    }
    if (false) {
      this->_M_handle_exception(ios_base::badbit);
    }
  }

  if (__failed)
    this->setstate(ios_base::badbit);

  return *this;
}


template <class _CharT, class _Traits>
basic_ostream<_CharT, _Traits>&
basic_ostream<_CharT, _Traits>::write(const char_type* __s, streamsize __n) {
  sentry __sentry(*this);
  bool __failed = true;

  if (__sentry) {
    {
      __failed = this->rdbuf()->sputn(__s, __n) != __n;
    }
    if (false) {
      this->_M_handle_exception(ios_base::badbit);
    }
  }

  if (__failed)
    this->setstate(ios_base::badbit);

  return *this;
}

}
# 381 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_ostream.h" 2
# 24 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_string_io.h" 2



# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_istream.h" 1
# 35 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_istream.h"
# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_istreambuf_iterator.h" 1
# 34 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_istreambuf_iterator.h"
namespace std {


template <class _CharT, class _Traits>
extern basic_streambuf<_CharT, _Traits>* _M_get_istreambuf(basic_istream<_CharT, _Traits>& ) ;





template<class _CharT, class _Traits>
class istreambuf_iterator :
  public iterator<input_iterator_tag, _CharT, typename _Traits::off_type, _CharT*, _CharT&>
{
public:
  typedef _CharT char_type;
  typedef _Traits traits_type;
  typedef typename _Traits::int_type int_type;
  typedef basic_streambuf<_CharT, _Traits> streambuf_type;
  typedef basic_istream<_CharT, _Traits> istream_type;

  typedef input_iterator_tag iterator_category;
  typedef _CharT value_type;
  typedef typename _Traits::off_type difference_type;
  typedef const _CharT* pointer;
  typedef const _CharT& reference;

public:
  istreambuf_iterator(streambuf_type* __p = 0) { this->_M_init(__p); }

  inline istreambuf_iterator(basic_istream<_CharT, _Traits>& __is);

  char_type operator*() const { this->_M_getc(); return _M_c; }
  istreambuf_iterator<_CharT, _Traits>& operator++() {
    _M_buf->sbumpc();
    _M_have_c = false;
    return *this;
  }
  istreambuf_iterator<_CharT, _Traits> operator++(int);

  bool equal(const istreambuf_iterator<_CharT, _Traits>& __i) const {
    if (this->_M_buf)
      this->_M_getc();
    if (__i._M_buf)
      __i._M_getc();
    return this->_M_eof == __i._M_eof;
  }

private:
  void _M_init(streambuf_type* __p) {
    _M_buf = __p;
    _M_eof = (__p == 0);
    _M_have_c = false;
  }

  void _M_getc() const {
    if (_M_have_c)
      return;
    int_type __c = _M_buf->sgetc();
    _M_c = traits_type::to_char_type(__c);
    _M_eof = traits_type::eq_int_type(__c, traits_type::eof());
    _M_have_c = true;
  }

private:
  streambuf_type* _M_buf;
  mutable _CharT _M_c;
  mutable bool _M_eof;
  mutable bool _M_have_c;
};

template<class _CharT, class _Traits>
inline istreambuf_iterator<_CharT, _Traits>::istreambuf_iterator(basic_istream<_CharT, _Traits>& __is)
{ this->_M_init(_M_get_istreambuf(__is)); }

template<class _CharT, class _Traits>
inline bool operator==(const istreambuf_iterator<_CharT, _Traits>& __x,
                                  const istreambuf_iterator<_CharT, _Traits>& __y) {
  return __x.equal(__y);
}



template<class _CharT, class _Traits>
inline bool operator!=(const istreambuf_iterator<_CharT, _Traits>& __x,
                                  const istreambuf_iterator<_CharT, _Traits>& __y) {
  return !__x.equal(__y);
}
# 142 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_istreambuf_iterator.h"
template <class _CharT, class _Traits>
istreambuf_iterator<_CharT, _Traits>
istreambuf_iterator<_CharT, _Traits>::operator++(int) {
  _M_getc();


  istreambuf_iterator<_CharT, _Traits> __tmp = *this;
  _M_buf->sbumpc();
  _M_have_c = false;
  return __tmp;
}

}
# 36 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_istream.h" 2




namespace std {






struct _No_Skip_WS {};

template <class _CharT, class _Traits>
bool _M_init_skip(basic_istream<_CharT, _Traits>& __istr);
template <class _CharT, class _Traits>
bool _M_init_noskip(basic_istream<_CharT, _Traits>& __istr);
# 62 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_istream.h"
template <class _CharT, class _Traits>
class basic_istream : virtual public basic_ios<_CharT, _Traits> {
  typedef basic_istream<_CharT, _Traits> _Self;







public:

  typedef _CharT char_type;
  typedef typename _Traits::int_type int_type;
  typedef typename _Traits::pos_type pos_type;
  typedef typename _Traits::off_type off_type;
  typedef _Traits traits_type;
  typedef basic_ios<_CharT, _Traits> _Basic_ios;

  typedef basic_ios<_CharT, _Traits>& ( *__ios_fn)(basic_ios<_CharT, _Traits>&);
  typedef ios_base& ( *__ios_base_fn)(ios_base&);
  typedef _Self& ( *__istream_fn)(_Self&);

public:
  explicit basic_istream(basic_streambuf<_CharT, _Traits>* __buf) :
    basic_ios<_CharT, _Traits>(), _M_gcount(0) {
    this->init(__buf);
  }
  ~basic_istream() {};

public:

public:

  _Self& operator>> (__istream_fn __f) { return __f(*this); }
  _Self& operator>> (__ios_fn __f) { __f(*this); return *this; }
  _Self& operator>> (__ios_base_fn __f) { __f(*this); return *this; }

public:
  _Self& operator>> (short& __val);
  _Self& operator>> (int& __val);
  _Self& operator>> (unsigned short& __val);
  _Self& operator>> (unsigned int& __val);
  _Self& operator>> (long& __val);
  _Self& operator>> (unsigned long& __val);

  _Self& operator>> (long long& __val);
  _Self& operator>> (unsigned long long& __val);

  _Self& operator>> (float& __val);
  _Self& operator>> (double& __val);

  _Self& operator>> (long double& __val);


  _Self& operator>> (bool& __val);

  _Self& operator>> (void*& __val);

public:
  _Self& operator>>(basic_streambuf<_CharT, _Traits>*);

public:
  streamsize gcount() const { return _M_gcount; }
  int_type peek();

public:
  int_type get();
  _Self& get(char_type& __c);

public:
  _Self& get(char_type* __s, streamsize __n, char_type __delim);
  _Self& get(char_type* __s, streamsize __n)
    { return get(__s, __n, this->widen('\n')); }

public:
  _Self& get(basic_streambuf<_CharT, _Traits>& __buf,
                     char_type __delim);
  _Self& get(basic_streambuf<_CharT, _Traits>& __buf)
    { return get(__buf, this->widen('\n')); }

public:
  _Self& getline(char_type* __s, streamsize __n, char_type delim);
  _Self& getline(char_type* __s, streamsize __n)
    { return getline(__s, __n, this->widen('\n')); }

public:
  _Self& ignore();
  _Self& ignore(streamsize __n);
  _Self& ignore(streamsize __n, int_type __delim);

  _Self& read(char_type* __s, streamsize __n);
  streamsize readsome(char_type* __s, streamsize __n);

public:
  _Self& putback(char_type __c);
  _Self& unget();

public:
  int sync();

  pos_type tellg();
  _Self& seekg(pos_type __pos);
  _Self& seekg(off_type, ios_base::seekdir);

public:
  void _M_formatted_get(_CharT& __c);
  void _M_formatted_get(_CharT* __s);
  void _M_skip_whitespace(bool __set_failbit);

private:
  streamsize _M_gcount;

public:
# 187 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_istream.h"
  class sentry {
    typedef sentry _Self;


  private:
    const bool _M_ok;


  public:
    typedef _Traits traits_type;

    explicit sentry(basic_istream<_CharT, _Traits>& __istr,
                    bool __noskipws = false) :
      _M_ok((__noskipws || !(__istr.flags() & ios_base::skipws)) ? _M_init_noskip(__istr) : _M_init_skip(__istr) )

      {}



    sentry(basic_istream<_CharT, _Traits>& __istr, _No_Skip_WS) :
      _M_ok(_M_init_noskip(__istr)) {}

    ~sentry() {}

    operator bool() const { return _M_ok; }

  private:

    sentry(const _Self&) : _M_ok(false) {}
    _Self& operator=(const _Self&) { return *this; }
  };





};
# 236 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_istream.h"
template <class _CharT, class _Traits>
inline basic_istream<_CharT, _Traits>&
operator>>(basic_istream<_CharT, _Traits>& __in_str, _CharT& __c) {
  __in_str._M_formatted_get(__c);
  return __in_str;
}

template <class _Traits>
inline basic_istream<char, _Traits>&
operator>>(basic_istream<char, _Traits>& __in_str, unsigned char& __c) {
  __in_str._M_formatted_get(reinterpret_cast<char&>(__c));
  return __in_str;
}

template <class _Traits>
inline basic_istream<char, _Traits>&
operator>>(basic_istream<char, _Traits>& __in_str, signed char& __c) {
  __in_str._M_formatted_get(reinterpret_cast<char&>(__c));
  return __in_str;
}

template <class _CharT, class _Traits>
inline basic_istream<_CharT, _Traits>&
operator>>(basic_istream<_CharT, _Traits>& __in_str, _CharT* __s) {
  __in_str._M_formatted_get(__s);
  return __in_str;
}

template <class _Traits>
inline basic_istream<char, _Traits>&
operator>>(basic_istream<char, _Traits>& __in_str, unsigned char* __s) {
  __in_str._M_formatted_get(reinterpret_cast<char*>(__s));
  return __in_str;
}

template <class _Traits>
inline basic_istream<char, _Traits>&
operator>>(basic_istream<char, _Traits>& __in_str, signed char* __s) {
  __in_str._M_formatted_get(reinterpret_cast<char*>(__s));
  return __in_str;
}



template <class _CharT, class _Traits>
basic_istream<_CharT, _Traits>&
ws(basic_istream<_CharT, _Traits>& __istr) {
  if (!__istr.eof()) {
    typedef typename basic_istream<_CharT, _Traits>::sentry _Sentry;
    _Sentry __sentry(__istr, _No_Skip_WS());
    if (__sentry)
      __istr._M_skip_whitespace(false);
  }
  return __istr;
}


template <class _CharT, class _Traits>
inline bool _M_init_skip(basic_istream<_CharT, _Traits>& __istr) {
  if (__istr.good()) {
    if (__istr.tie())
      __istr.tie()->flush();

    __istr._M_skip_whitespace(true);
  }

  if (!__istr.good()) {
    __istr.setstate(ios_base::failbit);
    return false;
  } else
    return true;
}

template <class _CharT, class _Traits>
inline bool _M_init_noskip(basic_istream<_CharT, _Traits>& __istr) {
  if (__istr.good()) {
    if (__istr.tie())
      __istr.tie()->flush();

    if (!__istr.rdbuf())
      __istr.setstate(ios_base::badbit);
  }
  else
    __istr.setstate(ios_base::failbit);
  return __istr.good();
}



template <class _CharT, class _Traits>
class basic_iostream
  : public basic_istream<_CharT, _Traits>,
    public basic_ostream<_CharT, _Traits>
{
public:
  typedef basic_ios<_CharT, _Traits> _Basic_ios;

  explicit basic_iostream(basic_streambuf<_CharT, _Traits>* __buf);
  virtual ~basic_iostream();
};
# 345 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_istream.h"
template <class _CharT, class _Traits>
basic_streambuf<_CharT, _Traits>* _M_get_istreambuf(basic_istream<_CharT, _Traits>& __istr)
{ return __istr.rdbuf(); }

}


# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_istream.c" 1
# 30 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_istream.c"
# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_num_get.h" 1
# 50 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_num_get.h"
namespace std {




template <class _CharT, class _InputIter>
class num_get: public locale::facet {
public:
  typedef _CharT char_type;
  typedef _InputIter iter_type;

  explicit num_get(size_t __refs = 0): locale::facet(__refs) {}


  _InputIter get(_InputIter __ii, _InputIter __end, ios_base& __str,
                 ios_base::iostate& __err, bool& __val) const
  { return do_get(__ii, __end, __str, __err, __val); }
# 79 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_num_get.h"
  _InputIter get(_InputIter __ii, _InputIter __end, ios_base& __str,
                 ios_base::iostate& __err, long& __val) const
  { return do_get(__ii, __end, __str, __err, __val); }

  _InputIter get(_InputIter __ii, _InputIter __end, ios_base& __str,
                 ios_base::iostate& __err, unsigned short& __val) const
  { return do_get(__ii, __end, __str, __err, __val); }

  _InputIter get(_InputIter __ii, _InputIter __end, ios_base& __str,
                 ios_base::iostate& __err, unsigned int& __val) const
  { return do_get(__ii, __end, __str, __err, __val); }

  _InputIter get(_InputIter __ii, _InputIter __end, ios_base& __str,
                 ios_base::iostate& __err, unsigned long& __val) const
  { return do_get(__ii, __end, __str, __err, __val); }


  _InputIter get(_InputIter __ii, _InputIter __end, ios_base& __str,
                 ios_base::iostate& __err, long long& __val) const
  { return do_get(__ii, __end, __str, __err, __val); }

  _InputIter get(_InputIter __ii, _InputIter __end, ios_base& __str,
                 ios_base::iostate& __err, unsigned long long& __val) const
  { return do_get(__ii, __end, __str, __err, __val); }


  _InputIter get(_InputIter __ii, _InputIter __end, ios_base& __str,
                 ios_base::iostate& __err, float& __val) const
  { return do_get(__ii, __end, __str, __err, __val); }

  _InputIter get(_InputIter __ii, _InputIter __end, ios_base& __str,
                 ios_base::iostate& __err, double& __val) const
  { return do_get(__ii, __end, __str, __err, __val); }


  _InputIter get(_InputIter __ii, _InputIter __end, ios_base& __str,
                 ios_base::iostate& __err, long double& __val) const
  { return do_get(__ii, __end, __str, __err, __val); }


  _InputIter get(_InputIter __ii, _InputIter __end, ios_base& __str,
                 ios_base::iostate& __err, void*& __val) const
  { return do_get(__ii, __end, __str, __err, __val); }

  static locale::id id;

protected:
  ~num_get() {}

  typedef string string_type;
  typedef ctype<_CharT> _Ctype;
  typedef numpunct<_CharT> _Numpunct;


  virtual _InputIter do_get(_InputIter __ii, _InputIter __end, ios_base& __str,
                            ios_base::iostate& __err, bool& __val) const;


  virtual _InputIter do_get(_InputIter __ii, _InputIter __end, ios_base& __str,
                            ios_base::iostate& __err, long& __val) const;
  virtual _InputIter do_get(_InputIter __ii, _InputIter __end, ios_base& __str,
                            ios_base::iostate& __err, unsigned short& __val) const;
  virtual _InputIter do_get(_InputIter __ii, _InputIter __end, ios_base& __str,
                            ios_base::iostate& __err, unsigned int& __val) const;
  virtual _InputIter do_get(_InputIter __ii, _InputIter __end, ios_base& __str,
                            ios_base::iostate& __err, unsigned long& __val) const;
# 154 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_num_get.h"
  virtual _InputIter do_get(_InputIter __ii, _InputIter __end, ios_base& __str,
                            ios_base::iostate& __err, float& __val) const;
  virtual _InputIter do_get(_InputIter __ii, _InputIter __end, ios_base& __str,
                            ios_base::iostate& __err, double& __val) const;
  virtual _InputIter do_get(_InputIter __ii, _InputIter __end, ios_base& __str,
                            ios_base::iostate& __err, void*& __p) const;


  virtual _InputIter do_get(_InputIter __ii, _InputIter __end, ios_base& __str,
                            ios_base::iostate& __err, long double& __val) const;



  virtual _InputIter do_get(_InputIter __ii, _InputIter __end, ios_base& __str,
                            ios_base::iostate& __err, long long& __val) const;
  virtual _InputIter do_get(_InputIter __ii, _InputIter __end, ios_base& __str,
                            ios_base::iostate& __err, unsigned long long& __val) const;


};
# 187 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_num_get.h"
namespace priv {

__attribute__((visibility("default"))) bool __valid_grouping(const char*, const char*, const char*, const char*);

template <class _InputIter, class _Integer, class _CharT>
bool
__get_decimal_integer(_InputIter& __first, _InputIter& __last, _Integer& __val, _CharT*);


bool __attribute__((visibility("default"))) __get_fdigit(wchar_t&, const wchar_t*);
bool __attribute__((visibility("default"))) __get_fdigit_or_sep(wchar_t&, wchar_t, const wchar_t*);


inline void
_Initialize_get_float(const ctype<char>&,
                       char& Plus, char& Minus,
                       char& pow_e, char& pow_E,
                       char*) {
  Plus = '+';
  Minus = '-';
  pow_e = 'e';
  pow_E = 'E';
}


void __attribute__((visibility("default"))) _Initialize_get_float(const ctype<wchar_t>&,
                                                     wchar_t&, wchar_t&, wchar_t&, wchar_t&, wchar_t*);

void __attribute__((visibility("default"))) __string_to_float(const __iostring&, float&);
void __attribute__((visibility("default"))) __string_to_float(const __iostring&, double&);

void __attribute__((visibility("default"))) __string_to_float(const __iostring&, long double&);


}




}


# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_num_get.c" 1
# 29 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_num_get.c"
namespace std {

namespace priv {

__attribute__((visibility("default"))) unsigned char __digit_val_table(unsigned);
__attribute__((visibility("default"))) const char* __narrow_atoms();



inline bool __get_fdigit(char __c, const char*)
{ return __c >= '0' && __c <= '9'; }

inline bool __get_fdigit_or_sep(char& __c, char __sep, const char *__digits) {
  if (__c == __sep) {
    __c = ',' ;
    return true ;
  }
  else
    return __get_fdigit(__c, __digits);
}

inline int
__get_digit_from_table(unsigned __index)
{ return (__index > 127 ? 0xFF : __digit_val_table(__index)); }

template <class _InputIter, class _CharT>
int
__get_base_or_zero(_InputIter& __in_ite, _InputIter& __end,
                   ios_base::fmtflags __flags, const ctype<_CharT>& __c_type) {
  _CharT __atoms[5];
  __c_type.widen(__narrow_atoms(), __narrow_atoms() + 5, __atoms);

  bool __negative = false;
  _CharT __c = *__in_ite;

  if (__c == __atoms[1] ) {
    __negative = true;
    ++__in_ite;
  }
  else if (__c == __atoms[0] )
    ++__in_ite;

  int __base;
  int __valid_zero = 0;

  ios_base::fmtflags __basefield = __flags & ios_base::basefield;

  switch (__basefield) {
  case ios_base::oct:
    __base = 8;
    break;
  case ios_base::dec:
    __base = 10;
    break;
  case ios_base::hex:
    __base = 16;
    if (__in_ite != __end && *__in_ite == __atoms[2] ) {
      ++__in_ite;
      if (__in_ite != __end &&
          (*__in_ite == __atoms[3] || *__in_ite == __atoms[4] ))
        ++__in_ite;
      else
        __valid_zero = 1;
    }
    break;
  default:
    if (__in_ite != __end && *__in_ite == __atoms[2] ) {
      ++__in_ite;
      if (__in_ite != __end &&
          (*__in_ite == __atoms[3] || *__in_ite == __atoms[4] )) {
        ++__in_ite;
        __base = 16;
      }
      else
        {
          __base = 8;
          __valid_zero = 1;
        }
    }
    else
      __base = 10;
    break;
  }
  return (__base << 2) | ((int)__negative << 1) | __valid_zero;
}


template <class _InputIter, class _Integer, class _CharT>
bool
__get_integer(_InputIter& __first, _InputIter& __last,
              int __base, _Integer& __val,
              int __got, bool __is_negative, _CharT __separator, const string& __grouping, const __true_type& ) {
  bool __ovflow = false;
  _Integer __result = 0;
  bool __is_group = !__grouping.empty();
  char __group_sizes[64];
  char __current_group_size = 0;
  char* __group_sizes_end = __group_sizes;

  _Integer __over_base = (numeric_limits<_Integer>::min)() / static_cast<_Integer>(__base);

   for ( ; __first != __last ; ++__first) {

     const _CharT __c = *__first;

     if (__is_group && __c == __separator) {
       *__group_sizes_end++ = __current_group_size;
       __current_group_size = 0;
       continue;
     }

     int __n = __get_digit_from_table(__c);

     if (__n >= __base)
       break;

     ++__got;
     ++__current_group_size;

     if (__result < __over_base)
       __ovflow = true;
     else {
       _Integer __next = static_cast<_Integer>(__base * __result - __n);
       if (__result != 0)
         __ovflow = __ovflow || __next >= __result;
       __result = __next;
     }
   }

   if (__is_group && __group_sizes_end != __group_sizes) {
     *__group_sizes_end++ = __current_group_size;
   }


   if (__got > 0) {
       __val = __ovflow ? __is_negative ? (numeric_limits<_Integer>::min)()
                                        : (numeric_limits<_Integer>::max)()
                        : __is_negative ? __result
                                        : static_cast<_Integer>(-__result);
   }

  return ((__got > 0) && !__ovflow) &&
          (__is_group == 0 ||
           __valid_grouping(__group_sizes, __group_sizes_end,
                            __grouping.data(), __grouping.data()+ __grouping.size()));
}

template <class _InputIter, class _Integer, class _CharT>
bool
__get_integer(_InputIter& __first, _InputIter& __last,
              int __base, _Integer& __val,
              int __got, bool __is_negative, _CharT __separator, const string& __grouping, const __false_type& ) {
  bool __ovflow = false;
  _Integer __result = 0;
  bool __is_group = !__grouping.empty();
  char __group_sizes[64];
  char __current_group_size = 0;
  char* __group_sizes_end = __group_sizes;

  _Integer __over_base = (numeric_limits<_Integer>::max)() / static_cast<_Integer>(__base);

  for ( ; __first != __last ; ++__first) {

    const _CharT __c = *__first;

    if (__is_group && __c == __separator) {
      *__group_sizes_end++ = __current_group_size;
      __current_group_size = 0;
      continue;
    }

    int __n = __get_digit_from_table(__c);

    if (__n >= __base)
      break;

    ++__got;
    ++__current_group_size;

    if (__result > __over_base)
      __ovflow = true;
    else {
      _Integer __next = static_cast<_Integer>(__base * __result + __n);
      if (__result != 0)
        __ovflow = __ovflow || __next <= __result;
        __result = __next;
      }
  }

  if (__is_group && __group_sizes_end != __group_sizes) {
      *__group_sizes_end++ = __current_group_size;
  }


  if (__got > 0) {
      __val = __ovflow ? (numeric_limits<_Integer>::max)()
                       : (__is_negative ? static_cast<_Integer>(-__result)
                                        : __result);
  }


  return ((__got > 0) && !__ovflow) &&
          (__is_group == 0 ||
           __valid_grouping(__group_sizes, __group_sizes_end,
                            __grouping.data(), __grouping.data()+ __grouping.size()));
}


template <class _InputIter, class _Integer, class _CharT>
bool
__get_decimal_integer(_InputIter& __first, _InputIter& __last, _Integer& __val, _CharT* ) {
  string __grp;

  return __get_integer(__first, __last, 10, __val, 0, false, _CharT() , __grp, __false_type());
}

template <class _InputIter, class _Integer, class _CharT>
_InputIter
__do_get_integer(_InputIter& __in_ite, _InputIter& __end, ios_base& __str,
                 ios_base::iostate& __err, _Integer& __val, _CharT* ) {
  locale __loc = __str.getloc();
  const ctype<_CharT>& __ctype = use_facet<ctype<_CharT> >(__loc);




  typedef typename __bool2type<numeric_limits<_Integer>::is_signed>::_Ret _IsSigned;


  const int __base_or_zero = __get_base_or_zero(__in_ite, __end, __str.flags(), __ctype);
  int __got = __base_or_zero & 1;

  bool __result;

  if (__in_ite == __end) {

    if (__got > 0) {
      __val = 0;
      __result = true;
    }
    else
      __result = false;
  }
  else {
    const numpunct<_CharT>& __np = use_facet<numpunct<_CharT> >(__loc);
    const bool __negative = (__base_or_zero & 2) != 0;
    const int __base = __base_or_zero >> 2;







    __result = __get_integer(__in_ite, __end, __base, __val, __got, __negative, __np.thousands_sep(), __np.grouping(), _IsSigned());

  }

  __err = static_cast<ios_base::iostate>(__result ? ios_base::goodbit : ios_base::failbit);

  if (__in_ite == __end)
    __err |= ios_base::eofbit;
  return __in_ite;
}


template <class _InputIter, class _CharT>
_InputIter
__copy_sign(_InputIter __first, _InputIter __last, __iostring& __v,
            _CharT __xplus, _CharT __xminus) {
  if (__first != __last) {
    _CharT __c = *__first;
    if (__c == __xplus)
      ++__first;
    else if (__c == __xminus) {
      __v.push_back('-');
      ++__first;
    }
  }
  return __first;
}


template <class _InputIter, class _CharT>
bool
__copy_digits(_InputIter& __first, _InputIter __last,
              __iostring& __v, const _CharT* __digits) {
  bool __ok = false;

  for ( ; __first != __last; ++__first) {
    _CharT __c = *__first;
    if (__get_fdigit(__c, __digits)) {
      __v.push_back((char)__c);
      __ok = true;
    }
    else
      break;
  }
  return __ok;
}

template <class _InputIter, class _CharT>
bool
__copy_grouped_digits(_InputIter& __first, _InputIter __last,
                      __iostring& __v, const _CharT * __digits,
                      _CharT __sep, const string& __grouping,
                      bool& __grouping_ok) {
  bool __ok = false;
  char __group_sizes[64];
  char*__group_sizes_end = __group_sizes;
  char __current_group_size = 0;

  for ( ; __first != __last; ++__first) {
    _CharT __c = *__first;
    bool __tmp = __get_fdigit_or_sep(__c, __sep, __digits);
    if (__tmp) {
      if (__c == ',') {
        *__group_sizes_end++ = __current_group_size;
        __current_group_size = 0;
      }
      else {
        __ok = true;
        __v.push_back((char)__c);
        ++__current_group_size;
      }
    }
    else
      break;
  }

  if (__group_sizes_end != __group_sizes)
    *__group_sizes_end++ = __current_group_size;
  __grouping_ok = __valid_grouping(__group_sizes, __group_sizes_end, __grouping.data(), __grouping.data() + __grouping.size());
  return __ok;
}


template <class _InputIter, class _CharT>
bool
__read_float(__iostring& __buf, _InputIter& __in_ite, _InputIter& __end,
             const ctype<_CharT> &__ct, const numpunct<_CharT> &__numpunct) {



  string __grouping = __numpunct.grouping();
  bool __digits_before_dot ;
  bool __digits_after_dot = false;
  bool __ok;

  bool __grouping_ok = true;

  _CharT __dot = __numpunct.decimal_point();
  _CharT __sep = __numpunct.thousands_sep();

  _CharT __digits[10];
  _CharT __xplus;
  _CharT __xminus;

  _CharT __pow_e;
  _CharT __pow_E;

  _Initialize_get_float(__ct, __xplus, __xminus, __pow_e, __pow_E, __digits);


  __in_ite = __copy_sign(__in_ite, __end, __buf, __xplus, __xminus);


  if (!__grouping.empty())
    __digits_before_dot = __copy_grouped_digits(__in_ite, __end, __buf, __digits,
                                                __sep, __grouping, __grouping_ok);
  else
    __digits_before_dot = __copy_digits(__in_ite, __end, __buf, __digits);


  if (__in_ite != __end && *__in_ite == __dot) {
    __buf.push_back('.');
    ++__in_ite;
    __digits_after_dot = __copy_digits(__in_ite, __end, __buf, __digits);
  }


  __ok = __digits_before_dot || __digits_after_dot;


  if (__ok && __in_ite != __end && (*__in_ite == __pow_e || *__in_ite == __pow_E)) {
    __buf.push_back('e');
    ++__in_ite;
    __in_ite = __copy_sign(__in_ite, __end, __buf, __xplus, __xminus);
    __ok = __copy_digits(__in_ite, __end, __buf, __digits);


  }

  return __ok;
}

template <class _InputIter, class _Float, class _CharT>
_InputIter
__do_get_float(_InputIter& __in_ite, _InputIter& __end, ios_base& __str,
               ios_base::iostate& __err, _Float& __val, _CharT* ) {
  locale __loc = __str.getloc();
  const ctype<_CharT> &__ctype = use_facet<ctype<_CharT> >(__loc);
  const numpunct<_CharT> &__numpunct = use_facet<numpunct<_CharT> >(__loc);

  __iostring __buf ;
  bool __ok = __read_float(__buf, __in_ite, __end, __ctype, __numpunct);
  if (__ok) {
    __string_to_float(__buf, __val);
    __err = ios_base::goodbit;
  }
  else {
    __err = ios_base::failbit;
  }
  if (__in_ite == __end)
    __err |= ios_base::eofbit;
  return __in_ite;
}

template <class _InputIter, class _CharT>
_InputIter
__do_get_alphabool(_InputIter& __in_ite, _InputIter& __end, ios_base& __str,
                   ios_base::iostate& __err, bool& __x, _CharT* ) {
  const numpunct<_CharT>& __np = use_facet<numpunct<_CharT> >(__str.getloc());
  const basic_string<_CharT, char_traits<_CharT>, allocator<_CharT> > __truename = __np.truename();
  const basic_string<_CharT, char_traits<_CharT>, allocator<_CharT> > __falsename = __np.falsename();
  bool __true_ok = true;
  bool __false_ok = true;

  size_t __n = 0;
  for ( ; __in_ite != __end; ++__in_ite) {
    _CharT __c = *__in_ite;
    __true_ok = __true_ok && (__c == __truename[__n]);
    __false_ok = __false_ok && (__c == __falsename[__n]);
    ++__n;

    if ((!__true_ok && !__false_ok) ||
        (__true_ok && __n >= __truename.size()) ||
        (__false_ok && __n >= __falsename.size())) {
      ++__in_ite;
      break;
    }
  }
  if (__true_ok && __n < __truename.size()) __true_ok = false;
  if (__false_ok && __n < __falsename.size()) __false_ok = false;

  if (__true_ok || __false_ok) {
    __err = ios_base::goodbit;
    __x = __true_ok;
  }
  else
    __err = ios_base::failbit;

  if (__in_ite == __end)
    __err |= ios_base::eofbit;

  return __in_ite;
}

}





template <class _CharT, class _InputIterator>
locale::id num_get<_CharT, _InputIterator>::id;


template <class _CharT, class _InputIter>
_InputIter
num_get<_CharT, _InputIter>::do_get(_InputIter __in_ite, _InputIter __end,
                                    ios_base& __s, ios_base::iostate& __err, bool& __x) const {
  if (__s.flags() & ios_base::boolalpha) {
    return ::std::priv:: __do_get_alphabool(__in_ite, __end, __s, __err, __x, (_CharT*)0);
  }
  else {
    long __lx;
    _InputIter __tmp = ::std::priv:: __do_get_integer(__in_ite, __end, __s, __err, __lx, (_CharT*)0 );
    if (!(__err & ios_base::failbit)) {
      if (__lx == 0)
        __x = false;
      else if (__lx == 1)
        __x = true;
      else
        __err |= ios_base::failbit;
    }
    return __tmp;
  }
}
# 535 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_num_get.c"
template <class _CharT, class _InputIter>
_InputIter
num_get<_CharT, _InputIter>::do_get(_InputIter __in_ite, _InputIter __end, ios_base& __str,
                                    ios_base::iostate& __err, long& __val) const
{ return ::std::priv:: __do_get_integer(__in_ite, __end, __str, __err, __val, (_CharT*)0 ); }

template <class _CharT, class _InputIter>
_InputIter
num_get<_CharT, _InputIter>::do_get(_InputIter __in_ite, _InputIter __end, ios_base& __str,
                                    ios_base::iostate& __err,
                                    unsigned short& __val) const
{ return ::std::priv:: __do_get_integer(__in_ite, __end, __str, __err, __val, (_CharT*)0 ); }

template <class _CharT, class _InputIter>
_InputIter
num_get<_CharT, _InputIter>::do_get(_InputIter __in_ite, _InputIter __end, ios_base& __str,
                                    ios_base::iostate& __err,
                                    unsigned int& __val) const
{ return ::std::priv:: __do_get_integer(__in_ite, __end, __str, __err, __val, (_CharT*)0 ); }

template <class _CharT, class _InputIter>
_InputIter
num_get<_CharT, _InputIter>::do_get(_InputIter __in_ite, _InputIter __end, ios_base& __str,
                                    ios_base::iostate& __err,
                                    unsigned long& __val) const
{ return ::std::priv:: __do_get_integer(__in_ite, __end, __str, __err, __val, (_CharT*)0 ); }

template <class _CharT, class _InputIter>
_InputIter
num_get<_CharT, _InputIter>::do_get(_InputIter __in_ite, _InputIter __end, ios_base& __str,
                                    ios_base::iostate& __err,
                                    float& __val) const
{ return ::std::priv:: __do_get_float(__in_ite, __end, __str, __err, __val, (_CharT*)0 ); }

template <class _CharT, class _InputIter>
_InputIter
num_get<_CharT, _InputIter>::do_get(_InputIter __in_ite, _InputIter __end, ios_base& __str,
                                    ios_base::iostate& __err,
                                    double& __val) const
{ return ::std::priv:: __do_get_float(__in_ite, __end, __str, __err, __val, (_CharT*)0 ); }


template <class _CharT, class _InputIter>
_InputIter
num_get<_CharT, _InputIter>::do_get(_InputIter __in_ite, _InputIter __end, ios_base& __str,
                                    ios_base::iostate& __err,
                                    long double& __val) const
{ return ::std::priv:: __do_get_float(__in_ite, __end, __str, __err, __val, (_CharT*)0 ); }


template <class _CharT, class _InputIter>
_InputIter
num_get<_CharT, _InputIter>::do_get(_InputIter __in_ite, _InputIter __end, ios_base& __str,
                                    ios_base::iostate& __err,
                                    void*& __p) const {

  unsigned long long __val;



  iter_type __tmp = ::std::priv:: __do_get_integer(__in_ite, __end, __str, __err, __val, (_CharT*)0 );
  if (!(__err & ios_base::failbit))
    __p = reinterpret_cast<void*>(__val);
  return __tmp;
}


template <class _CharT, class _InputIter>
_InputIter
num_get<_CharT, _InputIter>::do_get(_InputIter __in_ite, _InputIter __end, ios_base& __str,
                                    ios_base::iostate& __err,
                                    long long& __val) const
{ return ::std::priv:: __do_get_integer(__in_ite, __end, __str, __err, __val, (_CharT*)0 ); }

template <class _CharT, class _InputIter>
_InputIter
num_get<_CharT, _InputIter>::do_get(_InputIter __in_ite, _InputIter __end, ios_base& __str,
                                    ios_base::iostate& __err,
                                    unsigned long long& __val) const
{ return ::std::priv:: __do_get_integer(__in_ite, __end, __str, __err, __val, (_CharT*)0 ); }


}
# 230 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_num_get.h" 2
# 31 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_istream.c" 2
# 44 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_istream.c"
namespace std {




namespace priv {

template <class _Traits>
struct _Is_not_wspace {
  typedef typename _Traits::char_type argument_type;
  typedef bool result_type;

  const ctype<argument_type>* _M_ctype;

  _Is_not_wspace(const ctype<argument_type>* __c_type) : _M_ctype(__c_type) {}
  bool operator()(argument_type __c) const
    { return !_M_ctype->is(ctype_base::space, __c); }
};

template <class _Traits>
struct _Is_wspace_null {
  typedef typename _Traits::char_type argument_type;
  typedef bool result_type;

  const ctype<argument_type>* _M_ctype;

  _Is_wspace_null(const ctype<argument_type>* __c_type) : _M_ctype(__c_type) {}
  bool operator()(argument_type __c) const {
    return _Traits::eq(__c, argument_type()) ||
           _M_ctype->is(ctype_base::space, __c);
  }
};

template <class _Traits>
struct _Scan_for_wspace {
  typedef typename _Traits::char_type char_type;
  typedef char_type* first_argument_type;
  typedef char_type* second_argument_type;
  typedef char_type* result_type;

  const ctype<char_type>* _M_ctype;

  _Scan_for_wspace(const ctype<char_type>* __ctype) : _M_ctype(__ctype) {}
  const char_type*
  operator()(const char_type* __first, const char_type* __last) const {
    return _M_ctype->scan_is(ctype_base::space, __first, __last);
  }
};

template <class _Traits>
struct _Scan_wspace_null {
  typedef typename _Traits::char_type char_type;
  typedef char_type* first_argument_type;
  typedef char_type* second_argument_type;
  typedef char_type* result_type;

  const ctype<char_type>* _M_ctype;

  _Scan_wspace_null(const ctype<char_type>* __c_type) : _M_ctype(__c_type) {}
  const char_type*
  operator()(const char_type* __first, const char_type* __last) const {
    __last = find_if(__first, __last,
                     _Eq_char_bound<_Traits>(char_type()));
    return _M_ctype->scan_is(ctype_base::space, __first, __last);
  }
};

template <class _Traits>
struct _Scan_for_not_wspace {
  typedef typename _Traits::char_type char_type;
  typedef char_type* first_argument_type;
  typedef char_type* second_argument_type;
  typedef char_type* result_type;

  const ctype<char_type>* _M_ctype;

  _Scan_for_not_wspace(const ctype<char_type>* __c_type) : _M_ctype(__c_type) {}
  const char_type*
  operator()(const char_type* __first, const char_type* __last) const {
    return _M_ctype->scan_not(ctype_base::space, __first, __last);
  }
};

template <class _Traits>
struct _Scan_for_char_val {
  typedef typename _Traits::char_type char_type;
  typedef char_type* first_argument_type;
  typedef char_type* second_argument_type;
  typedef char_type* result_type;

  char_type _M_val;

  _Scan_for_char_val(char_type __val) : _M_val(__val) {}

  const char_type*
  operator()(const char_type* __first, const char_type* __last) const {
    return find_if(__first, __last, _Eq_char_bound<_Traits>(_M_val));
  }
};

template <class _Traits>
struct _Scan_for_int_val {
  typedef typename _Traits::char_type char_type;
  typedef typename _Traits::int_type int_type;
  typedef char_type* first_argument_type;
  typedef char_type* second_argument_type;
  typedef char_type* result_type;

  int_type _M_val;

  _Scan_for_int_val(int_type __val) : _M_val(__val) {}

  const char_type*
  operator()(const char_type* __first, const char_type* __last) const {
    return find_if(__first, __last,
                   _Eq_int_bound<_Traits>(_M_val));
  }
};




template <class _CharT, class _Traits>
bool
__pushback(basic_streambuf<_CharT, _Traits>* __buf, _CharT __c) {
  bool ret;
  {
    const typename _Traits::int_type __eof = _Traits::eof();
    ret = !_Traits::eq_int_type(__buf->sputbackc(__c), __eof);
  }
  if (false) {
    ret = false;
  }
  return ret;
}





template <class _CharT, class _Traits, class _Number>
ios_base::iostate
__get_num(basic_istream<_CharT, _Traits>& __that, _Number& __val) {
  typedef typename basic_istream<_CharT, _Traits>::sentry _Sentry;
  ios_base::iostate __err = 0;
  _Sentry __sentry( __that );
  if (__sentry) {
    typedef num_get<_CharT, istreambuf_iterator<_CharT, _Traits> > _Num_get;
    {


      (use_facet<_Num_get>(__that.getloc())).get(istreambuf_iterator<_CharT, _Traits>(__that.rdbuf()),
                                               0, __that, __err, __val);
    }
    if (false) {
      __that._M_handle_exception(ios_base::badbit);
    }
    if (__err) __that.setstate(__err);
  }
  return __err;
}

}

template <class _CharT, class _Traits>
basic_istream<_CharT, _Traits>& basic_istream<_CharT, _Traits>::operator>> (short& __val) {
  long __lval;
  ::std::priv:: __get_num(*this, __lval);
  if ( this->fail() ) {
    return *this;
  }
  short __tmp = static_cast<short>(__lval);
  unsigned short __uval = static_cast<unsigned short>(__lval);


  if ((__tmp != __lval) && ((long)__uval != __lval))
    this->setstate(ios_base::failbit);
  else
    __val = __tmp;
  return *this;
}

template <class _CharT, class _Traits>
basic_istream<_CharT, _Traits>& basic_istream<_CharT, _Traits>::operator>> (int& __val) {
  long __lval;
  ::std::priv:: __get_num(*this, __lval);
  if ( this->fail() ) {
    return *this;
  }
  int __tmp = __lval;
  unsigned int __uval = __lval;


  if ((__tmp != __lval) && ((long)__uval != __lval))
    this->setstate(ios_base::failbit);
  else
    __val = __tmp;
  return *this;
}

template <class _CharT, class _Traits>
basic_istream<_CharT, _Traits>& basic_istream<_CharT, _Traits>::operator>> (unsigned short& __val) {
  ::std::priv:: __get_num(*this, __val);
  return *this;
}

template <class _CharT, class _Traits>
basic_istream<_CharT, _Traits>& basic_istream<_CharT, _Traits>::operator>> (unsigned int& __val) {
  ::std::priv:: __get_num(*this, __val);
  return *this;
}

template <class _CharT, class _Traits>
basic_istream<_CharT, _Traits>& basic_istream<_CharT, _Traits>::operator>> (long& __val) {
  ::std::priv:: __get_num(*this, __val);
  return *this;
}

template <class _CharT, class _Traits>
basic_istream<_CharT, _Traits>& basic_istream<_CharT, _Traits>::operator>> (unsigned long& __val) {
  ::std::priv:: __get_num(*this, __val);
  return *this;
}


template <class _CharT, class _Traits>
basic_istream<_CharT, _Traits>& basic_istream<_CharT, _Traits>::operator>> (long long& __val) {
  ::std::priv:: __get_num(*this, __val);
  return *this;
}

template <class _CharT, class _Traits>
basic_istream<_CharT, _Traits>& basic_istream<_CharT, _Traits>::operator>> (unsigned long long& __val) {
  ::std::priv:: __get_num(*this, __val);
  return *this;
}

template <class _CharT, class _Traits>
basic_istream<_CharT, _Traits>& basic_istream<_CharT, _Traits>::operator>> (float& __val) {
  ::std::priv:: __get_num(*this, __val);
  return *this;
}
template <class _CharT, class _Traits>
basic_istream<_CharT, _Traits>& basic_istream<_CharT, _Traits>::operator>> (double& __val) {
  ::std::priv:: __get_num(*this, __val);
  return *this;
}

template <class _CharT, class _Traits>
basic_istream<_CharT, _Traits>& basic_istream<_CharT, _Traits>::operator>> (long double& __val) {
  ::std::priv:: __get_num(*this, __val);
  return *this;
}


template <class _CharT, class _Traits>
basic_istream<_CharT, _Traits>& basic_istream<_CharT, _Traits>::operator>> (bool& __val) {
  ::std::priv:: __get_num(*this, __val);
  return *this;
}


template <class _CharT, class _Traits>
basic_istream<_CharT, _Traits>& basic_istream<_CharT, _Traits>::operator>> (void*& __val) {
  ::std::priv:: __get_num(*this, __val);
  return *this;
}



template <class _CharT, class _Traits>
typename basic_istream<_CharT, _Traits>::int_type
basic_istream<_CharT, _Traits>::peek() {
  typename _Traits::int_type __tmp = _Traits::eof();

  this->_M_gcount = 0;
  sentry __sentry(*this, _No_Skip_WS());

  if (__sentry) {
    {
      __tmp = this->rdbuf()->sgetc();
    }
    if (false) {
      this->_M_handle_exception(ios_base::badbit);
    }
    if (this->_S_eof(__tmp))
      this->setstate(ios_base::eofbit);
  }

  return __tmp;
}


template <class _CharT, class _Traits>
typename basic_istream<_CharT, _Traits>::int_type
basic_istream<_CharT, _Traits>::get() {
  typename _Traits::int_type __tmp = _Traits::eof();
  sentry __sentry(*this, _No_Skip_WS());
  this->_M_gcount = 0;

  if (__sentry) {
    {
      __tmp = this->rdbuf()->sbumpc();
    }
    if (false) {
      this->_M_handle_exception(ios_base::badbit);
    }

    if (!this->_S_eof(__tmp))
      this->_M_gcount = 1;
  }

  if (_M_gcount == 0)
    this->setstate(ios_base::eofbit | ios_base::failbit);

  return __tmp;
}

template <class _CharT, class _Traits>
basic_istream<_CharT, _Traits>&
basic_istream<_CharT, _Traits>::get(_CharT& __c) {
  sentry __sentry(*this, _No_Skip_WS());
  this->_M_gcount = 0;

  if (__sentry) {
    typename _Traits::int_type __tmp = _Traits::eof();
    {
      __tmp = this->rdbuf()->sbumpc();
    }
    if (false) {
      this->_M_handle_exception(ios_base::badbit);
    }

    if (!this->_S_eof(__tmp)) {
      this->_M_gcount = 1;
      __c = _Traits::to_char_type(__tmp);
    }
  }

  if (this->_M_gcount == 0)
    this->setstate(ios_base::eofbit | ios_base::failbit);

  return *this;
}






template <class _CharT, class _Traits>
basic_istream<_CharT, _Traits>& basic_istream<_CharT, _Traits>::ignore() {
  sentry __sentry(*this, _No_Skip_WS());
  this->_M_gcount = 0;

  if (__sentry) {
    int_type __c;
    {
      __c = this->rdbuf()->sbumpc();
    }
    if (false) {
      this->_M_handle_exception(ios_base::badbit);
      return *this;
    }

    if (!this->_S_eof(__c))
      this->_M_gcount = 1;
    else
      this->setstate(ios_base::eofbit);
  }

  return *this;
}



template <class _CharT, class _Traits>
basic_istream<_CharT, _Traits>&
basic_istream<_CharT, _Traits>::putback(_CharT __c) {
  this->_M_gcount = 0;
  sentry __sentry(*this, _No_Skip_WS());

  if (__sentry) {
    typename _Traits::int_type __tmp = _Traits::eof();
    basic_streambuf<_CharT, _Traits>* __buf = this->rdbuf();

    if (__buf) {
      {
        __tmp = __buf->sputbackc(__c);
      }
      if (false) {
        this->_M_handle_exception(ios_base::badbit);
      }
    }
    if (this->_S_eof(__tmp))
      this->setstate(ios_base::badbit);
  }
  else
    this->setstate(ios_base::failbit);

  return *this;
}

template <class _CharT, class _Traits>
basic_istream<_CharT, _Traits>& basic_istream<_CharT, _Traits>::unget() {
  this->_M_gcount = 0;

  sentry __sentry(*this, _No_Skip_WS());

  if (__sentry) {
    basic_streambuf<_CharT, _Traits>* __buf = this->rdbuf();

    if (__buf) {
      {
        if (this->_S_eof(__buf->sungetc()))
          this->setstate(ios_base::badbit);
      }
      if (false) {
        this->_M_handle_exception(ios_base::badbit);
      }
    } else
      this->setstate(ios_base::badbit);
  }
  else
    this->setstate(ios_base::failbit);

  return *this;
}



template <class _CharT, class _Traits>
int basic_istream<_CharT, _Traits>::sync() {
  sentry __sentry(*this, _No_Skip_WS());

  basic_streambuf<_CharT, _Traits>* __buf = this->rdbuf();
  if (__buf) {
    if (__buf->pubsync() == -1) {
      this->setstate(ios_base::badbit);
      return -1;
    }
    else
      return 0;
  }
  else
    return -1;
}

template <class _CharT, class _Traits>
typename basic_istream<_CharT, _Traits>::pos_type
basic_istream<_CharT, _Traits>::tellg() {
  sentry __sentry(*this, _No_Skip_WS());

  basic_streambuf<_CharT, _Traits>* __buf = this->rdbuf();
  return (__buf && !this->fail()) ? __buf->pubseekoff(0, ios_base::cur, ios_base::in)
    : pos_type(-1);
}

template <class _CharT, class _Traits>
basic_istream<_CharT, _Traits>&
basic_istream<_CharT, _Traits>::seekg(pos_type __pos) {
  sentry __sentry(*this, _No_Skip_WS());

  basic_streambuf<_CharT, _Traits>* __buf = this->rdbuf();
  if (!this->fail() && __buf) {
    if (__buf->pubseekpos(__pos, ios_base::in) == pos_type(-1)) {
      this->setstate(ios_base::failbit);
    }
  }
  return *this;
}

template <class _CharT, class _Traits>
basic_istream<_CharT, _Traits>&
basic_istream<_CharT, _Traits>::seekg(off_type __off, ios_base::seekdir __dir) {
  sentry __sentry(*this, _No_Skip_WS());

  basic_streambuf<_CharT, _Traits>* __buf = this->rdbuf();
  if (!this->fail() && __buf)
    __buf->pubseekoff(__off, __dir, ios_base::in);
  return *this;
}



template <class _CharT, class _Traits>
void basic_istream<_CharT, _Traits>::_M_formatted_get(_CharT& __c) {


  sentry __sentry(*this);

  if (__sentry) {
    typename _Traits::int_type __tmp;

    {
      __tmp = this->rdbuf()->sbumpc();
    }
    if (false) {
      this->_M_handle_exception(ios_base::badbit);
      return;
    }

    if (!this->_S_eof(__tmp))
      __c = _Traits::to_char_type(__tmp);
    else
      this->setstate(ios_base::eofbit | ios_base::failbit);
  }
}
# 575 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_istream.c"
namespace priv {

template < class _CharT, class _Traits, class _Is_Delim>
streamsize
__read_unbuffered(basic_istream<_CharT, _Traits>* __that, basic_streambuf<_CharT, _Traits>* __buf,
                  streamsize _Num, _CharT* __s,
                  _Is_Delim __is_delim,
                  bool __extract_delim, bool __append_null,
                  bool __is_getline)
{
  streamsize __n = 0;
  ios_base::iostate __status = 0;

  typedef typename basic_istream<_CharT, _Traits>::int_type int_type;

  {
    for (;;) {
      if (__n == _Num) {
        if (__is_getline)
          __status |= ios_base::failbit;
        break;
      }
      int_type __c = __buf->sbumpc();

      if (__that->_S_eof(__c)) {
        if (__n < _Num || __is_getline)
          __status |= ios_base::eofbit;
        break;
      } else if (__is_delim(_Traits::to_char_type(__c))) {
        if (__extract_delim) {
          ++__n;
        } else if ( !__pushback(__buf, _Traits::to_char_type(__c)) ) {
          __status |= ios_base::failbit;
        }
        break;
      }

      *__s++ = _Traits::to_char_type(__c);
      ++__n;
    }
  }
  if (false) {
    __that->_M_handle_exception(ios_base::badbit);
    *__s = _CharT();
    return __n;
  }

  if (__append_null)
    *__s = _CharT();
  if (__status)
    __that->setstate(__status);
  return __n;
}





template < class _CharT, class _Traits, class _Is_Delim, class _Scan_Delim>
streamsize
__read_buffered(basic_istream<_CharT, _Traits>* __that, basic_streambuf<_CharT, _Traits>* __buf,
                 streamsize _Num, _CharT* __s,
                 _Is_Delim __is_delim, _Scan_Delim __scan_delim,
                 bool __extract_delim, bool __append_null,
                 bool __is_getline) {
  streamsize __n = 0;
  ios_base::iostate __status = 0;
  bool __done = false;

  {
    while (__buf->_M_egptr() != __buf->_M_gptr() && !__done) {
      const _CharT* __first = __buf->_M_gptr();
      const _CharT* __last = __buf->_M_egptr();


      typedef char __static_assert[(sizeof(streamsize) > sizeof(ptrdiff_t)) || ((sizeof(streamsize) == sizeof(ptrdiff_t)) && numeric_limits<ptrdiff_t>::is_signed) ? 1 : -1];

      ptrdiff_t __request = static_cast<ptrdiff_t>((min) (static_cast<streamsize>((numeric_limits<ptrdiff_t>::max)()), _Num - __n));

      const _CharT* __p = __scan_delim(__first, __last);
      ptrdiff_t __chunk = (min) (ptrdiff_t(__p - __first), __request);
      _Traits::copy(__s, __first, __chunk);
      __s += __chunk;
      __n += __chunk;
      __buf->_M_gbump((int)__chunk);


      if (__p != __last && __p - __first <= __request) {
        if (__extract_delim) {
          __n += 1;
          __buf->_M_gbump(1);
        }
        __done = true;
      }


      else if (__n == _Num) {


        if (__is_getline) {
          if (__chunk == __last - __first) {
            if (__that->_S_eof(__buf->sgetc()))
              __status |= ios_base::eofbit;
          }
          else
            __status |= ios_base::failbit;
        }
        __done = true;
      }



      else {
        if (__that->_S_eof(__buf->sgetc())) {
          __status |= ios_base::eofbit;
          __done = true;
        }
      }
    }
  }
  if (false) {
    __that->_M_handle_exception(ios_base::badbit);
    __done = true;
  }

  if (__done) {
    if (__append_null)
        *__s = _CharT();
    if (__status != 0)
      __that->setstate(__status);
    return __n;
  }






  return __n + __read_unbuffered(__that, __buf, _Num - __n, __s, __is_delim,
                                 __extract_delim,__append_null,__is_getline);
}

}

template <class _CharT, class _Traits>
basic_istream<_CharT, _Traits>&
basic_istream<_CharT, _Traits>::get(_CharT* __s, streamsize __n,
                                    _CharT __delim) {
  sentry __sentry(*this, _No_Skip_WS());
  this->_M_gcount = 0;

  if (__sentry) {
    if (__n > 0) {
      basic_streambuf<_CharT, _Traits>* __buf = this->rdbuf();

      if (__buf->egptr() != __buf->gptr())
        this->_M_gcount =
          ::std::priv:: __read_buffered(this, __buf, __n - 1, __s,
                                     ::std::priv:: _Eq_char_bound<_Traits>(__delim),
                                     ::std::priv:: _Scan_for_char_val<_Traits>(__delim),
                                     false, true, false);
      else
        this->_M_gcount =
          ::std::priv:: __read_unbuffered(this, __buf, __n - 1, __s,
                                       ::std::priv:: _Eq_char_bound<_Traits>(__delim),
                                       false, true, false);
    }
  }

  if (this->_M_gcount == 0)
    this->setstate(ios_base::failbit);

  return *this;
}



template <class _CharT, class _Traits>
basic_istream<_CharT, _Traits>&
basic_istream<_CharT, _Traits>::getline(_CharT* __s, streamsize __n,
                                        _CharT __delim) {
  sentry __sentry(*this, _No_Skip_WS());
  this->_M_gcount = 0;

  if (__sentry) {
    if (__n > 0) {
      basic_streambuf<_CharT, _Traits>* __buf = this->rdbuf();
      this->_M_gcount = __buf->egptr() != __buf->gptr()
        ? ::std::priv:: __read_buffered(this, __buf, __n - 1, __s,
                                     ::std::priv:: _Eq_char_bound<_Traits>(__delim),
                                     ::std::priv:: _Scan_for_char_val<_Traits>(__delim),
                                     true, true, true)
        : ::std::priv:: __read_unbuffered(this, __buf, __n - 1, __s,
                                       ::std::priv:: _Eq_char_bound<_Traits>(__delim),
                                       true, true, true);
    }
  }

  if (this->_M_gcount == 0)
    this->setstate(ios_base::failbit);

  return *this;
}



template <class _CharT, class _Traits>
basic_istream<_CharT, _Traits>&
basic_istream<_CharT, _Traits>::read(char_type* __s, streamsize __n) {
  sentry __sentry(*this, _No_Skip_WS());
  this->_M_gcount = 0;

  if (__sentry && !this->eof()) {
    basic_streambuf<_CharT, _Traits>*__buf = this->rdbuf();
    if (__buf->gptr() != __buf->egptr())
      _M_gcount
        = ::std::priv:: __read_buffered(this, __buf, __n, __s,
                                     ::std::priv:: _Constant_unary_fun<bool, int_type>(false),
                                     ::std::priv:: _Project2nd<const _CharT*, const _CharT*>(),
                                     false, false, false);
    else
      _M_gcount
        = ::std::priv:: __read_unbuffered(this, __buf, __n, __s,
                                       ::std::priv:: _Constant_unary_fun<bool, int_type>(false),
                                       false, false, false);
  }
  else
    this->setstate(ios_base::failbit);

  if (this->eof())
    this->setstate(ios_base::eofbit | ios_base::failbit);

  return *this;
}




template <class _CharT, class _Traits>
streamsize
basic_istream<_CharT, _Traits>::readsome(char_type* __s, streamsize __nmax) {
  sentry __sentry(*this, _No_Skip_WS());
  this->_M_gcount = 0;

  if (__sentry && !this->eof() && __nmax >= 0) {

    basic_streambuf<_CharT, _Traits>* __buf = this->rdbuf();
    streamsize __avail = __buf->in_avail();


    if (__avail == -1)
      this->_M_setstate_nothrow(ios_base::eofbit);

    else if (__avail != 0) {

      if (__buf->gptr() != __buf->egptr())
        _M_gcount
          = ::std::priv:: __read_buffered(this, __buf, (min) (__avail, __nmax), __s,
                                       ::std::priv:: _Constant_unary_fun<bool, int_type>(false),
                                       ::std::priv:: _Project2nd<const _CharT*, const _CharT*>(),
                                       false, false, false);
      else
        _M_gcount
          = ::std::priv:: __read_unbuffered(this, __buf, (min) (__avail, __nmax), __s,
                                         ::std::priv:: _Constant_unary_fun<bool, int_type>(false),
                                         false, false, false);
    }
  }
  else {

    if (this->eof())
      this->setstate(ios_base::eofbit | ios_base::failbit);
    else
      this->setstate(ios_base::failbit);
  }




  return _M_gcount;
}

template <class _CharT, class _Traits>
void basic_istream<_CharT, _Traits>::_M_formatted_get(_CharT* __s) {
  sentry __sentry(*this);

  if (__sentry) {
    basic_streambuf<_CharT, _Traits>* __buf = this->rdbuf();
    streamsize __nmax = this->width() > 0
      ? this->width() - 1
      : ((numeric_limits<streamsize>::max)() / sizeof(_CharT)) - 1;

    streamsize __n = __buf->gptr() != __buf->egptr()
      ? ::std::priv:: __read_buffered(this, __buf, __nmax, __s,
                                   ::std::priv:: _Is_wspace_null<_Traits>(this->_M_ctype_facet()),
                                   ::std::priv:: _Scan_wspace_null<_Traits>(this->_M_ctype_facet()),
                                   false, true, false)
      : ::std::priv:: __read_unbuffered(this, __buf, __nmax, __s,
                                     ::std::priv:: _Is_wspace_null<_Traits>(this->_M_ctype_facet()),
                                     false, true, false);
    if (__n == 0)
      this->setstate(ios_base::failbit);
  }
  this->width(0);
}






template < class _CharT, class _Traits, class _Is_Delim>
void
_M_ignore_unbuffered(basic_istream<_CharT, _Traits>* __that,
                     basic_streambuf<_CharT, _Traits>* __buf,
                     _Is_Delim __is_delim,
                     bool __extract_delim, bool __set_failbit) {
  bool __done = false;
  ios_base::iostate __status = 0;
  typedef typename basic_istream<_CharT, _Traits>::int_type int_type;

  {
    while (!__done) {
      int_type __c = __buf->sbumpc();

      if (__that->_S_eof(__c)) {
        __done = true;
        __status |= __set_failbit ? ios_base::eofbit | ios_base::failbit
                                  : ios_base::eofbit;
      }

      else if (__is_delim(_Traits::to_char_type(__c))) {
        __done = true;
        if (!__extract_delim)
          if (__that->_S_eof(__buf->sputbackc(_Traits::to_char_type(__c))))
            __status |= ios_base::failbit;
      }
    }
  }
  if (false) {
    __that->_M_handle_exception(ios_base::badbit);
  }

  __that->setstate(__status);
}






template < class _CharT, class _Traits, class _Is_Delim, class _Scan_Delim>
void
_M_ignore_buffered(basic_istream<_CharT, _Traits>* __that,
                   basic_streambuf<_CharT, _Traits>* __buf,
                   _Is_Delim __is_delim, _Scan_Delim __scan_delim,
                   bool __extract_delim, bool __set_failbit) {
  bool __at_eof = false;
  bool __found_delim = false;

  {
    while (__buf->_M_egptr() != __buf->_M_gptr() && !__at_eof && !__found_delim) {
      const _CharT* __p = __scan_delim(__buf->_M_gptr(), __buf->_M_egptr());
      __buf->_M_gbump((int)(__p - __buf->_M_gptr()));

      if (__p != __buf->_M_egptr()) {
        if (__extract_delim)
          __buf->_M_gbump(1);
        __found_delim = true;
      }

      else
        __at_eof = __that->_S_eof(__buf->sgetc());
    }
  }
  if (false) {
    __that->_M_handle_exception(ios_base::badbit);
    return;
  }

  if (__at_eof) {
    __that->setstate(__set_failbit ? ios_base::eofbit | ios_base::failbit
                                   : ios_base::eofbit);
    return;
  }
  if (__found_delim)
    return;





  _M_ignore_unbuffered(__that, __buf, __is_delim, __extract_delim, __set_failbit);
}
# 981 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_istream.c"
template < class _CharT, class _Traits, class _Max_Chars, class _Is_Delim>
streamsize
_M_ignore_unbuffered(basic_istream<_CharT, _Traits>* __that,
                     basic_streambuf<_CharT, _Traits>* __buf,
                     streamsize _Num, _Max_Chars __max_chars,
                     _Is_Delim __is_delim,
                     bool __extract_delim, bool __set_failbit) {
  streamsize __n = 0;
  ios_base::iostate __status = 0;
  typedef typename basic_istream<_CharT, _Traits>::int_type int_type;

  {
    while (__max_chars(_Num, __n) > 0) {
      int_type __c = __buf->sbumpc();

      if (__that->_S_eof(__c)) {
        __status |= __set_failbit ? ios_base::eofbit | ios_base::failbit
                                  : ios_base::eofbit;
        break;
      }

      else if (__is_delim(_Traits::to_char_type(__c))) {
        if (__extract_delim)
          ++__n;
        else if (__that->_S_eof(__buf->sputbackc(_Traits::to_char_type(__c))))
          __status |= ios_base::failbit;

        break;
      }

      ++__n;
    }
  }
  if (false) {
    __that->_M_handle_exception(ios_base::badbit);
  }

  if (__status)
    __that->setstate(__status);
  return __n;
}

template < class _CharT, class _Traits, class _Max_Chars, class _Is_Delim, class _Scan_Delim>
streamsize
_M_ignore_buffered(basic_istream<_CharT, _Traits>* __that,
                   basic_streambuf<_CharT, _Traits>* __buf,
                   streamsize _Num,
                   _Max_Chars __max_chars,
                   _Is_Delim __is_delim, _Scan_Delim __scan_delim,
                   bool __extract_delim, bool __set_failbit) {
  streamsize __n = 0;
  bool __at_eof = false;
  bool __done = false;

  {
    while (__buf->_M_egptr() != __buf->_M_gptr() && !__done) {
      ptrdiff_t __avail = __buf->_M_egptr() - __buf->_M_gptr();
      streamsize __m = __max_chars(_Num, __n);

      if (__avail >= __m) {
        const _CharT* __last = __buf->_M_gptr() + static_cast<ptrdiff_t>(__m);
        const _CharT* __p = __scan_delim(__buf->_M_gptr(), __last);
        ptrdiff_t __chunk = __p - __buf->_M_gptr();
        __n += __chunk;
        __buf->_M_gbump((int)__chunk);

        if (__extract_delim && __p != __last) {
          __n += 1;
          __buf->_M_gbump(1);
        }

        __done = true;
      }

      else {
        const _CharT* __p = __scan_delim(__buf->_M_gptr(), __buf->_M_egptr());
        ptrdiff_t __chunk = __p - __buf->_M_gptr();
        __n += __chunk;
        __buf->_M_gbump((int)__chunk);

        if (__p != __buf->_M_egptr()) {
          if (__extract_delim) {
            __n += 1;
            __buf->_M_gbump(1);
          }

          __done = true;
        }


        else if (__that->_S_eof(__buf->sgetc())) {
          __done = true;
          __at_eof = true;
        }
      }
    }
  }
  if (false) {
    __that->_M_handle_exception(ios_base::badbit);
    return __n;
  }

  if (__at_eof)
    __that->setstate(__set_failbit ? ios_base::eofbit | ios_base::failbit
                                   : ios_base::eofbit);

  if (__done)
    return __n;






  return __n + _M_ignore_unbuffered(__that, __buf, _Num, __max_chars,
                                    __is_delim, __extract_delim, __set_failbit);
}


template <class _CharT, class _Traits>
basic_istream<_CharT, _Traits>&
basic_istream<_CharT, _Traits>::ignore(streamsize __n) {
  sentry __sentry(*this, _No_Skip_WS());
  this->_M_gcount = 0;

  if (__sentry) {
    basic_streambuf<_CharT, _Traits>* __buf = this->rdbuf();
    typedef ::std::priv:: _Constant_unary_fun<bool, int_type> _Const_bool;
    typedef ::std::priv:: _Constant_binary_fun<streamsize, streamsize, streamsize> _Const_streamsize;
    const streamsize __maxss = (numeric_limits<streamsize>::max)();

    if (__n == (numeric_limits<int>::max)()) {
      if (__buf->gptr() != __buf->egptr())
        _M_gcount = _M_ignore_buffered(this, __buf,
                                       __maxss, _Const_streamsize(__maxss),
                                       _Const_bool(false),
                                       ::std::priv:: _Project2nd<const _CharT*, const _CharT*>(),
                                       false, false);
      else
        _M_gcount = _M_ignore_unbuffered(this, __buf,
                                         __maxss, _Const_streamsize(__maxss),
                                         _Const_bool(false), false, false);
    }
    else {
      if (__buf->gptr() != __buf->egptr())
        _M_gcount = _M_ignore_buffered(this, __buf,
                                       __n, minus<streamsize>(),
                                       _Const_bool(false),
                                       ::std::priv:: _Project2nd<const _CharT*, const _CharT*>(),
                                       false, false);
      else
        _M_gcount = _M_ignore_unbuffered(this, __buf, __n, minus<streamsize>(),
                                         _Const_bool(false), false, false);
    }
  }

  return *this;
}

template <class _CharT, class _Traits>
basic_istream<_CharT, _Traits>&
basic_istream<_CharT, _Traits>::ignore(streamsize __n, int_type __delim) {
  sentry __sentry(*this, _No_Skip_WS());
  this->_M_gcount = 0;

  if (__sentry) {
    basic_streambuf<_CharT, _Traits>* __buf = this->rdbuf();
    typedef ::std::priv:: _Constant_unary_fun<bool, int_type> _Const_bool;
    typedef ::std::priv:: _Constant_binary_fun<streamsize, streamsize, streamsize>
      _Const_streamsize;
    const streamsize __maxss = (numeric_limits<streamsize>::max)();

    if (__n == (numeric_limits<int>::max)()) {
      if (__buf->gptr() != __buf->egptr())
        _M_gcount = _M_ignore_buffered(this, __buf,
                                       __maxss, _Const_streamsize(__maxss),
                                       ::std::priv:: _Eq_int_bound<_Traits>(__delim),
                                       ::std::priv:: _Scan_for_int_val<_Traits>(__delim),
                                       true, false);
      else
        _M_gcount = _M_ignore_unbuffered(this, __buf,
                                         __maxss, _Const_streamsize(__maxss),
                                         ::std::priv:: _Eq_int_bound<_Traits>(__delim),
                                         true, false);
    }
    else {
      if (__buf->gptr() != __buf->egptr())
        _M_gcount = _M_ignore_buffered(this, __buf,
                                       __n, minus<streamsize>(),
                                       ::std::priv:: _Eq_int_bound<_Traits>(__delim),
                                       ::std::priv:: _Scan_for_int_val<_Traits>(__delim),
                                       true, false);
      else
        _M_gcount = _M_ignore_unbuffered(this, __buf, __n, minus<streamsize>(),
                                         ::std::priv:: _Eq_int_bound<_Traits>(__delim),
                                         true, false);
    }
  }

  return *this;
}



template <class _CharT, class _Traits>
void basic_istream<_CharT, _Traits>::_M_skip_whitespace(bool __set_failbit) {
  basic_streambuf<_CharT, _Traits>* __buf = this->rdbuf();
  if (!__buf)
    this->setstate(ios_base::badbit);
  else if (__buf->gptr() != __buf->egptr())
    _M_ignore_buffered(this, __buf,
                       ::std::priv:: _Is_not_wspace<_Traits>(this->_M_ctype_facet()),
                       ::std::priv:: _Scan_for_not_wspace<_Traits>(this->_M_ctype_facet()),
                       false, __set_failbit);
  else
    _M_ignore_unbuffered(this, __buf,
                         ::std::priv:: _Is_not_wspace<_Traits>(this->_M_ctype_facet()),
                         false, __set_failbit);
}
# 1209 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_istream.c"
namespace priv {

template < class _CharT, class _Traits, class _Is_Delim>
streamsize
__copy_unbuffered(basic_istream<_CharT, _Traits>* __that, basic_streambuf<_CharT, _Traits>* __src,
                  basic_streambuf<_CharT, _Traits>* __dest,
                  _Is_Delim __is_delim,
                  bool __extract_delim, bool __rethrow) {
  streamsize __extracted = 0;
  ios_base::iostate __status = 0;
  typedef typename basic_istream<_CharT, _Traits>::int_type int_type;
  int_type __c;

  {
    for (;;) {

      __c = __src->sbumpc();


      if (__that->_S_eof(__c)) {
        __status |= ios_base::eofbit;
        break;
      }

      else if (__is_delim(_Traits::to_char_type(__c))) {
        if (!__extract_delim && !__pushback(__src, _Traits::to_char_type(__c)))
          __status |= ios_base::failbit;
        break;
      }
      else {

        bool __failed = false;
        {
          if (!__that->_S_eof(__dest->sputc(_Traits::to_char_type(__c))))
            ++__extracted;
          else
            __failed = true;
        }
        if (false) {
          __failed = true;
        }



        if (__failed && !__pushback(__src, _Traits::to_char_type(__c)))
          __status |= ios_base::failbit;


        if (__failed)
          break;
      }

    }

  }


  if (false) {

    if (__rethrow && __extracted == 0)
      __that->_M_handle_exception(ios_base::failbit);
  }
  __that->setstate(__status);
  return __extracted;
}






template < class _CharT, class _Traits, class _Is_Delim, class _Scan_Delim>
streamsize
__copy_buffered(basic_istream<_CharT, _Traits>* __that, basic_streambuf<_CharT, _Traits>* __src,
                basic_streambuf<_CharT, _Traits>* __dest,
                _Scan_Delim __scan_delim, _Is_Delim __is_delim,
                bool __extract_delim, bool __rethrow) {
  streamsize __extracted = 0;
  ios_base::iostate __status = 0;
  typedef typename basic_istream<_CharT, _Traits>::int_type int_type;

  int_type __c ;
  _CharT* __first = __src->_M_gptr();
  ptrdiff_t __avail = __src->_M_egptr() - __first;

  bool __do_handle_exceptions = false;

  {
    for (;;) {
      const _CharT* __last = __scan_delim(__first, __src->_M_egptr());


      streamsize __n = __dest->sputn(__first, __extract_delim && __last != __src->_M_egptr()
                                     ? (__last - __first) + 1
                                     : (__last - __first));
      __src->_M_gbump((int)__n);
      __extracted += __n;


      __do_handle_exceptions = true;

      if (__n < __avail)
        break;

      __c = __src->sgetc();



      __first = __src->_M_gptr();
      __avail = __src->_M_egptr() - __first;

      if (__avail > 0)
        {}
      else if (__that->_S_eof(__c)) {
        __status |= ios_base::eofbit;
        break;
      }
      else {
        return __extracted + __copy_unbuffered(__that, __src, __dest, __is_delim,
                                                __extract_delim, __rethrow);
      }

      __do_handle_exceptions = false;
    }
  }

  if (false) {

    if (__rethrow && __do_handle_exceptions && __extracted == 0)
      __that->_M_handle_exception(ios_base::failbit);
  }

  if (__status)
    __that->setstate(__status);
  return __extracted;
}

}

template <class _CharT, class _Traits>
basic_istream<_CharT, _Traits>&
basic_istream<_CharT, _Traits>
  ::get(basic_streambuf<_CharT, _Traits>& __dest, _CharT __delim) {
  sentry __sentry(*this, _No_Skip_WS());
  this->_M_gcount = 0;

  if (__sentry) {
    basic_streambuf<_CharT, _Traits>* __src = this->rdbuf();

    if (__src)
      this->_M_gcount = __src->egptr() != __src->gptr()
        ? ::std::priv:: __copy_buffered(this, __src, &__dest,
                                     ::std::priv:: _Scan_for_char_val<_Traits>(__delim),
                                     ::std::priv:: _Eq_char_bound<_Traits>(__delim),
                                     false, false)
        : ::std::priv:: __copy_unbuffered(this, __src, &__dest,
                                       ::std::priv:: _Eq_char_bound<_Traits>(__delim),
                                       false, false);
  }

  if (this->_M_gcount == 0)
    this->setstate(ios_base::failbit);

  return *this;
}


template <class _CharT, class _Traits>
basic_istream<_CharT, _Traits>&
basic_istream<_CharT, _Traits>
  ::operator>>(basic_streambuf<_CharT, _Traits>* __dest) {
  streamsize __n = 0;
  typedef typename basic_istream<_CharT, _Traits>::sentry _Sentry;
  _Sentry __sentry(*this);
  if (__sentry) {
    basic_streambuf<_CharT, _Traits>* __src = this->rdbuf();
    if (__src && __dest)
      __n = __src->egptr() != __src->gptr()
        ? ::std::priv:: __copy_buffered(this, __src, __dest,
                                     ::std::priv:: _Project2nd<const _CharT*, const _CharT*>(),
                                     ::std::priv:: _Constant_unary_fun<bool, int_type>(false),
                                     false, true)
        : ::std::priv:: __copy_unbuffered(this, __src, __dest,
                                       ::std::priv:: _Constant_unary_fun<bool, int_type>(false),
                                       false, true);
  }

  if (__n == 0)
    this->setstate(ios_base::failbit);

  return *this;
}





template <class _CharT, class _Traits>
basic_iostream<_CharT, _Traits>
  ::basic_iostream(basic_streambuf<_CharT, _Traits>* __buf)
    : basic_ios<_CharT, _Traits>(),
      basic_istream<_CharT, _Traits>(__buf),
      basic_ostream<_CharT, _Traits>(__buf) {
  this->init(__buf);
}

template <class _CharT, class _Traits>
basic_iostream<_CharT, _Traits>::~basic_iostream()
{}

}
# 353 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_istream.h" 2
# 28 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_string_io.h" 2



namespace std {

template <class _CharT, class _Traits, class _Alloc>
basic_ostream<_CharT, _Traits>&
operator<<(basic_ostream<_CharT, _Traits>& __os,
           const basic_string<_CharT,_Traits,_Alloc>& __s);
# 50 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_string_io.h"
template <class _CharT, class _Traits, class _Alloc>
basic_istream<_CharT, _Traits>&
operator>>(basic_istream<_CharT, _Traits>& __is,
           basic_string<_CharT,_Traits,_Alloc>& __s);

template <class _CharT, class _Traits, class _Alloc>
basic_istream<_CharT, _Traits>&
getline(basic_istream<_CharT, _Traits>& __is,
        basic_string<_CharT,_Traits,_Alloc>& __s,
        _CharT __delim);



template <class _CharT, class _Traits, class _Alloc>
inline basic_istream<_CharT, _Traits>&
getline(basic_istream<_CharT, _Traits>& __is,
        basic_string<_CharT,_Traits,_Alloc>& __s) {
  return getline(__is, __s, __is.widen('\n'));
}


}


# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_string_io.c" 1
# 12 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_string_io.c"
namespace std {

template <class _CharT, class _Traits>
bool
__stlp_string_fill(basic_ostream<_CharT, _Traits>& __os,
                   basic_streambuf<_CharT, _Traits>* __buf,
                   streamsize __n) {
  _CharT __f = __os.fill();
  for (streamsize __i = 0; __i < __n; ++__i) {
    if (_Traits::eq_int_type(__buf->sputc(__f), _Traits::eof()))
      return false;
  }
  return true;
}


template <class _CharT, class _Traits, class _Alloc>
basic_ostream<_CharT, _Traits>&
operator << (basic_ostream<_CharT, _Traits>& __os,
             const basic_string<_CharT,_Traits,_Alloc>& __s) {
  typedef basic_ostream<_CharT, _Traits> __ostream;
  typedef typename basic_string<_CharT, _Traits, _Alloc>::size_type size_type;


  typedef char __static_assert[static_cast<size_type>(-1) > 0 ? 1 : -1];

  typename __ostream::sentry __sentry(__os);
  bool __ok = false;

  if (__sentry) {
    __ok = true;
    size_type __n = __s.size();
    const bool __left = (__os.flags() & __ostream::left) != 0;
    const streamsize __w = __os.width(0);
    basic_streambuf<_CharT, _Traits>* __buf = __os.rdbuf();

    const bool __need_pad = (((sizeof(streamsize) > sizeof(size_t)) && (static_cast<streamsize>(__n) < __w)) ||
                             ((sizeof(streamsize) <= sizeof(size_t)) && (__n < static_cast<size_t>(__w))));
    streamsize __pad_len = __need_pad ? __w - __n : 0;

    if (!__left)
      __ok = __stlp_string_fill(__os, __buf, __pad_len);

    __ok = __ok && (__buf->sputn(__s.data(), streamsize(__n)) == streamsize(__n));

    if (__left)
      __ok = __ok && __stlp_string_fill(__os, __buf, __pad_len);
  }

  if (!__ok)
    __os.setstate(__ostream::failbit);

  return __os;
}

template <class _CharT, class _Traits, class _Alloc>
basic_istream<_CharT, _Traits>&
operator >> (basic_istream<_CharT, _Traits>& __is,
             basic_string<_CharT,_Traits, _Alloc>& __s) {
  typedef basic_istream<_CharT, _Traits> __istream;
  typedef typename basic_string<_CharT, _Traits, _Alloc>::size_type size_type;


  typedef char __static_assert[static_cast<size_type>(-1) > 0 ? 1 : -1];

  typename __istream::sentry __sentry(__is);

  if (__sentry) {
    basic_streambuf<_CharT, _Traits>* __buf = __is.rdbuf();
    typedef ctype<_CharT> _C_type;

    const locale& __loc = __is.getloc();
    const _C_type& _Ctype = use_facet<_C_type>(__loc);
    __s.clear();
    streamsize __width = __is.width(0);
    size_type __n;
    if (__width <= 0)
      __n = __s.max_size();




    else if (sizeof(streamsize) > sizeof(size_type) &&
             (__width > static_cast<streamsize>(__s.max_size())))
      __n = 0;
    else {
      __n = static_cast<size_type>(__width);
      __s.reserve(__n);
    }

    while (__n-- > 0) {
      typename _Traits::int_type __c1 = __buf->sbumpc();
      if (_Traits::eq_int_type(__c1, _Traits::eof())) {
        __is.setstate(__istream::eofbit);
        break;
      }
      else {
        _CharT __c = _Traits::to_char_type(__c1);

        if (_Ctype.is(_C_type::space, __c)) {
          if (_Traits::eq_int_type(__buf->sputbackc(__c), _Traits::eof()))
            __is.setstate(__istream::failbit);
          break;
        }
        else
          __s.push_back(__c);
      }
    }


    if (__s.empty())
      __is.setstate(__istream::failbit);
  }
  else
    __is.setstate(__istream::failbit);

  return __is;
}

template <class _CharT, class _Traits, class _Alloc>
basic_istream<_CharT, _Traits>&
getline(basic_istream<_CharT, _Traits>& __is,
        basic_string<_CharT,_Traits,_Alloc>& __s,
        _CharT __delim) {
  typedef basic_istream<_CharT, _Traits> __istream;
  typedef typename basic_string<_CharT, _Traits, _Alloc>::size_type size_type;
  size_type __nread = 0;
  typename basic_istream<_CharT, _Traits>::sentry __sentry(__is, true);
  if (__sentry) {
    basic_streambuf<_CharT, _Traits>* __buf = __is.rdbuf();
    __s.clear();

    while (__nread < __s.max_size()) {
      int __c1 = __buf->sbumpc();
      if (_Traits::eq_int_type(__c1, _Traits::eof())) {
        __is.setstate(__istream::eofbit);
        break;
      }
      else {
        ++__nread;
        _CharT __c = _Traits::to_char_type(__c1);
        if (!_Traits::eq(__c, __delim))
          __s.push_back(__c);
        else
          break;
      }
    }
  }
  if (__nread == 0 || __nread >= __s.max_size())
    __is.setstate(__istream::failbit);

  return __is;
}

}
# 75 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_string_io.h" 2
# 38 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/string" 2
# 50 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/string"
# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_epilog.h" 1
# 19 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_epilog.h"
# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_config_compat_post.h" 1
# 20 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_epilog.h" 2
# 51 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/string" 2
# 64 "webkey-2.09/service/mongoose.cpp" 2

# 1 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/ctype.h" 1
# 54 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/ctype.h"
extern "C" {

extern const char *_ctype_;
extern const short *_tolower_tab_;
extern const short *_toupper_tab_;
# 72 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/ctype.h"
int isalnum(int);
int isalpha(int);
int iscntrl(int);
int isdigit(int);
int isgraph(int);
int islower(int);
int isprint(int);
int ispunct(int);
int isspace(int);
int isupper(int);
int isxdigit(int);
int tolower(int);
int toupper(int);



int isblank(int);



int isascii(int);
int toascii(int);
int _tolower(int);
int _toupper(int);
# 203 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/ctype.h"
}
# 66 "webkey-2.09/service/mongoose.cpp" 2

# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stddef.h" 1
# 18 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stddef.h"
# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_cprolog.h" 1
# 19 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stddef.h" 2
# 34 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stddef.h"
# 1 "/home/petya/download/android-ndk-r8b/toolchains/arm-linux-androideabi-4.4.3/prebuilt/linux-x86/bin/../lib/gcc/arm-linux-androideabi/4.4.3/include/../include/stddef.h" 1 3 4
# 35 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stddef.h" 2




# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_epilog.h" 1
# 19 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_epilog.h"
# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_config_compat_post.h" 1
# 20 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_epilog.h" 2
# 40 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stddef.h" 2
# 68 "webkey-2.09/service/mongoose.cpp" 2


# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/vector" 1
# 27 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/vector"
# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_prolog.h" 1






# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_cprolog.h" 1
# 8 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_prolog.h" 2
# 28 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/vector" 2
# 37 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/vector"
# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_vector.h" 1
# 49 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_vector.h"
namespace std {





namespace priv {

template <class _Tp, class _Alloc>
class _Vector_base {
public:
  typedef _Vector_base<_Tp, _Alloc> _Self;
 
  typedef _Alloc allocator_type;
  typedef _Tp* pointer;
  typedef _STLP_alloc_proxy<pointer, _Tp, allocator_type> _AllocProxy;

  _Vector_base(const _Alloc& __a)
    : _M_start(0), _M_finish(0), _M_end_of_storage(__a, 0) {}

  _Vector_base(size_t __n, const _Alloc& __a)
    : _M_start(0), _M_finish(0), _M_end_of_storage(__a, 0) {
    _M_start = _M_end_of_storage.allocate(__n, __n);
    _M_finish = _M_start;
    _M_end_of_storage._M_data = _M_start + __n;
   
  }


  _Vector_base(__move_source<_Self> src)
    : _M_start(src.get()._M_start), _M_finish(src.get()._M_finish),
      _M_end_of_storage(__move_source<_AllocProxy>(src.get()._M_end_of_storage)) {

    src.get()._M_finish = src.get()._M_end_of_storage._M_data = src.get()._M_start = 0;
  }


  ~_Vector_base() {
    if (_M_start != pointer())
      _M_end_of_storage.deallocate(_M_start, _M_end_of_storage._M_data - _M_start);
  }

protected:
  void _M_throw_length_error() const;
  void _M_throw_out_of_range() const;

  pointer _M_start;
  pointer _M_finish;
  _AllocProxy _M_end_of_storage;
};






}


template <class _Tp, class _Alloc = allocator<_Tp> >
class vector : protected ::std::priv:: _Vector_base<_Tp, _Alloc>



{
private:
  typedef ::std::priv:: _Vector_base<_Tp, _Alloc> _Base;
  typedef vector<_Tp, _Alloc> _Self;
public:
 
  typedef typename _Base::allocator_type allocator_type;

  typedef _Tp value_type;
  typedef value_type* pointer;
  typedef const value_type* const_pointer;
  typedef value_type* iterator;
  typedef const value_type* const_iterator;

  typedef value_type& reference;
  typedef const value_type& const_reference;
  typedef size_t size_type;
  typedef ptrdiff_t difference_type;
  typedef random_access_iterator_tag _Iterator_category;

  typedef ::std::reverse_iterator<const_iterator> const_reverse_iterator; typedef ::std::reverse_iterator<iterator> reverse_iterator;

  allocator_type get_allocator() const
  { return (const allocator_type&)this->_M_end_of_storage; }

private:





  void _M_insert_overflow_aux(pointer __pos, const _Tp& __x, const __false_type& ,
                              size_type __fill_len, bool __atend);
  void _M_insert_overflow_aux(pointer __pos, const _Tp& __x, const __true_type& ,
                              size_type __fill_len, bool __atend) {

    if (_M_is_inside(__x)) {
      value_type __x_copy = __x;
      _M_insert_overflow_aux(__pos, __x_copy, __false_type(), __fill_len, __atend);
      return;
    }
    _M_insert_overflow_aux(__pos, __x, __false_type(), __fill_len, __atend);
  }

  void _M_insert_overflow(pointer __pos, const _Tp& __x, const __false_type& ,
                          size_type __fill_len, bool __atend = false) {

    typedef typename __move_traits<_Tp>::implemented _Movable;

    _M_insert_overflow_aux(__pos, __x, _Movable(), __fill_len, __atend);
  }
  void _M_insert_overflow(pointer __pos, const _Tp& __x, const __true_type& ,
                          size_type __fill_len, bool __atend = false);
  void _M_range_check(size_type __n) const {
    if (__n >= size_type(this->_M_finish - this->_M_start))
      this->_M_throw_out_of_range();
  }

  size_type _M_compute_next_size(size_type __n) {
    const size_type __size = size();
    if (__n > max_size() - __size)
      this->_M_throw_length_error();
    size_type __len = __size + (max)(__n, __size);
    if (__len > max_size() || __len < __size)
      __len = max_size();
    return __len;
  }

public:
  iterator begin() { return this->_M_start; }
  const_iterator begin() const { return this->_M_start; }
  iterator end() { return this->_M_finish; }
  const_iterator end() const { return this->_M_finish; }

  reverse_iterator rbegin() { return reverse_iterator(end()); }
  const_reverse_iterator rbegin() const { return const_reverse_iterator(end()); }
  reverse_iterator rend() { return reverse_iterator(begin()); }
  const_reverse_iterator rend() const { return const_reverse_iterator(begin()); }

  size_type size() const { return size_type(this->_M_finish - this->_M_start); }
  size_type max_size() const {
    size_type __vector_max_size = size_type(-1) / sizeof(_Tp);
    typename allocator_type::size_type __alloc_max_size = this->_M_end_of_storage.max_size();
    return (__alloc_max_size < __vector_max_size)?__alloc_max_size:__vector_max_size;
  }

  size_type capacity() const { return size_type(this->_M_end_of_storage._M_data - this->_M_start); }
  bool empty() const { return this->_M_start == this->_M_finish; }

  reference operator[](size_type __n) { return *(begin() + __n); }
  const_reference operator[](size_type __n) const { return *(begin() + __n); }

  reference front() { return *begin(); }
  const_reference front() const { return *begin(); }
  reference back() { return *(end() - 1); }
  const_reference back() const { return *(end() - 1); }

  reference at(size_type __n) { _M_range_check(__n); return (*this)[__n]; }
  const_reference at(size_type __n) const { _M_range_check(__n); return (*this)[__n]; }


  explicit vector(const allocator_type& __a = allocator_type())





    : ::std::priv:: _Vector_base<_Tp, _Alloc>(__a) {}


private:



  void _M_initialize(size_type __n, const _Tp& __val = _Tp())
  { this->_M_finish = ::std::priv:: __uninitialized_init(this->_M_start, __n, __val); }
public:
  explicit vector(size_type __n)
    : ::std::priv:: _Vector_base<_Tp, _Alloc>(__n, allocator_type())
  { _M_initialize(__n); }
  vector(size_type __n, const _Tp& __val, const allocator_type& __a = allocator_type())
# 243 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_vector.h"
    : ::std::priv:: _Vector_base<_Tp, _Alloc>(__n, __a)
  { this->_M_finish = ::std::priv:: __uninitialized_fill_n(this->_M_start, __n, __val); }

  vector(const _Self& __x)
    : ::std::priv:: _Vector_base<_Tp, _Alloc>(__x.size(), __x.get_allocator()) {
    typedef typename __type_traits<_Tp>::has_trivial_copy_constructor _TrivialUCopy;
    this->_M_finish = ::std::priv:: __ucopy_ptrs(__x.begin(), __x.end(), this->_M_start, _TrivialUCopy());
  }


  vector(__move_source<_Self> src)
    : ::std::priv:: _Vector_base<_Tp, _Alloc>(__move_source<_Base>(src.get()))
  {}



private:
  template <class _Integer>
  void _M_initialize_aux(_Integer __n, _Integer __val,
                         const __true_type& ) {
    size_type __real_n = __n;
    this->_M_start = this->_M_end_of_storage.allocate(__n, __real_n);
    this->_M_end_of_storage._M_data = this->_M_start + __real_n;
    this->_M_finish = ::std::priv:: __uninitialized_fill_n(this->_M_start, __n, __val);
  }

  template <class _InputIterator>
  void _M_initialize_aux(_InputIterator __first, _InputIterator __last,
                         const __false_type& )
  { _M_range_initialize(__first, __last, typename ::std::iterator_traits< _InputIterator >::iterator_category()); }

public:

  template <class _InputIterator>
  vector(_InputIterator __first, _InputIterator __last,
               const allocator_type& __a = allocator_type() )
    : ::std::priv:: _Vector_base<_Tp, _Alloc>(__a) {
    typedef typename _IsIntegral<_InputIterator>::_Ret _Integral;
    _M_initialize_aux(__first, __last, _Integral());
  }
# 304 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_vector.h"
  ~vector() { ::std::_Destroy_Range(rbegin(), rend()); }

  _Self& operator=(const _Self& __x);

  void reserve(size_type __n);






  void assign(size_type __n, const _Tp& __val) { _M_fill_assign(__n, __val); }
  void _M_fill_assign(size_type __n, const _Tp& __val);


  template <class _ForwardIter>
  void _M_assign_aux(_ForwardIter __first, _ForwardIter __last, const forward_iterator_tag &) {




    const size_type __len = ::std::distance(__first, __last);
    if (__len > capacity()) {
      size_type __n = __len;
      iterator __tmp = _M_allocate_and_copy(__n, __first, __last);
      _M_clear();
      _M_set(__tmp, __tmp + __len, __tmp + __n);
    }
    else if (size() >= __len) {
      iterator __new_finish = copy(__first, __last, this->_M_start);
      ::std::_Destroy_Range(__new_finish, this->_M_finish);
      this->_M_finish = __new_finish;
    }
    else {
      _ForwardIter __mid = __first;
      ::std::advance(__mid, size());
      ::std::copy(__first, __mid, this->_M_start);
      this->_M_finish = ::std::uninitialized_copy(__mid, __last, this->_M_finish);
    }
  }


  template <class _InputIter>
  void _M_assign_aux(_InputIter __first, _InputIter __last,
                     const input_iterator_tag &) {
    iterator __cur = begin();
    for ( ; __first != __last && __cur != end(); ++__cur, ++__first)
      *__cur = *__first;
    if (__first == __last)
      erase(__cur, end());
    else
      insert(end(), __first, __last);
  }

  template <class _Integer>
  void _M_assign_dispatch(_Integer __n, _Integer __val,
                          const __true_type& )
  { _M_fill_assign(__n, __val); }

  template <class _InputIter>
  void _M_assign_dispatch(_InputIter __first, _InputIter __last,
                          const __false_type& )
  { _M_assign_aux(__first, __last, typename ::std::iterator_traits< _InputIter >::iterator_category()); }

  template <class _InputIterator>
  void assign(_InputIterator __first, _InputIterator __last) {
    typedef typename _IsIntegral<_InputIterator>::_Ret _Integral;
    _M_assign_dispatch(__first, __last, _Integral());
  }



  void push_back(const _Tp& __x = _Tp()) {



    if (this->_M_finish != this->_M_end_of_storage._M_data) {
      _Copy_Construct(this->_M_finish, __x);
      ++this->_M_finish;
    }
    else {
      typedef typename __type_traits<_Tp>::has_trivial_assignment_operator _TrivialCopy;
      _M_insert_overflow(this->_M_finish, __x, _TrivialCopy(), 1, true);
    }
  }


  iterator insert(iterator __pos, const _Tp& __x = _Tp());
# 401 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_vector.h"
  void swap(_Self& __x) {
    ::std::swap(this->_M_start, __x._M_start);
    ::std::swap(this->_M_finish, __x._M_finish);
    this->_M_end_of_storage.swap(__x._M_end_of_storage);
  }




private:
  void _M_fill_insert_aux (iterator __pos, size_type __n, const _Tp& __x, const __true_type& );
  void _M_fill_insert_aux (iterator __pos, size_type __n, const _Tp& __x, const __false_type& );
  void _M_fill_insert (iterator __pos, size_type __n, const _Tp& __x);

  bool _M_is_inside(const value_type& __x) const {
    return (&__x >= this->_M_start && &__x < this->_M_finish);
  }


  template <class _ForwardIterator>
  void _M_range_insert_realloc(iterator __pos,
                               _ForwardIterator __first, _ForwardIterator __last,




                               size_type __n) {
    typedef typename __type_traits<_Tp>::has_trivial_copy_constructor _TrivialUCopy;

    typedef typename __move_traits<_Tp>::implemented _Movable;

    size_type __len = _M_compute_next_size(__n);
    pointer __new_start = this->_M_end_of_storage.allocate(__len, __len);
    pointer __new_finish = __new_start;
    {
      __new_finish = ::std::priv:: __uninitialized_move(this->_M_start, __pos, __new_start, _TrivialUCopy(), _Movable());
      __new_finish = uninitialized_copy(__first, __last, __new_finish);
      __new_finish = ::std::priv:: __uninitialized_move(__pos, this->_M_finish, __new_finish, _TrivialUCopy(), _Movable());
    }
   

    _M_clear_after_move();
    _M_set(__new_start, __new_finish, __new_start + __len);
  }


  template <class _ForwardIterator>
  void _M_range_insert_aux(iterator __pos,
                           _ForwardIterator __first, _ForwardIterator __last,




                           size_type __n, const __true_type& ) {
    iterator __src = this->_M_finish - 1;
    iterator __dst = __src + __n;
    for (; __src >= __pos; --__dst, --__src) {
      ::std::_Move_Construct(__dst, *__src);
      ::std::_Destroy_Moved(__src);
    }
    uninitialized_copy(__first, __last, __pos);
    this->_M_finish += __n;
  }


  template <class _ForwardIterator>
  void _M_range_insert_aux(iterator __pos,
                           _ForwardIterator __first, _ForwardIterator __last,




                           size_type __n, const __false_type& ) {
    typedef typename __type_traits<_Tp>::has_trivial_copy_constructor _TrivialUCopy;
    typedef typename __type_traits<_Tp>::has_trivial_assignment_operator _TrivialCopy;
    const size_type __elems_after = this->_M_finish - __pos;
    pointer __old_finish = this->_M_finish;
    if (__elems_after > __n) {
      ::std::priv:: __ucopy_ptrs(this->_M_finish - __n, this->_M_finish, this->_M_finish, _TrivialUCopy());
      this->_M_finish += __n;
      ::std::priv:: __copy_backward_ptrs(__pos, __old_finish - __n, __old_finish, _TrivialCopy());
      copy(__first, __last, __pos);
    }
    else {

      _ForwardIterator __mid = __first;
      ::std::advance(__mid, __elems_after);



      uninitialized_copy(__mid, __last, this->_M_finish);
      this->_M_finish += __n - __elems_after;
      ::std::priv:: __ucopy_ptrs(__pos, __old_finish, this->_M_finish, _TrivialUCopy());
      this->_M_finish += __elems_after;
      copy(__first, __mid, __pos);
    }
  }



  template <class _Integer>
  void _M_insert_dispatch(iterator __pos, _Integer __n, _Integer __val,
                          const __true_type&)
  { _M_fill_insert(__pos, (size_type) __n, (_Tp) __val); }

  template <class _InputIterator>
  void _M_insert_dispatch(iterator __pos,
                          _InputIterator __first, _InputIterator __last,
                          const __false_type&)
  { _M_range_insert(__pos, __first, __last, typename ::std::iterator_traits< _InputIterator >::iterator_category()); }

public:

  template <class _InputIterator>
  void insert(iterator __pos, _InputIterator __first, _InputIterator __last) {
    typedef typename _IsIntegral<_InputIterator>::_Ret _Integral;
    _M_insert_dispatch(__pos, __first, __last, _Integral());
  }

private:
  template <class _InputIterator>
  void _M_range_insert(iterator __pos,
                       _InputIterator __first, _InputIterator __last,
                       const input_iterator_tag &) {
    for ( ; __first != __last; ++__first) {
      __pos = insert(__pos, *__first);
      ++__pos;
    }
  }

  template <class _ForwardIterator>
  void _M_range_insert(iterator __pos,
                       _ForwardIterator __first, _ForwardIterator __last,
                       const forward_iterator_tag &) {






    typedef typename __move_traits<_Tp>::implemented _Movable;




    if (__first != __last) {
      size_type __n = ::std::distance(__first, __last);

      if (size_type(this->_M_end_of_storage._M_data - this->_M_finish) >= __n) {
        _M_range_insert_aux(__pos, __first, __last, __n, _Movable());
      }
      else {
        _M_range_insert_realloc(__pos, __first, __last, __n);
      }
    }
  }

public:
  void insert (iterator __pos, size_type __n, const _Tp& __x)
  { _M_fill_insert(__pos, __n, __x); }

  void pop_back() {
    --this->_M_finish;
    ::std::_Destroy(this->_M_finish);
  }

private:
  iterator _M_erase(iterator __pos, const __true_type& ) {
    ::std::_Destroy(__pos);
    iterator __dst = __pos, __src = __dst + 1;
    iterator __end = end();
    for (; __src != __end; ++__dst, ++__src) {
      ::std::_Move_Construct(__dst, *__src);
      ::std::_Destroy_Moved(__src);
    }
    this->_M_finish = __dst;
    return __pos;
  }
  iterator _M_erase(iterator __pos, const __false_type& ) {
    if (__pos + 1 != end()) {
      typedef typename __type_traits<_Tp>::has_trivial_assignment_operator _TrivialCopy;
      ::std::priv:: __copy_ptrs(__pos + 1, this->_M_finish, __pos, _TrivialCopy());
    }
    --this->_M_finish;
    ::std::_Destroy(this->_M_finish);
    return __pos;
  }
  iterator _M_erase(iterator __first, iterator __last, const __true_type& ) {
    iterator __dst = __first, __src = __last;
    iterator __end = end();
    for (; __dst != __last && __src != __end; ++__dst, ++__src) {
      ::std::_Destroy(__dst);
      ::std::_Move_Construct(__dst, *__src);
    }
    if (__dst != __last) {

      ::std::_Destroy_Range(__dst, __last);
      ::std::_Destroy_Moved_Range(__last, __end);
    }
    else {

      for (; __src != __end; ++__dst, ++__src) {
        ::std::_Destroy_Moved(__dst);
        ::std::_Move_Construct(__dst, *__src);
      }
      ::std::_Destroy_Moved_Range(__dst, __end);
    }
    this->_M_finish = __dst;
    return __first;
  }
  iterator _M_erase(iterator __first, iterator __last, const __false_type& ) {
    typedef typename __type_traits<_Tp>::has_trivial_assignment_operator _TrivialCopy;
    pointer __i = ::std::priv:: __copy_ptrs(__last, this->_M_finish, __first, _TrivialCopy());
    ::std::_Destroy_Range(__i, this->_M_finish);
    this->_M_finish = __i;
    return __first;
  }

public:
  iterator erase(iterator __pos) {

    typedef typename __move_traits<_Tp>::implemented _Movable;

    return _M_erase(__pos, _Movable());
  }
  iterator erase(iterator __first, iterator __last) {

    typedef typename __move_traits<_Tp>::implemented _Movable;

    if (__first == __last)
      return __first;
    return _M_erase(__first, __last, _Movable());
  }


  void resize(size_type __new_size, const _Tp& __x = _Tp()) {



    if (__new_size < size())
      erase(begin() + __new_size, end());
    else
      insert(end(), __new_size - size(), __x);
  }





  void clear() {
    erase(begin(), end());
  }

private:
  void _M_clear() {
    ::std::_Destroy_Range(rbegin(), rend());
    this->_M_end_of_storage.deallocate(this->_M_start, this->_M_end_of_storage._M_data - this->_M_start);
  }

  void _M_clear_after_move() {
    ::std::_Destroy_Moved_Range(rbegin(), rend());
    this->_M_end_of_storage.deallocate(this->_M_start, this->_M_end_of_storage._M_data - this->_M_start);
  }

  void _M_set(pointer __s, pointer __f, pointer __e) {
    this->_M_start = __s;
    this->_M_finish = __f;
    this->_M_end_of_storage._M_data = __e;
  }


  template <class _ForwardIterator>
  pointer _M_allocate_and_copy(size_type& __n,
                               _ForwardIterator __first, _ForwardIterator __last)




  {
    pointer __result = this->_M_end_of_storage.allocate(__n, __n);
    {
      uninitialized_copy(__first, __last, __result);
      return __result;
    }
   
   
  }



  template <class _InputIterator>
  void _M_range_initialize(_InputIterator __first, _InputIterator __last,
                           const input_iterator_tag &) {
    for ( ; __first != __last; ++__first)
      push_back(*__first);
  }

  template <class _ForwardIterator>
  void _M_range_initialize(_ForwardIterator __first, _ForwardIterator __last,
                           const forward_iterator_tag &) {
    size_type __n = ::std::distance(__first, __last);
    this->_M_start = this->_M_end_of_storage.allocate(__n, __n);
    this->_M_end_of_storage._M_data = this->_M_start + __n;
    this->_M_finish = uninitialized_copy(__first, __last, this->_M_start);
  }

};






}


# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_vector.c" 1
# 35 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_vector.c"
namespace std {

namespace priv {

template <class _Tp, class _Alloc>
void _Vector_base<_Tp,_Alloc>::_M_throw_length_error() const
{ __stl_throw_length_error("vector"); }

template <class _Tp, class _Alloc>
void _Vector_base<_Tp, _Alloc>::_M_throw_out_of_range() const
{ __stl_throw_out_of_range("vector"); }






}
# 61 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_vector.c"
template <class _Tp, class _Alloc>
void vector<_Tp, _Alloc>::reserve(size_type __n) {
  if (capacity() < __n) {
    if (max_size() < __n) {
      this->_M_throw_length_error();
    }

    const size_type __old_size = size();
    pointer __tmp;
    if (this->_M_start) {
      __tmp = _M_allocate_and_copy(__n, this->_M_start, this->_M_finish);
      _M_clear();
    } else {
      __tmp = this->_M_end_of_storage.allocate(__n, __n);
    }
    _M_set(__tmp, __tmp + __old_size, __tmp + __n);
  }
}

template <class _Tp, class _Alloc>
void vector<_Tp, _Alloc>::_M_insert_overflow_aux(pointer __pos, const _Tp& __x, const __false_type& ,
                                                 size_type __fill_len, bool __atend ) {
  typedef typename __type_traits<_Tp>::has_trivial_copy_constructor _TrivialUCopy;

  typedef typename __move_traits<_Tp>::implemented _Movable;

  size_type __len = _M_compute_next_size(__fill_len);
  pointer __new_start = this->_M_end_of_storage.allocate(__len, __len);
  pointer __new_finish = __new_start;
  {
    __new_finish = ::std::priv:: __uninitialized_move(this->_M_start, __pos, __new_start, _TrivialUCopy(), _Movable());

    if (__fill_len == 1) {
      _Copy_Construct(__new_finish, __x);
      ++__new_finish;
    } else
      __new_finish = ::std::priv:: __uninitialized_fill_n(__new_finish, __fill_len, __x);
    if (!__atend)
      __new_finish = ::std::priv:: __uninitialized_move(__pos, this->_M_finish, __new_finish, _TrivialUCopy(), _Movable());
  }
 

  _M_clear_after_move();
  _M_set(__new_start, __new_finish, __new_start + __len);
}

template <class _Tp, class _Alloc>
void vector<_Tp, _Alloc>::_M_insert_overflow(pointer __pos, const _Tp& __x, const __true_type& ,
                                             size_type __fill_len, bool __atend ) {
  size_type __len = _M_compute_next_size(__fill_len);
  pointer __new_start = this->_M_end_of_storage.allocate(__len, __len);
  pointer __new_finish = static_cast<pointer>(::std::priv:: __copy_trivial(this->_M_start, __pos, __new_start));

  __new_finish = ::std::priv:: __fill_n(__new_finish, __fill_len, __x);
  if (!__atend)
    __new_finish = static_cast<pointer>(::std::priv:: __copy_trivial(__pos, this->_M_finish, __new_finish));
  _M_clear();
  _M_set(__new_start, __new_finish, __new_start + __len);
}

template <class _Tp, class _Alloc>
void vector<_Tp, _Alloc>::_M_fill_insert_aux(iterator __pos, size_type __n,
                                             const _Tp& __x, const __true_type& ) {
  if (_M_is_inside(__x)) {
    _Tp __x_copy = __x;
    _M_fill_insert_aux(__pos, __n, __x_copy, __true_type());
    return;
  }
  iterator __src = this->_M_finish - 1;
  iterator __dst = __src + __n;
  for (; __src >= __pos; --__dst, --__src) {
    ::std::_Move_Construct(__dst, *__src);
    ::std::_Destroy_Moved(__src);
  }
  ::std::priv:: __uninitialized_fill_n(__pos, __n, __x);
  this->_M_finish += __n;
}

template <class _Tp, class _Alloc>
void vector<_Tp, _Alloc>::_M_fill_insert_aux (iterator __pos, size_type __n,
                                              const _Tp& __x, const __false_type& ) {
  typedef typename __type_traits<_Tp>::has_trivial_copy_constructor _TrivialUCopy;
  typedef typename __type_traits<_Tp>::has_trivial_assignment_operator _TrivialCopy;

  if (_M_is_inside(__x)) {
    _Tp __x_copy = __x;
    _M_fill_insert_aux(__pos, __n, __x_copy, __false_type());
    return;
  }
  const size_type __elems_after = this->_M_finish - __pos;
  pointer __old_finish = this->_M_finish;
  if (__elems_after > __n) {
    ::std::priv:: __ucopy_ptrs(this->_M_finish - __n, this->_M_finish, this->_M_finish, _TrivialUCopy());
    this->_M_finish += __n;
    ::std::priv:: __copy_backward_ptrs(__pos, __old_finish - __n, __old_finish, _TrivialCopy());
    ::std::fill(__pos, __pos + __n, __x);
  } else {
    this->_M_finish = ::std::priv:: __uninitialized_fill_n(this->_M_finish, __n - __elems_after, __x);
    ::std::priv:: __ucopy_ptrs(__pos, __old_finish, this->_M_finish, _TrivialUCopy());
    this->_M_finish += __elems_after;
    ::std::fill(__pos, __old_finish, __x);
  }
}

template <class _Tp, class _Alloc>
void vector<_Tp, _Alloc>::_M_fill_insert(iterator __pos,
                                         size_type __n, const _Tp& __x) {

  typedef typename __move_traits<_Tp>::implemented _Movable;

  if (__n != 0) {
    if (size_type(this->_M_end_of_storage._M_data - this->_M_finish) >= __n) {
      _M_fill_insert_aux(__pos, __n, __x, _Movable());
    } else {
      typedef typename __type_traits<_Tp>::has_trivial_assignment_operator _TrivialCopy;
      _M_insert_overflow(__pos, __x, _TrivialCopy(), __n);
    }
  }
}

template <class _Tp, class _Alloc>
vector<_Tp, _Alloc>& vector<_Tp, _Alloc>::operator = (const vector<_Tp, _Alloc>& __x) {
  typedef typename __type_traits<_Tp>::has_trivial_assignment_operator _TrivialCopy;
  typedef typename __type_traits<_Tp>::has_trivial_copy_constructor _TrivialUCopy;
  if (&__x != this) {
    const size_type __xlen = __x.size();
    if (__xlen > capacity()) {
      size_type __len = __xlen;
      pointer __tmp = _M_allocate_and_copy(__len, const_cast<const_pointer>(__x._M_start) + 0,
                                                  const_cast<const_pointer>(__x._M_finish) + 0);
      _M_clear();
      this->_M_start = __tmp;
      this->_M_end_of_storage._M_data = this->_M_start + __len;
    } else if (size() >= __xlen) {
      pointer __i = ::std::priv:: __copy_ptrs(const_cast<const_pointer>(__x._M_start) + 0,
                                           const_cast<const_pointer>(__x._M_finish) + 0, this->_M_start, _TrivialCopy());
      ::std::_Destroy_Range(__i, this->_M_finish);
    } else {
      ::std::priv:: __copy_ptrs(const_cast<const_pointer>(__x._M_start),
                             const_cast<const_pointer>(__x._M_start) + size(), this->_M_start, _TrivialCopy());
      ::std::priv:: __ucopy_ptrs(const_cast<const_pointer>(__x._M_start) + size(),
                              const_cast<const_pointer>(__x._M_finish) + 0, this->_M_finish, _TrivialUCopy());
    }
    this->_M_finish = this->_M_start + __xlen;
  }
  return *this;
}

template <class _Tp, class _Alloc>
void vector<_Tp, _Alloc>::_M_fill_assign(size_t __n, const _Tp& __val) {
  if (__n > capacity()) {
    vector<_Tp, _Alloc> __tmp(__n, __val, get_allocator());
    __tmp.swap(*this);
  } else if (__n > size()) {
    fill(begin(), end(), __val);
    this->_M_finish = ::std::priv:: __uninitialized_fill_n(this->_M_finish, __n - size(), __val);
  } else
    erase(::std::priv:: __fill_n(begin(), __n, __val), end());
}

template <class _Tp, class _Alloc>
typename vector<_Tp, _Alloc>::iterator
vector<_Tp, _Alloc>::insert(iterator __pos, const _Tp& __x) {
  size_type __n = __pos - begin();
  _M_fill_insert(__pos, 1, __x);
  return begin() + __n;
}
# 236 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_vector.c"
}
# 718 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_vector.h" 2
# 729 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_vector.h"
# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_bvector.h" 1
# 39 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_bvector.h"
namespace std {
namespace priv {

struct _Bit_reference {
  unsigned int* _M_p;
  unsigned int _M_mask;
  _Bit_reference(unsigned int* __x, unsigned int __y)
    : _M_p(__x), _M_mask(__y) {}

public:
  _Bit_reference() : _M_p(0), _M_mask(0) {}

  operator bool() const {
    return !(!(*_M_p & _M_mask));
  }
  _Bit_reference& operator = (bool __x) {
    if (__x) *_M_p |= _M_mask;
    else *_M_p &= ~_M_mask;
    return *this;
  }
  _Bit_reference& operator = (const _Bit_reference& __x) {
    return *this = bool(__x);
  }
  bool operator == (const _Bit_reference& __x) const {
    return bool(*this) == bool(__x);
  }
  bool operator < (const _Bit_reference& __x) const {
    return !bool(*this) && bool(__x);
  }

  _Bit_reference& operator |= (bool __x) {
    if (__x)
      *_M_p |= _M_mask;
    return *this;
  }
  _Bit_reference& operator &= (bool __x) {
    if (!__x)
      *_M_p &= ~_M_mask;
    return *this;
  }
  void flip() { *_M_p ^= _M_mask; }
};


}

inline void swap(::std::priv:: _Bit_reference& __x, ::std::priv:: _Bit_reference& __y) {
  bool __tmp = (bool)__x;
  __x = __y;
  __y = __tmp;
}


template<>
struct __type_traits< ::std::priv:: _Bit_reference> {
  typedef __false_type has_trivial_default_constructor;
  typedef __true_type has_trivial_copy_constructor;
  typedef __false_type has_trivial_assignment_operator;
  typedef __true_type has_trivial_destructor;
  typedef __false_type is_POD_type;
};

namespace priv {

struct _Bit_iterator_base {
  typedef ptrdiff_t difference_type;

  unsigned int* _M_p;
  unsigned int _M_offset;

  void _M_bump_up() {
    if (_M_offset++ == (int(8 * sizeof(unsigned int))) - 1) {
      _M_offset = 0;
      ++_M_p;
    }
  }

  void _M_bump_down() {
    if (_M_offset-- == 0) {
      _M_offset = (int(8 * sizeof(unsigned int))) - 1;
      --_M_p;
    }
  }

  _Bit_iterator_base() : _M_p(0), _M_offset(0) {}
  _Bit_iterator_base(unsigned int* __x, unsigned int __y) : _M_p(__x), _M_offset(__y) {}






  void _M_advance (difference_type __i) {
    difference_type __n = __i + _M_offset;
    _M_p += __n / (int(8 * sizeof(unsigned int)));
    __n = __n % (int(8 * sizeof(unsigned int)));
    if (__n < 0) {
      _M_offset = (unsigned int) __n + (int(8 * sizeof(unsigned int)));
      --_M_p;
    } else
      _M_offset = (unsigned int) __n;
  }

  difference_type _M_subtract(const _Bit_iterator_base& __x) const {
    return (int(8 * sizeof(unsigned int))) * (_M_p - __x._M_p) + _M_offset - __x._M_offset;
  }
};

inline bool operator==(const _Bit_iterator_base& __x, const _Bit_iterator_base& __y) {
  return __y._M_p == __x._M_p && __y._M_offset == __x._M_offset;
}
inline bool operator!=(const _Bit_iterator_base& __x, const _Bit_iterator_base& __y) {
  return __y._M_p != __x._M_p || __y._M_offset != __x._M_offset;
}

inline bool operator<(const _Bit_iterator_base& __x, const _Bit_iterator_base& __y) {
  return __x._M_p < __y._M_p || (__x._M_p == __y._M_p && __x._M_offset < __y._M_offset);
}

inline bool operator>(const _Bit_iterator_base& __x, const _Bit_iterator_base& __y) {
  return operator <(__y , __x);
}
inline bool operator<=(const _Bit_iterator_base& __x, const _Bit_iterator_base& __y) {
  return !(__y < __x);
}
inline bool operator>=(const _Bit_iterator_base& __x, const _Bit_iterator_base& __y) {
  return !(__x < __y);
}

template <class _Ref, class _Ptr>
struct _Bit_iter : public _Bit_iterator_base {
  typedef _Ref reference;
  typedef _Ptr pointer;
  typedef _Bit_iter<_Ref, _Ptr> _Self;
  typedef random_access_iterator_tag iterator_category;
  typedef bool value_type;
  typedef ptrdiff_t difference_type;
  typedef size_t size_type;

  _Bit_iter(unsigned int* __x, unsigned int __y) : _Bit_iterator_base(__x, __y) {}
  _Bit_iter() {}

  _Bit_iter(const _Bit_iter<_Bit_reference, _Bit_reference*>& __x):
    _Bit_iterator_base((const _Bit_iterator_base&)__x) {}




  reference operator*() const {
    return _Bit_reference(_M_p, 1UL << _M_offset);
  }
  _Self& operator++() {
    _M_bump_up();
    return *this;
  }
  _Self operator++(int) {
    _Self __tmp = *this;
    _M_bump_up();
    return __tmp;
  }
  _Self& operator--() {
    _M_bump_down();
    return *this;
  }
  _Self operator--(int) {
    _Self __tmp = *this;
    _M_bump_down();
    return __tmp;
  }
  _Self& operator+=(difference_type __i) {
    _M_advance(__i);
    return *this;
  }
  _Self& operator-=(difference_type __i) {
    *this += -__i;
    return *this;
  }
  _Self operator+(difference_type __i) const {
    _Self __tmp = *this;
    return __tmp += __i;
  }
  _Self operator-(difference_type __i) const {
    _Self __tmp = *this;
    return __tmp -= __i;
  }
  difference_type operator-(const _Self& __x) const {
    return _M_subtract(__x);
  }
  reference operator[](difference_type __i) { return *(*this + __i); }
};

template <class _Ref, class _Ptr>
inline _Bit_iter<_Ref,_Ptr>
operator+(ptrdiff_t __n, const _Bit_iter<_Ref, _Ptr>& __x) {
   return __x + __n;
}

}


template <class _Ref, class _Ptr>
struct __type_traits< ::std::priv:: _Bit_iter<_Ref, _Ptr> > {
  typedef __false_type has_trivial_default_constructor;
  typedef __true_type has_trivial_copy_constructor;
  typedef __true_type has_trivial_assignment_operator;
  typedef __true_type has_trivial_destructor;
  typedef __false_type is_POD_type;
};
# 260 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_bvector.h"
namespace priv {

typedef _Bit_iter<bool, const bool*> _Bit_const_iterator;
typedef _Bit_iter<_Bit_reference, _Bit_reference*> _Bit_iterator;



template <class _Alloc>
class _Bvector_base {
  typedef _Bvector_base<_Alloc> _Self;
public:
 
  typedef _Alloc allocator_type;
  typedef unsigned int __chunk_type;
  typedef typename _Alloc_traits<__chunk_type, _Alloc>::allocator_type __chunk_allocator_type;
  allocator_type get_allocator() const
  { return static_cast<const __chunk_allocator_type&>(_M_end_of_storage); }

  _Bvector_base(const allocator_type& __a)
    : _M_start(), _M_finish(), _M_end_of_storage(__a,
                                                 (__chunk_type*)0)
  {}

  _Bvector_base(__move_source<_Self> src)
    : _M_start(src.get()._M_start), _M_finish(src.get()._M_finish),
      _M_end_of_storage(src.get()._M_end_of_storage) {

    src.get()._M_start._M_p = 0;
  }


  ~_Bvector_base() {
    _M_deallocate();
  }

protected:

  static size_t _M_bits_to_chunks(size_t __n_bits)
  { return (__n_bits + (int(8 * sizeof(unsigned int))) - 1) / (int(8 * sizeof(unsigned int))); }

  __chunk_type* _M_bit_alloc(size_t __n)
  { return _M_end_of_storage.allocate(_M_bits_to_chunks(__n)); }

  void _M_deallocate() {
    if (_M_start._M_p)
      _M_end_of_storage.deallocate(_M_start._M_p,
                                   _M_end_of_storage._M_data - _M_start._M_p);
  }

  _Bit_iterator _M_start;
  _Bit_iterator _M_finish;
  _STLP_alloc_proxy<__chunk_type*, __chunk_type, __chunk_allocator_type> _M_end_of_storage;
};
# 354 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_bvector.h"
}


template <class _Alloc>
class vector<bool, _Alloc> : public ::std::priv:: _Bvector_base<_Alloc >



{
  typedef ::std::priv:: _Bvector_base<_Alloc > _Base;
  typedef vector<bool, _Alloc> _Self;
public:
  typedef bool value_type;
  typedef size_t size_type;
  typedef ptrdiff_t difference_type;
  typedef ::std::priv:: _Bit_reference reference;
  typedef bool const_reference;
  typedef ::std::priv:: _Bit_reference* pointer;
  typedef const bool* const_pointer;
  typedef random_access_iterator_tag _Iterator_category;

  typedef ::std::priv:: _Bit_iterator iterator;
  typedef ::std::priv:: _Bit_const_iterator const_iterator;

  typedef ::std::reverse_iterator<const_iterator> const_reverse_iterator; typedef ::std::reverse_iterator<iterator> reverse_iterator;


  typedef typename ::std::priv:: _Bvector_base<_Alloc >::allocator_type allocator_type;
  typedef typename ::std::priv:: _Bvector_base<_Alloc >::__chunk_type __chunk_type;





protected:

  void _M_initialize(size_type __n) {
    __chunk_type* __q = this->_M_bit_alloc(__n);
    this->_M_end_of_storage._M_data = __q + _Base::_M_bits_to_chunks(__n);
    this->_M_start = iterator(__q, 0);
    this->_M_finish = this->_M_start + difference_type(__n);
  }
  void _M_insert_aux(iterator __position, bool __x) {
    if (this->_M_finish._M_p != this->_M_end_of_storage._M_data) {
      ::std::priv:: __copy_backward(__position, this->_M_finish, this->_M_finish + 1,
                                 random_access_iterator_tag(), (difference_type*)0 );
      *__position = __x;
      ++this->_M_finish;
    }
    else {
      size_type __len = size() ? 2 * size() : (int(8 * sizeof(unsigned int)));
      __chunk_type* __q = this->_M_bit_alloc(__len);
      iterator __i = ::std::copy(begin(), __position, iterator(__q, 0));
      *__i++ = __x;
      this->_M_finish = ::std::copy(__position, end(), __i);
      this->_M_deallocate();
      this->_M_end_of_storage._M_data = __q + _Base::_M_bits_to_chunks(__len);
      this->_M_start = iterator(__q, 0);
    }
  }


  template <class _InputIterator>
  void _M_initialize_range(_InputIterator __first, _InputIterator __last,
                           const input_iterator_tag &) {
    this->_M_start = iterator();
    this->_M_finish = iterator();
    this->_M_end_of_storage._M_data = 0;
    for ( ; __first != __last; ++__first)
      push_back(*__first);
  }

  template <class _ForwardIterator>
  void _M_initialize_range(_ForwardIterator __first, _ForwardIterator __last,
                           const forward_iterator_tag &) {
    size_type __n = ::std::distance(__first, __last);
    _M_initialize(__n);
    ::std::copy(__first, __last, this->_M_start);
  }

  template <class _InputIterator>
  void _M_insert_range(iterator __pos,
                       _InputIterator __first, _InputIterator __last,
                       const input_iterator_tag &) {
    for ( ; __first != __last; ++__first) {
      __pos = insert(__pos, *__first);
      ++__pos;
    }
  }

  template <class _ForwardIterator>
  void _M_insert_range(iterator __position,
                       _ForwardIterator __first, _ForwardIterator __last,
                       const forward_iterator_tag &) {
    if (__first != __last) {
      size_type __n = ::std::distance(__first, __last);
      if (capacity() - size() >= __n) {
        ::std::priv:: __copy_backward(__position, end(), this->_M_finish + difference_type(__n),
                                   random_access_iterator_tag(), (difference_type*)0 );
        ::std::copy(__first, __last, __position);
        this->_M_finish += difference_type(__n);
      }
      else {
        size_type __len = size() + (max)(size(), __n);
        __chunk_type* __q = this->_M_bit_alloc(__len);
        iterator __i = ::std::copy(begin(), __position, iterator(__q, 0));
        __i = ::std::copy(__first, __last, __i);
        this->_M_finish = ::std::copy(__position, end(), __i);
        this->_M_deallocate();
        this->_M_end_of_storage._M_data = __q + _Base::_M_bits_to_chunks(__len);
        this->_M_start = iterator(__q, 0);
      }
    }
  }



public:
  iterator begin() { return this->_M_start; }
  const_iterator begin() const { return this->_M_start; }
  iterator end() { return this->_M_finish; }
  const_iterator end() const { return this->_M_finish; }

  reverse_iterator rbegin() { return reverse_iterator(end()); }
  const_reverse_iterator rbegin() const {
    return const_reverse_iterator(end());
  }
  reverse_iterator rend() { return reverse_iterator(begin()); }
  const_reverse_iterator rend() const {
    return const_reverse_iterator(begin());
  }

  size_type size() const { return size_type(end() - begin()); }
  size_type max_size() const { return size_type(-1); }
  size_type capacity() const {
    return size_type(const_iterator(this->_M_end_of_storage._M_data, 0) - begin());
  }
  bool empty() const { return begin() == end(); }
  reference operator[](size_type __n)
  { return *(begin() + difference_type(__n)); }
  const_reference operator[](size_type __n) const
  { return *(begin() + difference_type(__n)); }

  void _M_range_check(size_type __n) const {
    if (__n >= this->size())
      __stl_throw_range_error("vector<bool>");
  }

  reference at(size_type __n)
    { _M_range_check(__n); return (*this)[__n]; }
  const_reference at(size_type __n) const
    { _M_range_check(__n); return (*this)[__n]; }

  explicit vector(const allocator_type& __a = allocator_type())
    : ::std::priv:: _Bvector_base<_Alloc >(__a) {}

  vector(size_type __n, bool __val,
            const allocator_type& __a = allocator_type())
    : ::std::priv:: _Bvector_base<_Alloc >(__a) {
    _M_initialize(__n);
    fill(this->_M_start._M_p, (__chunk_type*)(this->_M_end_of_storage._M_data), __val ? ~0 : 0);
  }

  explicit vector(size_type __n)
    : ::std::priv:: _Bvector_base<_Alloc >(allocator_type()) {
    _M_initialize(__n);
    fill(this->_M_start._M_p, (__chunk_type*)(this->_M_end_of_storage._M_data), 0);
  }

  vector(const _Self& __x)
    : ::std::priv:: _Bvector_base<_Alloc >(__x.get_allocator()) {
    _M_initialize(__x.size());
    ::std::copy(__x.begin(), __x.end(), this->_M_start);
  }


  template <class _Integer>
  void _M_initialize_dispatch(_Integer __n, _Integer __x, const __true_type&) {
    _M_initialize(__n);
    fill(this->_M_start._M_p, this->_M_end_of_storage._M_data, __x ? ~0 : 0);
  }

  template <class _InputIterator>
  void _M_initialize_dispatch(_InputIterator __first, _InputIterator __last,
                              const __false_type&) {
    _M_initialize_range(__first, __last, typename ::std::iterator_traits< _InputIterator >::iterator_category());
  }
# 550 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_bvector.h"
  template <class _InputIterator>
  vector(_InputIterator __first, _InputIterator __last,
            const allocator_type& __a = allocator_type())
    : ::std::priv:: _Bvector_base<_Alloc >(__a) {
    typedef typename _IsIntegral<_InputIterator>::_Ret _Integral;
    _M_initialize_dispatch(__first, __last, _Integral());
  }
# 575 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_bvector.h"
  vector(__move_source<_Self> src)
    : ::std::priv:: _Bvector_base<_Alloc >(__move_source<_Base>(src.get())) {}


  ~vector() {}

  vector<bool, _Alloc>& operator=(const vector<bool, _Alloc>& __x) {
    if (&__x == this) return *this;
    if (__x.size() > capacity()) {
      this->_M_deallocate();
      _M_initialize(__x.size());
    }
    ::std::copy(__x.begin(), __x.end(), begin());
    this->_M_finish = begin() + difference_type(__x.size());
    return *this;
  }






  void _M_fill_assign(size_t __n, bool __x) {
    if (__n > size()) {
      fill(this->_M_start._M_p, (__chunk_type*)(this->_M_end_of_storage._M_data), __x ? ~0 : 0);
      insert(end(), __n - size(), __x);
    }
    else {
      erase(begin() + __n, end());
      fill(this->_M_start._M_p, (__chunk_type*)(this->_M_end_of_storage._M_data), __x ? ~0 : 0);
    }
  }
  void assign(size_t __n, bool __x) { _M_fill_assign(__n, __x); }


  template <class _InputIterator>
  void assign(_InputIterator __first, _InputIterator __last) {
    typedef typename _IsIntegral<_InputIterator>::_Ret _Integral;
    _M_assign_dispatch(__first, __last, _Integral());
  }

  template <class _Integer>
  void _M_assign_dispatch(_Integer __n, _Integer __val, const __true_type&)
    { _M_fill_assign((size_t) __n, (bool) __val); }

  template <class _InputIter>
  void _M_assign_dispatch(_InputIter __first, _InputIter __last, const __false_type&)
    { _M_assign_aux(__first, __last, typename ::std::iterator_traits< _InputIter >::iterator_category()); }

  template <class _InputIterator>
  void _M_assign_aux(_InputIterator __first, _InputIterator __last,
                     const input_iterator_tag &) {
    iterator __cur = begin();
    for ( ; __first != __last && __cur != end(); ++__cur, ++__first)
      *__cur = *__first;
    if (__first == __last)
      erase(__cur, end());
    else
      insert(end(), __first, __last);
  }

  template <class _ForwardIterator>
  void _M_assign_aux(_ForwardIterator __first, _ForwardIterator __last,
                     const forward_iterator_tag &) {
    size_type __len = ::std::distance(__first, __last);
    if (__len < size())
      erase(::std::copy(__first, __last, begin()), end());
    else {
      _ForwardIterator __mid = __first;
      ::std::advance(__mid, size());
      ::std::copy(__first, __mid, begin());
      insert(end(), __mid, __last);
    }
  }


  void reserve(size_type __n) {
    if (capacity() < __n) {
      if (max_size() < __n)
        __stl_throw_length_error("vector<bool>");
      __chunk_type* __q = this->_M_bit_alloc(__n);
      ::std::priv:: _Bit_iterator __z(__q, 0);
      this->_M_finish = ::std::copy(begin(), end(), __z);
      this->_M_deallocate();
      this->_M_start = iterator(__q, 0);
      this->_M_end_of_storage._M_data = __q + _Base::_M_bits_to_chunks(__n);
    }
  }

  reference front() { return *begin(); }
  const_reference front() const { return *begin(); }
  reference back() { return *(end() - 1); }
  const_reference back() const { return *(end() - 1); }
  void push_back(bool __x) {
    if (this->_M_finish._M_p != this->_M_end_of_storage._M_data) {
      *(this->_M_finish) = __x;
      ++this->_M_finish;
    }
    else
      _M_insert_aux(end(), __x);
  }
  void swap(vector<bool, _Alloc>& __x) {
    ::std::swap(this->_M_start, __x._M_start);
    ::std::swap(this->_M_finish, __x._M_finish);
    this->_M_end_of_storage.swap(__x._M_end_of_storage);
  }




  iterator insert(iterator __position, bool __x = bool()) {
    difference_type __n = __position - begin();
    if (this->_M_finish._M_p != this->_M_end_of_storage._M_data && __position == end()) {
      *(this->_M_finish) = __x;
      ++this->_M_finish;
    }
    else
      _M_insert_aux(__position, __x);
    return begin() + __n;
  }



  template <class _Integer>
  void _M_insert_dispatch(iterator __pos, _Integer __n, _Integer __x,
                          const __true_type&) {
    _M_fill_insert(__pos, (size_type) __n, (bool) __x);
  }

  template <class _InputIterator>
  void _M_insert_dispatch(iterator __pos,
                          _InputIterator __first, _InputIterator __last,
                          const __false_type&) {
    _M_insert_range(__pos, __first, __last, typename ::std::iterator_traits< _InputIterator >::iterator_category());
  }


  template <class _InputIterator>
  void insert(iterator __position,
              _InputIterator __first, _InputIterator __last) {
    typedef typename _IsIntegral<_InputIterator>::_Ret _Integral;
    _M_insert_dispatch(__position, __first, __last, _Integral());
  }
# 763 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_bvector.h"
  void _M_fill_insert(iterator __position, size_type __n, bool __x) {
    if (__n == 0) return;
    if (capacity() - size() >= __n) {
      ::std::priv:: __copy_backward(__position, end(), this->_M_finish + difference_type(__n),
                                 random_access_iterator_tag(), (difference_type*)0 );
      fill(__position, __position + difference_type(__n), __x);
      this->_M_finish += difference_type(__n);
    }
    else {
      size_type __len = size() + (max)(size(), __n);
      __chunk_type* __q = this->_M_bit_alloc(__len);
      iterator __i = ::std::copy(begin(), __position, iterator(__q, 0));
      fill_n(__i, __n, __x);
      this->_M_finish = ::std::copy(__position, end(), __i + difference_type(__n));
      this->_M_deallocate();
      this->_M_end_of_storage._M_data = __q + _Base::_M_bits_to_chunks(__len);
      this->_M_start = iterator(__q, 0);
    }
  }

  void insert(iterator __position, size_type __n, bool __x) {
    _M_fill_insert(__position, __n, __x);
  }

  void pop_back() {
    --this->_M_finish;
  }
  iterator erase(iterator __position) {
    if (__position + 1 != end())
      ::std::copy(__position + 1, end(), __position);
      --this->_M_finish;
    return __position;
  }
  iterator erase(iterator __first, iterator __last) {
    this->_M_finish = ::std::copy(__last, end(), __first);
    return __first;
  }
  void resize(size_type __new_size, bool __x = bool()) {
    if (__new_size < size())
      erase(begin() + difference_type(__new_size), end());
    else
      insert(end(), __new_size - size(), __x);
  }
  void flip() {
    for (__chunk_type* __p = this->_M_start._M_p; __p != this->_M_end_of_storage._M_data; ++__p)
      *__p = ~*__p;
  }

  void clear() { erase(begin(), end()); }
};
# 826 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_bvector.h"
}
# 730 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_vector.h" 2







namespace std {



typedef vector<bool, allocator<bool> > bit_vector;




# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_relops_cont.h" 1





template <class _Tp, class _Alloc>
inline bool operator==(const vector<_Tp, _Alloc>& __x,
                                  const vector<_Tp, _Alloc>& __y) {
  return __x.size() == __y.size() &&
         equal(__x.begin(), __x.end(), __y.begin());
}


template <class _Tp, class _Alloc>
inline bool operator<(const vector<_Tp, _Alloc>& __x,
                                 const vector<_Tp, _Alloc>& __y) {
  return lexicographical_compare(__x.begin(), __x.end(),
                                 __y.begin(), __y.end());
}

template <class _Tp, class _Alloc> inline bool operator!=(const vector<_Tp, _Alloc>& __x, const vector<_Tp, _Alloc>& __y) {return !(__x == __y);}template <class _Tp, class _Alloc> inline bool operator>(const vector<_Tp, _Alloc>& __x, const vector<_Tp, _Alloc>& __y) {return __y < __x;}template <class _Tp, class _Alloc> inline bool operator<=(const vector<_Tp, _Alloc>& __x, const vector<_Tp, _Alloc>& __y) { return !(__y < __x);}template <class _Tp, class _Alloc> inline bool operator>=(const vector<_Tp, _Alloc>& __x, const vector<_Tp, _Alloc>& __y) { return !(__x < __y);}


template <class _Tp, class _Alloc>
inline void swap(vector<_Tp, _Alloc>& __x,
                            vector<_Tp, _Alloc>& __y) {
  __x.swap(__y);
}
# 747 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_vector.h" 2





template <class _Tp, class _Alloc>
struct __move_traits<vector<_Tp, _Alloc> > {
  typedef __true_type implemented;
  typedef typename __move_traits<_Alloc>::complete complete;
};



template <class _Tp, class _Alloc>
struct _DefaultZeroValue<vector<_Tp, _Alloc> >
{ typedef typename __type_traits<_Alloc>::has_trivial_default_constructor _Ret; };




}
# 38 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/vector" 2
# 50 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/vector"
# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_epilog.h" 1
# 19 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_epilog.h"
# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_config_compat_post.h" 1
# 20 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_epilog.h" 2
# 51 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/vector" 2
# 71 "webkey-2.09/service/mongoose.cpp" 2
# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/algorithm" 1
# 30 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/algorithm"
# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_prolog.h" 1






# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_cprolog.h" 1
# 8 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_prolog.h" 2
# 31 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/algorithm" 2
# 41 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/algorithm"
# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_algo.h" 1
# 38 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_algo.h"
# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_heap.h" 1
# 33 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_heap.h"
namespace std {



template <class _RandomAccessIterator>
void
push_heap(_RandomAccessIterator __first, _RandomAccessIterator __last);


template <class _RandomAccessIterator, class _Compare>
void
push_heap(_RandomAccessIterator __first, _RandomAccessIterator __last,
          _Compare __comp);

template <class _RandomAccessIterator, class _Distance, class _Tp>
void
__adjust_heap(_RandomAccessIterator __first, _Distance __holeIndex,
              _Distance __len, _Tp __val);

template <class _RandomAccessIterator, class _Tp, class _Distance>
inline void
__pop_heap(_RandomAccessIterator __first, _RandomAccessIterator __last,
           _RandomAccessIterator __result, _Tp __val, _Distance*)
{
  *__result = *__first;
  __adjust_heap(__first, _Distance(0), _Distance(__last - __first), __val);
}

template <class _RandomAccessIterator>
void pop_heap(_RandomAccessIterator __first,
        _RandomAccessIterator __last);

template <class _RandomAccessIterator, class _Distance,
          class _Tp, class _Compare>
void
__adjust_heap(_RandomAccessIterator __first, _Distance __holeIndex,
              _Distance __len, _Tp __val, _Compare __comp);

template <class _RandomAccessIterator, class _Tp, class _Compare,
          class _Distance>
inline void
__pop_heap(_RandomAccessIterator __first, _RandomAccessIterator __last,
           _RandomAccessIterator __result, _Tp __val, _Compare __comp,
           _Distance*)
{
  *__result = *__first;
  __adjust_heap(__first, _Distance(0), _Distance(__last - __first),
                __val, __comp);
}

template <class _RandomAccessIterator, class _Compare>
void
pop_heap(_RandomAccessIterator __first,
         _RandomAccessIterator __last, _Compare __comp);

template <class _RandomAccessIterator>
void
make_heap(_RandomAccessIterator __first, _RandomAccessIterator __last);

template <class _RandomAccessIterator, class _Compare>
void
make_heap(_RandomAccessIterator __first,
          _RandomAccessIterator __last, _Compare __comp);

template <class _RandomAccessIterator>
inline
void sort_heap(_RandomAccessIterator __first, _RandomAccessIterator __last)
{
  while (__last - __first > 1)
    pop_heap(__first, __last--);
}

template <class _RandomAccessIterator, class _Compare>
inline
void
sort_heap(_RandomAccessIterator __first,
          _RandomAccessIterator __last, _Compare __comp)
{
  while (__last - __first > 1)
    pop_heap(__first, __last--, __comp);
}

}


# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_heap.c" 1
# 37 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_heap.c"
namespace std {

template <class _RandomAccessIterator, class _Distance, class _Tp>
inline
void
__push_heap(_RandomAccessIterator __first,
            _Distance __holeIndex, _Distance __topIndex, _Tp __val)
{
  _Distance __parent = (__holeIndex - 1) / 2;
  while (__holeIndex > __topIndex && *(__first + __parent) < __val) {
    *(__first + __holeIndex) = *(__first + __parent);
    __holeIndex = __parent;
    __parent = (__holeIndex - 1) / 2;
  }
  *(__first + __holeIndex) = __val;
}

template <class _RandomAccessIterator, class _Distance, class _Tp>
inline void
__push_heap_aux(_RandomAccessIterator __first,
                _RandomAccessIterator __last, _Distance*, _Tp*)
{
  __push_heap(__first, _Distance((__last - __first) - 1), _Distance(0),
              _Tp(*(__last - 1)));
}

template <class _RandomAccessIterator>
void
push_heap(_RandomAccessIterator __first, _RandomAccessIterator __last)
{
  __push_heap_aux(__first, __last,
                  (typename ::std::iterator_traits< _RandomAccessIterator >::difference_type*)0, (typename ::std::iterator_traits< _RandomAccessIterator >::value_type*)0);
}


template <class _RandomAccessIterator, class _Distance, class _Tp,
          class _Compare>
inline
void
__push_heap(_RandomAccessIterator __first, _Distance __holeIndex,
            _Distance __topIndex, _Tp __val, _Compare __comp)
{
  _Distance __parent = (__holeIndex - 1) / 2;
  while (__holeIndex > __topIndex && __comp(*(__first + __parent), __val)) {
   
    *(__first + __holeIndex) = *(__first + __parent);
    __holeIndex = __parent;
    __parent = (__holeIndex - 1) / 2;
  }
  *(__first + __holeIndex) = __val;
}

template <class _RandomAccessIterator, class _Compare,
          class _Distance, class _Tp>
inline void
__push_heap_aux(_RandomAccessIterator __first,
                _RandomAccessIterator __last, _Compare __comp,
                _Distance*, _Tp*)
{
  __push_heap(__first, _Distance((__last - __first) - 1), _Distance(0),
              _Tp(*(__last - 1)), __comp);
}

template <class _RandomAccessIterator, class _Compare>
void
push_heap(_RandomAccessIterator __first, _RandomAccessIterator __last,
          _Compare __comp)
{
  __push_heap_aux(__first, __last, __comp,
                  (typename ::std::iterator_traits< _RandomAccessIterator >::difference_type*)0, (typename ::std::iterator_traits< _RandomAccessIterator >::value_type*)0);
}

template <class _RandomAccessIterator, class _Distance, class _Tp>
void
__adjust_heap(_RandomAccessIterator __first, _Distance __holeIndex,
              _Distance __len, _Tp __val) {
  _Distance __topIndex = __holeIndex;
  _Distance __secondChild = 2 * __holeIndex + 2;
  while (__secondChild < __len) {
    if (*(__first + __secondChild) < *(__first + (__secondChild - 1)))
      __secondChild--;
    *(__first + __holeIndex) = *(__first + __secondChild);
    __holeIndex = __secondChild;
    __secondChild = 2 * (__secondChild + 1);
  }
  if (__secondChild == __len) {
    *(__first + __holeIndex) = *(__first + (__secondChild - 1));
    __holeIndex = __secondChild - 1;
  }
  __push_heap(__first, __holeIndex, __topIndex, __val);
}


template <class _RandomAccessIterator, class _Tp>
inline void
__pop_heap_aux(_RandomAccessIterator __first, _RandomAccessIterator __last, _Tp*) {
  __pop_heap(__first, __last - 1, __last - 1,
             _Tp(*(__last - 1)), (typename ::std::iterator_traits< _RandomAccessIterator >::difference_type*)0);
}

template <class _RandomAccessIterator>
void pop_heap(_RandomAccessIterator __first,
        _RandomAccessIterator __last) {
  __pop_heap_aux(__first, __last, (typename ::std::iterator_traits< _RandomAccessIterator >::value_type*)0);
}

template <class _RandomAccessIterator, class _Distance,
          class _Tp, class _Compare>
void
__adjust_heap(_RandomAccessIterator __first, _Distance __holeIndex,
              _Distance __len, _Tp __val, _Compare __comp)
{
  _Distance __topIndex = __holeIndex;
  _Distance __secondChild = 2 * __holeIndex + 2;
  while (__secondChild < __len) {
    if (__comp(*(__first + __secondChild), *(__first + (__secondChild - 1)))) {
     

      __secondChild--;
    }
    *(__first + __holeIndex) = *(__first + __secondChild);
    __holeIndex = __secondChild;
    __secondChild = 2 * (__secondChild + 1);
  }
  if (__secondChild == __len) {
    *(__first + __holeIndex) = *(__first + (__secondChild - 1));
    __holeIndex = __secondChild - 1;
  }
  __push_heap(__first, __holeIndex, __topIndex, __val, __comp);
}


template <class _RandomAccessIterator, class _Tp, class _Compare>
inline void
__pop_heap_aux(_RandomAccessIterator __first,
               _RandomAccessIterator __last, _Tp*, _Compare __comp)
{
  __pop_heap(__first, __last - 1, __last - 1, _Tp(*(__last - 1)), __comp,
             (typename ::std::iterator_traits< _RandomAccessIterator >::difference_type*)0);
}


template <class _RandomAccessIterator, class _Compare>
void
pop_heap(_RandomAccessIterator __first,
         _RandomAccessIterator __last, _Compare __comp)
{
    __pop_heap_aux(__first, __last, (typename ::std::iterator_traits< _RandomAccessIterator >::value_type*)0, __comp);
}

template <class _RandomAccessIterator, class _Tp, class _Distance>
inline
void
__make_heap(_RandomAccessIterator __first,
            _RandomAccessIterator __last, _Tp*, _Distance*)
{
  if (__last - __first < 2) return;
  _Distance __len = __last - __first;
  _Distance __parent = (__len - 2)/2;

  for (;;) {
    __adjust_heap(__first, __parent, __len, _Tp(*(__first + __parent)));
    if (__parent == 0) return;
    __parent--;
  }
}

template <class _RandomAccessIterator>
void
make_heap(_RandomAccessIterator __first, _RandomAccessIterator __last)
{
  __make_heap(__first, __last,
              (typename ::std::iterator_traits< _RandomAccessIterator >::value_type*)0, (typename ::std::iterator_traits< _RandomAccessIterator >::difference_type*)0);
}

template <class _RandomAccessIterator, class _Compare,
          class _Tp, class _Distance>
inline
void
__make_heap(_RandomAccessIterator __first, _RandomAccessIterator __last,
            _Compare __comp, _Tp*, _Distance*)
{
  if (__last - __first < 2) return;
  _Distance __len = __last - __first;
  _Distance __parent = (__len - 2)/2;

  for (;;) {
    __adjust_heap(__first, __parent, __len, _Tp(*(__first + __parent)),
                  __comp);
    if (__parent == 0) return;
    __parent--;
  }
}

template <class _RandomAccessIterator, class _Compare>
void
make_heap(_RandomAccessIterator __first,
          _RandomAccessIterator __last, _Compare __comp)
{
  __make_heap(__first, __last, __comp,
              (typename ::std::iterator_traits< _RandomAccessIterator >::value_type*)0, (typename ::std::iterator_traits< _RandomAccessIterator >::difference_type*)0);
}

}
# 119 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_heap.h" 2
# 39 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_algo.h" 2
# 54 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_algo.h"
namespace std {


template <class _InputIter, class _Function>
inline _Function
for_each(_InputIter __first, _InputIter __last, _Function __f) {
  for ( ; __first != __last; ++__first)
    __f(*__first);
  return __f;
}


template <class _InputIter, class _Predicate>
inline typename iterator_traits<_InputIter>::difference_type
count_if(_InputIter __first, _InputIter __last, _Predicate __pred) {
 
  typename iterator_traits<_InputIter>::difference_type __n = 0;
  for ( ; __first != __last; ++__first) {
    if (__pred(*__first))
      ++__n;
  }
  return __n;
}



template <class _ForwardIter, class _BinaryPredicate>
inline _ForwardIter
adjacent_find(_ForwardIter __first, _ForwardIter __last,
              _BinaryPredicate __binary_pred) {
 
  if (__first == __last)
    return __last;
  _ForwardIter __next = __first;
  while(++__next != __last) {
    if (__binary_pred(*__first, *__next))
      return __first;
    __first = __next;
  }
  return __last;
}

template <class _ForwardIter>
inline _ForwardIter
adjacent_find(_ForwardIter __first, _ForwardIter __last) {
  return adjacent_find(__first, __last,
                       ::std::priv:: __equal_to((typename ::std::iterator_traits< _ForwardIter >::value_type*)0));
}


template <class _InputIter, class _Tp, class _Size>
inline void
count(_InputIter __first, _InputIter __last, const _Tp& __val, _Size& __n) {
 
    for ( ; __first != __last; ++__first)
      if (*__first == __val)
        ++__n;
}

template <class _InputIter, class _Predicate, class _Size>
inline void
count_if(_InputIter __first, _InputIter __last, _Predicate __pred, _Size& __n) {
 
  for ( ; __first != __last; ++__first)
    if (__pred(*__first))
      ++__n;
}


template <class _ForwardIter1, class _ForwardIter2>
_ForwardIter1 search(_ForwardIter1 __first1, _ForwardIter1 __last1,
                     _ForwardIter2 __first2, _ForwardIter2 __last2);


template <class _ForwardIter, class _Integer, class _Tp>
_ForwardIter search_n(_ForwardIter __first, _ForwardIter __last,
                      _Integer __count, const _Tp& __val);
template <class _ForwardIter, class _Integer, class _Tp, class _BinaryPred>
_ForwardIter search_n(_ForwardIter __first, _ForwardIter __last,
                      _Integer __count, const _Tp& __val, _BinaryPred __binary_pred);

template <class _InputIter, class _ForwardIter>
inline _InputIter find_first_of(_InputIter __first1, _InputIter __last1,
                                _ForwardIter __first2, _ForwardIter __last2) {
 
 
  return ::std::priv:: __find_first_of(__first1, __last1, __first2, __last2);
}

template <class _InputIter, class _ForwardIter, class _BinaryPredicate>
inline _InputIter
find_first_of(_InputIter __first1, _InputIter __last1,
              _ForwardIter __first2, _ForwardIter __last2, _BinaryPredicate __comp) {
 
 
  return ::std::priv:: __find_first_of(__first1, __last1, __first2, __last2, __comp);
}

template <class _ForwardIter1, class _ForwardIter2>
_ForwardIter1
find_end(_ForwardIter1 __first1, _ForwardIter1 __last1,
         _ForwardIter2 __first2, _ForwardIter2 __last2);


template <class _ForwardIter1, class _ForwardIter2>
inline _ForwardIter2
swap_ranges(_ForwardIter1 __first1, _ForwardIter1 __last1, _ForwardIter2 __first2) {
 
  for ( ; __first1 != __last1; ++__first1, ++__first2)
    iter_swap(__first1, __first2);
  return __first2;
}


template <class _InputIter, class _OutputIter, class _UnaryOperation>
inline _OutputIter
transform(_InputIter __first, _InputIter __last, _OutputIter __result, _UnaryOperation __opr) {
 
  for ( ; __first != __last; ++__first, ++__result)
    *__result = __opr(*__first);
  return __result;
}
template <class _InputIter1, class _InputIter2, class _OutputIter, class _BinaryOperation>
inline _OutputIter
transform(_InputIter1 __first1, _InputIter1 __last1,
          _InputIter2 __first2, _OutputIter __result,_BinaryOperation __binary_op) {
 
  for ( ; __first1 != __last1; ++__first1, ++__first2, ++__result)
    *__result = __binary_op(*__first1, *__first2);
  return __result;
}



template <class _ForwardIter, class _Predicate, class _Tp>
inline void
replace_if(_ForwardIter __first, _ForwardIter __last, _Predicate __pred, const _Tp& __new_value) {
 
  for ( ; __first != __last; ++__first)
    if (__pred(*__first))
      *__first = __new_value;
}

template <class _InputIter, class _OutputIter, class _Tp>
inline _OutputIter
replace_copy(_InputIter __first, _InputIter __last,_OutputIter __result,
             const _Tp& __old_value, const _Tp& __new_value) {
 
  for ( ; __first != __last; ++__first, ++__result)
    *__result = *__first == __old_value ? __new_value : *__first;
  return __result;
}

template <class _Iterator, class _OutputIter, class _Predicate, class _Tp>
inline _OutputIter
replace_copy_if(_Iterator __first, _Iterator __last,
                _OutputIter __result,
                _Predicate __pred, const _Tp& __new_value) {
 
  for ( ; __first != __last; ++__first, ++__result)
    *__result = __pred(*__first) ? __new_value : *__first;
  return __result;
}



template <class _ForwardIter, class _Generator>
inline void
generate(_ForwardIter __first, _ForwardIter __last, _Generator __gen) {
 
  for ( ; __first != __last; ++__first)
    *__first = __gen();
}

template <class _OutputIter, class _Size, class _Generator>
inline void
generate_n(_OutputIter __first, _Size __n, _Generator __gen) {
  for ( ; __n > 0; --__n, ++__first)
    *__first = __gen();
}



template <class _InputIter, class _OutputIter, class _Tp>
inline _OutputIter
remove_copy(_InputIter __first, _InputIter __last,_OutputIter __result, const _Tp& __val) {
 
  for ( ; __first != __last; ++__first) {
    if (!(*__first == __val)) {
      *__result = *__first;
      ++__result;
    }
  }
  return __result;
}

template <class _InputIter, class _OutputIter, class _Predicate>
inline _OutputIter
remove_copy_if(_InputIter __first, _InputIter __last, _OutputIter __result, _Predicate __pred) {
 
  for ( ; __first != __last; ++__first) {
    if (!__pred(*__first)) {
      *__result = *__first;
      ++__result;
    }
  }
  return __result;
}

template <class _ForwardIter, class _Tp>
inline _ForwardIter
remove(_ForwardIter __first, _ForwardIter __last, const _Tp& __val) {
 
  __first = find(__first, __last, __val);
  if (__first == __last)
    return __first;
  else {
    _ForwardIter __next = __first;
    return remove_copy(++__next, __last, __first, __val);
  }
}

template <class _ForwardIter, class _Predicate>
inline _ForwardIter
remove_if(_ForwardIter __first, _ForwardIter __last, _Predicate __pred) {
 
  __first = find_if(__first, __last, __pred);
  if ( __first == __last )
    return __first;
  else {
    _ForwardIter __next = __first;
    return remove_copy_if(++__next, __last, __first, __pred);
  }
}


template <class _InputIter, class _OutputIter>
_OutputIter unique_copy(_InputIter __first, _InputIter __last, _OutputIter __result);

template <class _InputIter, class _OutputIter, class _BinaryPredicate>
_OutputIter unique_copy(_InputIter __first, _InputIter __last,_OutputIter __result,
                        _BinaryPredicate __binary_pred);

template <class _ForwardIter>
inline _ForwardIter unique(_ForwardIter __first, _ForwardIter __last) {
  __first = adjacent_find(__first, __last);
  return unique_copy(__first, __last, __first);
}

template <class _ForwardIter, class _BinaryPredicate>
inline _ForwardIter unique(_ForwardIter __first, _ForwardIter __last,
                           _BinaryPredicate __binary_pred) {
  __first = adjacent_find(__first, __last, __binary_pred);
  return unique_copy(__first, __last, __first, __binary_pred);
}



namespace priv {

template <class _BidirectionalIter>
inline void
__reverse(_BidirectionalIter __first, _BidirectionalIter __last, const bidirectional_iterator_tag &) {
  for (; __first != __last && __first != --__last; ++__first)
    ::std::iter_swap(__first,__last);
}

template <class _RandomAccessIter>
inline void
__reverse(_RandomAccessIter __first, _RandomAccessIter __last, const random_access_iterator_tag &) {
  for (; __first < __last; ++__first)
    ::std::iter_swap(__first, --__last);
}

}

template <class _BidirectionalIter>
inline void
reverse(_BidirectionalIter __first, _BidirectionalIter __last) {
 
  ::std::priv:: __reverse(__first, __last, typename ::std::iterator_traits< _BidirectionalIter >::iterator_category());
}

template <class _BidirectionalIter, class _OutputIter>
inline
_OutputIter reverse_copy(_BidirectionalIter __first,
                         _BidirectionalIter __last,
                         _OutputIter __result) {
 
  while (__first != __last) {
    --__last;
    *__result = *__last;
    ++__result;
  }
  return __result;
}

template <class _ForwardIter>
void rotate(_ForwardIter __first, _ForwardIter __middle, _ForwardIter __last);

template <class _ForwardIter, class _OutputIter>
inline _OutputIter rotate_copy(_ForwardIter __first, _ForwardIter __middle,
                               _ForwardIter __last, _OutputIter __result) {
  return ::std::copy(__first, __middle, copy(__middle, __last, __result));
}



template <class _RandomAccessIter>
void random_shuffle(_RandomAccessIter __first, _RandomAccessIter __last);

template <class _RandomAccessIter, class _RandomNumberGenerator>
void random_shuffle(_RandomAccessIter __first, _RandomAccessIter __last,
                    _RandomNumberGenerator& __rand);




template <class _ForwardIter, class _OutputIter, class _Distance>
_OutputIter random_sample_n(_ForwardIter __first, _ForwardIter __last,
                            _OutputIter __out_ite, const _Distance __n);

template <class _ForwardIter, class _OutputIter, class _Distance,
          class _RandomNumberGenerator>
_OutputIter random_sample_n(_ForwardIter __first, _ForwardIter __last,
                            _OutputIter __out_ite, const _Distance __n,
                            _RandomNumberGenerator& __rand);

template <class _InputIter, class _RandomAccessIter>
_RandomAccessIter
random_sample(_InputIter __first, _InputIter __last,
              _RandomAccessIter __out_first, _RandomAccessIter __out_last);

template <class _InputIter, class _RandomAccessIter,
          class _RandomNumberGenerator>
_RandomAccessIter
random_sample(_InputIter __first, _InputIter __last,
              _RandomAccessIter __out_first, _RandomAccessIter __out_last,
              _RandomNumberGenerator& __rand);





template <class _ForwardIter, class _Predicate>
_ForwardIter partition(_ForwardIter __first, _ForwardIter __last, _Predicate __pred);

template <class _ForwardIter, class _Predicate>
_ForwardIter
stable_partition(_ForwardIter __first, _ForwardIter __last, _Predicate __pred);


namespace priv {

template <class _Size>
inline _Size __lg(_Size __n) {
  _Size __k;
  for (__k = 0; __n != 1; __n >>= 1) ++__k;
  return __k;
}

}

template <class _RandomAccessIter>
void sort(_RandomAccessIter __first, _RandomAccessIter __last);
template <class _RandomAccessIter, class _Compare>
void sort(_RandomAccessIter __first, _RandomAccessIter __last, _Compare __comp);


template <class _RandomAccessIter>
void stable_sort(_RandomAccessIter __first,
                 _RandomAccessIter __last);

template <class _RandomAccessIter, class _Compare>
void stable_sort(_RandomAccessIter __first,
                 _RandomAccessIter __last, _Compare __comp);



template <class _RandomAccessIter>
void partial_sort(_RandomAccessIter __first, _RandomAccessIter __middle,
                  _RandomAccessIter __last);

template <class _RandomAccessIter, class _Compare>
void partial_sort(_RandomAccessIter __first,_RandomAccessIter __middle,
                  _RandomAccessIter __last, _Compare __comp);

template <class _InputIter, class _RandomAccessIter>
_RandomAccessIter
partial_sort_copy(_InputIter __first, _InputIter __last,
                  _RandomAccessIter __result_first, _RandomAccessIter __result_last);

template <class _InputIter, class _RandomAccessIter, class _Compare>
_RandomAccessIter
partial_sort_copy(_InputIter __first, _InputIter __last,
                  _RandomAccessIter __result_first,
                  _RandomAccessIter __result_last, _Compare __comp);


template <class _RandomAccessIter>
void nth_element(_RandomAccessIter __first, _RandomAccessIter __nth,
                 _RandomAccessIter __last);

template <class _RandomAccessIter, class _Compare>
void nth_element(_RandomAccessIter __first, _RandomAccessIter __nth,
                 _RandomAccessIter __last, _Compare __comp);


namespace priv {

template <class _T1, class _T2>
struct __less_2 {
  bool operator() (const _T1& __x, const _T2& __y) const { return __x < __y ; }
};

template <class _T1, class _T2>
__less_2<_T1,_T2> __less2(_T1*, _T2* ) { return __less_2<_T1, _T2>(); }






}


template <class _ForwardIter, class _Tp>
inline _ForwardIter lower_bound(_ForwardIter __first, _ForwardIter __last,
                                   const _Tp& __val) {
 
  return ::std::priv:: __lower_bound(__first, __last, __val,
                                  ::std::priv:: __less2((typename ::std::iterator_traits< _ForwardIter >::value_type*)0, (_Tp*)0),
                                  ::std::priv:: __less2((_Tp*)0, (typename ::std::iterator_traits< _ForwardIter >::value_type*)0),
                                  (typename ::std::iterator_traits< _ForwardIter >::difference_type*)0);
}

template <class _ForwardIter, class _Tp, class _Compare>
inline _ForwardIter lower_bound(_ForwardIter __first, _ForwardIter __last,
                                const _Tp& __val, _Compare __comp) {
 
  return ::std::priv:: __lower_bound(__first, __last, __val, __comp, __comp,
                                  (typename ::std::iterator_traits< _ForwardIter >::difference_type*)0);
}

namespace priv {

template <class _ForwardIter, class _Tp, class _Compare1, class _Compare2, class _Distance>
_ForwardIter __upper_bound(_ForwardIter __first, _ForwardIter __last, const _Tp& __val,
                           _Compare1 __comp1, _Compare2 __comp2, _Distance*);

}

template <class _ForwardIter, class _Tp>
inline _ForwardIter upper_bound(_ForwardIter __first, _ForwardIter __last,
                                const _Tp& __val) {
 
  return ::std::priv:: __upper_bound(__first, __last, __val,
                                  ::std::priv:: __less2((typename ::std::iterator_traits< _ForwardIter >::value_type*)0, (_Tp*)0),
                                  ::std::priv:: __less2((_Tp*)0, (typename ::std::iterator_traits< _ForwardIter >::value_type*)0),
                                  (typename ::std::iterator_traits< _ForwardIter >::difference_type*)0);
}

template <class _ForwardIter, class _Tp, class _Compare>
inline _ForwardIter upper_bound(_ForwardIter __first, _ForwardIter __last,
                                const _Tp& __val, _Compare __comp) {
 
  return ::std::priv:: __upper_bound(__first, __last, __val, __comp, __comp,
                                  (typename ::std::iterator_traits< _ForwardIter >::difference_type*)0);
}

namespace priv {

template <class _ForwardIter, class _Tp, class _Compare1, class _Compare2, class _Distance>
pair<_ForwardIter, _ForwardIter>
__equal_range(_ForwardIter __first, _ForwardIter __last, const _Tp& __val,
              _Compare1 __comp1, _Compare2 __comp2, _Distance*);

}

template <class _ForwardIter, class _Tp>
inline pair<_ForwardIter, _ForwardIter>
equal_range(_ForwardIter __first, _ForwardIter __last, const _Tp& __val) {
 
  return ::std::priv:: __equal_range(__first, __last, __val,
                                  ::std::priv:: __less2((typename ::std::iterator_traits< _ForwardIter >::value_type*)0, (_Tp*)0),
                                  ::std::priv:: __less2((_Tp*)0, (typename ::std::iterator_traits< _ForwardIter >::value_type*)0),
                                  (typename ::std::iterator_traits< _ForwardIter >::difference_type*)0);
}

template <class _ForwardIter, class _Tp, class _Compare>
inline pair<_ForwardIter, _ForwardIter>
equal_range(_ForwardIter __first, _ForwardIter __last, const _Tp& __val,
            _Compare __comp) {
 
  return ::std::priv:: __equal_range(__first, __last, __val, __comp, __comp,
                                  (typename ::std::iterator_traits< _ForwardIter >::difference_type*)0);
}

template <class _ForwardIter, class _Tp>
inline bool binary_search(_ForwardIter __first, _ForwardIter __last,
                   const _Tp& __val) {
 
  _ForwardIter __i = ::std::priv:: __lower_bound(__first, __last, __val,
                                              ::std::priv:: __less2((typename ::std::iterator_traits< _ForwardIter >::value_type*)0, (_Tp*)0),
                                              ::std::priv:: __less2((_Tp*)0, (typename ::std::iterator_traits< _ForwardIter >::value_type*)0),
                                              (typename ::std::iterator_traits< _ForwardIter >::difference_type*)0);
  return __i != __last && !(__val < *__i);
}

template <class _ForwardIter, class _Tp, class _Compare>
inline bool binary_search(_ForwardIter __first, _ForwardIter __last,
                          const _Tp& __val,
                          _Compare __comp) {
 
  _ForwardIter __i = ::std::priv:: __lower_bound(__first, __last, __val, __comp, __comp,
                                              (typename ::std::iterator_traits< _ForwardIter >::difference_type*)0);
  return __i != __last && !__comp(__val, *__i);
}



template <class _InputIter1, class _InputIter2, class _OutputIter>
_OutputIter merge(_InputIter1 __first1, _InputIter1 __last1,
                  _InputIter2 __first2, _InputIter2 __last2,
                  _OutputIter __result);

template <class _InputIter1, class _InputIter2, class _OutputIter,
          class _Compare>
_OutputIter merge(_InputIter1 __first1, _InputIter1 __last1,
                  _InputIter2 __first2, _InputIter2 __last2,
                  _OutputIter __result, _Compare __comp);





template <class _BidirectionalIter>
void inplace_merge(_BidirectionalIter __first,
                   _BidirectionalIter __middle,
                   _BidirectionalIter __last) ;

template <class _BidirectionalIter, class _Compare>
void inplace_merge(_BidirectionalIter __first,
                   _BidirectionalIter __middle,
                   _BidirectionalIter __last, _Compare __comp);






template <class _InputIter1, class _InputIter2>
bool includes(_InputIter1 __first1, _InputIter1 __last1,
              _InputIter2 __first2, _InputIter2 __last2);

template <class _InputIter1, class _InputIter2, class _Compare>
bool includes(_InputIter1 __first1, _InputIter1 __last1,
              _InputIter2 __first2, _InputIter2 __last2, _Compare __comp);

template <class _InputIter1, class _InputIter2, class _OutputIter>
_OutputIter set_union(_InputIter1 __first1, _InputIter1 __last1,
                      _InputIter2 __first2, _InputIter2 __last2,
                      _OutputIter __result);

template <class _InputIter1, class _InputIter2, class _OutputIter,
          class _Compare>
_OutputIter set_union(_InputIter1 __first1, _InputIter1 __last1,
                      _InputIter2 __first2, _InputIter2 __last2,
                      _OutputIter __result, _Compare __comp);

template <class _InputIter1, class _InputIter2, class _OutputIter>
_OutputIter set_intersection(_InputIter1 __first1, _InputIter1 __last1,
                             _InputIter2 __first2, _InputIter2 __last2,
                             _OutputIter __result);

template <class _InputIter1, class _InputIter2, class _OutputIter,
          class _Compare>
_OutputIter set_intersection(_InputIter1 __first1, _InputIter1 __last1,
                             _InputIter2 __first2, _InputIter2 __last2,
                             _OutputIter __result, _Compare __comp);



template <class _InputIter1, class _InputIter2, class _OutputIter>
_OutputIter set_difference(_InputIter1 __first1, _InputIter1 __last1,
                           _InputIter2 __first2, _InputIter2 __last2,
                           _OutputIter __result);

template <class _InputIter1, class _InputIter2, class _OutputIter,
          class _Compare>
_OutputIter set_difference(_InputIter1 __first1, _InputIter1 __last1,
                           _InputIter2 __first2, _InputIter2 __last2,
                           _OutputIter __result, _Compare __comp);

template <class _InputIter1, class _InputIter2, class _OutputIter>
_OutputIter
set_symmetric_difference(_InputIter1 __first1, _InputIter1 __last1,
                         _InputIter2 __first2, _InputIter2 __last2,
                         _OutputIter __result);


template <class _InputIter1, class _InputIter2, class _OutputIter,
          class _Compare>
_OutputIter
set_symmetric_difference(_InputIter1 __first1, _InputIter1 __last1,
                         _InputIter2 __first2, _InputIter2 __last2,
                         _OutputIter __result,
                         _Compare __comp);





template <class _ForwardIter>
_ForwardIter max_element(_ForwardIter __first, _ForwardIter __last);
template <class _ForwardIter, class _Compare>
_ForwardIter max_element(_ForwardIter __first, _ForwardIter __last,
                            _Compare __comp);

template <class _ForwardIter>
_ForwardIter min_element(_ForwardIter __first, _ForwardIter __last);

template <class _ForwardIter, class _Compare>
_ForwardIter min_element(_ForwardIter __first, _ForwardIter __last,
                            _Compare __comp);




template <class _BidirectionalIter>
bool next_permutation(_BidirectionalIter __first, _BidirectionalIter __last);

template <class _BidirectionalIter, class _Compare>
bool next_permutation(_BidirectionalIter __first, _BidirectionalIter __last,
                      _Compare __comp);


template <class _BidirectionalIter>
bool prev_permutation(_BidirectionalIter __first, _BidirectionalIter __last);


template <class _BidirectionalIter, class _Compare>
bool prev_permutation(_BidirectionalIter __first, _BidirectionalIter __last,
                      _Compare __comp);






template <class _RandomAccessIter>
bool is_heap(_RandomAccessIter __first, _RandomAccessIter __last);

template <class _RandomAccessIter, class _StrictWeakOrdering>
bool is_heap(_RandomAccessIter __first, _RandomAccessIter __last,
             _StrictWeakOrdering __comp);




namespace priv {

template <class _ForwardIter, class _StrictWeakOrdering>
bool __is_sorted(_ForwardIter __first, _ForwardIter __last,
                 _StrictWeakOrdering __comp);

}
template <class _ForwardIter>
inline bool is_sorted(_ForwardIter __first, _ForwardIter __last) {
  return ::std::priv:: __is_sorted(__first, __last,
                                ::std::priv:: __less((typename ::std::iterator_traits< _ForwardIter >::value_type*)0));
}

template <class _ForwardIter, class _StrictWeakOrdering>
inline bool is_sorted(_ForwardIter __first, _ForwardIter __last,
                      _StrictWeakOrdering __comp) {
  return ::std::priv:: __is_sorted(__first, __last, __comp);
}


}


# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_algo.c" 1
# 34 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_algo.c"
# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_tempbuf.h" 1
# 45 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_tempbuf.h"
namespace std {

template <class _Tp>
pair<_Tp*, ptrdiff_t>
__get_temporary_buffer(ptrdiff_t __len, _Tp*);



template <class _Tp>
inline pair<_Tp*, ptrdiff_t> get_temporary_buffer(ptrdiff_t __len) {
  return __get_temporary_buffer(__len, (_Tp*) 0);
}







template <class _Tp>
inline pair<_Tp*, ptrdiff_t>
get_temporary_buffer(ptrdiff_t __len, _Tp*) {
  return __get_temporary_buffer(__len, (_Tp*) 0);
}



template <class _Tp>
inline void return_temporary_buffer(_Tp* __p) {

  free((char*)__p);
}

template <class _ForwardIterator, class _Tp>
class _Temporary_buffer {
private:
  ptrdiff_t _M_original_len;
  ptrdiff_t _M_len;
  _Tp* _M_buffer;

  void _M_allocate_buffer() {
    _M_original_len = _M_len;
    _M_buffer = 0;

    if (_M_len > (ptrdiff_t)(0x7fffffff / sizeof(_Tp)))
      _M_len = 0x7fffffff / sizeof(_Tp);

    while (_M_len > 0) {
      _M_buffer = (_Tp*) malloc(_M_len * sizeof(_Tp));
      if (_M_buffer)
        break;
      _M_len /= 2;
    }
  }

  void _M_initialize_buffer(const _Tp&, const __true_type&) {}
  void _M_initialize_buffer(const _Tp& val, const __false_type&) {
    uninitialized_fill_n(_M_buffer, _M_len, val);
  }

public:
  ptrdiff_t size() const { return _M_len; }
  ptrdiff_t requested_size() const { return _M_original_len; }
  _Tp* begin() { return _M_buffer; }
  _Tp* end() { return _M_buffer + _M_len; }

  _Temporary_buffer(_ForwardIterator __first, _ForwardIterator __last) {




    typedef typename __type_traits<_Tp>::has_trivial_default_constructor _Trivial;

    {
      _M_len = ::std::distance(__first, __last);
      _M_allocate_buffer();
      if (_M_len > 0)
        _M_initialize_buffer(*__first, _Trivial());
    }
   
  }

  ~_Temporary_buffer() {
    ::std::_Destroy_Range(_M_buffer, _M_buffer + _M_len);
    free(_M_buffer);
  }

private:

  _Temporary_buffer(const _Temporary_buffer<_ForwardIterator, _Tp>&) {}
  void operator=(const _Temporary_buffer<_ForwardIterator, _Tp>&) {}
};





template <class _ForwardIterator,
          class _Tp

                    = typename iterator_traits<_ForwardIterator>::value_type

         >
struct temporary_buffer : public _Temporary_buffer<_ForwardIterator, _Tp>
{
  temporary_buffer(_ForwardIterator __first, _ForwardIterator __last)
    : _Temporary_buffer<_ForwardIterator, _Tp>(__first, __last) {}
  ~temporary_buffer() {}
};



}


# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_tempbuf.c" 1
# 33 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_tempbuf.c"
namespace std {

template <class _Tp>
pair<_Tp*, ptrdiff_t>
__get_temporary_buffer(ptrdiff_t __len, _Tp*)
{
  if (__len > ptrdiff_t(0x7fffffff / sizeof(_Tp)))
    __len = 0x7fffffff / sizeof(_Tp);

  while (__len > 0) {
    _Tp* __tmp = (_Tp*) malloc((size_t)__len * sizeof(_Tp));
    if (__tmp != 0)
      return pair<_Tp*, ptrdiff_t>(__tmp, __len);
    __len /= 2;
  }

  return pair<_Tp*, ptrdiff_t>((_Tp*)0, 0);
}
}
# 161 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_tempbuf.h" 2
# 35 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_algo.c" 2


namespace std {

namespace priv {

template <class _BidirectionalIter, class _Distance, class _Compare>
void __merge_without_buffer(_BidirectionalIter __first,
                            _BidirectionalIter __middle,
                            _BidirectionalIter __last,
                            _Distance __len1, _Distance __len2,
                            _Compare __comp);


template <class _BidirectionalIter1, class _BidirectionalIter2,
          class _BidirectionalIter3, class _Compare>
_BidirectionalIter3 __merge_backward(_BidirectionalIter1 __first1,
                                     _BidirectionalIter1 __last1,
                                     _BidirectionalIter2 __first2,
                                     _BidirectionalIter2 __last2,
                                     _BidirectionalIter3 __result,
                                     _Compare __comp);

template <class _Tp>

inline

const _Tp& __median(const _Tp& __a, const _Tp& __b, const _Tp& __c) {
  if (__a < __b)
    if (__b < __c)
      return __b;
    else if (__a < __c)
      return __c;
    else
      return __a;
  else if (__a < __c)
    return __a;
  else if (__b < __c)
    return __c;
  else
    return __b;
}

template <class _Tp, class _Compare>

inline

const _Tp&
__median(const _Tp& __a, const _Tp& __b, const _Tp& __c, _Compare __comp) {
  if (__comp(__a, __b)) {
   
    if (__comp(__b, __c)) {
     
      return __b;
    }
    else if (__comp(__a, __c)) {
     
      return __c;
    }
    else
      return __a;
  }
  else if (__comp(__a, __c)) {
   
    return __a;
  }
  else if (__comp(__b, __c)) {
   
    return __c;
  }
  else
    return __b;
}

}

template <class _ForwardIter1, class _ForwardIter2>
_ForwardIter1 search(_ForwardIter1 __first1, _ForwardIter1 __last1,
                     _ForwardIter2 __first2, _ForwardIter2 __last2) {
 
 

  if (__first1 == __last1 || __first2 == __last2)
    return __first1;


  _ForwardIter2 __p1(__first2);

  if ( ++__p1 == __last2 )
    return find(__first1, __last1, *__first2);



  for ( ; ; ) {
    __first1 = find(__first1, __last1, *__first2);
    if (__first1 == __last1)
      return __last1;

    _ForwardIter2 __p = __p1;
    _ForwardIter1 __current = __first1;
    if (++__current == __last1)
      return __last1;

    while (*__current == *__p) {
      if (++__p == __last2)
        return __first1;
      if (++__current == __last1)
        return __last1;
    }

    ++__first1;
  }
  return __first1;
}

namespace priv {

template <class _RandomAccessIter, class _Integer, class _Tp,
          class _BinaryPred, class _Distance>
_RandomAccessIter __search_n(_RandomAccessIter __first, _RandomAccessIter __last,
                             _Integer __count, const _Tp& __val, _BinaryPred __pred,
                             _Distance*, const random_access_iterator_tag &)
{
  _Distance __tailSize = __last - __first;
  const _Distance __pattSize = __count;
  const _Distance __skipOffset = __pattSize - 1;
  _RandomAccessIter __backTrack;
  _Distance __remainder, __prevRemainder;

  for ( _RandomAccessIter __lookAhead = __first + __skipOffset; __tailSize >= __pattSize; __lookAhead += __pattSize ) {

    __tailSize -= __pattSize;

    while ( !__pred(*__lookAhead, __val) ) {
      if (__tailSize < __pattSize)
        return __last;

      __lookAhead += __pattSize;
      __tailSize -= __pattSize;
    }

    if ( __skipOffset == 0 ) {
      return (__lookAhead - __skipOffset);
    }

    __remainder = __skipOffset;

    for (__backTrack = __lookAhead; __pred(*--__backTrack, __val); ) {
      if (--__remainder == 0)
        return (__lookAhead - __skipOffset);
    }

    if (__remainder > __tailSize)
      return __last;

    __lookAhead += __remainder;
    __tailSize -= __remainder;

    while ( __pred(*__lookAhead, __val) ) {
      __prevRemainder = __remainder;
      __backTrack = __lookAhead;

      do {
        if (--__remainder == 0)
          return (__lookAhead - __skipOffset);
      } while (__pred(*--__backTrack, __val));


      __remainder += __pattSize - __prevRemainder;

      if (__remainder > __tailSize)
        return __last;

      __lookAhead += __remainder;
      __tailSize -= __remainder;
    }


  }

  return __last;
}

template <class _ForwardIter, class _Integer, class _Tp,
          class _Distance, class _BinaryPred>
_ForwardIter __search_n(_ForwardIter __first, _ForwardIter __last,
                        _Integer __count, const _Tp& __val, _BinaryPred __pred,
                        _Distance*, const forward_iterator_tag &) {
  for (; (__first != __last) && !__pred(*__first, __val); ++__first) {}
  while (__first != __last) {
    _Integer __n = __count - 1;
    _ForwardIter __i = __first;
    ++__i;
    while (__i != __last && __n != 0 && __pred(*__i, __val)) {
      ++__i;
      --__n;
    }
    if (__n == 0)
      return __first;
    else if (__i != __last)
      for (__first = ++__i; (__first != __last) && !__pred(*__first, __val); ++__first) {}
    else
      break;
  }
  return __last;
}

}


template <class _ForwardIter, class _Integer, class _Tp>
_ForwardIter search_n(_ForwardIter __first, _ForwardIter __last,
                      _Integer __count, const _Tp& __val) {
 
  if (__count <= 0)
    return __first;
  if (__count == 1)

    return find(__first, __last, __val);
  return ::std::priv:: __search_n(__first, __last, __count, __val, equal_to<_Tp>(),
                               (typename ::std::iterator_traits< _ForwardIter >::difference_type*)0,
                               typename ::std::iterator_traits< _ForwardIter >::iterator_category());
}

template <class _ForwardIter, class _Integer, class _Tp, class _BinaryPred>
_ForwardIter search_n(_ForwardIter __first, _ForwardIter __last,
                      _Integer __count, const _Tp& __val,
                      _BinaryPred __binary_pred) {
 
  if (__count <= 0)
    return __first;
  return ::std::priv:: __search_n(__first, __last, __count, __val, __binary_pred,
                               (typename ::std::iterator_traits< _ForwardIter >::difference_type*)0,
                               typename ::std::iterator_traits< _ForwardIter >::iterator_category());
}

template <class _ForwardIter1, class _ForwardIter2>
_ForwardIter1
find_end(_ForwardIter1 __first1, _ForwardIter1 __last1,
         _ForwardIter2 __first2, _ForwardIter2 __last2) {
 
 
  return ::std::priv:: __find_end(__first1, __last1, __first2, __last2,

                               typename ::std::iterator_traits< _ForwardIter1 >::iterator_category(),
                               typename ::std::iterator_traits< _ForwardIter2 >::iterator_category(),




                               ::std::priv:: __equal_to((typename ::std::iterator_traits< _ForwardIter1 >::value_type*)0)
    );
}


namespace priv {

template <class _InputIterator, class _OutputIterator, class _BinaryPredicate,
          class _Tp>
inline _OutputIterator
__unique_copy(_InputIterator __first, _InputIterator __last,
              _OutputIterator __result,
              _BinaryPredicate __binary_pred, _Tp*) {
  _Tp __val = *__first;
  *__result = __val;
  while (++__first != __last)
    if (!__binary_pred(__val, *__first)) {
      __val = *__first;
      *++__result = __val;
    }
  return ++__result;
}

template <class _InputIter, class _OutputIter, class _BinaryPredicate>
inline _OutputIter
__unique_copy(_InputIter __first, _InputIter __last,_OutputIter __result,
              _BinaryPredicate __binary_pred, const output_iterator_tag &) {
  return ::std::priv:: __unique_copy(__first, __last, __result, __binary_pred,
                                  (typename ::std::iterator_traits< _InputIter >::value_type*)0);
}

template <class _InputIter, class _ForwardIter, class _BinaryPredicate>
inline _ForwardIter
__unique_copy(_InputIter __first, _InputIter __last, _ForwardIter __result,
              _BinaryPredicate __binary_pred, const forward_iterator_tag &) {
  *__result = *__first;
  while (++__first != __last)
    if (!__binary_pred(*__result, *__first)) *++__result = *__first;
  return ++__result;
}
# 344 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_algo.c"
}

template <class _InputIter, class _OutputIter>
_OutputIter
unique_copy(_InputIter __first, _InputIter __last, _OutputIter __result) {
 
  if (__first == __last) return __result;
  return ::std::priv:: __unique_copy(__first, __last, __result,
                                  ::std::priv:: __equal_to((typename ::std::iterator_traits< _InputIter >::value_type*)0),
                                  typename ::std::iterator_traits< _OutputIter >::iterator_category());
}

template <class _InputIter, class _OutputIter, class _BinaryPredicate>
_OutputIter
unique_copy(_InputIter __first, _InputIter __last,_OutputIter __result,
            _BinaryPredicate __binary_pred) {
 
  if (__first == __last) return __result;
  return ::std::priv:: __unique_copy(__first, __last, __result, __binary_pred,
                                  typename ::std::iterator_traits< _OutputIter >::iterator_category());
}


namespace priv {

template <class _ForwardIter, class _Distance>
_ForwardIter __rotate_aux(_ForwardIter __first,
                          _ForwardIter __middle,
                          _ForwardIter __last,
                          _Distance*,
                          const forward_iterator_tag &) {
  if (__first == __middle)
    return __last;
  if (__last == __middle)
    return __first;

  _ForwardIter __first2 = __middle;
  do {
    ::std::swap(*__first++, *__first2++);
    if (__first == __middle)
      __middle = __first2;
  } while (__first2 != __last);

  _ForwardIter __new_middle = __first;

  __first2 = __middle;

  while (__first2 != __last) {
    ::std::swap (*__first++, *__first2++);
    if (__first == __middle)
      __middle = __first2;
    else if (__first2 == __last)
      __first2 = __middle;
  }

  return __new_middle;
}

template <class _BidirectionalIter, class _Distance>
_BidirectionalIter __rotate_aux(_BidirectionalIter __first,
                                _BidirectionalIter __middle,
                                _BidirectionalIter __last,
                                _Distance*,
                                const bidirectional_iterator_tag &) {
  if (__first == __middle)
    return __last;
  if (__last == __middle)
    return __first;

  ::std::priv:: __reverse(__first, __middle, bidirectional_iterator_tag());
  ::std::priv:: __reverse(__middle, __last, bidirectional_iterator_tag());

  while (__first != __middle && __middle != __last)
    ::std::swap(*__first++, *--__last);

  if (__first == __middle) {
    ::std::priv:: __reverse(__middle, __last, bidirectional_iterator_tag());
    return __last;
  }
  else {
    ::std::priv:: __reverse(__first, __middle, bidirectional_iterator_tag());
    return __first;
  }
}


template <class _EuclideanRingElement>
inline
_EuclideanRingElement __gcd(_EuclideanRingElement __m,
                            _EuclideanRingElement __n) {
  while (__n != 0) {
    _EuclideanRingElement __t = __m % __n;
    __m = __n;
    __n = __t;
  }
  return __m;
}

template <class _RandomAccessIter, class _Distance, class _Tp>
_RandomAccessIter __rotate_aux(_RandomAccessIter __first,
                               _RandomAccessIter __middle,
                               _RandomAccessIter __last,
                               _Distance *, _Tp *) {

  _Distance __n = __last - __first;
  _Distance __k = __middle - __first;
  _Distance __l = __n - __k;
  _RandomAccessIter __result = __first + (__last - __middle);

  if (__k == 0)
    return __last;

  if (__k == __l) {
    ::std::swap_ranges(__first, __middle, __middle);
    return __result;
  }

  _Distance __d = ::std::priv:: __gcd(__n, __k);

  for (_Distance __i = 0; __i < __d; __i++) {
    _Tp __tmp = *__first;
    _RandomAccessIter __p = __first;

    if (__k < __l) {
      for (_Distance __j = 0; __j < __l/__d; __j++) {
        if (__p > __first + __l) {
          *__p = *(__p - __l);
          __p -= __l;
        }

        *__p = *(__p + __k);
        __p += __k;
      }
    }

    else {
      for (_Distance __j = 0; __j < __k/__d - 1; __j ++) {
        if (__p < __last - __k) {
          *__p = *(__p + __k);
          __p += __k;
        }

        *__p = * (__p - __l);
        __p -= __l;
      }
    }

    *__p = __tmp;
    ++__first;
  }

  return __result;
}

template <class _RandomAccessIter, class _Distance>
inline _RandomAccessIter
__rotate_aux(_RandomAccessIter __first, _RandomAccessIter __middle, _RandomAccessIter __last,
             _Distance * __dis, const random_access_iterator_tag &) {
  return ::std::priv:: __rotate_aux(__first, __middle, __last,
                                 __dis, (typename ::std::iterator_traits< _RandomAccessIter >::value_type*)0);
}

template <class _ForwardIter>
_ForwardIter
__rotate(_ForwardIter __first, _ForwardIter __middle, _ForwardIter __last) {
 
 
  return __rotate_aux(__first, __middle, __last,
                      (typename ::std::iterator_traits< _ForwardIter >::difference_type*)0,
                      typename ::std::iterator_traits< _ForwardIter >::iterator_category());
}

}

template <class _ForwardIter>
void rotate(_ForwardIter __first, _ForwardIter __middle, _ForwardIter __last) {
  ::std::priv:: __rotate(__first, __middle, __last);
}




namespace priv {

template <class _Distance>
inline _Distance __random_number(_Distance __n) {

  return rand() % __n;



}

}

template <class _RandomAccessIter>
void random_shuffle(_RandomAccessIter __first,
                    _RandomAccessIter __last) {
 
  if (__first == __last) return;
  for (_RandomAccessIter __i = __first + 1; __i != __last; ++__i)
    iter_swap(__i, __first + ::std::priv:: __random_number((__i - __first) + 1));
}

template <class _RandomAccessIter, class _RandomNumberGenerator>
void random_shuffle(_RandomAccessIter __first, _RandomAccessIter __last,
                    _RandomNumberGenerator &__rand) {
 
  if (__first == __last) return;
  for (_RandomAccessIter __i = __first + 1; __i != __last; ++__i)
    iter_swap(__i, __first + __rand((__i - __first) + 1));
}



template <class _ForwardIter, class _OutputIter, class _Distance>
_OutputIter random_sample_n(_ForwardIter __first, _ForwardIter __last,
                            _OutputIter __out_ite, const _Distance __n) {
 
  _Distance __remaining = ::std::distance(__first, __last);
  _Distance __m = (min) (__n, __remaining);

  while (__m > 0) {
    if (::std::priv:: __random_number(__remaining) < __m) {
      *__out_ite = *__first;
      ++__out_ite;
      --__m;
    }

    --__remaining;
    ++__first;
  }
  return __out_ite;
}


template <class _ForwardIter, class _OutputIter, class _Distance,
          class _RandomNumberGenerator>
_OutputIter random_sample_n(_ForwardIter __first, _ForwardIter __last,
                            _OutputIter __out_ite, const _Distance __n,
                            _RandomNumberGenerator& __rand) {
 
  _Distance __remaining = ::std::distance(__first, __last);
  _Distance __m = (min) (__n, __remaining);

  while (__m > 0) {
    if (__rand(__remaining) < __m) {
      *__out_ite = *__first;
      ++__out_ite;
      --__m;
    }

    --__remaining;
    ++__first;
  }
  return __out_ite;
}

namespace priv {

template <class _InputIter, class _RandomAccessIter, class _Distance>
_RandomAccessIter __random_sample(_InputIter __first, _InputIter __last,
                                  _RandomAccessIter __out_ite,
                                  const _Distance __n) {
  _Distance __m = 0;
  _Distance __t = __n;
  for ( ; __first != __last && __m < __n; ++__m, ++__first)
    __out_ite[__m] = *__first;

  while (__first != __last) {
    ++__t;
    _Distance __M = __random_number(__t);
    if (__M < __n)
      __out_ite[__M] = *__first;
    ++__first;
  }

  return __out_ite + __m;
}

template <class _InputIter, class _RandomAccessIter,
          class _RandomNumberGenerator, class _Distance>
_RandomAccessIter __random_sample(_InputIter __first, _InputIter __last,
                                  _RandomAccessIter __out_ite,
                                  _RandomNumberGenerator& __rand,
                                  const _Distance __n) {
  _Distance __m = 0;
  _Distance __t = __n;
  for ( ; __first != __last && __m < __n; ++__m, ++__first)
    __out_ite[__m] = *__first;

  while (__first != __last) {
    ++__t;
    _Distance __M = __rand(__t);
    if (__M < __n)
      __out_ite[__M] = *__first;
    ++__first;
  }

  return __out_ite + __m;
}

}

template <class _InputIter, class _RandomAccessIter>
_RandomAccessIter
random_sample(_InputIter __first, _InputIter __last,
              _RandomAccessIter __out_first, _RandomAccessIter __out_last) {
 
 
  return ::std::priv:: __random_sample(__first, __last,
                                    __out_first, __out_last - __out_first);
}

template <class _InputIter, class _RandomAccessIter, class _RandomNumberGenerator>
_RandomAccessIter
random_sample(_InputIter __first, _InputIter __last,
              _RandomAccessIter __out_first, _RandomAccessIter __out_last,
              _RandomNumberGenerator& __rand) {
 
 
  return ::std::priv:: __random_sample(__first, __last,
                                    __out_first, __rand,
                                    __out_last - __out_first);
}




namespace priv {

template <class _ForwardIter, class _Predicate>
inline _ForwardIter __partition(_ForwardIter __first,
                                           _ForwardIter __last,
                                           _Predicate __pred,
                                           const forward_iterator_tag &) {
  if (__first == __last) return __first;

  while (__pred(*__first))
    if (++__first == __last) return __first;

  _ForwardIter __next = __first;

  while (++__next != __last) {
    if (__pred(*__next)) {
      ::std::swap(*__first, *__next);
      ++__first;
    }
  }
  return __first;
}

template <class _BidirectionalIter, class _Predicate>
inline _BidirectionalIter __partition(_BidirectionalIter __first,
                                                 _BidirectionalIter __last,
                                                 _Predicate __pred,
                                                 const bidirectional_iterator_tag &) {
  for (;;) {
    for (;;) {
      if (__first == __last)
        return __first;
      else if (__pred(*__first))
        ++__first;
      else
        break;
    }
    --__last;
    for (;;) {
      if (__first == __last)
        return __first;
      else if (!__pred(*__last))
        --__last;
      else
        break;
    }
    iter_swap(__first, __last);
    ++__first;
  }
}
# 735 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_algo.c"
}

template <class _ForwardIter, class _Predicate>
_ForwardIter partition(_ForwardIter __first, _ForwardIter __last, _Predicate __pred) {
 
  return ::std::priv:: __partition(__first, __last, __pred, typename ::std::iterator_traits< _ForwardIter >::iterator_category());
}







namespace priv {

template <class _ForwardIter, class _Predicate, class _Distance>
_ForwardIter __inplace_stable_partition(_ForwardIter __first,
                                        _ForwardIter __last,
                                        _Predicate __pred, _Distance __len,
                                        bool __pred_of_first, bool __pred_of_before_last) {
  if (__len == 1)
    return (__pred_of_first && (__pred_of_before_last || __pred(*__first))) ? __last : __first;
  _ForwardIter __middle = __first;
  _Distance __half_len = __len / 2;
  ::std::advance(__middle, __half_len);
  return ::std::priv:: __rotate(::std::priv:: __inplace_stable_partition(__first, __middle, __pred, __half_len, __pred_of_first, false),
                             __middle,
                             ::std::priv:: __inplace_stable_partition(__middle, __last, __pred, __len - __half_len, true, __pred_of_before_last));
}

template <class _ForwardIter, class _Pointer, class _Predicate,
          class _Distance>
_ForwardIter __stable_partition_adaptive(_ForwardIter __first,
                                         _ForwardIter __last,
                                         _Predicate __pred, _Distance __len,
                                         _Pointer __buffer, _Distance __buffer_size,
                                         bool __pred_of_first, bool __pred_of_before_last) {
  if (__len <= __buffer_size) {
    _ForwardIter __result1 = __first;
    _Pointer __result2 = __buffer;
    if ((__first != __last) && (!__pred_of_first || __pred(*__first))) {
      *__result2 = *__first;
      ++__result2; ++__first; --__len;
    }
    for (; __first != __last ; ++__first, --__len) {
      if (((__len == 1) && (__pred_of_before_last || __pred(*__first))) ||
          ((__len != 1) && __pred(*__first))){
        *__result1 = *__first;
        ++__result1;
      }
      else {
        *__result2 = *__first;
        ++__result2;
      }
    }
    ::std::copy(__buffer, __result2, __result1);
    return __result1;
  }
  else {
    _ForwardIter __middle = __first;
    _Distance __half_len = __len / 2;
    ::std::advance(__middle, __half_len);
    return ::std::priv:: __rotate(::std::priv:: __stable_partition_adaptive(__first, __middle, __pred,
                                                                      __half_len, __buffer, __buffer_size,
                                                                      __pred_of_first, false),
                               __middle,
                               ::std::priv:: __stable_partition_adaptive(__middle, __last, __pred,
                                                                      __len - __half_len, __buffer, __buffer_size,
                                                                      true, __pred_of_before_last));
  }
}

template <class _ForwardIter, class _Predicate, class _Tp, class _Distance>
inline _ForwardIter
__stable_partition_aux_aux(_ForwardIter __first, _ForwardIter __last,
                           _Predicate __pred, _Tp*, _Distance*, bool __pred_of_before_last) {
  _Temporary_buffer<_ForwardIter, _Tp> __buf(__first, __last);
 
  return (__buf.size() > 0) ?
    __stable_partition_adaptive(__first, __last, __pred,
                                _Distance(__buf.requested_size()),
                                __buf.begin(), __buf.size(),
                                false, __pred_of_before_last) :
    __inplace_stable_partition(__first, __last, __pred,
                               _Distance(__buf.requested_size()),
                               false, __pred_of_before_last);
 
}

template <class _ForwardIter, class _Predicate>
_ForwardIter
__stable_partition_aux(_ForwardIter __first, _ForwardIter __last, _Predicate __pred,
                       const forward_iterator_tag &) {
  return __stable_partition_aux_aux(__first, __last, __pred,
                                    (typename ::std::iterator_traits< _ForwardIter >::value_type*)0,
                                    (typename ::std::iterator_traits< _ForwardIter >::difference_type*)0, false);
}

template <class _BidirectIter, class _Predicate>
_BidirectIter
__stable_partition_aux(_BidirectIter __first, _BidirectIter __last, _Predicate __pred,
                       const bidirectional_iterator_tag &) {
  for (--__last;;) {
    if (__first == __last)
      return __first;
    else if (!__pred(*__last))
      --__last;
    else
      break;
  }
  ++__last;

  return __stable_partition_aux_aux(__first, __last, __pred,
                                    (typename ::std::iterator_traits< _BidirectIter >::value_type*)0,
                                    (typename ::std::iterator_traits< _BidirectIter >::difference_type*)0, true);
}
# 862 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_algo.c"
}

template <class _ForwardIter, class _Predicate>
_ForwardIter
stable_partition(_ForwardIter __first, _ForwardIter __last, _Predicate __pred) {
 
  for (;;) {
    if (__first == __last)
      return __first;
    else if (__pred(*__first))
      ++__first;
    else
      break;
  }
  return ::std::priv:: __stable_partition_aux(__first, __last, __pred,
                                           typename ::std::iterator_traits< _ForwardIter >::iterator_category());
}

namespace priv {

template <class _RandomAccessIter, class _Tp, class _Compare>
_RandomAccessIter __unguarded_partition(_RandomAccessIter __first,
                                        _RandomAccessIter __last,
                                        _Tp __pivot, _Compare __comp) {
  for (;;) {
    while (__comp(*__first, __pivot)) {
     
      ++__first;
    }
    --__last;
    while (__comp(__pivot, *__last)) {
     
      --__last;
    }
    if (!(__first < __last))
      return __first;
    iter_swap(__first, __last);
    ++__first;
  }
}




template <class _RandomAccessIter, class _Tp, class _Compare>
void __unguarded_linear_insert(_RandomAccessIter __last, _Tp __val,
                               _Compare __comp) {
  _RandomAccessIter __next = __last;
  --__next;
  while (__comp(__val, *__next)) {
   
    *__last = *__next;
    __last = __next;
    --__next;
  }
  *__last = __val;
}

template <class _RandomAccessIter, class _Tp, class _Compare>
inline void __linear_insert(_RandomAccessIter __first,
                            _RandomAccessIter __last, _Tp __val, _Compare __comp) {


  if (__comp(__val, *__first)) {
   
    copy_backward(__first, __last, __last + 1);
    *__first = __val;
  }
  else
    __unguarded_linear_insert(__last, __val, __comp);
}

template <class _RandomAccessIter, class _Tp, class _Compare>
void __insertion_sort(_RandomAccessIter __first,
                      _RandomAccessIter __last,
                      _Tp *, _Compare __comp) {
  if (__first == __last) return;
  for (_RandomAccessIter __i = __first + 1; __i != __last; ++__i)
    __linear_insert<_RandomAccessIter, _Tp, _Compare>(__first, __i, *__i, __comp);
}

template <class _RandomAccessIter, class _Tp, class _Compare>
void __unguarded_insertion_sort_aux(_RandomAccessIter __first,
                                    _RandomAccessIter __last,
                                    _Tp*, _Compare __comp) {
  for (_RandomAccessIter __i = __first; __i != __last; ++__i)
    __unguarded_linear_insert<_RandomAccessIter, _Tp, _Compare>(__i, *__i, __comp);
}

template <class _RandomAccessIter, class _Compare>
inline void __unguarded_insertion_sort(_RandomAccessIter __first,
                                       _RandomAccessIter __last,
                                       _Compare __comp) {
  __unguarded_insertion_sort_aux(__first, __last, (typename ::std::iterator_traits< _RandomAccessIter >::value_type*)0, __comp);
}

template <class _RandomAccessIter, class _Compare>
void __final_insertion_sort(_RandomAccessIter __first,
                            _RandomAccessIter __last, _Compare __comp) {
  if (__last - __first > 16) {
    __insertion_sort(__first, __first + 16, (typename ::std::iterator_traits< _RandomAccessIter >::value_type*)0, __comp);
    __unguarded_insertion_sort(__first + 16, __last, __comp);
  }
  else
    __insertion_sort(__first, __last, (typename ::std::iterator_traits< _RandomAccessIter >::value_type*)0, __comp);
}

template <class _RandomAccessIter, class _Tp, class _Size, class _Compare>
void __introsort_loop(_RandomAccessIter __first,
                      _RandomAccessIter __last, _Tp*,
                      _Size __depth_limit, _Compare __comp) {
  while (__last - __first > 16) {
    if (__depth_limit == 0) {
      partial_sort(__first, __last, __last, __comp);
      return;
    }
    --__depth_limit;
    _RandomAccessIter __cut =
      __unguarded_partition(__first, __last,
                            _Tp(__median(*__first,
                                         *(__first + (__last - __first)/2),
                                         *(__last - 1), __comp)),
       __comp);
    __introsort_loop(__cut, __last, (_Tp*) 0, __depth_limit, __comp);
    __last = __cut;
  }
}

}

template <class _RandomAccessIter>
void sort(_RandomAccessIter __first, _RandomAccessIter __last) {
 
  if (__first != __last) {
    ::std::priv:: __introsort_loop(__first, __last,
                                (typename ::std::iterator_traits< _RandomAccessIter >::value_type*)0,
                                ::std::priv:: __lg(__last - __first) * 2,
                                ::std::priv:: __less((typename ::std::iterator_traits< _RandomAccessIter >::value_type*)0));
    ::std::priv:: __final_insertion_sort(__first, __last,
                                      ::std::priv:: __less((typename ::std::iterator_traits< _RandomAccessIter >::value_type*)0));
  }
}

template <class _RandomAccessIter, class _Compare>
void sort(_RandomAccessIter __first, _RandomAccessIter __last, _Compare __comp) {
 
  if (__first != __last) {
    ::std::priv:: __introsort_loop(__first, __last,
                                (typename ::std::iterator_traits< _RandomAccessIter >::value_type*)0,
                                ::std::priv:: __lg(__last - __first) * 2, __comp);
    ::std::priv:: __final_insertion_sort(__first, __last, __comp);
  }
}


namespace priv {

template <class _RandomAccessIter, class _Compare>
void __inplace_stable_sort(_RandomAccessIter __first,
                           _RandomAccessIter __last, _Compare __comp) {
  if (__last - __first < 15) {
    __insertion_sort(__first, __last, (typename ::std::iterator_traits< _RandomAccessIter >::value_type*)0, __comp);
    return;
  }
  _RandomAccessIter __middle = __first + (__last - __first) / 2;
  __inplace_stable_sort(__first, __middle, __comp);
  __inplace_stable_sort(__middle, __last, __comp);
  __merge_without_buffer(__first, __middle, __last,
                         __middle - __first,
                         __last - __middle,
                         __comp);
}

template <class _RandomAccessIter1, class _RandomAccessIter2,
          class _Distance, class _Compare>
void __merge_sort_loop(_RandomAccessIter1 __first,
                       _RandomAccessIter1 __last,
                       _RandomAccessIter2 __result, _Distance __step_size,
                       _Compare __comp) {
  _Distance __two_step = 2 * __step_size;

  while (__last - __first >= __two_step) {
    __result = merge(__first, __first + __step_size,
                     __first + __step_size, __first + __two_step,
                     __result,
                     __comp);
    __first += __two_step;
  }
  __step_size = (min) (_Distance(__last - __first), __step_size);

  merge(__first, __first + __step_size,
        __first + __step_size, __last,
        __result,
        __comp);
}

const int __stl_chunk_size = 7;

template <class _RandomAccessIter, class _Distance, class _Compare>
void __chunk_insertion_sort(_RandomAccessIter __first,
                            _RandomAccessIter __last,
                            _Distance __chunk_size, _Compare __comp) {
  while (__last - __first >= __chunk_size) {
    __insertion_sort(__first, __first + __chunk_size,
                     (typename ::std::iterator_traits< _RandomAccessIter >::value_type*)0, __comp);
    __first += __chunk_size;
  }
  __insertion_sort(__first, __last, (typename ::std::iterator_traits< _RandomAccessIter >::value_type*)0, __comp);
}

template <class _RandomAccessIter, class _Pointer, class _Distance,
          class _Compare>
void __merge_sort_with_buffer(_RandomAccessIter __first,
                              _RandomAccessIter __last, _Pointer __buffer,
                              _Distance*, _Compare __comp) {
  _Distance __len = __last - __first;
  _Pointer __buffer_last = __buffer + __len;

  _Distance __step_size = __stl_chunk_size;
  __chunk_insertion_sort(__first, __last, __step_size, __comp);

  while (__step_size < __len) {
    __merge_sort_loop(__first, __last, __buffer, __step_size, __comp);
    __step_size *= 2;
    __merge_sort_loop(__buffer, __buffer_last, __first, __step_size, __comp);
    __step_size *= 2;
  }
}

template <class _BidirectionalIter1, class _BidirectionalIter2,
          class _Distance>
_BidirectionalIter1 __rotate_adaptive(_BidirectionalIter1 __first,
                                      _BidirectionalIter1 __middle,
                                      _BidirectionalIter1 __last,
                                      _Distance __len1, _Distance __len2,
                                      _BidirectionalIter2 __buffer,
                                      _Distance __buffer_size) {
  if (__len1 > __len2 && __len2 <= __buffer_size) {
    _BidirectionalIter2 __buffer_end = ::std::copy(__middle, __last, __buffer);
    ::std::copy_backward(__first, __middle, __last);
    return ::std::copy(__buffer, __buffer_end, __first);
  }
  else if (__len1 <= __buffer_size) {
    _BidirectionalIter2 __buffer_end = ::std::copy(__first, __middle, __buffer);
    ::std::copy(__middle, __last, __first);
    return ::std::copy_backward(__buffer, __buffer_end, __last);
  }
  else
    return ::std::priv:: __rotate(__first, __middle, __last);
}

template <class _BidirectionalIter, class _Distance, class _Pointer,
          class _Compare>
void __merge_adaptive(_BidirectionalIter __first,
                      _BidirectionalIter __middle,
                      _BidirectionalIter __last,
                      _Distance __len1, _Distance __len2,
                      _Pointer __buffer, _Distance __buffer_size,
                      _Compare __comp) {
  if (__len1 <= __len2 && __len1 <= __buffer_size) {
    _Pointer __buffer_end = ::std::copy(__first, __middle, __buffer);
    ::std::merge(__buffer, __buffer_end, __middle, __last, __first, __comp);
  }
  else if (__len2 <= __buffer_size) {
    _Pointer __buffer_end = ::std::copy(__middle, __last, __buffer);
    ::std::priv:: __merge_backward(__first, __middle, __buffer, __buffer_end, __last,
                                __comp);
  }
  else {
    _BidirectionalIter __first_cut = __first;
    _BidirectionalIter __second_cut = __middle;
    _Distance __len11 = 0;
    _Distance __len22 = 0;
    if (__len1 > __len2) {
      __len11 = __len1 / 2;
      ::std::advance(__first_cut, __len11);
      __second_cut = ::std::lower_bound(__middle, __last, *__first_cut, __comp);
      __len22 += ::std::distance(__middle, __second_cut);
    }
    else {
      __len22 = __len2 / 2;
      ::std::advance(__second_cut, __len22);
      __first_cut = ::std::upper_bound(__first, __middle, *__second_cut, __comp);
      __len11 += ::std::distance(__first, __first_cut);
    }
    _BidirectionalIter __new_middle =
      __rotate_adaptive(__first_cut, __middle, __second_cut, __len1 - __len11,
                        __len22, __buffer, __buffer_size);
    __merge_adaptive(__first, __first_cut, __new_middle, __len11,
                     __len22, __buffer, __buffer_size, __comp);
    __merge_adaptive(__new_middle, __second_cut, __last, __len1 - __len11,
                     __len2 - __len22, __buffer, __buffer_size, __comp);
  }
}

template <class _RandomAccessIter, class _Pointer, class _Distance,
          class _Compare>
void __stable_sort_adaptive(_RandomAccessIter __first,
                            _RandomAccessIter __last, _Pointer __buffer,
                            _Distance __buffer_size, _Compare __comp) {
  _Distance __len = (__last - __first + 1) / 2;
  _RandomAccessIter __middle = __first + __len;
  if (__len > __buffer_size) {
    __stable_sort_adaptive(__first, __middle, __buffer, __buffer_size,
                           __comp);
    __stable_sort_adaptive(__middle, __last, __buffer, __buffer_size,
                           __comp);
  }
  else {
    __merge_sort_with_buffer(__first, __middle, __buffer, (_Distance*)0,
                               __comp);
    __merge_sort_with_buffer(__middle, __last, __buffer, (_Distance*)0,
                               __comp);
  }
  __merge_adaptive(__first, __middle, __last, _Distance(__middle - __first),
                   _Distance(__last - __middle), __buffer, __buffer_size,
                   __comp);
}

template <class _RandomAccessIter, class _Tp, class _Distance, class _Compare>
void __stable_sort_aux(_RandomAccessIter __first,
                       _RandomAccessIter __last, _Tp*, _Distance*,
                       _Compare __comp) {
  _Temporary_buffer<_RandomAccessIter, _Tp> buf(__first, __last);
  if (buf.begin() == 0)
    __inplace_stable_sort(__first, __last, __comp);
  else
    __stable_sort_adaptive(__first, __last, buf.begin(),
                           _Distance(buf.size()),
                           __comp);
}

}

template <class _RandomAccessIter>
void stable_sort(_RandomAccessIter __first,
                 _RandomAccessIter __last) {
 
  ::std::priv:: __stable_sort_aux(__first, __last,
                               (typename ::std::iterator_traits< _RandomAccessIter >::value_type*)0,
                               (typename ::std::iterator_traits< _RandomAccessIter >::difference_type*)0,
                               ::std::priv:: __less((typename ::std::iterator_traits< _RandomAccessIter >::value_type*)0));
}

template <class _RandomAccessIter, class _Compare>
void stable_sort(_RandomAccessIter __first,
                 _RandomAccessIter __last, _Compare __comp) {
 
  ::std::priv:: __stable_sort_aux(__first, __last,
                               (typename ::std::iterator_traits< _RandomAccessIter >::value_type*)0,
                               (typename ::std::iterator_traits< _RandomAccessIter >::difference_type*)0,
                               __comp);
}


namespace priv {

template <class _RandomAccessIter, class _Tp, class _Compare>
void __partial_sort(_RandomAccessIter __first, _RandomAccessIter __middle,
                    _RandomAccessIter __last, _Tp*, _Compare __comp) {
  make_heap(__first, __middle, __comp);
  for (_RandomAccessIter __i = __middle; __i < __last; ++__i) {
    if (__comp(*__i, *__first)) {
     
      __pop_heap(__first, __middle, __i, _Tp(*__i), __comp,
                 (typename ::std::iterator_traits< _RandomAccessIter >::difference_type*)0);
    }
  }
  sort_heap(__first, __middle, __comp);
}

}

template <class _RandomAccessIter>
void partial_sort(_RandomAccessIter __first,_RandomAccessIter __middle,
                  _RandomAccessIter __last) {
 
 
  ::std::priv:: __partial_sort(__first, __middle, __last, (typename ::std::iterator_traits< _RandomAccessIter >::value_type*)0,
                            ::std::priv:: __less((typename ::std::iterator_traits< _RandomAccessIter >::value_type*)0));
}

template <class _RandomAccessIter, class _Compare>
void partial_sort(_RandomAccessIter __first,_RandomAccessIter __middle,
                  _RandomAccessIter __last, _Compare __comp) {
 
 
  ::std::priv:: __partial_sort(__first, __middle, __last, (typename ::std::iterator_traits< _RandomAccessIter >::value_type*)0, __comp);
}

namespace priv {

template <class _InputIter, class _RandomAccessIter, class _Compare,
          class _Distance, class _Tp>
_RandomAccessIter __partial_sort_copy(_InputIter __first,
                                      _InputIter __last,
                                      _RandomAccessIter __result_first,
                                      _RandomAccessIter __result_last,
                                      _Compare __comp, _Distance*, _Tp*) {
  if (__result_first == __result_last) return __result_last;
  _RandomAccessIter __result_real_last = __result_first;
  while(__first != __last && __result_real_last != __result_last) {
    *__result_real_last = *__first;
    ++__result_real_last;
    ++__first;
  }
  make_heap(__result_first, __result_real_last, __comp);
  while (__first != __last) {
    if (__comp(*__first, *__result_first)) {
     
      __adjust_heap(__result_first, _Distance(0),
                    _Distance(__result_real_last - __result_first),
                    _Tp(*__first),
                    __comp);
    }
    ++__first;
  }
  sort_heap(__result_first, __result_real_last, __comp);
  return __result_real_last;
}

}

template <class _InputIter, class _RandomAccessIter>
_RandomAccessIter
partial_sort_copy(_InputIter __first, _InputIter __last,
                  _RandomAccessIter __result_first, _RandomAccessIter __result_last) {
 
 
  return ::std::priv:: __partial_sort_copy(__first, __last, __result_first, __result_last,
                                        ::std::priv:: __less((typename ::std::iterator_traits< _InputIter >::value_type*)0),
                                        (typename ::std::iterator_traits< _RandomAccessIter >::difference_type*)0,
                                        (typename ::std::iterator_traits< _InputIter >::value_type*)0);
}

template <class _InputIter, class _RandomAccessIter, class _Compare>
_RandomAccessIter
partial_sort_copy(_InputIter __first, _InputIter __last,
                  _RandomAccessIter __result_first,
                  _RandomAccessIter __result_last, _Compare __comp) {
 
 
  return ::std::priv:: __partial_sort_copy(__first, __last, __result_first, __result_last,
                                        __comp,
                                        (typename ::std::iterator_traits< _RandomAccessIter >::difference_type*)0,
                                        (typename ::std::iterator_traits< _InputIter >::value_type*)0);
}


namespace priv {

template <class _RandomAccessIter, class _Tp, class _Compare>
void __nth_element(_RandomAccessIter __first, _RandomAccessIter __nth,
                   _RandomAccessIter __last, _Tp*, _Compare __comp) {
  while (__last - __first > 3) {
    _RandomAccessIter __cut =
      __unguarded_partition(__first, __last,
                            _Tp(__median(*__first,
                                         *(__first + (__last - __first)/2),
                                         *(__last - 1),
                                         __comp)),
                            __comp);
    if (__cut <= __nth)
      __first = __cut;
    else
      __last = __cut;
  }
  __insertion_sort(__first, __last, (typename ::std::iterator_traits< _RandomAccessIter >::value_type*)0, __comp);
}

}

template <class _RandomAccessIter>
void nth_element(_RandomAccessIter __first, _RandomAccessIter __nth,
                 _RandomAccessIter __last) {
 
 
  ::std::priv:: __nth_element(__first, __nth, __last, (typename ::std::iterator_traits< _RandomAccessIter >::value_type*)0,
                           ::std::priv:: __less((typename ::std::iterator_traits< _RandomAccessIter >::value_type*)0));
}

template <class _RandomAccessIter, class _Compare>
void nth_element(_RandomAccessIter __first, _RandomAccessIter __nth,
                 _RandomAccessIter __last, _Compare __comp) {
 
 
  ::std::priv:: __nth_element(__first, __nth, __last, (typename ::std::iterator_traits< _RandomAccessIter >::value_type*)0, __comp);
}


namespace priv {

template <class _ForwardIter, class _Tp,
          class _Compare1, class _Compare2, class _Distance>
_ForwardIter __upper_bound(_ForwardIter __first, _ForwardIter __last, const _Tp& __val,
                           _Compare1 __comp1, _Compare2 __comp2, _Distance*) {
  _Distance __len = ::std::distance(__first, __last);
  _Distance __half;

  while (__len > 0) {
    __half = __len >> 1;
    _ForwardIter __middle = __first;
    ::std::advance(__middle, __half);
    if (__comp2(__val, *__middle)) {
     
      __len = __half;
    }
    else {
      __first = __middle;
      ++__first;
      __len = __len - __half - 1;
    }
  }
  return __first;
}

template <class _ForwardIter, class _Tp,
          class _Compare1, class _Compare2, class _Distance>
pair<_ForwardIter, _ForwardIter>
__equal_range(_ForwardIter __first, _ForwardIter __last, const _Tp& __val,
              _Compare1 __comp1, _Compare2 __comp2, _Distance* __dist) {
  _Distance __len = ::std::distance(__first, __last);
  _Distance __half;

  while (__len > 0) {
    __half = __len >> 1;
    _ForwardIter __middle = __first;
    ::std::advance(__middle, __half);
    if (__comp1(*__middle, __val)) {
     
      __first = __middle;
      ++__first;
      __len = __len - __half - 1;
    }
    else if (__comp2(__val, *__middle)) {
     
      __len = __half;
    }
    else {
      _ForwardIter __left = ::std::priv:: __lower_bound(__first, __middle, __val, __comp1, __comp2, __dist);


      if (__comp1(*__left, __val)) {
       
        return pair<_ForwardIter, _ForwardIter>(__left, __left);
      }
      ::std::advance(__first, __len);
      _ForwardIter __right = ::std::priv:: __upper_bound(++__middle, __first, __val, __comp1, __comp2, __dist);
      return pair<_ForwardIter, _ForwardIter>(__left, __right);
    }
  }
  return pair<_ForwardIter, _ForwardIter>(__first, __first);
}

}

template <class _InputIter1, class _InputIter2, class _OutputIter>
_OutputIter merge(_InputIter1 __first1, _InputIter1 __last1,
                  _InputIter2 __first2, _InputIter2 __last2,
                  _OutputIter __result) {
 
 
  while (__first1 != __last1 && __first2 != __last2) {
    if (*__first2 < *__first1) {
      *__result = *__first2;
      ++__first2;
    }
    else {
      *__result = *__first1;
      ++__first1;
    }
    ++__result;
  }
  return ::std::copy(__first2, __last2, ::std::copy(__first1, __last1, __result));
}

template <class _InputIter1, class _InputIter2, class _OutputIter,
          class _Compare>
_OutputIter merge(_InputIter1 __first1, _InputIter1 __last1,
                  _InputIter2 __first2, _InputIter2 __last2,
                  _OutputIter __result, _Compare __comp) {
 
 
  while (__first1 != __last1 && __first2 != __last2) {
    if (__comp(*__first2, *__first1)) {
     
      *__result = *__first2;
      ++__first2;
    }
    else {
      *__result = *__first1;
      ++__first1;
    }
    ++__result;
  }
  return ::std::copy(__first2, __last2, ::std::copy(__first1, __last1, __result));
}

namespace priv {

template <class _BidirectionalIter, class _Distance, class _Compare>
void __merge_without_buffer(_BidirectionalIter __first,
                            _BidirectionalIter __middle,
                            _BidirectionalIter __last,
                            _Distance __len1, _Distance __len2,
                            _Compare __comp) {
  if (__len1 == 0 || __len2 == 0)
    return;
  if (__len1 + __len2 == 2) {
    if (__comp(*__middle, *__first)) {
     
      iter_swap(__first, __middle);
    }
    return;
  }
  _BidirectionalIter __first_cut = __first;
  _BidirectionalIter __second_cut = __middle;
  _Distance __len11 = 0;
  _Distance __len22 = 0;
  if (__len1 > __len2) {
    __len11 = __len1 / 2;
    ::std::advance(__first_cut, __len11);
    __second_cut = ::std::lower_bound(__middle, __last, *__first_cut, __comp);
    __len22 += ::std::distance(__middle, __second_cut);
  }
  else {
    __len22 = __len2 / 2;
    ::std::advance(__second_cut, __len22);
    __first_cut = ::std::upper_bound(__first, __middle, *__second_cut, __comp);
    __len11 += ::std::distance(__first, __first_cut);
  }
  _BidirectionalIter __new_middle
    = ::std::priv:: __rotate(__first_cut, __middle, __second_cut);
  __merge_without_buffer(__first, __first_cut, __new_middle, __len11, __len22,
                         __comp);
  __merge_without_buffer(__new_middle, __second_cut, __last, __len1 - __len11,
                         __len2 - __len22, __comp);
}

template <class _BidirectionalIter1, class _BidirectionalIter2,
          class _BidirectionalIter3, class _Compare>
_BidirectionalIter3 __merge_backward(_BidirectionalIter1 __first1,
                                     _BidirectionalIter1 __last1,
                                     _BidirectionalIter2 __first2,
                                     _BidirectionalIter2 __last2,
                                     _BidirectionalIter3 __result,
                                     _Compare __comp) {
  if (__first1 == __last1)
    return copy_backward(__first2, __last2, __result);
  if (__first2 == __last2)
    return copy_backward(__first1, __last1, __result);
  --__last1;
  --__last2;
  for (;;) {
    if (__comp(*__last2, *__last1)) {
     
      *--__result = *__last1;
      if (__first1 == __last1)
        return copy_backward(__first2, ++__last2, __result);
      --__last1;
    }
    else {
      *--__result = *__last2;
      if (__first2 == __last2)
        return copy_backward(__first1, ++__last1, __result);
      --__last2;
    }
  }
}

template <class _BidirectionalIter, class _Tp,
          class _Distance, class _Compare>
inline void __inplace_merge_aux(_BidirectionalIter __first,
                                _BidirectionalIter __middle,
                                _BidirectionalIter __last, _Tp*, _Distance*,
                                _Compare __comp) {
  _Distance __len1 = ::std::distance(__first, __middle);
  _Distance __len2 = ::std::distance(__middle, __last);

  _Temporary_buffer<_BidirectionalIter, _Tp> __buf(__first, __last);
  if (__buf.begin() == 0)
    __merge_without_buffer(__first, __middle, __last, __len1, __len2, __comp);
  else
    __merge_adaptive(__first, __middle, __last, __len1, __len2,
                     __buf.begin(), _Distance(__buf.size()),
                     __comp);
}

}

template <class _BidirectionalIter>
void inplace_merge(_BidirectionalIter __first,
                   _BidirectionalIter __middle,
                   _BidirectionalIter __last) {
 
 
  if (__first == __middle || __middle == __last)
    return;
  ::std::priv:: __inplace_merge_aux(__first, __middle, __last,
                                 (typename ::std::iterator_traits< _BidirectionalIter >::value_type*)0, (typename ::std::iterator_traits< _BidirectionalIter >::difference_type*)0,
                                 ::std::priv:: __less((typename ::std::iterator_traits< _BidirectionalIter >::value_type*)0));
}

template <class _BidirectionalIter, class _Compare>
void inplace_merge(_BidirectionalIter __first,
                   _BidirectionalIter __middle,
                   _BidirectionalIter __last, _Compare __comp) {
 
 
  if (__first == __middle || __middle == __last)
    return;
  ::std::priv:: __inplace_merge_aux(__first, __middle, __last,
                                 (typename ::std::iterator_traits< _BidirectionalIter >::value_type*)0, (typename ::std::iterator_traits< _BidirectionalIter >::difference_type*)0,
                                 __comp);
}

namespace priv {

template <class _InputIter1, class _InputIter2, class _Compare>
bool __includes(_InputIter1 __first1, _InputIter1 __last1,
                _InputIter2 __first2, _InputIter2 __last2, _Compare __comp) {
 
 
  while (__first1 != __last1 && __first2 != __last2)
    if (__comp(*__first2, *__first1)) {
     
      return false;
    }
    else if (__comp(*__first1, *__first2))
      ++__first1;
    else
      ++__first1, ++__first2;

  return __first2 == __last2;
}

}

template <class _InputIter1, class _InputIter2, class _Compare>
bool includes(_InputIter1 __first1, _InputIter1 __last1,
              _InputIter2 __first2, _InputIter2 __last2, _Compare __comp) {
  return ::std::priv:: __includes(__first1, __last1, __first2, __last2, __comp);
}

template <class _InputIter1, class _InputIter2>
bool includes(_InputIter1 __first1, _InputIter1 __last1,
              _InputIter2 __first2, _InputIter2 __last2) {
  return ::std::priv:: __includes(__first1, __last1, __first2, __last2,
                               ::std::priv:: __less((typename ::std::iterator_traits< _InputIter1 >::value_type*)0));
}

namespace priv {

template <class _InputIter1, class _InputIter2, class _OutputIter,
          class _Compare>
_OutputIter __set_union(_InputIter1 __first1, _InputIter1 __last1,
                        _InputIter2 __first2, _InputIter2 __last2,
                        _OutputIter __result, _Compare __comp) {
 
 
  while (__first1 != __last1 && __first2 != __last2) {
    if (__comp(*__first1, *__first2)) {
     
      *__result = *__first1;
      ++__first1;
    }
    else if (__comp(*__first2, *__first1)) {
     
      *__result = *__first2;
      ++__first2;
    }
    else {
      *__result = *__first1;
      ++__first1;
      ++__first2;
    }
    ++__result;
  }
  return ::std::copy(__first2, __last2, ::std::copy(__first1, __last1, __result));
}

}

template <class _InputIter1, class _InputIter2, class _OutputIter>
_OutputIter set_union(_InputIter1 __first1, _InputIter1 __last1,
                      _InputIter2 __first2, _InputIter2 __last2,
                      _OutputIter __result) {
  return ::std::priv:: __set_union(__first1, __last1, __first2, __last2, __result,
                                ::std::priv:: __less((typename ::std::iterator_traits< _InputIter1 >::value_type*)0));
}

template <class _InputIter1, class _InputIter2, class _OutputIter,
          class _Compare>
_OutputIter set_union(_InputIter1 __first1, _InputIter1 __last1,
                      _InputIter2 __first2, _InputIter2 __last2,
                      _OutputIter __result, _Compare __comp) {
  return ::std::priv:: __set_union(__first1, __last1, __first2, __last2, __result, __comp);
}

namespace priv {

template <class _InputIter1, class _InputIter2, class _OutputIter,
          class _Compare>
_OutputIter __set_intersection(_InputIter1 __first1, _InputIter1 __last1,
                               _InputIter2 __first2, _InputIter2 __last2,
                               _OutputIter __result, _Compare __comp) {
 
 
  while (__first1 != __last1 && __first2 != __last2)
    if (__comp(*__first1, *__first2)) {
     
      ++__first1;
    }
    else if (__comp(*__first2, *__first1))
      ++__first2;
    else {
      *__result = *__first1;
      ++__first1;
      ++__first2;
      ++__result;
    }
  return __result;
}

}

template <class _InputIter1, class _InputIter2, class _OutputIter>
_OutputIter set_intersection(_InputIter1 __first1, _InputIter1 __last1,
                             _InputIter2 __first2, _InputIter2 __last2,
                             _OutputIter __result) {
  return ::std::priv:: __set_intersection(__first1, __last1, __first2, __last2, __result,
                                       ::std::priv:: __less((typename ::std::iterator_traits< _InputIter1 >::value_type*)0));
}

template <class _InputIter1, class _InputIter2, class _OutputIter,
          class _Compare>
_OutputIter set_intersection(_InputIter1 __first1, _InputIter1 __last1,
                             _InputIter2 __first2, _InputIter2 __last2,
                             _OutputIter __result, _Compare __comp) {
  return ::std::priv:: __set_intersection(__first1, __last1, __first2, __last2, __result, __comp);
}

namespace priv {

template <class _InputIter1, class _InputIter2, class _OutputIter,
          class _Compare>
_OutputIter __set_difference(_InputIter1 __first1, _InputIter1 __last1,
                             _InputIter2 __first2, _InputIter2 __last2,
                             _OutputIter __result, _Compare __comp) {
 
 
  while (__first1 != __last1 && __first2 != __last2)
    if (__comp(*__first1, *__first2)) {
     
      *__result = *__first1;
      ++__first1;
      ++__result;
    }
    else if (__comp(*__first2, *__first1))
      ++__first2;
    else {
      ++__first1;
      ++__first2;
    }
  return ::std::copy(__first1, __last1, __result);
}

}

template <class _InputIter1, class _InputIter2, class _OutputIter>
_OutputIter set_difference(_InputIter1 __first1, _InputIter1 __last1,
                           _InputIter2 __first2, _InputIter2 __last2,
                           _OutputIter __result) {
  return ::std::priv:: __set_difference(__first1, __last1, __first2, __last2, __result,
                                     ::std::priv:: __less((typename ::std::iterator_traits< _InputIter1 >::value_type*)0));
}

template <class _InputIter1, class _InputIter2, class _OutputIter,
          class _Compare>
_OutputIter set_difference(_InputIter1 __first1, _InputIter1 __last1,
                           _InputIter2 __first2, _InputIter2 __last2,
                           _OutputIter __result, _Compare __comp) {
  return ::std::priv:: __set_difference(__first1, __last1, __first2, __last2, __result, __comp);
}

namespace priv {

template <class _InputIter1, class _InputIter2, class _OutputIter, class _Compare>
_OutputIter
__set_symmetric_difference(_InputIter1 __first1, _InputIter1 __last1,
                           _InputIter2 __first2, _InputIter2 __last2,
                           _OutputIter __result, _Compare __comp) {
 
 
  while (__first1 != __last1 && __first2 != __last2) {
    if (__comp(*__first1, *__first2)) {
     
      *__result = *__first1;
      ++__first1;
      ++__result;
    }
    else if (__comp(*__first2, *__first1)) {
      *__result = *__first2;
      ++__first2;
      ++__result;
    }
    else {
      ++__first1;
      ++__first2;
    }
  }
  return ::std::copy(__first2, __last2, ::std::copy(__first1, __last1, __result));
}

}

template <class _InputIter1, class _InputIter2, class _OutputIter>
_OutputIter
set_symmetric_difference(_InputIter1 __first1, _InputIter1 __last1,
                         _InputIter2 __first2, _InputIter2 __last2,
                         _OutputIter __result) {
  return ::std::priv:: __set_symmetric_difference(__first1, __last1, __first2, __last2, __result,
                                               ::std::priv:: __less((typename ::std::iterator_traits< _InputIter1 >::value_type*)0));
}

template <class _InputIter1, class _InputIter2, class _OutputIter, class _Compare>
_OutputIter
set_symmetric_difference(_InputIter1 __first1, _InputIter1 __last1,
                         _InputIter2 __first2, _InputIter2 __last2,
                         _OutputIter __result,
                         _Compare __comp) {
  return ::std::priv:: __set_symmetric_difference(__first1, __last1, __first2, __last2, __result, __comp);
}




template <class _ForwardIter>
_ForwardIter max_element(_ForwardIter __first, _ForwardIter __last) {
 
  if (__first == __last) return __first;
  _ForwardIter __result = __first;
  while (++__first != __last)
    if (*__result < *__first) {
     
      __result = __first;
    }
  return __result;
}

template <class _ForwardIter, class _Compare>
_ForwardIter max_element(_ForwardIter __first, _ForwardIter __last,
                         _Compare __comp) {
 
  if (__first == __last) return __first;
  _ForwardIter __result = __first;
  while (++__first != __last) {
    if (__comp(*__result, *__first)) {
     
      __result = __first;
    }
  }
  return __result;
}

template <class _ForwardIter>
_ForwardIter min_element(_ForwardIter __first, _ForwardIter __last) {
 
  if (__first == __last) return __first;
  _ForwardIter __result = __first;
  while (++__first != __last)
    if (*__first < *__result) {
     
      __result = __first;
    }
  return __result;
}

template <class _ForwardIter, class _Compare>
_ForwardIter min_element(_ForwardIter __first, _ForwardIter __last,
                         _Compare __comp) {
 
  if (__first == __last) return __first;
  _ForwardIter __result = __first;
  while (++__first != __last) {
    if (__comp(*__first, *__result)) {
     
      __result = __first;
    }
  }
  return __result;
}



namespace priv {

template <class _BidirectionalIter, class _Compare>
bool __next_permutation(_BidirectionalIter __first, _BidirectionalIter __last,
                        _Compare __comp) {
 
  if (__first == __last)
    return false;
  _BidirectionalIter __i = __first;
  ++__i;
  if (__i == __last)
    return false;
  __i = __last;
  --__i;

  for(;;) {
    _BidirectionalIter __ii = __i;
    --__i;
    if (__comp(*__i, *__ii)) {
     
      _BidirectionalIter __j = __last;
      while (!__comp(*__i, *--__j)) {}
      iter_swap(__i, __j);
      reverse(__ii, __last);
      return true;
    }
    if (__i == __first) {
      reverse(__first, __last);
      return false;
    }
  }



}

}

template <class _BidirectionalIter>
bool next_permutation(_BidirectionalIter __first, _BidirectionalIter __last) {
 
  return ::std::priv:: __next_permutation(__first, __last,
                                       ::std::priv:: __less((typename ::std::iterator_traits< _BidirectionalIter >::value_type*)0));
}

template <class _BidirectionalIter, class _Compare>
bool next_permutation(_BidirectionalIter __first, _BidirectionalIter __last,
                      _Compare __comp) {
 
  return ::std::priv:: __next_permutation(__first, __last, __comp);
}

namespace priv {

template <class _BidirectionalIter, class _Compare>
bool __prev_permutation(_BidirectionalIter __first, _BidirectionalIter __last,
                        _Compare __comp) {
  if (__first == __last)
    return false;
  _BidirectionalIter __i = __first;
  ++__i;
  if (__i == __last)
    return false;
  __i = __last;
  --__i;

  for(;;) {
    _BidirectionalIter __ii = __i;
    --__i;
    if (__comp(*__ii, *__i)) {
     
      _BidirectionalIter __j = __last;
      while (!__comp(*--__j, *__i)) {}
      iter_swap(__i, __j);
      reverse(__ii, __last);
      return true;
    }
    if (__i == __first) {
      reverse(__first, __last);
      return false;
    }
  }



}

}

template <class _BidirectionalIter>
bool prev_permutation(_BidirectionalIter __first, _BidirectionalIter __last) {
 
  return ::std::priv:: __prev_permutation(__first, __last,
                                       ::std::priv:: __less((typename ::std::iterator_traits< _BidirectionalIter >::value_type*)0));
}

template <class _BidirectionalIter, class _Compare>
bool prev_permutation(_BidirectionalIter __first, _BidirectionalIter __last,
                      _Compare __comp) {
 
  return ::std::priv:: __prev_permutation(__first, __last, __comp);
}






namespace priv {

template <class _RandomAccessIter, class _Distance, class _StrictWeakOrdering>
bool __is_heap(_RandomAccessIter __first, _StrictWeakOrdering __comp,
               _Distance __n) {
  _Distance __parent = 0;
  for (_Distance __child = 1; __child < __n; ++__child) {
    if (__comp(__first[__parent], __first[__child])) {
     
      return false;
    }
    if ((__child & 1) == 0)
      ++__parent;
  }
  return true;
}

}

template <class _RandomAccessIter>
bool is_heap(_RandomAccessIter __first, _RandomAccessIter __last) {
 
  return ::std::priv:: __is_heap(__first, ::std::priv:: __less((typename ::std::iterator_traits< _RandomAccessIter >::value_type*)0), __last - __first);
}

template <class _RandomAccessIter, class _StrictWeakOrdering>
bool is_heap(_RandomAccessIter __first, _RandomAccessIter __last,
             _StrictWeakOrdering __comp) {
 
  return ::std::priv:: __is_heap(__first, __comp, __last - __first);
}


namespace priv {

template <class _ForwardIter, class _StrictWeakOrdering>
bool __is_sorted(_ForwardIter __first, _ForwardIter __last,
                 _StrictWeakOrdering __comp) {
 
  if (__first == __last)
    return true;

  _ForwardIter __next = __first;
  for (++__next; __next != __last; __first = __next, ++__next) {
    if (__comp(*__next, *__first)) {
     
      return false;
    }
  }

  return true;
}

}


}
# 738 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_algo.h" 2
# 42 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/algorithm" 2
# 54 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/algorithm"
# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_epilog.h" 1
# 19 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_epilog.h"
# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_config_compat_post.h" 1
# 20 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_epilog.h" 2
# 55 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/algorithm" 2
# 72 "webkey-2.09/service/mongoose.cpp" 2
# 1 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/linux/if.h" 1
# 16 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/linux/if.h"
# 1 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/linux/socket.h" 1
# 18 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/linux/socket.h"
struct __kernel_sockaddr_storage {
 unsigned short ss_family;

 char __data[128 - sizeof(unsigned short)];

} __attribute__ ((aligned((__alignof__ (struct sockaddr *)))));



# 1 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/asm/socket.h" 1
# 15 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/asm/socket.h"
# 1 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/asm/sockios.h" 1
# 16 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/asm/socket.h" 2
# 28 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/linux/socket.h" 2
# 1 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/linux/sockios.h" 1
# 29 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/linux/socket.h" 2
# 1 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/linux/uio.h" 1
# 18 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/linux/uio.h"
struct iovec
{
 void *iov_base;
 __kernel_size_t iov_len;
};
# 30 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/linux/socket.h" 2



typedef unsigned short sa_family_t;

struct sockaddr {
 sa_family_t sa_family;
 char sa_data[14];
};

struct linger {
 int l_onoff;
 int l_linger;
};



struct msghdr {
 void * msg_name;
 int msg_namelen;
 struct iovec * msg_iov;
 __kernel_size_t msg_iovlen;
 void * msg_control;
 __kernel_size_t msg_controllen;
 unsigned msg_flags;
};

struct cmsghdr {
 __kernel_size_t cmsg_len;
 int cmsg_level;
 int cmsg_type;
};
# 84 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/linux/socket.h"
static __inline__ struct cmsghdr * __cmsg_nxthdr(void *__ctl, __kernel_size_t __size,
 struct cmsghdr *__cmsg)
{
 struct cmsghdr * __ptr;

 __ptr = (struct cmsghdr*)(((unsigned char *) __cmsg) + ( ((__cmsg->cmsg_len)+sizeof(long)-1) & ~(sizeof(long)-1) ));
 if ((unsigned long)((char*)(__ptr+1) - (char *) __ctl) > __size)
 return (struct cmsghdr *)0;

 return __ptr;
}

static __inline__ struct cmsghdr * cmsg_nxthdr (struct msghdr *__msg, struct cmsghdr *__cmsg)
{
 return __cmsg_nxthdr(__msg->msg_control, __msg->msg_controllen, __cmsg);
}





struct ucred {
 __u32 pid;
 __u32 uid;
 __u32 gid;
};
# 17 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/linux/if.h" 2



# 1 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/linux/hdlc/ioctl.h" 1
# 15 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/linux/hdlc/ioctl.h"
typedef struct {
 unsigned int clock_rate;
 unsigned int clock_type;
 unsigned short loopback;
} sync_serial_settings;

typedef struct {
 unsigned int clock_rate;
 unsigned int clock_type;
 unsigned short loopback;
 unsigned int slot_map;
} te1_settings;

typedef struct {
 unsigned short encoding;
 unsigned short parity;
} raw_hdlc_proto;

typedef struct {
 unsigned int t391;
 unsigned int t392;
 unsigned int n391;
 unsigned int n392;
 unsigned int n393;
 unsigned short lmi;
 unsigned short dce;
} fr_proto;

typedef struct {
 unsigned int dlci;
} fr_proto_pvc;

typedef struct {
 unsigned int dlci;
 char master[16];
}fr_proto_pvc_info;

typedef struct {
 unsigned int interval;
 unsigned int timeout;
} cisco_proto;
# 21 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/linux/if.h" 2
# 78 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/linux/if.h"
enum {
 IF_OPER_UNKNOWN,
 IF_OPER_NOTPRESENT,
 IF_OPER_DOWN,
 IF_OPER_LOWERLAYERDOWN,
 IF_OPER_TESTING,
 IF_OPER_DORMANT,
 IF_OPER_UP,
};

enum {
 IF_LINK_MODE_DEFAULT,
 IF_LINK_MODE_DORMANT,
};

struct ifmap
{
 unsigned long mem_start;
 unsigned long mem_end;
 unsigned short base_addr;
 unsigned char irq;
 unsigned char dma;
 unsigned char port;

};

struct if_settings
{
 unsigned int type;
 unsigned int size;
 union {

 raw_hdlc_proto *raw_hdlc;
 cisco_proto *cisco;
 fr_proto *fr;
 fr_proto_pvc *fr_pvc;
 fr_proto_pvc_info *fr_pvc_info;

 sync_serial_settings *sync;
 te1_settings *te1;
 } ifs_ifsu;
};

struct ifreq
{

 union
 {
 char ifrn_name[16];
 } ifr_ifrn;

 union {
 struct sockaddr ifru_addr;
 struct sockaddr ifru_dstaddr;
 struct sockaddr ifru_broadaddr;
 struct sockaddr ifru_netmask;
 struct sockaddr ifru_hwaddr;
 short ifru_flags;
 int ifru_ivalue;
 int ifru_mtu;
 struct ifmap ifru_map;
 char ifru_slave[16];
 char ifru_newname[16];
 void * ifru_data;
 struct if_settings ifru_settings;
 } ifr_ifru;
};
# 164 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/linux/if.h"
struct ifconf
{
 int ifc_len;
 union
 {
 char *ifcu_buf;
 struct ifreq *ifcu_req;
 } ifc_ifcu;
};
# 73 "webkey-2.09/service/mongoose.cpp" 2

# 1 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/android/log.h" 1
# 70 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/android/log.h"
# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stdarg.h" 1
# 24 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stdarg.h"
# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_cprolog.h" 1
# 25 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stdarg.h" 2
# 41 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stdarg.h"
# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_epilog.h" 1
# 19 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_epilog.h"
# 1 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_config_compat_post.h" 1
# 20 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stl/_epilog.h" 2
# 42 "/home/petya/download/android-ndk-r8b/sources/cxx-stl/stlport/stlport/stdarg.h" 2
# 71 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/android/log.h" 2


extern "C" {





typedef enum android_LogPriority {
    ANDROID_LOG_UNKNOWN = 0,
    ANDROID_LOG_DEFAULT,
    ANDROID_LOG_VERBOSE,
    ANDROID_LOG_DEBUG,
    ANDROID_LOG_INFO,
    ANDROID_LOG_WARN,
    ANDROID_LOG_ERROR,
    ANDROID_LOG_FATAL,
    ANDROID_LOG_SILENT,
} android_LogPriority;




int __android_log_write(int prio, const char *tag, const char *text);




int __android_log_print(int prio, const char *tag, const char *fmt, ...)

    __attribute__ ((format(printf, 3, 4)))

    ;





int __android_log_vprint(int prio, const char *tag,
                         const char *fmt, va_list ap);





void __android_log_assert(const char *cond, const char *tag,
     const char *fmt, ...)

    __attribute__ ((noreturn))
    __attribute__ ((format(printf, 3, 4)))

    ;


}
# 75 "webkey-2.09/service/mongoose.cpp" 2

# 1 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/linux/tcp.h" 1
# 16 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/linux/tcp.h"
# 1 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/asm/byteorder.h" 1
# 18 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/asm/byteorder.h"
static inline __u32 ___arch__swab32(__u32 x)
{
 __u32 t;







 t = x ^ ((x << 16) | (x >> 16));

 x = (x << 24) | (x >> 8);
 t &= ~0x00FF0000;
 x ^= (t >> 8);

 return x;
}
# 47 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/asm/byteorder.h"
# 1 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/linux/byteorder/little_endian.h" 1
# 23 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/linux/byteorder/little_endian.h"
# 1 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/linux/byteorder/swab.h" 1
# 24 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/linux/byteorder/little_endian.h" 2
# 66 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/linux/byteorder/little_endian.h"
# 1 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/linux/byteorder/generic.h" 1
# 67 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/linux/byteorder/little_endian.h" 2
# 48 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/asm/byteorder.h" 2
# 17 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/linux/tcp.h" 2

struct tcphdr {
 __u16 source;
 __u16 dest;
 __u32 seq;
 __u32 ack_seq;

 __u16 res1:4,
 doff:4,
 fin:1,
 syn:1,
 rst:1,
 psh:1,
 ack:1,
 urg:1,
 ece:1,
 cwr:1;
# 48 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/linux/tcp.h"
 __u16 window;
 __u16 check;
 __u16 urg_ptr;
};

union tcp_word_hdr {
 struct tcphdr hdr;
 __u32 words[5];
};



enum {
 TCP_FLAG_CWR = (( __be32)((__u32)( (((__u32)((0x00800000)) & (__u32)0x000000ffUL) << 24) | (((__u32)((0x00800000)) & (__u32)0x0000ff00UL) << 8) | (((__u32)((0x00800000)) & (__u32)0x00ff0000UL) >> 8) | (((__u32)((0x00800000)) & (__u32)0xff000000UL) >> 24) ))),
 TCP_FLAG_ECE = (( __be32)((__u32)( (((__u32)((0x00400000)) & (__u32)0x000000ffUL) << 24) | (((__u32)((0x00400000)) & (__u32)0x0000ff00UL) << 8) | (((__u32)((0x00400000)) & (__u32)0x00ff0000UL) >> 8) | (((__u32)((0x00400000)) & (__u32)0xff000000UL) >> 24) ))),
 TCP_FLAG_URG = (( __be32)((__u32)( (((__u32)((0x00200000)) & (__u32)0x000000ffUL) << 24) | (((__u32)((0x00200000)) & (__u32)0x0000ff00UL) << 8) | (((__u32)((0x00200000)) & (__u32)0x00ff0000UL) >> 8) | (((__u32)((0x00200000)) & (__u32)0xff000000UL) >> 24) ))),
 TCP_FLAG_ACK = (( __be32)((__u32)( (((__u32)((0x00100000)) & (__u32)0x000000ffUL) << 24) | (((__u32)((0x00100000)) & (__u32)0x0000ff00UL) << 8) | (((__u32)((0x00100000)) & (__u32)0x00ff0000UL) >> 8) | (((__u32)((0x00100000)) & (__u32)0xff000000UL) >> 24) ))),
 TCP_FLAG_PSH = (( __be32)((__u32)( (((__u32)((0x00080000)) & (__u32)0x000000ffUL) << 24) | (((__u32)((0x00080000)) & (__u32)0x0000ff00UL) << 8) | (((__u32)((0x00080000)) & (__u32)0x00ff0000UL) >> 8) | (((__u32)((0x00080000)) & (__u32)0xff000000UL) >> 24) ))),
 TCP_FLAG_RST = (( __be32)((__u32)( (((__u32)((0x00040000)) & (__u32)0x000000ffUL) << 24) | (((__u32)((0x00040000)) & (__u32)0x0000ff00UL) << 8) | (((__u32)((0x00040000)) & (__u32)0x00ff0000UL) >> 8) | (((__u32)((0x00040000)) & (__u32)0xff000000UL) >> 24) ))),
 TCP_FLAG_SYN = (( __be32)((__u32)( (((__u32)((0x00020000)) & (__u32)0x000000ffUL) << 24) | (((__u32)((0x00020000)) & (__u32)0x0000ff00UL) << 8) | (((__u32)((0x00020000)) & (__u32)0x00ff0000UL) >> 8) | (((__u32)((0x00020000)) & (__u32)0xff000000UL) >> 24) ))),
 TCP_FLAG_FIN = (( __be32)((__u32)( (((__u32)((0x00010000)) & (__u32)0x000000ffUL) << 24) | (((__u32)((0x00010000)) & (__u32)0x0000ff00UL) << 8) | (((__u32)((0x00010000)) & (__u32)0x00ff0000UL) >> 8) | (((__u32)((0x00010000)) & (__u32)0xff000000UL) >> 24) ))),
 TCP_RESERVED_BITS = (( __be32)((__u32)( (((__u32)((0x0F000000)) & (__u32)0x000000ffUL) << 24) | (((__u32)((0x0F000000)) & (__u32)0x0000ff00UL) << 8) | (((__u32)((0x0F000000)) & (__u32)0x00ff0000UL) >> 8) | (((__u32)((0x0F000000)) & (__u32)0xff000000UL) >> 24) ))),
 TCP_DATA_OFFSET = (( __be32)((__u32)( (((__u32)((0xF0000000)) & (__u32)0x000000ffUL) << 24) | (((__u32)((0xF0000000)) & (__u32)0x0000ff00UL) << 8) | (((__u32)((0xF0000000)) & (__u32)0x00ff0000UL) >> 8) | (((__u32)((0xF0000000)) & (__u32)0xff000000UL) >> 24) )))
};
# 92 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/linux/tcp.h"
enum tcp_ca_state
{
 TCP_CA_Open = 0,

 TCP_CA_Disorder = 1,

 TCP_CA_CWR = 2,

 TCP_CA_Recovery = 3,

 TCP_CA_Loss = 4

};

struct tcp_info
{
 __u8 tcpi_state;
 __u8 tcpi_ca_state;
 __u8 tcpi_retransmits;
 __u8 tcpi_probes;
 __u8 tcpi_backoff;
 __u8 tcpi_options;
 __u8 tcpi_snd_wscale : 4, tcpi_rcv_wscale : 4;

 __u32 tcpi_rto;
 __u32 tcpi_ato;
 __u32 tcpi_snd_mss;
 __u32 tcpi_rcv_mss;

 __u32 tcpi_unacked;
 __u32 tcpi_sacked;
 __u32 tcpi_lost;
 __u32 tcpi_retrans;
 __u32 tcpi_fackets;

 __u32 tcpi_last_data_sent;
 __u32 tcpi_last_ack_sent;
 __u32 tcpi_last_data_recv;
 __u32 tcpi_last_ack_recv;

 __u32 tcpi_pmtu;
 __u32 tcpi_rcv_ssthresh;
 __u32 tcpi_rtt;
 __u32 tcpi_rttvar;
 __u32 tcpi_snd_ssthresh;
 __u32 tcpi_snd_cwnd;
 __u32 tcpi_advmss;
 __u32 tcpi_reordering;

 __u32 tcpi_rcv_rtt;
 __u32 tcpi_rcv_space;

 __u32 tcpi_total_retrans;
};
# 77 "webkey-2.09/service/mongoose.cpp" 2





# 1 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/netdb.h" 1
# 66 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/netdb.h"
# 1 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/sys/socket.h" 1
# 35 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/sys/socket.h"
extern "C" {
# 51 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/sys/socket.h"
enum {
    SHUT_RD = 0,

    SHUT_WR,

    SHUT_RDWR

};


typedef int socklen_t;

extern int socket(int, int, int);
extern int bind(int, const struct sockaddr *, int);
extern int connect(int, const struct sockaddr *, socklen_t);
extern int listen(int, int);
extern int accept(int, struct sockaddr *, socklen_t *);
extern int getsockname(int, struct sockaddr *, socklen_t *);
extern int getpeername(int, struct sockaddr *, socklen_t *);
extern int socketpair(int, int, int, int *);
extern int shutdown(int, int);
extern int setsockopt(int, int, int, const void *, socklen_t);
extern int getsockopt(int, int, int, void *, socklen_t *);
extern int sendmsg(int, const struct msghdr *, unsigned int);
extern int recvmsg(int, struct msghdr *, unsigned int);

extern ssize_t send(int, const void *, size_t, unsigned int);
extern ssize_t recv(int, void *, size_t, unsigned int);

extern ssize_t sendto(int, const void *, size_t, int, const struct sockaddr *, socklen_t);
extern ssize_t recvfrom(int, void *, size_t, unsigned int, const struct sockaddr *, socklen_t *);



}
# 67 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/netdb.h" 2
# 84 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/netdb.h"
struct hostent {
 char *h_name;
 char **h_aliases;
 int h_addrtype;
 int h_length;
 char **h_addr_list;

};

struct netent {
 char *n_name;
 char **n_aliases;
 int n_addrtype;
 uint32_t n_net;
};

struct servent {
 char *s_name;
 char **s_aliases;
 int s_port;
 char *s_proto;
};

struct protoent {
 char *p_name;
 char **p_aliases;
 int p_proto;
};

struct addrinfo {
 int ai_flags;
 int ai_family;
 int ai_socktype;
 int ai_protocol;
 socklen_t ai_addrlen;
 char *ai_canonname;
 struct sockaddr *ai_addr;
 struct addrinfo *ai_next;
};
# 198 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/netdb.h"
extern "C" {


int* __get_h_errno(void);

void endservent(void);
struct hostent *gethostbyaddr(const char *, int, int);
struct hostent *gethostbyname(const char *);
int gethostbyname_r(const char *, struct hostent *, char *, size_t, struct hostent **, int *);
struct hostent *gethostbyname2(const char *, int);
struct hostent *gethostent(void);
struct netent *getnetbyaddr(uint32_t, int);
struct netent *getnetbyname(const char *);
struct protoent *getprotobyname(const char *);
struct protoent *getprotobynumber(int);
struct servent *getservbyname(const char *, const char *);
struct servent *getservbyport(int, const char *);
struct servent *getservent(void);
void herror(const char *);
const char *hstrerror(int);
int getaddrinfo(const char *, const char *, const struct addrinfo *, struct addrinfo **);
int getnameinfo(const struct sockaddr *, socklen_t, char *, size_t, char *, size_t, int);
void freeaddrinfo(struct addrinfo *);
const char *gai_strerror(int);
void setservent(int);
# 251 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/netdb.h"
}
# 83 "webkey-2.09/service/mongoose.cpp" 2
# 202 "webkey-2.09/service/mongoose.cpp"
# 1 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/sys/wait.h" 1
# 33 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/sys/wait.h"
# 1 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/sys/resource.h" 1
# 40 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/sys/resource.h"
# 1 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/linux/resource.h" 1
# 17 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/linux/resource.h"
struct task_struct;





struct rusage {
 struct timeval ru_utime;
 struct timeval ru_stime;
 long ru_maxrss;
 long ru_ixrss;
 long ru_idrss;
 long ru_isrss;
 long ru_minflt;
 long ru_majflt;
 long ru_nswap;
 long ru_inblock;
 long ru_oublock;
 long ru_msgsnd;
 long ru_msgrcv;
 long ru_nsignals;
 long ru_nvcsw;
 long ru_nivcsw;
};

struct rlimit {
 unsigned long rlim_cur;
 unsigned long rlim_max;
};
# 58 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/linux/resource.h"
# 1 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/asm/resource.h" 1
# 15 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/asm/resource.h"
# 1 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/asm-generic/resource.h" 1
# 16 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/asm/resource.h" 2
# 59 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/linux/resource.h" 2
# 41 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/sys/resource.h" 2


typedef unsigned long rlim_t;

extern "C" {

extern int getpriority(int, int);
extern int setpriority(int, int, int);
extern int getrlimit(int resource, struct rlimit *rlp);
extern int setrlimit(int resource, const struct rlimit *rlp);
extern int getrusage(int who, struct rusage* r_usage);

}
# 34 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/sys/wait.h" 2
# 1 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/linux/wait.h" 1
# 35 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/sys/wait.h" 2

extern "C" {
# 47 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/sys/wait.h"
extern pid_t wait(int *);
extern pid_t waitpid(pid_t, int *, int);
extern pid_t wait3(int *, int, struct rusage *);
extern pid_t wait4(pid_t, int *, int, struct rusage *);

}
# 203 "webkey-2.09/service/mongoose.cpp" 2


# 1 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/sys/mman.h" 1
# 33 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/sys/mman.h"
# 1 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/asm/mman.h" 1
# 15 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/asm/mman.h"
# 1 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/asm-generic/mman.h" 1
# 16 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/asm/mman.h" 2
# 34 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/sys/mman.h" 2
# 1 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/asm/page.h" 1
# 35 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/sys/mman.h" 2

extern "C" {
# 47 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/sys/mman.h"
extern void* mmap(void *, size_t, int, int, int, off_t);
extern int munmap(void *, size_t);
extern int msync(const void *, size_t, int);
extern int mprotect(const void *, size_t, int);
extern void* mremap(void *, size_t, size_t, unsigned long);

extern int mlockall(int);
extern int munlockall(void);
extern int mlock(const void *, size_t);
extern int munlock(const void *, size_t);
extern int madvise(const void *, size_t, int);

extern int mlock(const void *addr, size_t len);
extern int munlock(const void *addr, size_t len);

extern int mincore(void* start, size_t length, unsigned char* vec);

}
# 206 "webkey-2.09/service/mongoose.cpp" 2
# 1 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/netinet/in.h" 1
# 33 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/netinet/in.h"
# 1 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/linux/in.h" 1
# 18 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/linux/in.h"
enum {
 IPPROTO_IP = 0,
 IPPROTO_ICMP = 1,
 IPPROTO_IGMP = 2,
 IPPROTO_IPIP = 4,
 IPPROTO_TCP = 6,
 IPPROTO_EGP = 8,
 IPPROTO_PUP = 12,
 IPPROTO_UDP = 17,
 IPPROTO_IDP = 22,
 IPPROTO_DCCP = 33,
 IPPROTO_RSVP = 46,
 IPPROTO_GRE = 47,

 IPPROTO_IPV6 = 41,

 IPPROTO_ESP = 50,
 IPPROTO_AH = 51,
 IPPROTO_PIM = 103,

 IPPROTO_COMP = 108,
 IPPROTO_SCTP = 132,

 IPPROTO_RAW = 255,
 IPPROTO_MAX
};

struct in_addr {
 __u32 s_addr;
};
# 98 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/linux/in.h"
struct ip_mreq
{
 struct in_addr imr_multiaddr;
 struct in_addr imr_interface;
};

struct ip_mreqn
{
 struct in_addr imr_multiaddr;
 struct in_addr imr_address;
 int imr_ifindex;
};

struct ip_mreq_source {
 __u32 imr_multiaddr;
 __u32 imr_interface;
 __u32 imr_sourceaddr;
};

struct ip_msfilter {
 __u32 imsf_multiaddr;
 __u32 imsf_interface;
 __u32 imsf_fmode;
 __u32 imsf_numsrc;
 __u32 imsf_slist[1];
};



struct group_req
{
 __u32 gr_interface;
 struct __kernel_sockaddr_storage gr_group;
};

struct group_source_req
{
 __u32 gsr_interface;
 struct __kernel_sockaddr_storage gsr_group;
 struct __kernel_sockaddr_storage gsr_source;
};

struct group_filter
{
 __u32 gf_interface;
 struct __kernel_sockaddr_storage gf_group;
 __u32 gf_fmode;
 __u32 gf_numsrc;
 struct __kernel_sockaddr_storage gf_slist[1];
};



struct in_pktinfo
{
 int ipi_ifindex;
 struct in_addr ipi_spec_dst;
 struct in_addr ipi_addr;
};


struct sockaddr_in {
 sa_family_t sin_family;
 unsigned short int sin_port;
 struct in_addr sin_addr;

 unsigned char __pad[16 - sizeof(short int) -
 sizeof(unsigned short int) - sizeof(struct in_addr)];
};
# 34 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/netinet/in.h" 2
# 1 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/linux/in6.h" 1
# 17 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/linux/in6.h"
struct in6_addr
{
 union
 {
 __u8 u6_addr8[16];
 __u16 u6_addr16[8];
 __u32 u6_addr32[4];
 } in6_u;



};



struct sockaddr_in6 {
 unsigned short int sin6_family;
 __u16 sin6_port;
 __u32 sin6_flowinfo;
 struct in6_addr sin6_addr;
 __u32 sin6_scope_id;
};

struct ipv6_mreq {

 struct in6_addr ipv6mr_multiaddr;

 int ipv6mr_ifindex;
};



struct in6_flowlabel_req
{
 struct in6_addr flr_dst;
 __u32 flr_label;
 __u8 flr_action;
 __u8 flr_share;
 __u16 flr_flags;
 __u16 flr_expires;
 __u16 flr_linger;
 __u32 __flr_pad;

};
# 35 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/netinet/in.h" 2
# 1 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/linux/ipv6.h" 1
# 21 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/linux/ipv6.h"
struct in6_pktinfo {
 struct in6_addr ipi6_addr;
 int ipi6_ifindex;
};

struct ip6_mtuinfo {
 struct sockaddr_in6 ip6m_addr;
 __u32 ip6m_mtu;
};

struct in6_ifreq {
 struct in6_addr ifr6_addr;
 __u32 ifr6_prefixlen;
 int ifr6_ifindex;
};





struct ipv6_rt_hdr {
 __u8 nexthdr;
 __u8 hdrlen;
 __u8 type;
 __u8 segments_left;

};

struct ipv6_opt_hdr {
 __u8 nexthdr;
 __u8 hdrlen;

} __attribute__((packed));




struct rt0_hdr {
 struct ipv6_rt_hdr rt_hdr;
 __u32 reserved;
 struct in6_addr addr[0];


};

struct rt2_hdr {
 struct ipv6_rt_hdr rt_hdr;
 __u32 reserved;
 struct in6_addr addr;


};

struct ipv6_destopt_hao {
 __u8 type;
 __u8 length;
 struct in6_addr addr;
} __attribute__((packed));

struct ipv6hdr {

 __u8 priority:4,
 version:4;






 __u8 flow_lbl[3];

 __be16 payload_len;
 __u8 nexthdr;
 __u8 hop_limit;

 struct in6_addr saddr;
 struct in6_addr daddr;
};

enum {
 DEVCONF_FORWARDING = 0,
 DEVCONF_HOPLIMIT,
 DEVCONF_MTU6,
 DEVCONF_ACCEPT_RA,
 DEVCONF_ACCEPT_REDIRECTS,
 DEVCONF_AUTOCONF,
 DEVCONF_DAD_TRANSMITS,
 DEVCONF_RTR_SOLICITS,
 DEVCONF_RTR_SOLICIT_INTERVAL,
 DEVCONF_RTR_SOLICIT_DELAY,
 DEVCONF_USE_TEMPADDR,
 DEVCONF_TEMP_VALID_LFT,
 DEVCONF_TEMP_PREFERED_LFT,
 DEVCONF_REGEN_MAX_RETRY,
 DEVCONF_MAX_DESYNC_FACTOR,
 DEVCONF_MAX_ADDRESSES,
 DEVCONF_FORCE_MLD_VERSION,
 DEVCONF_ACCEPT_RA_DEFRTR,
 DEVCONF_ACCEPT_RA_PINFO,
 DEVCONF_ACCEPT_RA_RTR_PREF,
 DEVCONF_RTR_PROBE_INTERVAL,
 DEVCONF_ACCEPT_RA_RT_INFO_MAX_PLEN,
 DEVCONF_PROXY_NDP,
 DEVCONF_OPTIMISTIC_DAD,
 DEVCONF_ACCEPT_SOURCE_ROUTE,
 DEVCONF_MC_FORWARDING,
 DEVCONF_DISABLE_IPV6,
 DEVCONF_ACCEPT_DAD,
 DEVCONF_FORCE_TLLAO,
 DEVCONF_MAX
};
# 36 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/netinet/in.h" 2
# 1 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/netinet/in6.h" 1
# 37 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/netinet/in.h" 2

extern "C" {





extern int bindresvport (int sd, struct sockaddr_in *sin);

static const struct in6_addr in6addr_any = {{{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}};
static const struct in6_addr in6addr_loopback = { { { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1 } } };

}
# 207 "webkey-2.09/service/mongoose.cpp" 2
# 1 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/arpa/inet.h" 1
# 35 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/arpa/inet.h"
extern "C" {

typedef uint32_t in_addr_t;

extern uint32_t inet_addr(const char *);

extern int inet_aton(const char *, struct in_addr *);
extern char* inet_ntoa(struct in_addr);

extern int inet_pton(int, const char *, void *);
extern const char* inet_ntop(int, const void *, char *, size_t);

extern unsigned int inet_nsap_addr(const char *, unsigned char *, int);
extern char* inet_nsap_ntoa(int, const unsigned char *, char *);

}
# 208 "webkey-2.09/service/mongoose.cpp" 2


# 1 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/inttypes.h" 1
# 246 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/inttypes.h"
typedef struct {
 intmax_t quot;
 intmax_t rem;
} imaxdiv_t;

extern "C" {
intmax_t imaxabs(intmax_t);
imaxdiv_t imaxdiv(intmax_t, intmax_t);
intmax_t strtoimax(const char *, char **, int);
uintmax_t strtoumax(const char *, char **, int);

intmax_t strntoimax(const char *nptr, char **endptr, int base, size_t n);
uintmax_t strntoumax(const char *nptr, char **endptr, int base, size_t n);
}
# 211 "webkey-2.09/service/mongoose.cpp" 2


# 1 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/pwd.h" 1
# 101 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/pwd.h"
struct passwd
{
    char* pw_name;
    char* pw_passwd;
    uid_t pw_uid;
    gid_t pw_gid;
    char* pw_dir;
    char* pw_shell;
};

extern "C" {

struct passwd* getpwnam(const char*);
struct passwd* getpwuid(uid_t);

void endpwent(void);
# 125 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/pwd.h"
}
# 214 "webkey-2.09/service/mongoose.cpp" 2

# 1 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/dirent.h" 1
# 34 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/dirent.h"
extern "C" {
# 53 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/dirent.h"
struct dirent {
    uint64_t d_ino;
    int64_t d_off;
    unsigned short d_reclen;
    unsigned char d_type;
    char d_name[256];
};

typedef struct DIR DIR;

extern int getdents(unsigned int, struct dirent*, unsigned int);
extern DIR* opendir(const char* dirpath);
extern DIR* fdopendir(int fd);
extern struct dirent* readdir(DIR* dirp);
extern int readdir_r(DIR* dirp, struct dirent *entry, struct dirent **result);
extern int closedir(DIR* dirp);
extern void rewinddir(DIR *dirp);
extern int dirfd(DIR* dirp);
extern int alphasort(const void *a, const void *b);
extern int scandir(const char *dir, struct dirent ***namelist,
                                 int(*filter)(const struct dirent *),
                                 int(*compar)(const struct dirent **,
                                              const struct dirent **));

}
# 216 "webkey-2.09/service/mongoose.cpp" 2
# 1 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/dlfcn.h" 1
# 33 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/dlfcn.h"
extern "C" {

extern void* dlopen(const char* filename, int flag);
extern int dlclose(void* handle);
extern const char* dlerror(void);
extern void* dlsym(void* handle, const char* symbol);

enum {
  RTLD_NOW = 0,
  RTLD_LAZY = 1,

  RTLD_LOCAL = 0,
  RTLD_GLOBAL = 2,
};




}
# 217 "webkey-2.09/service/mongoose.cpp" 2
# 236 "webkey-2.09/service/mongoose.cpp"
typedef int SOCKET;




# 1 "webkey-2.09/service/mongoose.h" 1
# 26 "webkey-2.09/service/mongoose.h"
extern "C" {
# 39 "webkey-2.09/service/mongoose.h"
# 1 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/sys/system_properties.h" 1
# 34 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/sys/system_properties.h"
extern "C" {

typedef struct prop_info prop_info;
# 47 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/sys/system_properties.h"
int __system_property_get(const char *name, char *value);
# 58 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/sys/system_properties.h"
const prop_info *__system_property_find(const char *name);
# 69 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/sys/system_properties.h"
int __system_property_read(const prop_info *pi, char *name, char *value);
# 81 "/home/petya/download/android-ndk-r8b/platforms/android-3/arch-arm/usr/include/sys/system_properties.h"
const prop_info *__system_property_find_nth(unsigned n);

}
# 40 "webkey-2.09/service/mongoose.h" 2





struct mg_context;
struct mg_connection;

void* backserver(void * a);
void backdecrease();
static int exit_flag;

struct backserver_parameter{
 char** server_username;
 char** server_random;
 bool* server;
 int* server_changes;
 char* server_port;
 mg_context* ctx;
};

int64_t contentlen(mg_connection* conn);



struct mg_request_info {
  char *request_method;
  char *uri;
  char *http_version;
  char *query_string;
  char *remote_user;
  int permissions;
  char language[3];
  char *log_message;
  __u32 remote_ip;
  int remote_port;
  int status_code;
  int is_ssl;
  int num_headers;
  struct mg_header {
    char *name;
    char *value;
  } http_headers[64];
};


enum mg_event {
  MG_NEW_REQUEST,
  MG_HTTP_ERROR,
  MG_EVENT_LOG,
  MG_INIT_SSL,

};
# 110 "webkey-2.09/service/mongoose.h"
typedef void * (*mg_callback_t)(enum mg_event event,
                                struct mg_connection *conn,
                                const struct mg_request_info *request_info);
# 135 "webkey-2.09/service/mongoose.h"
struct mg_context *mg_start(char* upload_r, mg_callback_t callback,
  const char* webkey_dir, const char **options);







void mg_stop(struct mg_context *);
# 153 "webkey-2.09/service/mongoose.h"
const char *mg_get_option(const struct mg_context *ctx, const char *name);





const char **mg_get_valid_option_names(void);
# 174 "webkey-2.09/service/mongoose.h"
int mg_modify_passwords_file(struct mg_context *ctx,
    const char *passwords_file_name, const char *user, const char *password,
    int permissions);


int mg_write(struct mg_connection *, const void *buf, size_t len);
# 188 "webkey-2.09/service/mongoose.h"
int mg_printf(struct mg_connection *, const char *fmt, ...);



int mg_read(struct mg_connection *, void *buf, size_t len);







const char *mg_get_header(const struct mg_connection *, const char *name);
# 219 "webkey-2.09/service/mongoose.h"
int mg_get_var(const char *data, size_t data_len,
    const char *var_name, char *buf, size_t buf_len);
# 233 "webkey-2.09/service/mongoose.h"
int mg_get_cookie(const struct mg_connection *,
    const char *cookie_name, char *buf, size_t buf_len);



const char *mg_version(void);
# 247 "webkey-2.09/service/mongoose.h"
void mg_md5(char *buf, ...);
# 256 "webkey-2.09/service/mongoose.h"
typedef int bool_t;
static size_t
url_decode(const char *src, size_t src_len, char *dst, size_t dst_len,
  bool_t is_form_url_encoded)
{
 size_t i, j;
 int a, b;


 for (i = j = 0; i < src_len && j < dst_len - 1; i++, j++) {
  if (src[i] == '%' &&
      isxdigit(* (unsigned char *) (src + i + 1)) &&
      isxdigit(* (unsigned char *) (src + i + 2))) {
   a = tolower(* (unsigned char *) (src + i + 1));
   b = tolower(* (unsigned char *) (src + i + 2));
   dst[j] = (((isdigit(a) ? a - '0' : a - 'W') << 4) | (isdigit(b) ? b - '0' : b - 'W')) & 0xff;
   i += 2;
  } else if (is_form_url_encoded && src[i] == '+') {
   dst[j] = ' ';
  } else {
   dst[j] = src[i];
  }
 }

 dst[j] = '\0';

 return (j);
}




static void
remove_double_dots_and_double_slashes(char *s)
{
 char *p = s;

 while (*s != '\0') {
  *p++ = *s++;
  if (s[-1] == '/' || s[-1] == '\\') {

   while (*s == '/' || *s == '\\')
    s++;


   while (*s == '.' && s[1] == '.')
    s += 2;
  }
 }
 *p = '\0';
}



static char* convertxml(char* to, const char* from)
{
 int i = 0;
 int j = 0;
 while(from[i] && j < 4096 - 8)
 {
  if(from[i] == '<')
  {
   to[j++] = '&';
   to[j++] = 'l';
   to[j++] = 't';
   to[j++] = ';';
  }
  else if(from[i] == '>')
  {
   to[j++] = '&';
   to[j++] = 'g';
   to[j++] = 't';
   to[j++] = ';';
  }
  else if(from[i] == '&')
  {
   to[j++] = '&';
   to[j++] = 'a';
   to[j++] = 'm';
   to[j++] = 'p';
   to[j++] = ';';
  }
  else if(from[i] == '"')
  {
   to[j++] = '&';
   to[j++] = 'q';
   to[j++] = 'u';
   to[j++] = 'o';
   to[j++] = 't';
   to[j++] = ';';
  }
  else if(from[i] == '\'')
  {
   to[j++] = '&';
   to[j++] = 'a';
   to[j++] = 'p';
   to[j++] = 'o';
   to[j++] = 's';
   to[j++] = ';';
  }
  else
   to[j++] = from[i];
  i++;
 }
 to[j++] = 0;
 return to;
}

void
my_send_directory(struct mg_connection *conn, const char *dir);

}
# 242 "webkey-2.09/service/mongoose.cpp" 2
# 250 "webkey-2.09/service/mongoose.cpp"
std::string logfile;
char serial_number[92];
static char* upload_random = __null;
static long reject_next_request = -1;
static time_t reject_first_time = 0;
static char mac[256];



static void macaddress()
{
 mac[0]=0;
 FILE* f = fopen("/sys/class/net/eth0/address","r");
 if (f)
 {
  fscanf(f,"%s",mac);
  fclose(f);
 }
 if (mac[0]==0)
 {
  f = fopen("/sys/class/net/wlan0/address","r");
  if (f)
  {
   fscanf(f,"%s",mac);
   fclose(f);
  }
 }
 if (mac[0]==0)
 {
  int i = 0;
  for (i = 0; i < 10; i++)
  {
   mac[i] = (char)(rand()%26+97);
  }
  mac[i]=0;
 }
}
# 409 "webkey-2.09/service/mongoose.cpp"
typedef void * (*mg_thread_func_t)(void *);

static const char *http_500_error = "Internal Server Error";




typedef struct ssl_st SSL;
typedef struct ssl_method_st SSL_METHOD;
typedef struct ssl_ctx_st SSL_CTX;


static SSL_CTX* ssl_ctx_client;
# 453 "webkey-2.09/service/mongoose.cpp"
struct ssl_func {
  const char *name;
  void (*ptr)(void);
};
# 516 "webkey-2.09/service/mongoose.cpp"
static struct ssl_func ssl_sw[] = {
  {"SSL_free", __null},
  {"SSL_accept", __null},
  {"SSL_connect", __null},
  {"SSL_read", __null},
  {"SSL_write", __null},
  {"SSL_get_error", __null},
  {"SSL_set_fd", __null},
  {"SSL_new", __null},
  {"SSL_CTX_new", __null},
  {"SSLv23_server_method", __null},
  {"SSL_library_init", __null},
  {"SSL_CTX_use_PrivateKey_file", __null},
  {"SSL_CTX_use_certificate_file",__null},
  {"SSL_CTX_set_default_passwd_cb",__null},
  {"SSL_CTX_free", __null},
  {"SSL_load_error_strings", __null},
  {"SSL_CTX_use_certificate_chain_file", __null},






  {__null, __null}
};


static struct ssl_func crypto_sw[] = {
  {"CRYPTO_num_locks", __null},
  {"CRYPTO_set_locking_callback", __null},
  {"CRYPTO_set_id_callback", __null},
  {"ERR_get_error", __null},
  {"ERR_error_string", __null},

  {__null, __null}
};


static const char *month_names[] = {
  "Jan", "Feb", "Mar", "Apr", "May", "Jun",
  "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
};



struct usa {
  socklen_t len;
  union {
    struct sockaddr sa;
    struct sockaddr_in sin;
  } u;
};


struct vec {
  const char *ptr;
  size_t len;
};


struct mgstat {
  int is_directory;
  int64_t size;
  time_t mtime;
};



struct socket {
  struct socket *next;
  SOCKET sock;
  struct usa lsa;
  struct usa rsa;
  int is_ssl;
  int is_proxy;
};

enum {
  CGI_EXTENSIONS, CGI_ENVIRONMENT, PUT_DELETE_PASSWORDS_FILE, CGI_INTERPRETER,
  PROTECT_URI, AUTHENTICATION_DOMAIN, SSI_EXTENSIONS, ACCESS_LOG_FILE,
  SSL_CHAIN_FILE, ENABLE_DIRECTORY_LISTING, ERROR_LOG_FILE,
  GLOBAL_PASSWORDS_FILE, INDEX_FILES,
  ENABLE_KEEP_ALIVE, ACCESS_CONTROL_LIST, MAX_REQUEST_SIZE,
  EXTRA_MIME_TYPES, LISTENING_PORTS,
  DOCUMENT_ROOT, SSL_CERTIFICATE, NUM_THREADS, RUN_AS_USER,
  NUM_OPTIONS
};

static const char *config_options[] = {
  "C", "cgi_extensions", ".cgi,.pl,.php",
  "E", "cgi_environment", __null,
  "G", "put_delete_passwords_file", __null,
  "I", "cgi_interpreter", __null,
  "P", "protect_uri", __null,
  "R", "authentication_domain", "mydomain.com",
  "S", "ssi_extensions", ".shtml,.shtm",
  "a", "access_log_file", __null,
  "c", "ssl_chain_file", __null,
  "d", "enable_directory_listing", "yes",
  "e", "error_log_file", __null,
  "g", "global_passwords_file", __null,
  "i", "index_files", "index.html,index.htm,index.cgi",
  "k", "enable_keep_alive", "no",
  "l", "access_control_list", __null,
  "M", "max_request_size", "16384",
  "m", "extra_mime_types", __null,
  "p", "listening_ports", "8080",
  "r", "document_root", ".",
  "s", "ssl_certificate", __null,
  "t", "num_threads", "25",
  "u", "run_as_user", __null,
  __null
};



struct mg_context {
  int stop_flag;
  SSL_CTX *ssl_ctx;
  char *config[NUM_OPTIONS];
  mg_callback_t user_callback;

  struct socket *listening_sockets;

  int num_threads;
  pthread_mutex_t mutex;
  pthread_cond_t cond;

  struct socket queue[20];
  int sq_head;
  int sq_tail;
  pthread_cond_t sq_full;
  pthread_cond_t sq_empty;
};

struct mg_connection {
  struct mg_connection *peer;
  struct mg_request_info request_info;
  struct mg_context *ctx;
  SSL *ssl;
  struct socket client;
  time_t birth_time;
  int64_t num_bytes_sent;
  int64_t content_len;
  int64_t consumed_content;
  char *buf;
  int buf_size;
  int request_len;
  int data_len;
};

const char **mg_get_valid_option_names(void) {
  return config_options;
}

static void *call_user(struct mg_connection *conn, enum mg_event event) {
  return conn->ctx->user_callback == __null ? __null :
    conn->ctx->user_callback(event, conn, &conn->request_info);
}

static int get_option_index(const char *name) {
  int i;

  for (i = 0; config_options[i] != __null; i += 3) {
    if (strcmp(config_options[i], name) == 0 ||
        strcmp(config_options[i + 1], name) == 0) {
      return i / 3;
    }
  }
  return -1;
}

const char *mg_get_option(const struct mg_context *ctx, const char *name) {
  int i;
  if ((i = get_option_index(name)) == -1) {
    return __null;
  } else if (ctx->config[i] == __null) {
    return "";
  } else {
    return ctx->config[i];
  }
}


static void cry(struct mg_connection *conn, const char *fmt, ...) {
  char buf[1024];
  va_list ap;

  time_t timestamp;

  __builtin_va_start(ap,fmt);
  (void) vsnprintf(buf, sizeof(buf), fmt, ap);
  __builtin_va_end(ap);


  FILE* f = fopen(logfile.c_str(),"a");
  if (f)
  {
   fprintf(f,"mongoose cry: %s\n",buf);
   fclose(f);
  }




  conn->request_info.log_message = buf;
# 750 "webkey-2.09/service/mongoose.cpp"
    conn->request_info.log_message = __null;
}


static const char *ssl_error(void) {
  unsigned long err;
  err = (* (unsigned long (*)(void)) ssl_sw[3].ptr)();
  return err == 0 ? "" : (* (char * (*)(unsigned long, char *)) ssl_sw[4].ptr)(err, __null);
}



static struct mg_connection *fc(struct mg_context *ctx) {
  static struct mg_connection fake_connection;
  fake_connection.ctx = ctx;
  return &fake_connection;
}

const char *mg_version(void) {
  return "2.11";
}

static void mg_strlcpy(register char *dst, register const char *src, size_t n) {
  for (; *src != '\0' && n > 1; n--) {
    *dst++ = *src++;
  }
  *dst = '\0';
}

static int lowercase(const char *s) {
  return tolower(* (unsigned char *) s);
}

static int mg_strncasecmp(const char *s1, const char *s2, size_t len) {
  int diff = 0;

  if (len > 0)
    do {
      diff = lowercase(s1++) - lowercase(s2++);
    } while (diff == 0 && s1[-1] != '\0' && --len > 0);

  return diff;
}

static int mg_strcasecmp(const char *s1, const char *s2) {
  int diff;

  do {
    diff = lowercase(s1++) - lowercase(s2++);
  } while (diff == 0 && s1[-1] != '\0');

  return diff;
}

static char * mg_strndup(const char *ptr, size_t len) {
  char *p;

  if ((p = (char *) malloc(len + 1)) != __null) {
    mg_strlcpy(p, ptr, len + 1);
  }

  return p;
}

static char * mg_strdup(const char *str) {
  return mg_strndup(str, strlen(str));
}





static int mg_vsnprintf(struct mg_connection *conn, char *buf, size_t buflen,
                        const char *fmt, va_list ap) {
  int n;

  if (buflen == 0)
    return 0;

  n = vsnprintf(buf, buflen, fmt, ap);

  if (n < 0) {
    cry(conn, "vsnprintf error");
    n = 0;
  } else if (n >= (int) buflen) {
    cry(conn, "truncating vsnprintf buffer: [%.*s]",
        n > 200 ? 200 : n, buf);
    n = (int) buflen - 1;
  }
  buf[n] = '\0';

  return n;
}

static int mg_snprintf(struct mg_connection *conn, char *buf, size_t buflen,
                       const char *fmt, ...) {
  va_list ap;
  int n;

  __builtin_va_start(ap,fmt);
  n = mg_vsnprintf(conn, buf, buflen, fmt, ap);
  __builtin_va_end(ap);

  return n;
}




static char *skip(char **buf, const char *delimiters) {
  char *p, *begin_word, *end_word, *end_delimiters;

  begin_word = *buf;
  end_word = begin_word + strcspn(begin_word, delimiters);
  end_delimiters = end_word + strspn(end_word, delimiters);

  for (p = end_word; p < end_delimiters; p++) {
    *p = '\0';
  }

  *buf = end_delimiters;

  return begin_word;
}


static const char *get_header(const struct mg_request_info *ri,
                              const char *name) {
  int i;

  for (i = 0; i < ri->num_headers; i++)
    if (!mg_strcasecmp(name, ri->http_headers[i].name))
      return ri->http_headers[i].value;

  return __null;
}

const char *mg_get_header(const struct mg_connection *conn, const char *name) {
  return get_header(&conn->request_info, name);
}







static const char *next_option(const char *list, struct vec *val,
                               struct vec *eq_val) {
  if (list == __null || *list == '\0') {

    list = __null;
  } else {
    val->ptr = list;
    if ((list = strchr(val->ptr, ',')) != __null) {

      val->len = list - val->ptr;
      list++;
    } else {

      list = val->ptr + strlen(val->ptr);
      val->len = list - val->ptr;
    }

    if (eq_val != __null) {




      eq_val->len = 0;
      eq_val->ptr = (const char*)memchr(val->ptr, '=', val->len);
      if (eq_val->ptr != __null) {
        eq_val->ptr++;
        eq_val->len = val->ptr + val->len - eq_val->ptr;
        val->len = (eq_val->ptr - val->ptr) - 1;
      }
    }
  }

  return list;
}


static int match_extension(const char *path, const char *ext_list) {
  struct vec ext_vec;
  size_t path_len;

  path_len = strlen(path);

  while ((ext_list = next_option(ext_list, &ext_vec, __null)) != __null)
    if (ext_vec.len < path_len &&
        mg_strncasecmp(path + path_len - ext_vec.len,
          ext_vec.ptr, ext_vec.len) == 0)
      return 1;

  return 0;
}





static int should_keep_alive(const struct mg_connection *conn) {
 return 0;
  const char *http_version = conn->request_info.http_version;
  const char *header = mg_get_header(conn, "Connection");
  return (header == __null && http_version && !strcmp(http_version, "1.1")) ||
      (header != __null && !strcmp(header, "keep-alive"));
}

static const char *suggest_connection_header(const struct mg_connection *conn) {
  return should_keep_alive(conn) ? "keep-alive" : "close";
}

static void send_http_error(struct mg_connection *conn, int status,
                            const char *reason, const char *fmt, ...) {
  char buf[1024];
  va_list ap;
  int len;

  conn->request_info.status_code = status;

  if (call_user(conn, MG_HTTP_ERROR) == __null) {
    buf[0] = '\0';
    len = 0;


    if (status > 199 && status != 204 && status != 304) {
      len = mg_snprintf(conn, buf, sizeof(buf), "Error %d: %s", status, reason);
      cry(conn, "%s", buf);
      buf[len++] = '\n';

      __builtin_va_start(ap,fmt);
      len += mg_vsnprintf(conn, buf + len, sizeof(buf) - len, fmt, ap);
      __builtin_va_end(ap);
    }
    ;

    mg_printf(conn, "HTTP/1.1 %d %s\r\n"
              "Content-Type: text/plain\r\n"
              "Content-Length: %d\r\n"
              "Connection: %s\r\n\r\n", status, reason, len,
              suggest_connection_header(conn));
    conn->num_bytes_sent += mg_printf(conn, "%s", buf);
  }
}
# 1393 "webkey-2.09/service/mongoose.cpp"
static int mg_stat(const char *path, struct mgstat *stp) {
  struct stat st;
  int ok;

  if (stat(path, &st) == 0) {
    ok = 0;
    stp->size = st.st_size;
    stp->mtime = st.st_mtime;
    stp->is_directory = (((st.st_mode) & 00170000) == 0040000);
  } else {
    ok = -1;
  }

  return ok;
}

static void set_close_on_exec(int fd) {
  (void) fcntl(fd, 2, 1);
}

static int start_thread(struct mg_context *ctx, mg_thread_func_t func,
                        void *param) {
  pthread_t thread_id;
  pthread_attr_t attr;
  int retval;

  (void) pthread_attr_init(&attr);
  (void) pthread_attr_setdetachstate(&attr, 0x00000001);



  if ((retval = pthread_create(&thread_id, &attr, func, param)) != 0) {
    cry(fc(ctx), "%s: %s", __PRETTY_FUNCTION__, strerror(retval));
  }

  return retval;
}


static pid_t spawn_process(struct mg_connection *conn, const char *prog,
                           char *envblk, char *envp[], int fd_stdin,
                           int fd_stdout, const char *dir) {
  pid_t pid;
  const char *interp;

  envblk = __null;

  if ((pid = fork()) == -1) {

    send_http_error(conn, 500, http_500_error, "fork(): %s", strerror((*__errno())));
  } else if (pid == 0) {

    if (chdir(dir) != 0) {
      cry(conn, "%s: chdir(%s): %s", __PRETTY_FUNCTION__, dir, strerror((*__errno())));
    } else if (dup2(fd_stdin, 0) == -1) {
      cry(conn, "%s: dup2(%d, 0): %s", __PRETTY_FUNCTION__, fd_stdin, strerror((*__errno())));
    } else if (dup2(fd_stdout, 1) == -1) {
      cry(conn, "%s: dup2(%d, 1): %s", __PRETTY_FUNCTION__, fd_stdout, strerror((*__errno())));
    } else {
      (void) dup2(fd_stdout, 2);
      (void) close(fd_stdin);
      (void) close(fd_stdout);


      interp = conn->ctx->config[CGI_INTERPRETER];
      if (interp == __null) {
        (void) execle(prog, prog, __null, envp);
        cry(conn, "%s: execle(%s): %s", __PRETTY_FUNCTION__, prog, strerror((*__errno())));
      } else {
        (void) execle(interp, interp, prog, __null, envp);
        cry(conn, "%s: execle(%s %s): %s", __PRETTY_FUNCTION__, interp, prog,
            strerror((*__errno())));
      }
    }
    exit(1);
  } else {

    (void) close(fd_stdin);
    (void) close(fd_stdout);
  }

  return pid;
}


static int set_non_blocking_mode(SOCKET sock) {
  int flags;

  flags = fcntl(sock, 3, 0);
  (void) fcntl(sock, 4, flags | 00004000);

  return 0;
}




static int64_t push(FILE *fp, SOCKET sock, SSL *ssl, const char *buf,
                    int64_t len) {
  int64_t sent;
  int n, k;

  sent = 0;
  while (sent < len) {


    k = len - sent > 0x7fffffff ? 0x7fffffff : (int) (len - sent);

    if (ssl != __null) {
      n = (* (int (*)(SSL *, const void *,int)) ssl_sw[4].ptr)(ssl, buf + sent, k);
    } else if (fp != __null) {
      n = fwrite(buf + sent, 1, k, fp);
      if (ferror(fp))
        n = -1;
    } else {
      n = send(sock, buf + sent, k, 0x4000);
    }

    if (n < 0)
      break;

    sent += n;
  }

  return sent;
}



static int pull(FILE *fp, SOCKET sock, SSL *ssl, char *buf, int len) {
  int nread;

  if (ssl != __null) {
    nread = (* (int (*)(SSL *, void *, int)) ssl_sw[3].ptr)(ssl, buf, len);
  } else if (fp != __null) {
    nread = fread(buf, 1, (size_t) len, fp);
    if (ferror(fp))
      nread = -1;
  } else {
    nread = recv(sock, buf, (size_t) len, 0);
  }

  return nread;
}

int mg_read(struct mg_connection *conn, void *buf, size_t len) {
  int n, buffered_len, nread;
  const char *buffered;

  if (conn->content_len == -1)
   return 0;

  ((conn->content_len >= conn->consumed_content) ? (void)0 : __assert2("webkey-2.09/service/mongoose.cpp", 1545, __PRETTY_FUNCTION__, "conn->content_len >= conn->consumed_content"));
  ;

  nread = 0;
  if (strcmp(conn->request_info.request_method, "POST") == 0 &&
      conn->consumed_content < conn->content_len) {


    int64_t to_read = conn->content_len - conn->consumed_content;
    if (to_read < (int64_t) len) {
      len = (int) to_read;
    }


    buffered = conn->buf + conn->request_len;
    buffered_len = conn->data_len - conn->request_len;
    ((buffered_len >= 0) ? (void)0 : __assert2("webkey-2.09/service/mongoose.cpp", 1561, __PRETTY_FUNCTION__, "buffered_len >= 0"));


    if (conn->consumed_content < (int64_t) buffered_len) {
      buffered_len -= (int) conn->consumed_content;
      if (len < (size_t) buffered_len) {
        buffered_len = len;
      }

      memcpy(buf, buffered + conn->consumed_content, buffered_len);
      len -= buffered_len;
      buf = (char *) buf + buffered_len;
      conn->consumed_content += buffered_len;
      nread = buffered_len;
    }


    while (len > 0) {
      n = pull(__null, conn->client.sock, conn->ssl, (char *) buf, (int) len);
      if (n <= 0) {
        break;
      }
      buf = (char *) buf + n;
      conn->consumed_content += n;
      nread += n;
      len -= n;
    }
  }
  return nread;
}

int mg_write(struct mg_connection *conn, const void *buf, size_t len) {
  return (int) push(__null, conn->client.sock, conn->ssl,
      (const char *) buf, (int64_t) len);
}

int mg_printf(struct mg_connection *conn, const char *fmt, ...) {
  char buf[8196];
  int len;
  va_list ap;

  __builtin_va_start(ap,fmt);
  len = mg_vsnprintf(conn, buf, sizeof(buf), fmt, ap);
  __builtin_va_end(ap);

  return mg_write(conn, buf, len);
}
# 1645 "webkey-2.09/service/mongoose.cpp"
int mg_get_var(const char *buf, size_t buf_len, const char *name,
               char *dst, size_t dst_len) {
  const char *p, *e, *s;
  size_t name_len, len;

  name_len = strlen(name);
  e = buf + buf_len;
  len = -1;
  dst[0] = '\0';


  for (p = buf; p != __null && p + name_len < e; p++) {
    if ((p == buf || p[-1] == '&') && p[name_len] == '=' &&
        !mg_strncasecmp(name, p, name_len)) {


      p += name_len + 1;


      s = (const char *) memchr(p, '&', e - p);
      if (s == __null) {
        s = e;
      }
      ((s >= p) ? (void)0 : __assert2("webkey-2.09/service/mongoose.cpp", 1668, __PRETTY_FUNCTION__, "s >= p"));


      if ((size_t) (s - p) < dst_len) {
        len = url_decode(p, s - p, dst, dst_len, 1);
      }
      break;
    }
  }

  return len;
}

int mg_get_cookie(const struct mg_connection *conn, const char *cookie_name,
                  char *dst, size_t dst_size) {
  const char *s, *p, *end;
  int name_len, len = -1;

  dst[0] = '\0';
  if ((s = mg_get_header(conn, "Cookie")) == __null) {
    return 0;
  }

  name_len = strlen(cookie_name);
  end = s + strlen(s);

  for (; (s = strstr(s, cookie_name)) != __null; s += name_len)
    if (s[name_len] == '=') {
      s += name_len + 1;
      if ((p = strchr(s, ' ')) == __null)
        p = end;
      if (p[-1] == ';')
        p--;
      if (*s == '"' && p[-1] == '"' && p > s + 1) {
        s++;
        p--;
      }
      if ((size_t) (p - s) < dst_size) {
        len = (p - s) + 1;
        mg_strlcpy(dst, s, len);
      }
      break;
    }

  return len;
}




static int get_document_root(const struct mg_connection *conn,
                             struct vec *document_root) {
  const char *root, *uri;
  int len_of_matched_uri;
  struct vec uri_vec, path_vec;

  uri = conn->request_info.uri;
  len_of_matched_uri = 0;
  root = next_option(conn->ctx->config[DOCUMENT_ROOT], document_root, __null);

  while ((root = next_option(root, &uri_vec, &path_vec)) != __null) {
    if (memcmp(uri, uri_vec.ptr, uri_vec.len) == 0) {
      *document_root = path_vec;
      len_of_matched_uri = uri_vec.len;
      break;
    }
  }

  return len_of_matched_uri;
}

static void convert_uri_to_file_name(struct mg_connection *conn,
                                     struct mg_request_info *ri, char *buf,
                                     size_t buf_len) {
  struct vec vec;
  int match_len;

  buf[0] = 0;
  match_len = get_document_root(conn, &vec);
  if (strncmp(ri->uri,"/files/",7)==0)
  {
   if (ri->permissions & 8)
   {
    if (ri->uri[6]=='/')
     mg_snprintf(conn, buf, buf_len, "/sdcard/public%s", ri->uri+6);
    else
     mg_snprintf(conn, buf, buf_len, "/sdcard/public/%s", ri->uri+6);
   }
   if ((ri->permissions == -1) || (ri->permissions & 32))
    mg_snprintf(conn, buf, buf_len, "%s", ri->uri+6);
  }
  else
   mg_snprintf(conn, buf, buf_len, "%.*s%s", vec.len, vec.ptr, ri->uri + match_len);





  ;
}

static int sslize(struct mg_connection *conn, int (*func)(SSL *)) {
  return (conn->ssl = (* (SSL * (*)(SSL_CTX *)) ssl_sw[7].ptr)(conn->ctx->ssl_ctx)) != __null &&
    (* (int (*)(SSL *, SOCKET)) ssl_sw[6].ptr)(conn->ssl, conn->client.sock) == 1 &&
    func(conn->ssl) == 1;
}

struct mg_connection *mg_connect(struct mg_connection *conn,
                                 const char *host, int port, int use_ssl) {
  struct mg_connection *newconn = __null;
  struct sockaddr_in sin;
  struct hostent *he;
  int sock;

  if (conn->ctx->ssl_ctx == __null && use_ssl) {
    cry(conn, "%s: SSL is not initialized", __PRETTY_FUNCTION__);
  } else if ((he = gethostbyname(host)) == __null) {
    cry(conn, "%s: gethostbyname(%s): %s", __PRETTY_FUNCTION__, host, strerror((*__errno())));
  } else if ((sock = socket(2, 1, 0)) == (-1)) {
    cry(conn, "%s: socket: %s", __PRETTY_FUNCTION__, strerror((*__errno())));
  } else {
    sin.sin_family = 2;
    sin.sin_port = __extension__({ __uint16_t __swap16gen_x = ((uint16_t) port); (__uint16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); });
    sin.sin_addr = * (struct in_addr *) he->h_addr_list[0];
    if (connect(sock, (struct sockaddr *) &sin, sizeof(sin)) != 0) {
      cry(conn, "%s: connect(%s:%d): %s", __PRETTY_FUNCTION__, host, port,
          strerror((*__errno())));
      close(sock);
    } else if ((newconn = (mg_connection*)calloc(1, sizeof(*newconn))) == __null) {
      cry(conn, "%s: calloc: %s", __PRETTY_FUNCTION__, strerror((*__errno())));
      close(sock);
    } else {
      newconn->client.sock = sock;
      newconn->client.rsa.u.sin = sin;
      if (use_ssl) {
        sslize(newconn, (* (int (*)(SSL *)) ssl_sw[2].ptr));
      }
    }
  }

  return newconn;
}





static int get_request_len(const char *buf, int buflen) {
  const char *s, *e;
  int len = 0;

  ;
  for (s = buf, e = s + buflen - 1; len <= 0 && s < e; s++)

    if (!isprint(* (unsigned char *) s) && *s != '\r' &&
        *s != '\n' && * (unsigned char *) s < 128) {
      len = -1;
    } else if (s[0] == '\n' && s[1] == '\n') {
      len = (int) (s - buf) + 2;
    } else if (s[0] == '\n' && &s[1] < e &&
        s[1] == '\r' && s[2] == '\n') {
      len = (int) (s - buf) + 3;
    }

  return len;
}


static int month_number_to_month_name(const char *s) {
  size_t i;

  for (i = 0; i < (sizeof(month_names) / sizeof(month_names[0])); i++)
    if (!strcmp(s, month_names[i]))
      return (int) i;

  return -1;
}


static time_t parse_date_string(const char *s) {
  time_t current_time;
  struct tm tm, *tmp;
  char mon[32];
  int sec, min, hour, mday, month, year;

  (void) memset(&tm, 0, sizeof(tm));
  sec = min = hour = mday = month = year = 0;

  if (((sscanf(s, "%d/%3s/%d %d:%d:%d",
            &mday, mon, &year, &hour, &min, &sec) == 6) ||
        (sscanf(s, "%d %3s %d %d:%d:%d",
                &mday, mon, &year, &hour, &min, &sec) == 6) ||
        (sscanf(s, "%*3s, %d %3s %d %d:%d:%d",
                &mday, mon, &year, &hour, &min, &sec) == 6) ||
        (sscanf(s, "%d-%3s-%d %d:%d:%d",
                &mday, mon, &year, &hour, &min, &sec) == 6)) &&
      (month = month_number_to_month_name(mon)) != -1) {
    tm.tm_mday = mday;
    tm.tm_mon = month;
    tm.tm_year = year;
    tm.tm_hour = hour;
    tm.tm_min = min;
    tm.tm_sec = sec;
  }

  if (tm.tm_year > 1900) {
    tm.tm_year -= 1900;
  } else if (tm.tm_year < 70) {
    tm.tm_year += 100;
  }


  current_time = time(__null);
  tmp = localtime(&current_time);
  tm.tm_isdst = tmp->tm_isdst;

  return mktime(&tm);
}
# 1911 "webkey-2.09/service/mongoose.cpp"
static const struct {
  const char *extension;
  size_t ext_len;
  const char *mime_type;
  size_t mime_type_len;
} builtin_mime_types[] = {
  {".html", 5, "text/html", 9},
  {".htm", 4, "text/html", 9},
  {".shtm", 5, "text/html", 9},
  {".shtml", 6, "text/html", 9},
  {".css", 4, "text/css", 8},
  {".js", 3, "application/x-javascript", 24},
  {".ico", 4, "image/x-icon", 12},
  {".gif", 4, "image/gif", 9},
  {".jpg", 4, "image/jpeg", 10},
  {".jpeg", 5, "image/jpeg", 10},
  {".png", 4, "image/png", 9},
  {".svg", 4, "image/svg+xml", 13},
  {".torrent", 8, "application/x-bittorrent", 24},
  {".wav", 4, "audio/x-wav", 11},
  {".mp3", 4, "audio/x-mp3", 11},
  {".mid", 4, "audio/mid", 9},
  {".m3u", 4, "audio/x-mpegurl", 15},
  {".ram", 4, "audio/x-pn-realaudio", 20},
  {".xml", 4, "text/xml", 8},
  {".xslt", 5, "application/xml", 15},
  {".ra", 3, "audio/x-pn-realaudio", 20},
  {".doc", 4, "application/msword", 19},
  {".exe", 4, "application/octet-stream", 24},
  {".zip", 4, "application/x-zip-compressed", 28},
  {".xls", 4, "application/excel", 17},
  {".tgz", 4, "application/x-tar-gz", 20},
  {".tar", 4, "application/x-tar", 17},
  {".gz", 3, "application/x-gunzip", 20},
  {".arj", 4, "application/x-arj-compressed", 28},
  {".rar", 4, "application/x-arj-compressed", 28},
  {".rtf", 4, "application/rtf", 15},
  {".pdf", 4, "application/pdf", 15},
  {".swf", 4, "application/x-shockwave-flash",29},
  {".mpg", 4, "video/mpeg", 10},
  {".mpeg", 5, "video/mpeg", 10},
  {".asf", 4, "video/x-ms-asf", 14},
  {".avi", 4, "video/x-msvideo", 15},
  {".bmp", 4, "image/bmp", 9},
  {__null, 0, __null, 0}
};



static void get_mime_type(struct mg_context *ctx, const char *path,
                          struct vec *vec) {
  struct vec ext_vec, mime_vec;
  const char *list, *ext;
  size_t i, path_len;

  path_len = strlen(path);



  list = ctx->config[EXTRA_MIME_TYPES];
  while ((list = next_option(list, &ext_vec, &mime_vec)) != __null) {

    ext = path + path_len - ext_vec.len;
    if (mg_strncasecmp(ext, ext_vec.ptr, ext_vec.len) == 0) {
      *vec = mime_vec;
      return;
    }
  }


  for (i = 0; builtin_mime_types[i].extension != __null; i++) {
    ext = path + (path_len - builtin_mime_types[i].ext_len);
    if (path_len > builtin_mime_types[i].ext_len &&
        mg_strcasecmp(ext, builtin_mime_types[i].extension) == 0) {
      vec->ptr = builtin_mime_types[i].mime_type;
      vec->len = builtin_mime_types[i].mime_type_len;
      return;
    }
  }


  vec->ptr = "text/plain";
  vec->len = 10;
}


typedef struct MD5Context {
  uint32_t buf[4];
  uint32_t bits[2];
  unsigned char in[64];
} MD5_CTX;
# 2027 "webkey-2.09/service/mongoose.cpp"
static void MD5Init(MD5_CTX *ctx) {
  ctx->buf[0] = 0x67452301;
  ctx->buf[1] = 0xefcdab89;
  ctx->buf[2] = 0x98badcfe;
  ctx->buf[3] = 0x10325476;

  ctx->bits[0] = 0;
  ctx->bits[1] = 0;
}

static void MD5Transform(uint32_t buf[4], uint32_t const in[16]) {
  register uint32_t a, b, c, d;

  a = buf[0];
  b = buf[1];
  c = buf[2];
  d = buf[3];

  ( a += (d ^ (b & (c ^ d))) + in[0] + 0xd76aa478, a = a<<7 | a>>(32-7), a += b );
  ( d += (c ^ (a & (b ^ c))) + in[1] + 0xe8c7b756, d = d<<12 | d>>(32-12), d += a );
  ( c += (b ^ (d & (a ^ b))) + in[2] + 0x242070db, c = c<<17 | c>>(32-17), c += d );
  ( b += (a ^ (c & (d ^ a))) + in[3] + 0xc1bdceee, b = b<<22 | b>>(32-22), b += c );
  ( a += (d ^ (b & (c ^ d))) + in[4] + 0xf57c0faf, a = a<<7 | a>>(32-7), a += b );
  ( d += (c ^ (a & (b ^ c))) + in[5] + 0x4787c62a, d = d<<12 | d>>(32-12), d += a );
  ( c += (b ^ (d & (a ^ b))) + in[6] + 0xa8304613, c = c<<17 | c>>(32-17), c += d );
  ( b += (a ^ (c & (d ^ a))) + in[7] + 0xfd469501, b = b<<22 | b>>(32-22), b += c );
  ( a += (d ^ (b & (c ^ d))) + in[8] + 0x698098d8, a = a<<7 | a>>(32-7), a += b );
  ( d += (c ^ (a & (b ^ c))) + in[9] + 0x8b44f7af, d = d<<12 | d>>(32-12), d += a );
  ( c += (b ^ (d & (a ^ b))) + in[10] + 0xffff5bb1, c = c<<17 | c>>(32-17), c += d );
  ( b += (a ^ (c & (d ^ a))) + in[11] + 0x895cd7be, b = b<<22 | b>>(32-22), b += c );
  ( a += (d ^ (b & (c ^ d))) + in[12] + 0x6b901122, a = a<<7 | a>>(32-7), a += b );
  ( d += (c ^ (a & (b ^ c))) + in[13] + 0xfd987193, d = d<<12 | d>>(32-12), d += a );
  ( c += (b ^ (d & (a ^ b))) + in[14] + 0xa679438e, c = c<<17 | c>>(32-17), c += d );
  ( b += (a ^ (c & (d ^ a))) + in[15] + 0x49b40821, b = b<<22 | b>>(32-22), b += c );

  ( a += (c ^ (d & (b ^ c))) + in[1] + 0xf61e2562, a = a<<5 | a>>(32-5), a += b );
  ( d += (b ^ (c & (a ^ b))) + in[6] + 0xc040b340, d = d<<9 | d>>(32-9), d += a );
  ( c += (a ^ (b & (d ^ a))) + in[11] + 0x265e5a51, c = c<<14 | c>>(32-14), c += d );
  ( b += (d ^ (a & (c ^ d))) + in[0] + 0xe9b6c7aa, b = b<<20 | b>>(32-20), b += c );
  ( a += (c ^ (d & (b ^ c))) + in[5] + 0xd62f105d, a = a<<5 | a>>(32-5), a += b );
  ( d += (b ^ (c & (a ^ b))) + in[10] + 0x02441453, d = d<<9 | d>>(32-9), d += a );
  ( c += (a ^ (b & (d ^ a))) + in[15] + 0xd8a1e681, c = c<<14 | c>>(32-14), c += d );
  ( b += (d ^ (a & (c ^ d))) + in[4] + 0xe7d3fbc8, b = b<<20 | b>>(32-20), b += c );
  ( a += (c ^ (d & (b ^ c))) + in[9] + 0x21e1cde6, a = a<<5 | a>>(32-5), a += b );
  ( d += (b ^ (c & (a ^ b))) + in[14] + 0xc33707d6, d = d<<9 | d>>(32-9), d += a );
  ( c += (a ^ (b & (d ^ a))) + in[3] + 0xf4d50d87, c = c<<14 | c>>(32-14), c += d );
  ( b += (d ^ (a & (c ^ d))) + in[8] + 0x455a14ed, b = b<<20 | b>>(32-20), b += c );
  ( a += (c ^ (d & (b ^ c))) + in[13] + 0xa9e3e905, a = a<<5 | a>>(32-5), a += b );
  ( d += (b ^ (c & (a ^ b))) + in[2] + 0xfcefa3f8, d = d<<9 | d>>(32-9), d += a );
  ( c += (a ^ (b & (d ^ a))) + in[7] + 0x676f02d9, c = c<<14 | c>>(32-14), c += d );
  ( b += (d ^ (a & (c ^ d))) + in[12] + 0x8d2a4c8a, b = b<<20 | b>>(32-20), b += c );

  ( a += (b ^ c ^ d) + in[5] + 0xfffa3942, a = a<<4 | a>>(32-4), a += b );
  ( d += (a ^ b ^ c) + in[8] + 0x8771f681, d = d<<11 | d>>(32-11), d += a );
  ( c += (d ^ a ^ b) + in[11] + 0x6d9d6122, c = c<<16 | c>>(32-16), c += d );
  ( b += (c ^ d ^ a) + in[14] + 0xfde5380c, b = b<<23 | b>>(32-23), b += c );
  ( a += (b ^ c ^ d) + in[1] + 0xa4beea44, a = a<<4 | a>>(32-4), a += b );
  ( d += (a ^ b ^ c) + in[4] + 0x4bdecfa9, d = d<<11 | d>>(32-11), d += a );
  ( c += (d ^ a ^ b) + in[7] + 0xf6bb4b60, c = c<<16 | c>>(32-16), c += d );
  ( b += (c ^ d ^ a) + in[10] + 0xbebfbc70, b = b<<23 | b>>(32-23), b += c );
  ( a += (b ^ c ^ d) + in[13] + 0x289b7ec6, a = a<<4 | a>>(32-4), a += b );
  ( d += (a ^ b ^ c) + in[0] + 0xeaa127fa, d = d<<11 | d>>(32-11), d += a );
  ( c += (d ^ a ^ b) + in[3] + 0xd4ef3085, c = c<<16 | c>>(32-16), c += d );
  ( b += (c ^ d ^ a) + in[6] + 0x04881d05, b = b<<23 | b>>(32-23), b += c );
  ( a += (b ^ c ^ d) + in[9] + 0xd9d4d039, a = a<<4 | a>>(32-4), a += b );
  ( d += (a ^ b ^ c) + in[12] + 0xe6db99e5, d = d<<11 | d>>(32-11), d += a );
  ( c += (d ^ a ^ b) + in[15] + 0x1fa27cf8, c = c<<16 | c>>(32-16), c += d );
  ( b += (c ^ d ^ a) + in[2] + 0xc4ac5665, b = b<<23 | b>>(32-23), b += c );

  ( a += (c ^ (b | ~d)) + in[0] + 0xf4292244, a = a<<6 | a>>(32-6), a += b );
  ( d += (b ^ (a | ~c)) + in[7] + 0x432aff97, d = d<<10 | d>>(32-10), d += a );
  ( c += (a ^ (d | ~b)) + in[14] + 0xab9423a7, c = c<<15 | c>>(32-15), c += d );
  ( b += (d ^ (c | ~a)) + in[5] + 0xfc93a039, b = b<<21 | b>>(32-21), b += c );
  ( a += (c ^ (b | ~d)) + in[12] + 0x655b59c3, a = a<<6 | a>>(32-6), a += b );
  ( d += (b ^ (a | ~c)) + in[3] + 0x8f0ccc92, d = d<<10 | d>>(32-10), d += a );
  ( c += (a ^ (d | ~b)) + in[10] + 0xffeff47d, c = c<<15 | c>>(32-15), c += d );
  ( b += (d ^ (c | ~a)) + in[1] + 0x85845dd1, b = b<<21 | b>>(32-21), b += c );
  ( a += (c ^ (b | ~d)) + in[8] + 0x6fa87e4f, a = a<<6 | a>>(32-6), a += b );
  ( d += (b ^ (a | ~c)) + in[15] + 0xfe2ce6e0, d = d<<10 | d>>(32-10), d += a );
  ( c += (a ^ (d | ~b)) + in[6] + 0xa3014314, c = c<<15 | c>>(32-15), c += d );
  ( b += (d ^ (c | ~a)) + in[13] + 0x4e0811a1, b = b<<21 | b>>(32-21), b += c );
  ( a += (c ^ (b | ~d)) + in[4] + 0xf7537e82, a = a<<6 | a>>(32-6), a += b );
  ( d += (b ^ (a | ~c)) + in[11] + 0xbd3af235, d = d<<10 | d>>(32-10), d += a );
  ( c += (a ^ (d | ~b)) + in[2] + 0x2ad7d2bb, c = c<<15 | c>>(32-15), c += d );
  ( b += (d ^ (c | ~a)) + in[9] + 0xeb86d391, b = b<<21 | b>>(32-21), b += c );

  buf[0] += a;
  buf[1] += b;
  buf[2] += c;
  buf[3] += d;
}

static void MD5Update(MD5_CTX *ctx, unsigned char const *buf, unsigned len) {
  uint32_t t;

  t = ctx->bits[0];
  if ((ctx->bits[0] = t + ((uint32_t) len << 3)) < t)
    ctx->bits[1]++;
  ctx->bits[1] += len >> 29;

  t = (t >> 3) & 0x3f;

  if (t) {
    unsigned char *p = (unsigned char *) ctx->in + t;

    t = 64 - t;
    if (len < t) {
      memcpy(p, buf, len);
      return;
    }
    memcpy(p, buf, t);
    ;
    MD5Transform(ctx->buf, (uint32_t *) ctx->in);
    buf += t;
    len -= t;
  }

  while (len >= 64) {
    memcpy(ctx->in, buf, 64);
    ;
    MD5Transform(ctx->buf, (uint32_t *) ctx->in);
    buf += 64;
    len -= 64;
  }

  memcpy(ctx->in, buf, len);
}

static void MD5Final(unsigned char digest[16], MD5_CTX *ctx) {
  unsigned count;
  unsigned char *p;

  count = (ctx->bits[0] >> 3) & 0x3F;

  p = ctx->in + count;
  *p++ = 0x80;
  count = 64 - 1 - count;
  if (count < 8) {
    memset(p, 0, count);
    ;
    MD5Transform(ctx->buf, (uint32_t *) ctx->in);
    memset(ctx->in, 0, 56);
  } else {
    memset(p, 0, count - 8);
  }
  ;

  ((uint32_t *) ctx->in)[14] = ctx->bits[0];
  ((uint32_t *) ctx->in)[15] = ctx->bits[1];

  MD5Transform(ctx->buf, (uint32_t *) ctx->in);
  ;
  memcpy(digest, ctx->buf, 16);
  memset((char *) ctx, 0, sizeof(ctx));
}




static void bin2str(char *to, const unsigned char *p, size_t len) {
  static const char *hex = "0123456789abcdef";

  for (; len--; p++) {
    *to++ = hex[p[0] >> 4];
    *to++ = hex[p[0] & 0x0f];
  }
  *to = '\0';
}


void mg_md5(char *buf, ...) {
  unsigned char hash[16];
  const char *p;
  va_list ap;
  MD5_CTX ctx;

  MD5Init(&ctx);

  __builtin_va_start(ap,buf);
  while ((p = __builtin_va_arg(ap,const char *)) != __null) {
    MD5Update(&ctx, (unsigned char *) p, (int) strlen(p));
  }
  __builtin_va_end(ap);

  MD5Final(hash, &ctx);
  bin2str(buf, hash, sizeof(hash));
}


static int check_password(const char *method, const char *ha1, const char *uri,
                          const char *nonce, const char *nc, const char *cnonce,
                          const char *qop, const char *response, const __u32 ip) {
  char ha2[32 + 1], expected_response[32 + 1];



  char* end = __null;
  unsigned long nonce_int = strtoul(nonce,&end,10);
  if (!end || *end != '_' || *(end+1)==0)
   return 0;
  __u32 rem_ip = strtoul(end+1,__null,10);
  unsigned long now = (unsigned long) time(__null);
  if (
      !response ||
      strlen(response) != 32
      || now - nonce_int > 3600
      || now + 60 < nonce_int
      || rem_ip != ip
      ) {

    return 0;
  }


  mg_md5(ha2, method, ":", uri, __null);
  mg_md5(expected_response, ha1, ":", nonce, ":", nc,
      ":", cnonce, ":", qop, ":", ha2, __null);




  return mg_strcasecmp(response, expected_response) == 0;
}



static FILE *open_auth_file(struct mg_connection *conn, const char *path) {
  struct mg_context *ctx = conn->ctx;
  char name[4096];
  const char *p, *e;
  struct mgstat st;
  FILE *fp;

  if (ctx->config[GLOBAL_PASSWORDS_FILE] != __null) {

    fp = fopen(ctx->config[GLOBAL_PASSWORDS_FILE], "r");
    if (fp == __null)
      cry(fc(ctx), "fopen(%s): %s",
          ctx->config[GLOBAL_PASSWORDS_FILE], strerror((*__errno())));
  } else if (!mg_stat(path, &st) && st.is_directory) {
    (void) mg_snprintf(conn, name, sizeof(name), "%s%c%s",
        path, '/', "passwords.txt");
    fp = fopen(name, "r");
  } else {

    for (p = path, e = p + strlen(p) - 1; e > p; e--)
      if (((*e) == '/'))
        break;
    (void) mg_snprintf(conn, name, sizeof(name), "%.*s%c%s",
        (int) (e - p), p, '/', "passwords.txt");
    fp = fopen(name, "r");
  }

  return fp;
}


struct ah {
  char *user, *uri, *cnonce, *response, *qop, *nc, *nonce;
};

static int parse_auth_header(struct mg_connection *conn, char *buf,
                             size_t buf_size, struct ah *ah) {
  char *name, *value, *s;
  const char *auth_header;

  if ((auth_header = mg_get_header(conn, "Authorization")) == __null ||
      mg_strncasecmp(auth_header, "Digest ", 7) != 0) {
    return 0;
  }


  (void) mg_strlcpy(buf, auth_header + 7, buf_size);

  s = buf;
  (void) memset(ah, 0, sizeof(*ah));


  while (isspace(* (unsigned char *) s)) {
    s++;
  }


  for (;;) {
    name = skip(&s, "=");
    value = skip(&s, ",");
# 2321 "webkey-2.09/service/mongoose.cpp"
    if (value[strlen(value) - 1] == ',') {
      value[strlen(value) - 1] = '\0';
    }


    if (name[0] == ' ') {
      name++;
    }


    if (*value == '"') {
      value++;
      value[strlen(value) - 1] = '\0';
    } else if (*value == '\0') {
      break;
    }

    if (!strcmp(name, "username")) {
      ah->user = value;
    } else if (!strcmp(name, "cnonce")) {
      ah->cnonce = value;
    } else if (!strcmp(name, "response")) {
      ah->response = value;
    } else if (!strcmp(name, "uri")) {
      ah->uri = value;
    } else if (!strcmp(name, "qop")) {
      ah->qop = value;
    } else if (!strcmp(name, "nc")) {
      ah->nc = value;
    } else if (!strcmp(name, "nonce")) {
      ah->nonce = value;
    }
  }


  if (ah->user != __null) {
    conn->request_info.remote_user = mg_strdup(ah->user);
  }

  return 1;
}


static int authorize(struct mg_connection *conn, FILE *fp) {
  struct ah ah;
  char line[256], f_user[256], ha1[256], f_domain[256], buf[1024];

  if (!parse_auth_header(conn, buf, sizeof(buf), &ah)) {
    return 0;
  }





  while (fgets(line, sizeof(line), fp) != __null) {
    int permissions = -1;
    if (sscanf(line, "%[^:]:%[^:]:%[^:]:%d", f_user, f_domain, ha1, &permissions) < 3) {
      continue;
    }
    if (ha1[strlen(ha1)-1] == 10)
     ha1[strlen(ha1)-1] = 0;

    if (!strcmp(ah.user, f_user) &&
        !strcmp(conn->ctx->config[AUTHENTICATION_DOMAIN], f_domain))
    {
      conn->request_info.permissions = permissions;
      return check_password(
            conn->request_info.request_method,
            ha1, ah.uri, ah.nonce, ah.nc, ah.cnonce, ah.qop,
            ah.response, conn->request_info.remote_ip);
    }
  }
# 2403 "webkey-2.09/service/mongoose.cpp"
  return 0;
}


static int check_authorization(struct mg_connection *conn, const char *path) {
  FILE *fp;
  char fname[4096];
  struct vec uri_vec, filename_vec;
  const char *list;
  int authorized;

  fp = __null;
  authorized = 1;

  list = conn->ctx->config[PROTECT_URI];
  while ((list = next_option(list, &uri_vec, &filename_vec)) != __null) {
    if (!memcmp(conn->request_info.uri, uri_vec.ptr, uri_vec.len)) {
      (void) mg_snprintf(conn, fname, sizeof(fname), "%.*s",
          filename_vec.len, filename_vec.ptr);
      if (strlen(fname) && (fp = fopen(fname, "r")) == __null) {
        cry(conn, "%s: cannot open %s: %s", __PRETTY_FUNCTION__, fname, strerror((*__errno())));
      }
      break;
    }
  }

  if (fp == __null) {
    fp = open_auth_file(conn, path);
  }

  if (fp != __null) {
    authorized = authorize(conn, fp);
    (void) fclose(fp);
  }

  return authorized;
}

static void send_authorization_request(struct mg_connection *conn) {
  conn->request_info.status_code = 401;
  (void) mg_printf(conn,
      "HTTP/1.1 401 Unauthorized\r\nConnection: close\r\n"
      "WWW-Authenticate: Digest qop=\"auth\", "
      "realm=\"%s\", nonce=\"%lu_%lu\"\r\n\r\n",
      conn->ctx->config[AUTHENTICATION_DOMAIN],
      (unsigned long) time(__null),(unsigned long)conn->request_info.remote_ip);
}

static int is_authorized_for_put(struct mg_connection *conn) {
  FILE *fp;
  int ret = 0;

  fp = conn->ctx->config[PUT_DELETE_PASSWORDS_FILE] == __null ? __null :
    fopen(conn->ctx->config[PUT_DELETE_PASSWORDS_FILE], "r");

  if (fp != __null) {
    ret = authorize(conn, fp);
    (void) fclose(fp);
  }

  return ret;
}

int mg_modify_passwords_file(struct mg_context *ctx, const char *fname,
                             const char *user, const char *pass, int permissions) {
  int found;
  char line[512], u[512], d[512], p[512], ha1[33], tmp[4096];
  const char *domain;
  FILE *fp, *fp2;

  found = 0;
  fp = fp2 = __null;
  domain = ctx->config[AUTHENTICATION_DOMAIN];


  if (pass[0] == '\0') {
    pass = __null;
  }

  (void) snprintf(tmp, sizeof(tmp), "%s.tmp", fname);


  if ((fp = fopen(fname, "a+")) != __null) {
    (void) fclose(fp);
  }


  if ((fp = fopen(fname, "r")) == __null) {
    cry(fc(ctx), "Cannot open %s: %s", fname, strerror((*__errno())));
    return 0;
  } else if ((fp2 = fopen(tmp, "w+")) == __null) {
    cry(fc(ctx), "Cannot open %s: %s", tmp, strerror((*__errno())));
    return 0;
  }

  int perm;

  while (fgets(line, sizeof(line), fp) != __null) {
    perm = -1;
    if (sscanf(line, "%[^:]:%[^:]:%[^:]:%d", u, d, p, &perm) < 3) {
      continue;
    }
    if (p[strlen(p)-1] == 10)
     p[strlen(p)-1] = 0;




    if (!strcmp(u, user) && !strcmp(d, domain)) {
      found++;
      if (permissions == -2)
      {
       if (pass != __null) {
  mg_md5(ha1, user, ":", domain, ":", pass, __null);
  fprintf(fp2, "%s:%s:%s:%d\n", user, domain, ha1, perm);
       }
      }
      else
      {
  fprintf(fp2, "%s:%s:%s:%d\n", u, d, p, permissions);
      }
     } else{
      (void) fprintf(fp2, "%s", line);
    }
  }


  if (!found && pass != __null) {
    mg_md5(ha1, user, ":", domain, ":", pass, __null);
    (void) fprintf(fp2, "%s:%s:%s:%d\n", user, domain, ha1, -1);
  }


  (void) fclose(fp);
  (void) fclose(fp2);


  (void) remove(fname);
  (void) rename(tmp, fname);

  return 1;
}

struct de {
  struct mg_connection *conn;
  char *file_name;
  struct mgstat st;
};

static void url_encode(const char *src, char *dst, size_t dst_len) {
  static const char *dont_escape = "._-$,;~()";
  static const char *hex = "0123456789abcdef";
  const char *end = dst + dst_len - 1;

  for (; *src != '\0' && dst < end; src++, dst++) {
    if (isalnum(*(unsigned char *) src) ||
        strchr(dont_escape, * (unsigned char *) src) != __null) {
      *dst = *src;
    } else if (dst + 2 < end) {
      dst[0] = '%';
      dst[1] = hex[(* (unsigned char *) src) >> 4];
      dst[2] = hex[(* (unsigned char *) src) & 0xf];
      dst += 2;
    }
  }

  *dst = '\0';
}

static void print_dir_entry(struct de *de) {
  char size[64], mod[64], href[4096];

  if (de->st.is_directory) {
    (void) mg_snprintf(de->conn, size, sizeof(size), "%s", "[DIRECTORY]");
  } else {


    if (de->st.size < 1024) {
      (void) mg_snprintf(de->conn, size, sizeof(size),
          "%lu", (unsigned long) de->st.size);
    } else if (de->st.size < 1024 * 1024) {
      (void) mg_snprintf(de->conn, size, sizeof(size),
          "%.1fk", (double) de->st.size / 1024.0);
    } else if (de->st.size < 1024 * 1024 * 1024) {
      (void) mg_snprintf(de->conn, size, sizeof(size),
          "%.1fM", (double) de->st.size / 1048576);
    } else {
      (void) mg_snprintf(de->conn, size, sizeof(size),
          "%.1fG", (double) de->st.size / 1073741824);
    }
  }
  (void) strftime(mod, sizeof(mod), "%d-%b-%Y %H:%M", localtime(&de->st.mtime));
  url_encode(de->file_name, href, sizeof(href));





  de->conn->num_bytes_sent += mg_printf(de->conn,
      "<tr><td><a href=\"%s%s\">%s%s</a></td>"
      "<td>&nbsp;%s</td><td>&nbsp;&nbsp;%s</td></tr>\n",
      href, de->st.is_directory ? "/" : "",
      de->file_name, de->st.is_directory ? "/" : "", mod, size);
}





static int compare_dir_entries(const void *p1, const void *p2) {
  const struct de *a = (struct de *) p1, *b = (struct de *) p2;
  const char *query_string = a->conn->request_info.query_string;
  int cmp_result = 0;

  if (query_string == __null) {
    query_string = "na";
  }

  if (a->st.is_directory && !b->st.is_directory) {
    return -1;
  } else if (!a->st.is_directory && b->st.is_directory) {
    return 1;
  } else if (*query_string == 'n') {
    cmp_result = strcmp(a->file_name, b->file_name);
  } else if (*query_string == 's') {
    cmp_result = a->st.size == b->st.size ? 0 :
      a->st.size > b->st.size ? 1 : -1;
  } else if (*query_string == 'd') {
    cmp_result = a->st.mtime == b->st.mtime ? 0 :
      a->st.mtime > b->st.mtime ? 1 : -1;
  }

  return query_string[1] == 'd' ? -cmp_result : cmp_result;
}

static void handle_directory_request(struct mg_connection *conn,
                                     const char *dir) {
  struct dirent *dp;
  DIR *dirp;
  struct de *entries = __null;
  char path[4096];
  int i, sort_direction, num_entries = 0, arr_size = 128;

  if ((dirp = opendir(dir)) == __null) {
    send_http_error(conn, 500, "Cannot open directory",
        "Error: opendir(%s): %s", path, strerror((*__errno())));
    return;
  }

  (void) mg_printf(conn, "%s",
      "HTTP/1.1 200 OK\r\n"
      "Connection: close\r\n"
      "Content-Type: text/html; charset=utf-8\r\n\r\n");

  sort_direction = conn->request_info.query_string != __null &&
    conn->request_info.query_string[1] == 'd' ? 'a' : 'd';

  while ((dp = readdir(dirp)) != __null) {


    if (!strcmp(dp->d_name, ".") ||
        !strcmp(dp->d_name, "..") ||
        !strcmp(dp->d_name, "passwords.txt"))
      continue;

    if (entries == __null || num_entries >= arr_size) {
      arr_size *= 2;
      entries = (struct de *) realloc(entries,
          arr_size * sizeof(entries[0]));
    }

    if (entries == __null) {
      send_http_error(conn, 500, "Cannot open directory",
          "%s", "Error: cannot allocate memory");
      return;
    }

    mg_snprintf(conn, path, sizeof(path), "%s%c%s", dir, '/', dp->d_name);






    if (mg_stat(path, &entries[num_entries].st) != 0) {
      memset(&entries[num_entries].st, 0, sizeof(entries[num_entries].st));
    }

    entries[num_entries].conn = conn;
    entries[num_entries].file_name = mg_strdup(dp->d_name);
    num_entries++;
  }
  (void) closedir(dirp);

  int shift = 0;
  if (strncmp(conn->request_info.uri,"/files/",7)==0)
   shift+=6;


  conn->num_bytes_sent += mg_printf(conn,
      "<html><head><title>Index of %s</title>"
      "<style>th {text-align: left;}</style></head>"
      "<body><h1>Index of %s</h1><pre><table cellpadding=\"0\">"
      "<tr><th><a href=\"?n%c\">Name</a></th>"
      "<th><a href=\"?d%c\">Modified</a></th>"
      "<th><a href=\"?s%c\">Size</a></th></tr>"
      "<tr><td colspan=\"3\"><hr></td></tr>",

      dir,dir,
      sort_direction, sort_direction, sort_direction);


  if (strcmp(conn->request_info.uri,"/files/")!=0)




  conn->num_bytes_sent += mg_printf(conn,
      "<tr><td><a href=\"%s\">%s</a></td>"
      "<td>&nbsp;%s</td><td>&nbsp;&nbsp;%s</td></tr>\n",
      "..", "Parent directory", "-", "-");


  qsort(entries, num_entries, sizeof(entries[0]), compare_dir_entries);
  for (i = 0; i < num_entries; i++) {
    print_dir_entry(&entries[i]);
    free(entries[i].file_name);
  }
  free(entries);

  conn->num_bytes_sent += mg_printf(conn, "%s", "</table></body></html>");
  conn->request_info.status_code = 200;
}


static void send_file_data(struct mg_connection *conn, FILE *fp, int64_t len) {
  char buf[1024];
  int to_read, num_read, num_written;

  while (len > 0) {

    to_read = sizeof(buf);
    if ((int64_t) to_read > len)
      to_read = (int) len;


    if ((num_read = fread(buf, 1, to_read, fp)) == 0)
      break;


    if ((num_written = mg_write(conn, buf, num_read)) != num_read)
      break;


    conn->num_bytes_sent += num_written;
    len -= num_written;
  }
}

static int parse_range_header(const char *header, int64_t *a, int64_t *b) {
  return sscanf(header, "bytes=%" "lld" "-%" "lld", a, b);
}

static void handle_file_request(struct mg_connection *conn, const char *path,
                                struct mgstat *stp) {
  char date[64], lm[64], etag[64], range[64];
  const char *fmt = "%a, %d %b %Y %H:%M:%S %Z", *msg = "OK", *hdr;
  time_t curtime = time(__null);
  int64_t cl, r1, r2;
  struct vec mime_vec;
  FILE *fp;
  int n;

  get_mime_type(conn->ctx, path, &mime_vec);
  cl = stp->size;
  conn->request_info.status_code = 200;
  range[0] = '\0';

  if ((fp = fopen(path, "rb")) == __null) {
    send_http_error(conn, 500, http_500_error,
        "fopen(%s): %s", path, strerror((*__errno())));
    return;
  }
  set_close_on_exec(((fp)->_file));


  r1 = r2 = 0;
  hdr = mg_get_header(conn, "Range");
  if (hdr != __null && (n = parse_range_header(hdr, &r1, &r2)) > 0) {
    conn->request_info.status_code = 206;
    (void) fseeko(fp, (off_t) r1, 0);
    cl = n == 2 ? r2 - r1 + 1: cl - r1;
    (void) mg_snprintf(conn, range, sizeof(range),
        "Content-Range: bytes "
        "%" "lld" "-%"
        "lld" "/%" "lld" "\r\n",
        r1, r1 + cl - 1, stp->size);
    msg = "Partial Content";
  }


  (void) strftime(date, sizeof(date), fmt, localtime(&curtime));
  (void) strftime(lm, sizeof(lm), fmt, localtime(&stp->mtime));
  (void) mg_snprintf(conn, etag, sizeof(etag), "%lx.%lx",
      (unsigned long) stp->mtime, (unsigned long) stp->size);

  if (cl)
   (void) mg_printf(conn,
       "HTTP/1.1 %d %s\r\n"
       "Date: %s\r\n"
       "Last-Modified: %s\r\n"
       "Etag: \"%s\"\r\n"
       "Content-Type: %.*s\r\n"
       "Content-Length: %" "lld" "\r\n"
       "Connection: %s\r\n"
       "Accept-Ranges: bytes\r\n"
       "%s\r\n",
       conn->request_info.status_code, msg, date, lm, etag,
       mime_vec.len, mime_vec.ptr, cl, suggest_connection_header(conn), range);
  else
   (void) mg_printf(conn,
       "HTTP/1.1 %d %s\r\n"
       "Date: %s\r\n"
       "Last-Modified: %s\r\n"
       "Etag: \"%s\"\r\n"
       "Content-Type: %.*s\r\n"
       "Connection: %s\r\n"
       "\r\n",
       conn->request_info.status_code, msg, date, lm, etag,
       mime_vec.len, mime_vec.ptr, suggest_connection_header(conn), range);

  if (strcmp(conn->request_info.request_method, "HEAD") != 0) {
    if(cl)
     send_file_data(conn, fp, cl);
    else
   send_file_data(conn, fp, 2147483647);
  }
  (void) fclose(fp);
}



static void parse_http_headers(char **buf, struct mg_request_info *ri) {
  int i;

  for (i = 0; i < (int) (sizeof(ri->http_headers) / sizeof(ri->http_headers[0])); i++) {
    ri->http_headers[i].name = skip(buf, ": ");
    ri->http_headers[i].value = skip(buf, "\r\n");
    if (ri->http_headers[i].name[0] == '\0')
      break;
    ri->num_headers = i + 1;
  }
}

static int is_valid_http_method(const char *method) {
  return !strcmp(method, "GET") || !strcmp(method, "POST") ||
    !strcmp(method, "HEAD") || !strcmp(method, "CONNECT") ||
    !strcmp(method, "PUT") || !strcmp(method, "DELETE");
}


static int parse_http_request(char *buf, struct mg_request_info *ri) {
  int status = 0;


  while (*buf != '\0' && isspace(* (unsigned char *) buf)) {
    buf++;
  }

  ri->request_method = skip(&buf, " ");
  ri->uri = skip(&buf, " ");
  ri->http_version = skip(&buf, "\r\n");

  if (is_valid_http_method(ri->request_method) &&
      strncmp(ri->http_version, "HTTP/", 5) == 0) {
    ri->http_version += 5;
    parse_http_headers(&buf, ri);
    status = 1;
  }

  return status;
}






static int read_request(FILE *fp, SOCKET sock, SSL *ssl, char *buf, int bufsiz,
                        int *nread) {
  int n, request_len;

  request_len = 0;
  while (*nread < bufsiz && request_len == 0) {
    n = pull(fp, sock, ssl, buf + *nread, bufsiz - *nread);
    if (n <= 0) {
      break;
    } else {
      *nread += n;
      request_len = get_request_len(buf, *nread);
    }
  }

  return request_len;
}




static int substitute_index_file(struct mg_connection *conn, char *path,
                                 size_t path_len, struct mgstat *stp) {
  const char *list = conn->ctx->config[INDEX_FILES];
  struct mgstat st;
  struct vec filename_vec;
  size_t n = strlen(path);
  int found = 0;




  while (n > 0 && ((path[n - 1]) == '/') && (n>1 || path[0] != '/')) {
    n--;
  }
  path[n] = '/';



  while ((list = next_option(list, &filename_vec, __null)) != __null) {


    if (filename_vec.len > path_len - n)
      continue;


    (void) mg_strlcpy(path + n + 1, filename_vec.ptr, filename_vec.len + 1);


    if (mg_stat(path, &st) == 0) {

      *stp = st;
      found = 1;
      break;
    }
  }


  if (!found) {
    path[n] = '\0';
  }

  return found;
}


static int is_not_modified(const struct mg_connection *conn,
                           const struct mgstat *stp) {
  const char *ims = mg_get_header(conn, "If-Modified-Since");
  return ims != __null && stp->mtime <= parse_date_string(ims);
}

static int forward_body_data(struct mg_connection *conn, FILE *fp,
                             SOCKET sock, SSL *ssl) {
  const char *expect, *buffered;
  char buf[1024];
  int to_read, nread, buffered_len, success = 0;

  expect = mg_get_header(conn, "Expect");
  ((fp != __null) ? (void)0 : __assert2("webkey-2.09/service/mongoose.cpp", 2970, __PRETTY_FUNCTION__, "fp != NULL"));

  if (conn->content_len == -1) {
    send_http_error(conn, 411, "Length Required", "");
  } else if (expect != __null && mg_strcasecmp(expect, "100-continue")) {
    send_http_error(conn, 417, "Expectation Failed", "");
  } else {
    if (expect != __null) {
      (void) mg_printf(conn, "%s", "HTTP/1.1 100 Continue\r\n\r\n");
    }

    buffered = conn->buf + conn->request_len;
    buffered_len = conn->data_len - conn->request_len;
    ((buffered_len >= 0) ? (void)0 : __assert2("webkey-2.09/service/mongoose.cpp", 2983, __PRETTY_FUNCTION__, "buffered_len >= 0"));
    ((conn->consumed_content == 0) ? (void)0 : __assert2("webkey-2.09/service/mongoose.cpp", 2984, __PRETTY_FUNCTION__, "conn->consumed_content == 0"));

    if (buffered_len > 0) {
      if ((int64_t) buffered_len > conn->content_len) {
        buffered_len = (int) conn->content_len;
      }
      push(fp, sock, ssl, buffered, (int64_t) buffered_len);
      conn->consumed_content += buffered_len;
    }

    while (conn->consumed_content < conn->content_len) {
      to_read = sizeof(buf);
      if ((int64_t) to_read > conn->content_len - conn->consumed_content) {
        to_read = (int) (conn->content_len - conn->consumed_content);
      }
      nread = pull(__null, conn->client.sock, conn->ssl, buf, to_read);
      if (nread <= 0 || push(fp, sock, ssl, buf, nread) != nread) {
        break;
      }
      conn->consumed_content += nread;
    }

    if (conn->consumed_content == conn->content_len) {
      success = 1;
    }


    if (!success) {
      send_http_error(conn, 577, http_500_error, "");
    }
  }

  return success;
}
# 3028 "webkey-2.09/service/mongoose.cpp"
struct cgi_env_block {
  struct mg_connection *conn;
  char buf[4096];
  int len;
  char *vars[64];
  int nvars;
};



static char *addenv(struct cgi_env_block *block, const char *fmt, ...) {
  int n, space;
  char *added;
  va_list ap;


  space = sizeof(block->buf) - block->len - 2;
  ((space >= 0) ? (void)0 : __assert2("webkey-2.09/service/mongoose.cpp", 3045, __PRETTY_FUNCTION__, "space >= 0"));


  added = block->buf + block->len;


  __builtin_va_start(ap,fmt);
  n = mg_vsnprintf(block->conn, added, (size_t) space, fmt, ap);
  __builtin_va_end(ap);


  if (n > 0 && n < space &&
      block->nvars < (int) (sizeof(block->vars) / sizeof(block->vars[0])) - 2) {

    block->vars[block->nvars++] = block->buf + block->len;

    block->len += n + 1;
  }

  return added;
}

static void prepare_cgi_environment(struct mg_connection *conn,
                                    const char *prog,
                                    struct cgi_env_block *blk) {
  const char *s, *slash;
  struct vec var_vec, root;
  char *p;
  int i;

  blk->len = blk->nvars = 0;
  blk->conn = conn;

  get_document_root(conn, &root);

  addenv(blk, "SERVER_NAME=%s", conn->ctx->config[AUTHENTICATION_DOMAIN]);
  addenv(blk, "SERVER_ROOT=%.*s", root.len, root.ptr);
  addenv(blk, "DOCUMENT_ROOT=%.*s", root.len, root.ptr);


  addenv(blk, "%s", "GATEWAY_INTERFACE=CGI/1.1");
  addenv(blk, "%s", "SERVER_PROTOCOL=HTTP/1.1");
  addenv(blk, "%s", "REDIRECT_STATUS=200");
  addenv(blk, "SERVER_PORT=%d", __extension__({ __uint16_t __swap16gen_x = (conn->client.lsa.u.sin.sin_port); (__uint16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }));
  addenv(blk, "REQUEST_METHOD=%s", conn->request_info.request_method);
  addenv(blk, "REMOTE_ADDR=%s",
      inet_ntoa(conn->client.rsa.u.sin.sin_addr));
  addenv(blk, "REMOTE_PORT=%d", conn->request_info.remote_port);
  addenv(blk, "REQUEST_URI=%s", conn->request_info.uri);


  ((conn->request_info.uri[0] == '/') ? (void)0 : __assert2("webkey-2.09/service/mongoose.cpp", 3096, __PRETTY_FUNCTION__, "conn->request_info.uri[0] == '/'"));
  slash = strrchr(conn->request_info.uri, '/');
  if ((s = strrchr(prog, '/')) == __null)
    s = prog;
  addenv(blk, "SCRIPT_NAME=%.*s%s", slash - conn->request_info.uri,
         conn->request_info.uri, s);

  addenv(blk, "SCRIPT_FILENAME=%s", prog);
  addenv(blk, "PATH_TRANSLATED=%s", prog);
  addenv(blk, "HTTPS=%s", conn->ssl == __null ? "off" : "on");

  if ((s = mg_get_header(conn, "Content-Type")) != __null)
    addenv(blk, "CONTENT_TYPE=%s", s);

  if (conn->request_info.query_string != __null)
    addenv(blk, "QUERY_STRING=%s", conn->request_info.query_string);

  if ((s = mg_get_header(conn, "Content-Length")) != __null)
    addenv(blk, "CONTENT_LENGTH=%s", s);

  if ((s = getenv("PATH")) != __null)
    addenv(blk, "PATH=%s", s);







  if ((s = getenv("LD_LIBRARY_PATH")) != __null)
    addenv(blk, "LD_LIBRARY_PATH=%s", s);


  if ((s = getenv("PERLLIB")) != __null)
    addenv(blk, "PERLLIB=%s", s);

  if (conn->request_info.remote_user != __null) {
    addenv(blk, "REMOTE_USER=%s", conn->request_info.remote_user);
    addenv(blk, "%s", "AUTH_TYPE=Digest");
  }


  for (i = 0; i < conn->request_info.num_headers; i++) {
    p = addenv(blk, "HTTP_%s=%s",
        conn->request_info.http_headers[i].name,
        conn->request_info.http_headers[i].value);


    for (; *p != '=' && *p != '\0'; p++) {
      if (*p == '-')
        *p = '_';
      *p = (char) toupper(* (unsigned char *) p);
    }
  }


  s = conn->ctx->config[CGI_ENVIRONMENT];
  while ((s = next_option(s, &var_vec, __null)) != __null) {
    addenv(blk, "%.*s", var_vec.len, var_vec.ptr);
  }

  blk->vars[blk->nvars++] = __null;
  blk->buf[blk->len++] = '\0';

  ((blk->nvars < (int) (sizeof(blk->vars) / sizeof(blk->vars[0]))) ? (void)0 : __assert2("webkey-2.09/service/mongoose.cpp", 3160, __PRETTY_FUNCTION__, "blk->nvars < (int) ARRAY_SIZE(blk->vars)"));
  ((blk->len > 0) ? (void)0 : __assert2("webkey-2.09/service/mongoose.cpp", 3161, __PRETTY_FUNCTION__, "blk->len > 0"));
  ((blk->len < (int) sizeof(blk->buf)) ? (void)0 : __assert2("webkey-2.09/service/mongoose.cpp", 3162, __PRETTY_FUNCTION__, "blk->len < (int) sizeof(blk->buf)"));
}

static void handle_cgi_request(struct mg_connection *conn, const char *prog) {
  int headers_len, data_len, i, fd_stdin[2], fd_stdout[2];
  const char *status;
  char buf[1024], *pbuf, dir[4096], *p;
  struct mg_request_info ri;
  struct cgi_env_block blk;
  FILE *in, *out;
  pid_t pid;

  prepare_cgi_environment(conn, prog, &blk);




  (void) mg_snprintf(conn, dir, sizeof(dir), "%s", prog);
  if ((p = strrchr(dir, '/')) != __null) {
    *p++ = '\0';
  } else {
    dir[0] = '.', dir[1] = '\0';
    p = (char *) prog;
  }

  pid = (pid_t) -1;
  fd_stdin[0] = fd_stdin[1] = fd_stdout[0] = fd_stdout[1] = -1;
  in = out = __null;

  if (pipe(fd_stdin) != 0 || pipe(fd_stdout) != 0) {
    send_http_error(conn, 500, http_500_error,
        "Cannot create CGI pipe: %s", strerror((*__errno())));
    goto done;
  } else if ((pid = spawn_process(conn, p, blk.buf, blk.vars,
          fd_stdin[0], fd_stdout[1], dir)) == (pid_t) -1) {
    goto done;
  } else if ((in = fdopen(fd_stdin[1], "wb")) == __null ||
      (out = fdopen(fd_stdout[0], "rb")) == __null) {
    send_http_error(conn, 500, http_500_error,
        "fopen: %s", strerror((*__errno())));
    goto done;
  }

  setbuf(in, __null);
  setbuf(out, __null);





  fd_stdin[0] = fd_stdout[1] = -1;


  if (!strcmp(conn->request_info.request_method, "POST") &&
      !forward_body_data(conn, in, (-1), __null)) {
    goto done;
  }





  data_len = 0;
  headers_len = read_request(out, (-1), __null,
      buf, sizeof(buf), &data_len);
  if (headers_len <= 0) {
    send_http_error(conn, 500, http_500_error,
                    "CGI program sent malformed HTTP headers: [%.*s]",
                    data_len, buf);
    goto done;
  }
  pbuf = buf;
  buf[headers_len - 1] = '\0';
  parse_http_headers(&pbuf, &ri);


  status = get_header(&ri, "Status");
  conn->request_info.status_code = status == __null ? 200 : atoi(status);
  (void) mg_printf(conn, "HTTP/1.1 %d OK\r\n", conn->request_info.status_code);


  for (i = 0; i < ri.num_headers; i++) {
    mg_printf(conn, "%s: %s\r\n",
              ri.http_headers[i].name, ri.http_headers[i].value);
  }
  (void) mg_write(conn, "\r\n", 2);


  conn->num_bytes_sent += mg_write(conn, buf + headers_len,
                                   data_len - headers_len);


  send_file_data(conn, out, 2147483647);

done:
  if (pid != (pid_t) -1) {
    kill(pid, 9);

    do {} while (waitpid(-1, &i, 0x00000001) > 0);

  }
  if (fd_stdin[0] != -1) {
    (void) close(fd_stdin[0]);
  }
  if (fd_stdout[1] != -1) {
    (void) close(fd_stdout[1]);
  }

  if (in != __null) {
    (void) fclose(in);
  } else if (fd_stdin[1] != -1) {
    (void) close(fd_stdin[1]);
  }

  if (out != __null) {
    (void) fclose(out);
  } else if (fd_stdout[0] != -1) {
    (void) close(fd_stdout[0]);
  }
}





static int put_dir(const char *path) {
  char buf[4096];
  const char *s, *p;
  struct mgstat st;
  size_t len;

  for (s = p = path + 2; (p = strchr(s, '/')) != __null; s = ++p) {
    len = p - path;
    ((len < sizeof(buf)) ? (void)0 : __assert2("webkey-2.09/service/mongoose.cpp", 3295, __PRETTY_FUNCTION__, "len < sizeof(buf)"));
    (void) memcpy(buf, path, len);
    buf[len] = '\0';


    if (mg_stat(buf, &st) == -1 && mkdir(buf, 0755) != 0) {
      return -1;
    }


    if (p[1] == '\0') {
      return 0;
    }
  }

  return 1;
}

static void put_file(struct mg_connection *conn, const char *path) {
  struct mgstat st;
  const char *range;
  int64_t r1, r2;
  FILE *fp;
  int rc;

  conn->request_info.status_code = mg_stat(path, &st) == 0 ? 200 : 201;

  if ((rc = put_dir(path)) == 0) {
    mg_printf(conn, "HTTP/1.1 %d OK\r\n\r\n", conn->request_info.status_code);
  } else if (rc == -1) {
    send_http_error(conn, 500, http_500_error,
        "put_dir(%s): %s", path, strerror((*__errno())));
  } else if ((fp = fopen(path, "wb+")) == __null) {
    send_http_error(conn, 500, http_500_error,
        "fopen(%s): %s", path, strerror((*__errno())));
  } else {
    set_close_on_exec(((fp)->_file));
    range = mg_get_header(conn, "Content-Range");
    r1 = r2 = 0;
    if (range != __null && parse_range_header(range, &r1, &r2) > 0) {
      conn->request_info.status_code = 206;

      (void) fseeko(fp, (off_t) r1, 0);
    }
    if (forward_body_data(conn, fp, (-1), __null))
      (void) mg_printf(conn, "HTTP/1.1 %d OK\r\n\r\n",
          conn->request_info.status_code);
    (void) fclose(fp);
  }
}

static void send_ssi_file(struct mg_connection *, const char *, FILE *, int);

static void do_ssi_include(struct mg_connection *conn, const char *ssi,
                           char *tag, int include_level) {
  char file_name[1024], path[4096], *p;
  struct vec root;
  int is_ssi;
  FILE *fp;

  get_document_root(conn, &root);



  if (sscanf(tag, " virtual=\"%[^\"]\"", file_name) == 1) {

    (void) mg_snprintf(conn, path, sizeof(path), "%.*s%c%s",
        root.len, root.ptr, '/', file_name);
  } else if (sscanf(tag, " file=\"%[^\"]\"", file_name) == 1) {


    (void) mg_snprintf(conn, path, sizeof(path), "%s", file_name);
  } else if (sscanf(tag, " \"%[^\"]\"", file_name) == 1) {

    (void) mg_snprintf(conn, path, sizeof(path), "%s", ssi);
    if ((p = strrchr(path, '/')) != __null) {
      p[1] = '\0';
    }
    (void) mg_snprintf(conn, path + strlen(path),
        sizeof(path) - strlen(path), "%s", file_name);
  } else {
    cry(conn, "Bad SSI #include: [%s]", tag);
    return;
  }

  if ((fp = fopen(path, "rb")) == __null) {
    cry(conn, "Cannot open SSI #include: [%s]: fopen(%s): %s",
        tag, path, strerror((*__errno())));
  } else {
    set_close_on_exec(((fp)->_file));
    is_ssi = match_extension(path, conn->ctx->config[SSI_EXTENSIONS]);
    if (is_ssi) {
      send_ssi_file(conn, path, fp, include_level + 1);
    } else {
      send_file_data(conn, fp, 2147483647);
    }
    (void) fclose(fp);
  }
}

static void do_ssi_exec(struct mg_connection *conn, char *tag) {
  char cmd[1024];
  FILE *fp;

  if (sscanf(tag, " \"%[^\"]\"", cmd) != 1) {
    cry(conn, "Bad SSI #exec: [%s]", tag);
  } else if ((fp = popen(cmd, "r")) == __null) {
    cry(conn, "Cannot SSI #exec: [%s]: %s", cmd, strerror((*__errno())));
  } else {
    send_file_data(conn, fp, 2147483647);
    (void) pclose(fp);
  }
}

static void send_ssi_file(struct mg_connection *conn, const char *path,
                          FILE *fp, int include_level) {
  char buf[1024];
  int ch, len, in_ssi_tag;

  if (include_level > 10) {
    cry(conn, "SSI #include level is too deep (%s)", path);
    return;
  }

  in_ssi_tag = 0;
  len = 0;

  while ((ch = fgetc(fp)) != (-1)) {
    if (in_ssi_tag && ch == '>') {
      in_ssi_tag = 0;
      buf[len++] = (char) ch;
      buf[len] = '\0';
      ((len <= (int) sizeof(buf)) ? (void)0 : __assert2("webkey-2.09/service/mongoose.cpp", 3427, __PRETTY_FUNCTION__, "len <= (int) sizeof(buf)"));
      if (len < 6 || memcmp(buf, "<!--#", 5) != 0) {

        (void) mg_write(conn, buf, len);
      } else {
        if (!memcmp(buf + 5, "include", 7)) {
          do_ssi_include(conn, path, buf + 12, include_level);
        } else if (!memcmp(buf + 5, "exec", 4)) {
          do_ssi_exec(conn, buf + 9);
        } else {
          cry(conn, "%s: unknown SSI " "command: \"%s\"", path, buf);
        }
      }
      len = 0;
    } else if (in_ssi_tag) {
      if (len == 5 && memcmp(buf, "<!--#", 5) != 0) {

        in_ssi_tag = 0;
      } else if (len == (int) sizeof(buf) - 2) {
        cry(conn, "%s: SSI tag is too large", path);
        len = 0;
      }
      buf[len++] = ch & 0xff;
    } else if (ch == '<') {
      in_ssi_tag = 1;
      if (len > 0) {
        (void) mg_write(conn, buf, len);
      }
      len = 0;
      buf[len++] = ch & 0xff;
    } else {
      buf[len++] = ch & 0xff;
      if (len == (int) sizeof(buf)) {
        (void) mg_write(conn, buf, len);
        len = 0;
      }
    }
  }


  if (len > 0) {
    (void) mg_write(conn, buf, len);
  }
}

static void handle_ssi_file_request(struct mg_connection *conn,
                                    const char *path) {
  FILE *fp;

  if ((fp = fopen(path, "rb")) == __null) {
    send_http_error(conn, 500, http_500_error, "fopen(%s): %s", path,
                    strerror((*__errno())));
  } else {
    set_close_on_exec(((fp)->_file));
    mg_printf(conn, "HTTP/1.1 200 OK\r\n"
              "Content-Type: text/html\r\nConnection: %s\r\n\r\n",
              suggest_connection_header(conn));
    send_ssi_file(conn, path, fp, 0);
    (void) fclose(fp);
  }
}





static void handle_request(struct mg_connection *conn) {
  struct mg_request_info *ri = &conn->request_info;
  char path[4096];
  int uri_len;
  struct mgstat st;




 if (conn->request_info.remote_ip == 2130706433)
 {
  const char* h = get_header(&(conn->request_info),"Host");
  if (h && strncmp(h,"localhost",9)!=0)
  {


   int i = 0;
   while(h[i])
   {
    if (!((h[i]<='9' && h[i] >= '0') || h[i]=='.' || h[i] ==':'))
    {
     mg_printf(conn,"HTTP/1.1 200 OK\r\nConnection: close\r\n\r\n");
     return;
    }
    i++;
   }
  }


 }

;
 bool ajxp_session = false;
 if ((conn->request_info.query_string = strchr(ri->uri, '?')) != __null)
 {
  * conn->request_info.query_string++ = '\0';
# 3549 "webkey-2.09/service/mongoose.cpp"
 }



  bool auth = check_authorization(conn, ri->uri);
  if (strcmp(ri->uri,"/login")==0)
  {
   if (reject_next_request == ri->remote_ip)
   {
    struct timeval tv;
    gettimeofday(&tv,0);
    if (reject_first_time == 0)
    {
     reject_first_time = tv.tv_sec;
     send_authorization_request(conn);
     return;
    }
    else
    {
     if (reject_first_time + 3 <= tv.tv_sec)
     {
      reject_next_request = 0;
      reject_first_time = 0;
     }
     else
     {
      send_authorization_request(conn);
      return;
     }
    }
   }
   else
    reject_next_request = -1;
  }
  if (strcmp(ri->uri,"/logout")==0)
  {
   reject_next_request = ri->remote_ip;
   mg_printf(conn,"HTTP/1.1 200 OK\r\nCache-Control: no-store, no-cache, must-revalidate\r\nCache-Control: post-check=0, pre-check=0\r\nPragma: no-cache\r\nContent-Type: text/html; charset=utf-8\r\nConnection: close\r\n\r\n<html><head><meta http-equiv=\"refresh\" content=\"1;url=login\"></head><body>Warning: The only safe way to log out from a HTTP session is to close the browser. I do my best to make your browser forget your username and password, but there is no standard HTTP method for that. Redirecting...</body></html>");
   return;
  }
  if (strcmp(ri->uri,"/index.html")==0 || strcmp(ri->uri,"/")==0)
   auth = true;
# 3621 "webkey-2.09/service/mongoose.cpp"
  if (ri->remote_user && strcmp(ri->remote_user,"JAVA_CLIENT") == 0)
   ri->remote_user[0] = 0;




  if (upload_random && strncmp(ri->uri+1,upload_random,10) == 0)
  {
   int i = 1;
   while (ri->uri[i+10])
   {
    ri->uri[i] = ri->uri[i+10];
    i++;
   }
   ri->uri[i] = 0;
   auth=true;
   if (ri->remote_user)
  free(ri->remote_user);
   ri->remote_user = (char*)malloc(12);
   if(ri->remote_user)
  strcpy(ri->remote_user,"JAVA_CLIENT");
   printf("JAVA_CLIENT, %s\n",ri->uri);
  }
  else
  {
   if (ri->remote_user == __null)
   {
    ri->remote_user = (char*)malloc(1);
    ri->remote_user[0] = 0;
   }

  }


  uri_len = strlen(ri->uri);
  (void) url_decode(ri->uri, uri_len, ri->uri, uri_len + 1, 0);
  remove_double_dots_and_double_slashes(ri->uri);

  convert_uri_to_file_name(conn, ri, path, sizeof(path));

  char cookie[92];
  if (mg_get_cookie(conn,"lang", cookie, 91) > 0)
  {
   if (strlen(cookie)==2)
    strcpy(ri->language,cookie);
   else
    ri->language[0] = 0;
  }
  else
   ri->language[0] = 0;


  ;
  if (ajxp_session == false && !auth) {
    send_authorization_request(conn);
  } else if (strstr(path, "passwords.txt")) {

    send_http_error(conn, 403, "Forbidden", "Access Forbidden");
  } else if (call_user(conn, MG_NEW_REQUEST) != __null) {

  } else if (conn->ctx->config[DOCUMENT_ROOT] == __null) {
    send_http_error(conn, 404, "Not Found", "Not Found");
  }
# 3700 "webkey-2.09/service/mongoose.cpp"
  else if (mg_stat(path, &st) != 0) {
    send_http_error(conn, 404, "Not Found", "%s", "File not found");
  } else if (st.is_directory && ri->uri[uri_len - 1] != '/') {
    (void) mg_printf(conn,
        "HTTP/1.1 301 Moved Permanently\r\n"
        "Location: %s/\r\n\r\n", ri->uri);
  } else if (st.is_directory &&
             !substitute_index_file(conn, path, sizeof(path), &st)) {
    if (!mg_strcasecmp(conn->ctx->config[ENABLE_DIRECTORY_LISTING], "yes")) {
      handle_directory_request(conn, path);
    } else {
      send_http_error(conn, 403, "Directory Listing Denied",
          "Directory listing denied");
    }
  } else if (match_extension(path, conn->ctx->config[CGI_EXTENSIONS])) {
    if (strcmp(ri->request_method, "POST") &&
        strcmp(ri->request_method, "GET")) {
      send_http_error(conn, 501, "Not Implemented",
          "Method %s is not implemented", ri->request_method);
    } else {
      handle_cgi_request(conn, path);
    }
  } else if (match_extension(path, conn->ctx->config[SSI_EXTENSIONS])) {
    handle_ssi_file_request(conn, path);
  } else if (is_not_modified(conn, &st)) {
    send_http_error(conn, 304, "Not Modified", "");
  } else {
    handle_file_request(conn, path, &st);
  }

}

static void close_all_listening_sockets(struct mg_context *ctx) {
  struct socket *sp, *tmp;
  for (sp = ctx->listening_sockets; sp != __null; sp = tmp) {
    tmp = sp->next;
    (void) close(sp->sock);
    free(sp);
  }
}



static int parse_port_string(const struct vec *vec, struct socket *so) {
  struct usa *usa = &so->lsa;
  int a, b, c, d, port, len;


  memset(so, 0, sizeof(*so));

  if (sscanf(vec->ptr, "%d.%d.%d.%d:%d%n", &a, &b, &c, &d, &port, &len) == 5) {

    usa->u.sin.sin_addr.s_addr = __extension__({ __uint32_t __swap32gen_x = ((a << 24) | (b << 16) | (c << 8) | d); (__uint32_t)((__swap32gen_x & 0xff) << 24 | (__swap32gen_x & 0xff00) << 8 | (__swap32gen_x & 0xff0000) >> 8 | (__swap32gen_x & 0xff000000) >> 24); });
  } else if (sscanf(vec->ptr, "%d%n", &port, &len) == 1) {

    usa->u.sin.sin_addr.s_addr = __extension__({ __uint32_t __swap32gen_x = (((unsigned long int) 0x00000000)); (__uint32_t)((__swap32gen_x & 0xff) << 24 | (__swap32gen_x & 0xff00) << 8 | (__swap32gen_x & 0xff0000) >> 8 | (__swap32gen_x & 0xff000000) >> 24); });
  } else {
    return 0;
  }
  ((len > 0 && len <= (int) vec->len) ? (void)0 : __assert2("webkey-2.09/service/mongoose.cpp", 3759, __PRETTY_FUNCTION__, "len > 0 && len <= (int) vec->len"));

  if (strchr("sp,", vec->ptr[len]) == __null) {
    return 0;
  }

  so->is_ssl = vec->ptr[len] == 's';
  so->is_proxy = vec->ptr[len] == 'p';
  usa->len = sizeof(usa->u.sin);
  usa->u.sin.sin_family = 2;
  usa->u.sin.sin_port = __extension__({ __uint16_t __swap16gen_x = ((uint16_t) port); (__uint16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); });

  return 1;
}

static int set_ports_option(struct mg_context *ctx) {
  const char *list = ctx->config[LISTENING_PORTS];
  int reuseaddr = 1, success = 1;
  SOCKET sock;
  struct vec vec;
  struct socket so, *listener;


  while (success && (list = next_option(list, &vec, __null)) != __null) {
    if (!parse_port_string(&vec, &so)) {
      cry(fc(ctx), "%s: %.*s: invalid port spec. Expecting list of: %s",
          __PRETTY_FUNCTION__, vec.len, vec.ptr, "[IP_ADDRESS:]PORT[s|p]");
      success = 0;
    } else if (so.is_ssl && ctx->ssl_ctx == __null) {
      cry(fc(ctx), "Cannot add SSL socket, is -ssl_cert option set?");
      success = 0;
    } else if ((sock = socket(2, 1, 6)) == (-1) ||



               setsockopt(sock, 1, 2, &reuseaddr,
                          sizeof(reuseaddr)) != 0 ||

               bind(sock, &so.lsa.u.sa, so.lsa.len) != 0 ||
               listen(sock, 20) != 0) {
      close(sock);
      cry(fc(ctx), "%s: cannot bind to %.*s: %s", __PRETTY_FUNCTION__,
          vec.len, vec.ptr, strerror((*__errno())));
      success = 0;
    } else if ((listener = (struct socket*)calloc(1, sizeof(*listener))) == __null) {
      close(sock);
      cry(fc(ctx), "%s: %s", __PRETTY_FUNCTION__, strerror((*__errno())));
      success = 0;
    } else {
      *listener = so;
      listener->sock = sock;
      set_close_on_exec(listener->sock);
      listener->next = ctx->listening_sockets;
      ctx->listening_sockets = listener;
    }
  }


  if (!success) {
    close_all_listening_sockets(ctx);
  }

  return success;
}

static void log_header(const struct mg_connection *conn, const char *header,
                       FILE *fp) {
  const char *header_value;

  if ((header_value = mg_get_header(conn, header)) == __null) {
    (void) fprintf(fp, "%s", " -");
  } else {
    (void) fprintf(fp, " \"%s\"", header_value);
  }
}

static void log_access(const struct mg_connection *conn) {
  const struct mg_request_info *ri;
  FILE *fp;
  char date[64];

  fp = conn->ctx->config[ACCESS_LOG_FILE] == __null ? __null :
    fopen(conn->ctx->config[ACCESS_LOG_FILE], "a+");

  if (fp == __null)
    return;

  (void) strftime(date, sizeof(date), "%d/%b/%Y:%H:%M:%S %z",
      localtime(&conn->birth_time));

  ri = &conn->request_info;



  (void) fprintf(fp,
      "%s - %s [%s] \"%s %s HTTP/%s\" %d %" "lld",
      inet_ntoa(conn->client.rsa.u.sin.sin_addr),
      ri->remote_user == __null ? "-" : ri->remote_user,
      date,
      ri->request_method ? ri->request_method : "-",
      ri->uri ? ri->uri : "-",
      ri->http_version,
      conn->request_info.status_code, conn->num_bytes_sent);
  log_header(conn, "Referer", fp);
  log_header(conn, "User-Agent", fp);
  (void) fputc('\n', fp);
  (void) fflush(fp);


  (void) fclose(fp);
}

static int isbyte(int n) {
  return n >= 0 && n <= 255;
}



static int check_acl(struct mg_context *ctx, const struct usa *usa) {
  int a, b, c, d, n, mask, allowed;
  char flag;
  uint32_t acl_subnet, acl_mask, remote_ip;
  struct vec vec;
  const char *list = ctx->config[ACCESS_CONTROL_LIST];

  if (list == __null) {
    return 1;
  }

  (void) memcpy(&remote_ip, &usa->u.sin.sin_addr, sizeof(remote_ip));


  allowed = '-';

  while ((list = next_option(list, &vec, __null)) != __null) {
    mask = 32;

    if (sscanf(vec.ptr, "%c%d.%d.%d.%d%n", &flag, &a, &b, &c, &d, &n) != 5) {
      cry(fc(ctx), "%s: subnet must be [+|-]x.x.x.x[/x]", __PRETTY_FUNCTION__);
      return -1;
    } else if (flag != '+' && flag != '-') {
      cry(fc(ctx), "%s: flag must be + or -: [%s]", __PRETTY_FUNCTION__, vec.ptr);
      return -1;
    } else if (!isbyte(a)||!isbyte(b)||!isbyte(c)||!isbyte(d)) {
      cry(fc(ctx), "%s: bad ip address: [%s]", __PRETTY_FUNCTION__, vec.ptr);
      return -1;
    } else if (sscanf(vec.ptr + n, "/%d", &mask) == 0) {

    } else if (mask < 0 || mask > 32) {
      cry(fc(ctx), "%s: bad subnet mask: %d [%s]", __PRETTY_FUNCTION__, n, vec.ptr);
      return -1;
    }

    acl_subnet = (a << 24) | (b << 16) | (c << 8) | d;
    acl_mask = mask ? 0xffffffffU << (32 - mask) : 0;

    if (acl_subnet == (__extension__({ __uint32_t __swap32gen_x = (remote_ip); (__uint32_t)((__swap32gen_x & 0xff) << 24 | (__swap32gen_x & 0xff00) << 8 | (__swap32gen_x & 0xff0000) >> 8 | (__swap32gen_x & 0xff000000) >> 24); }) & acl_mask)) {
      allowed = flag;
    }
  }

  return allowed == '+';
}

static void add_to_set(SOCKET fd, fd_set *set, int *max_fd) {
  (((fd_set *)(set))->fds_bits[(fd) >> 5] |= (1<<((fd) & 31)));
  if (fd > (SOCKET) *max_fd) {
    *max_fd = (int) fd;
  }
}


static int set_uid_option(struct mg_context *ctx) {
  struct passwd *pw;
  const char *uid = ctx->config[RUN_AS_USER];
  int success = 0;

  if (uid == __null) {
    success = 1;
  } else {
    if ((pw = getpwnam(uid)) == __null) {
      cry(fc(ctx), "%s: unknown user [%s]", __PRETTY_FUNCTION__, uid);
    } else if (setgid(pw->pw_gid) == -1) {
      cry(fc(ctx), "%s: setgid(%s): %s", __PRETTY_FUNCTION__, uid, strerror((*__errno())));
    } else if (setuid(pw->pw_uid) == -1) {
      cry(fc(ctx), "%s: setuid(%s): %s", __PRETTY_FUNCTION__, uid, strerror((*__errno())));
    } else {
      success = 1;
    }
  }

  return success;
}



static pthread_mutex_t *ssl_mutexes;

static void ssl_locking_callback(int mode, int mutex_num, const char *file,
                                 int line) {
  line = 0;
  file = __null;

  if (mode & 1) {
    (void) pthread_mutex_lock(&ssl_mutexes[mutex_num]);
  } else {
    (void) pthread_mutex_unlock(&ssl_mutexes[mutex_num]);
  }
}

static unsigned long ssl_id_callback(void) {
  return (unsigned long) pthread_self();
}


static int load_dll(struct mg_context *ctx, const char *dll_name,
                    struct ssl_func *sw) {
  union {void *p; void (*fp)(void);} u;
  void *dll_handle;
  struct ssl_func *fp;

  if ((dll_handle = dlopen(dll_name, RTLD_LAZY)) == __null) {
    cry(fc(ctx), "%s: cannot load %s", __PRETTY_FUNCTION__, dll_name);
    return 0;
  }

  for (fp = sw; fp->name != __null; fp++) {






    u.p = dlsym(dll_handle, fp->name);

    if (u.fp == __null) {
      cry(fc(ctx), "%s: %s: cannot find %s", __PRETTY_FUNCTION__, dll_name, fp->name);
      return 0;
    } else {
      fp->ptr = u.fp;
    }
  }

  return 1;
}



static int set_ssl_option(struct mg_context *ctx) {
  SSL_CTX *CTX;
  int i, size;
  const char *pem = ctx->config[SSL_CERTIFICATE];
  const char *chain = ctx->config[SSL_CHAIN_FILE];

  if (pem == __null) {
    return 1;
  }
# 4035 "webkey-2.09/service/mongoose.cpp"
  if (!load_dll(ctx, "libssl.so", ssl_sw) ||
      !load_dll(ctx, "libcrypto.so", crypto_sw)) {
    return 0;
  }



  (* (int (*)(void)) ssl_sw[10].ptr)();
  (* (void (*)(void)) ssl_sw[15].ptr)();

  if ((CTX = (* (SSL_CTX * (*)(SSL_METHOD *)) ssl_sw[8].ptr)((* (SSL_METHOD * (*)(void)) ssl_sw[9].ptr)())) == __null) {
    cry(fc(ctx), "SSL_CTX_new error: %s", ssl_error());
  } else if (ctx->user_callback != __null) {
    ctx->user_callback(MG_INIT_SSL, (struct mg_connection *) CTX, __null);
  }


  if (CTX != __null && (* (int (*)(SSL_CTX *, const char *, int)) ssl_sw[12].ptr)(CTX, pem,
        1) == 0) {
    cry(fc(ctx), "%s: cannot open %s: %s", __PRETTY_FUNCTION__, pem, ssl_error());
    return 0;
  } else if (CTX != __null && (* (int (*)(SSL_CTX *, const char *, int)) ssl_sw[11].ptr)(CTX, pem,
        1) == 0) {
    cry(fc(ctx), "%s: cannot open %s: %s", __null, pem, ssl_error());
    return 0;
  }

  if (CTX != __null && chain != __null &&
      (* (int (*)(SSL_CTX *, const char *)) ssl_sw[16].ptr)(CTX, chain) == 0) {
    cry(fc(ctx), "%s: cannot open %s: %s", __null, chain, ssl_error());
    return 0;
  }




  size = sizeof(pthread_mutex_t) * (* (int (*)(void)) crypto_sw[0].ptr)();
  if ((ssl_mutexes = (pthread_mutex_t *) malloc(size)) == __null) {
    cry(fc(ctx), "%s: cannot allocate mutexes: %s", __PRETTY_FUNCTION__, ssl_error());
    return 0;
  }

  for (i = 0; i < (* (int (*)(void)) crypto_sw[0].ptr)(); i++) {
    pthread_mutex_init(&ssl_mutexes[i], __null);
  }

  (* (void (*)(void (*)(int, int, const char *, int))) crypto_sw[1].ptr)(&ssl_locking_callback);
  (* (void (*)(unsigned long (*)(void))) crypto_sw[2].ptr)(&ssl_id_callback);


  ctx->ssl_ctx = CTX;

  return 1;
}


static int set_gpass_option(struct mg_context *ctx) {
  struct mgstat mgstat;
  const char *path = ctx->config[GLOBAL_PASSWORDS_FILE];
  return path == __null || mg_stat(path, &mgstat) == 0;
}

static int set_acl_option(struct mg_context *ctx) {
  struct usa fake;
  return check_acl(ctx, &fake) != -1;
}

static void reset_per_request_attributes(struct mg_connection *conn) {
  struct mg_request_info *ri = &conn->request_info;


  if (ri->remote_user != __null) {
    free((void *) ri->remote_user);
  }
  ri->remote_user = ri->request_method = ri->uri = ri->http_version = __null;
  ri->num_headers = 0;
  ri->status_code = -1;

  conn->num_bytes_sent = conn->consumed_content = 0;
  conn->content_len = -1;
  conn->request_len = conn->data_len = 0;
}

static void close_socket_gracefully(SOCKET sock) {
  char buf[1024];
  int n;


  (void) shutdown(sock, SHUT_WR);
  set_non_blocking_mode(sock);






  do {
    n = pull(__null, sock, __null, buf, sizeof(buf));
  } while (n > 0);


  (void) close(sock);
}

static void close_connection(struct mg_connection *conn) {
  if (conn->ssl) {
    (* (void (*)(SSL *)) ssl_sw[0].ptr)(conn->ssl);
    conn->ssl = __null;
  }

  if (conn->client.sock != (-1)) {
    close_socket_gracefully(conn->client.sock);
  }
}

static void discard_current_request_from_buffer(struct mg_connection *conn) {
  char *buffered;
  int buffered_len, body_len;

  buffered = conn->buf + conn->request_len;
  buffered_len = conn->data_len - conn->request_len;
  ((buffered_len >= 0) ? (void)0 : __assert2("webkey-2.09/service/mongoose.cpp", 4156, __PRETTY_FUNCTION__, "buffered_len >= 0"));

  if (conn->content_len == -1) {
    body_len = 0;
  } else if (conn->content_len < (int64_t) buffered_len) {
    body_len = (int) conn->content_len;
  } else {
    body_len = buffered_len;
  }

  conn->data_len -= conn->request_len + body_len;
  memmove(conn->buf, conn->buf + conn->request_len + body_len, conn->data_len);
}

static int parse_url(const char *url, char *host, int *port) {
  int len;

  if (url == __null) {
    return 0;
  };

  if (!strncmp(url, "http://", 7)) {
    url += 7;
  }

  if (sscanf(url, "%1024[^:]:%d/%n", host, port, &len) == 2) {
  } else {
    sscanf(url, "%1024[^/]/%n", host, &len);
    *port = 80;
  }
  ;

  return len > 0 && url[len - 1] == '/' ? len - 1 : len;
}

static void handle_proxy_request(struct mg_connection *conn) {
  struct mg_request_info *ri = &conn->request_info;
  char host[1025], buf[1024];
  int port, is_ssl, len, i, n;

  ;
  if (conn->request_info.uri[0] == '/' ||
      (len = parse_url(ri->uri, host, &port)) == 0) {
    return;
  }

  if (conn->peer == __null) {
    is_ssl = !strcmp(ri->request_method, "CONNECT");
    if ((conn->peer = mg_connect(conn, host, port, is_ssl)) == __null) {
      return;
    }
    conn->peer->client.is_ssl = is_ssl;
  }


  mg_printf(conn->peer, "%s %s HTTP/%s\r\n", ri->request_method, ri->uri + len,
            ri->http_version);


  for (i = 0; i < ri->num_headers; i++) {
    mg_printf(conn->peer, "%s: %s\r\n", ri->http_headers[i].name,
              ri->http_headers[i].value);
  }

  mg_write(conn->peer, "\r\n", 2);


  if (!strcmp(ri->request_method, "POST")) {
    forward_body_data(conn, __null, conn->peer->client.sock, conn->peer->ssl);
  }


  while ((n = pull(__null, conn->peer->client.sock, conn->peer->ssl,
                   buf, sizeof(buf))) > 0) {
    if (mg_write(conn, buf, n) != n) {
      break;
    }
  }

  if (!conn->peer->client.is_ssl) {
    close_connection(conn->peer);
    free(conn->peer);
    conn->peer = __null;
  }
}

static void process_new_connection(struct mg_connection *conn) {
  struct mg_request_info *ri = &conn->request_info;
  int keep_alive_enabled;
  const char *cl;

  keep_alive_enabled = !strcmp(conn->ctx->config[ENABLE_KEEP_ALIVE], "yes");

  do {
    reset_per_request_attributes(conn);


    if ((conn->request_len = get_request_len(conn->buf, conn->data_len)) == 0) {
      conn->request_len = read_request(__null, conn->client.sock, conn->ssl,
          conn->buf, conn->buf_size, &conn->data_len);
    }
    ((conn->data_len >= conn->request_len) ? (void)0 : __assert2("webkey-2.09/service/mongoose.cpp", 4257, __PRETTY_FUNCTION__, "conn->data_len >= conn->request_len"));
    if (conn->request_len == 0 && conn->data_len == conn->buf_size) {
      send_http_error(conn, 413, "Request Too Large", "");
      return;
    } if (conn->request_len <= 0) {
      return;
    }


    conn->buf[conn->request_len - 1] = '\0';
    if (!parse_http_request(conn->buf, ri) ||
        (!conn->client.is_proxy && ri->uri[0] != '/')) {

      send_http_error(conn, 400, "Bad Request",
          "Cannot parse HTTP request: [%.*s]", conn->data_len, conn->buf);
    } else if (strcmp(ri->http_version, "1.0") &&
               strcmp(ri->http_version, "1.1")) {

      send_http_error(conn, 505, "HTTP version not supported", "");

    } else {

      cl = get_header(ri, "Content-Length");
      conn->content_len = cl == __null ? -1 : strtoll(cl, __null, 10);
      conn->birth_time = time(__null);
      if (conn->client.is_proxy) {
        handle_proxy_request(conn);
      } else {
        handle_request(conn);
      }

      discard_current_request_from_buffer(conn);
    }

  } while (conn->peer || (keep_alive_enabled && should_keep_alive(conn)));
}


static int consume_socket(struct mg_context *ctx, struct socket *sp) {
  (void) pthread_mutex_lock(&ctx->mutex);
  ;


  while (ctx->sq_head == ctx->sq_tail && ctx->stop_flag == 0) {
    pthread_cond_wait(&ctx->sq_full, &ctx->mutex);
  }


  if (ctx->stop_flag) {
    (void) pthread_mutex_unlock(&ctx->mutex);
    return 0;
  }
  ((ctx->sq_head > ctx->sq_tail) ? (void)0 : __assert2("webkey-2.09/service/mongoose.cpp", 4309, __PRETTY_FUNCTION__, "ctx->sq_head > ctx->sq_tail"));


  *sp = ctx->queue[ctx->sq_tail % (sizeof(ctx->queue) / sizeof(ctx->queue[0]))];
  ctx->sq_tail++;
  ;


  while (ctx->sq_tail > (int) (sizeof(ctx->queue) / sizeof(ctx->queue[0]))) {
    ctx->sq_tail -= (sizeof(ctx->queue) / sizeof(ctx->queue[0]));
    ctx->sq_head -= (sizeof(ctx->queue) / sizeof(ctx->queue[0]));
  }

  (void) pthread_cond_signal(&ctx->sq_empty);
  (void) pthread_mutex_unlock(&ctx->mutex);

  return 1;
}

static void worker_thread(struct mg_context *ctx) {
  struct mg_connection *conn;
  int buf_size = atoi(ctx->config[MAX_REQUEST_SIZE]);

  conn = (mg_connection*)calloc(1, sizeof(*conn) + buf_size);
  conn->buf_size = buf_size;
  conn->buf = (char *) (conn + 1);
  ((conn != __null) ? (void)0 : __assert2("webkey-2.09/service/mongoose.cpp", 4335, __PRETTY_FUNCTION__, "conn != NULL"));

  while (ctx->stop_flag == 0 && consume_socket(ctx, &conn->client)) {
    conn->birth_time = time(__null);
    conn->ctx = ctx;




    conn->request_info.remote_port = __extension__({ __uint16_t __swap16gen_x = (conn->client.rsa.u.sin.sin_port); (__uint16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); });
    memcpy(&conn->request_info.remote_ip,
           &conn->client.rsa.u.sin.sin_addr.s_addr, 4);
    conn->request_info.remote_ip = __extension__({ __uint32_t __swap32gen_x = (conn->request_info.remote_ip); (__uint32_t)((__swap32gen_x & 0xff) << 24 | (__swap32gen_x & 0xff00) << 8 | (__swap32gen_x & 0xff0000) >> 8 | (__swap32gen_x & 0xff000000) >> 24); });
    conn->request_info.is_ssl = conn->client.is_ssl;

    if (!conn->client.is_ssl ||
        (conn->client.is_ssl && sslize(conn, (* (int (*)(SSL *)) ssl_sw[1].ptr)))) {
      process_new_connection(conn);
    }

    close_connection(conn);
  }
  free(conn);


  (void) pthread_mutex_lock(&ctx->mutex);
  ctx->num_threads--;
  (void) pthread_cond_signal(&ctx->cond);
  ((ctx->num_threads >= 0) ? (void)0 : __assert2("webkey-2.09/service/mongoose.cpp", 4363, __PRETTY_FUNCTION__, "ctx->num_threads >= 0"));
  (void) pthread_mutex_unlock(&ctx->mutex);

  ;
}


static void produce_socket(struct mg_context *ctx, const struct socket *sp) {
  (void) pthread_mutex_lock(&ctx->mutex);


  while (ctx->sq_head - ctx->sq_tail >= (int) (sizeof(ctx->queue) / sizeof(ctx->queue[0]))) {
    (void) pthread_cond_wait(&ctx->sq_empty, &ctx->mutex);
  }
  ((ctx->sq_head - ctx->sq_tail < (int) (sizeof(ctx->queue) / sizeof(ctx->queue[0]))) ? (void)0 : __assert2("webkey-2.09/service/mongoose.cpp", 4377, __PRETTY_FUNCTION__, "ctx->sq_head - ctx->sq_tail < (int) ARRAY_SIZE(ctx->queue)"));


  ctx->queue[ctx->sq_head % (sizeof(ctx->queue) / sizeof(ctx->queue[0]))] = *sp;
  ctx->sq_head++;
  ;

  (void) pthread_cond_signal(&ctx->sq_full);
  (void) pthread_mutex_unlock(&ctx->mutex);
}

static void accept_new_connection(const struct socket *listener,
                                  struct mg_context *ctx) {
  struct socket accepted;
  int allowed;

  accepted.rsa.len = sizeof(accepted.rsa.u.sin);
  accepted.lsa = listener->lsa;
  accepted.sock = accept(listener->sock, &accepted.rsa.u.sa, &accepted.rsa.len);
  if (accepted.sock != (-1)) {
    allowed = check_acl(ctx, &accepted.rsa);
    if (allowed) {

      ;
      accepted.is_ssl = listener->is_ssl;
      accepted.is_proxy = listener->is_proxy;
      produce_socket(ctx, &accepted);
    } else {
      cry(fc(ctx), "%s: %s is not allowed to connect",
          __PRETTY_FUNCTION__, inet_ntoa(accepted.rsa.u.sin.sin_addr));
      (void) close(accepted.sock);
    }
  }
}

static void master_thread(struct mg_context *ctx) {
  fd_set read_set;
  struct timeval tv;
  struct socket *sp;
  int max_fd;

  while (ctx->stop_flag == 0) {
    (memset (&read_set, 0, sizeof (*(fd_set *)(&read_set))));
    max_fd = -1;


    for (sp = ctx->listening_sockets; sp != __null; sp = sp->next) {
      add_to_set(sp->sock, &read_set, &max_fd);
    }

    tv.tv_sec = 1;
    tv.tv_usec = 0;

    if (select(max_fd + 1, &read_set, __null, __null, &tv) < 0) {






    } else {
      for (sp = ctx->listening_sockets; sp != __null; sp = sp->next) {
        if (((((fd_set *)(&read_set))->fds_bits[(sp->sock) >> 5] & (1<<((sp->sock) & 31))) != 0)) {
          accept_new_connection(sp, ctx);
        }
      }
    }
  }
  ;


  close_all_listening_sockets(ctx);


  pthread_cond_broadcast(&ctx->sq_full);


  (void) pthread_mutex_lock(&ctx->mutex);
  while (ctx->num_threads > 0) {
    (void) pthread_cond_wait(&ctx->cond, &ctx->mutex);
  }
  (void) pthread_mutex_unlock(&ctx->mutex);


  (void) pthread_mutex_destroy(&ctx->mutex);
  (void) pthread_cond_destroy(&ctx->cond);
  (void) pthread_cond_destroy(&ctx->sq_empty);
  (void) pthread_cond_destroy(&ctx->sq_full);


  ctx->stop_flag = 2;

  ;
}

static void free_context(struct mg_context *ctx) {
  int i;


  for (i = 0; i < NUM_OPTIONS; i++) {
    if (ctx->config[i] != __null)
      free(ctx->config[i]);
  }


  if (ctx->ssl_ctx != __null) {
    (* (void (*)(SSL_CTX *)) ssl_sw[14].ptr)(ctx->ssl_ctx);
  }

  if (ssl_mutexes != __null) {
    free(ssl_mutexes);
  }



  free(ctx);
}

struct backdata
{
 int s;
 mg_context* ctx;
 char** server_username;
 char** server_random;
 char* server_port;
 bool* server;
};

static bool backstop = false;
static volatile int backnumconn = 0;
static volatile int backactmaxconn = 1;
static int backmaxconn = 3;
static volatile int backporterror = 0;
pthread_mutex_t backmutex;
pthread_cond_t backcond;



void backdecrease()
{
 if (backactmaxconn > 1)
  backactmaxconn--;
}
int mystrlen(char* c)
{
 int i = 0;
 while(c[i])
  i++;
 return i;
}
void mg_stop(struct mg_context *ctx) {
  ctx->stop_flag = 1;

  pthread_mutex_lock(&backmutex);
  pthread_cond_signal(&backcond);
  pthread_mutex_unlock(&backmutex);

  while (ctx->stop_flag != 2) {
    (void) sleep(0);
  }
  free_context(ctx);







}

struct mg_context *mg_start(char* upload_r, mg_callback_t user_callback, const char* webkey_dir, const char **options) {
  upload_random = upload_r;
  logfile = webkey_dir;
  logfile += "/log.txt";

__system_property_get("ro.serialno",serial_number);
  if (strlen(serial_number)==0)
  {
   macaddress();
   strcpy(serial_number, mac);
  }



  struct mg_context *ctx;
  const char *name, *value, *default_value;
  int i;
# 4574 "webkey-2.09/service/mongoose.cpp"
  ctx = (mg_context*)calloc(1, sizeof(*ctx));
  ctx->user_callback = user_callback;

  while (options && (name = *options++) != __null) {
    if ((i = get_option_index(name)) == -1) {
      cry(fc(ctx), "Invalid option: %s", name);
      free_context(ctx);
      return __null;
    } else if ((value = *options++) == __null) {
      cry(fc(ctx), "%s: option value cannot be NULL", name);
      free_context(ctx);
      return __null;
    }
    ctx->config[i] = mg_strdup(value);
    ;
  }


  for (i = 0; config_options[i * 3] != __null; i++) {
    default_value = config_options[i * 3 + 2];
    if (ctx->config[i] == __null && default_value != __null) {
      ctx->config[i] = mg_strdup(default_value);
      ;


    }
  }



  if (!set_gpass_option(ctx) ||

      !set_ssl_option(ctx) ||

      !set_ports_option(ctx) ||

      !set_uid_option(ctx) ||

      !set_acl_option(ctx)) {
    free_context(ctx);
    return __null;
  }




  (void) signal(13, (( __sighandler_t)1));



  (void) pthread_mutex_init(&ctx->mutex, __null);
  (void) pthread_cond_init(&ctx->cond, __null);
  (void) pthread_cond_init(&ctx->sq_empty, __null);
  (void) pthread_cond_init(&ctx->sq_full, __null);


  start_thread(ctx, (mg_thread_func_t) master_thread, ctx);



  for (i = 0; i < atoi(ctx->config[NUM_THREADS]); i++) {
    if (start_thread(ctx, (mg_thread_func_t) worker_thread, ctx) != 0) {
      cry(fc(ctx), "Cannot start worker thread: %d", (*__errno()));
    } else {
      ctx->num_threads++;
    }
  }
# 4659 "webkey-2.09/service/mongoose.cpp"
  return ctx;
}
static const char *filetypes[] = {
".mid",
".txt",
".sql",
".js",
".gif",
".jpg",
".html",
".htm",
".rar",
".gz",
".tgz",
".z",
".ra",
".ram",
".rm",
".pl",
".zip",
".wav",
".php",
".php3",
".phtml",
".exe",
".bmp",
".png",
".css",
".mp3",
".xls",
".doc",
".pdf",
".mov",
".avi",
".mpg",
".mpeg",
".wmv",
".swf",
".flv"
};
static const char *filetypes2[] = {
"midi.png",
"txt2.png",
"txt2.png",
"javascript.png",
"image.png",
"image.png",
"html.png",
"html.png",
"archive.png",
"zip.png",
"archive.png",
"archive.png",
"video.png",
"video.png",
"video.png",
"source_pl.png",
"zip.png",
"sound.png",
"php.png",
"php.png",
"php.png",
"exe.png",
"image.png",
"image.png",
"css.png",
"sound.png",
"spreadsheet.png",
"document.png",
"pdf.png",
"video.png",
"video.png",
"video.png",
"video.png",
"video.png",
"flash.png",
"flash.png"
};
static const char *filetypes3[] = {
 "Midi File",
 "Text file",
 "Text file",
  "Javascript",
  "GIF picture",
  "JPG picture",
  "HTML page",
  "HTML page",
  "RAR File",
  "GZ File",
  "GZ File",
  "GZ File",
  "REAL file",
  "REAL file",
  "REAL file",
  "PERL script",
  "ZIP file",
  "WAV file",
  "PHP script",
  "PHP script",
  "PHP script",
  "Exe file",
  "BMP picture",
  "PNG picture",
  "CSS File",
  "MP3 File",
  "XLS File",
  "Word File",
  "PDF File",
  "MOV File",
  "AVI File",
  "MPG File",
  "MPEG File",
  "AVI File",
  "FLASH File",
  "FLASH File"
};

struct filestat
{
 char* name;
 mgstat stat;
};

struct dir_lt
{
 bool operator()(struct filestat* lhs, struct filestat* rhs)
 {
  if (lhs->stat.is_directory && !rhs->stat.is_directory)
   return true;
  if (!lhs->stat.is_directory && rhs->stat.is_directory)
   return false;
  return strcmp(lhs->name, rhs->name) < 0;
 };
};



void
my_send_directory(struct mg_connection *conn, const char *dir)
{
 struct dirent *dpointer;
 struct dirent dp;
 DIR *dirp;

 char path[1024];
 int i, sort_direction, num_entries = 0, arr_size = 128;

 char buff[4096];

 if ((dirp = opendir(dir)) == __null) {
     (void) mg_printf(conn,"<?xml version=\"1.0\" encoding=\"UTF-8\"?><tree filename=\"\" text=\"\" is_file=\"false\"></tree>");
  return;
 }

 (void) mg_printf(conn, "%s",
     "<?xml version=\"1.0\" encoding=\"UTF-8\"?><tree filename=\"\" text=\"\" is_file=\"false\">");

 std::vector<struct filestat*> files;

 while ((dpointer = readdir(dirp)) != __null) {


  if (!strcmp(dpointer->d_name, ".") ||
      !strcmp(dpointer->d_name, ".."))
   continue;

  struct filestat* to_load = new struct filestat;
  (void) mg_snprintf(conn, path, sizeof(path), "%s%c%s",
      dir, '/', dpointer->d_name);
  (void) mg_stat(path, &(to_load->stat));
  to_load->name = new char[mystrlen(dpointer->d_name)+1];
  strcpy(to_load->name,dpointer->d_name);
  files.push_back(to_load);
 }
 std::sort(files.begin(),files.end(),dir_lt());
 int p = 0;
 for(p=0;p<files.size();p++)
 {
  (void) mg_snprintf(conn, path, sizeof(path), "%s%c%s",
      dir, '/', files[p]->name);
  (void) mg_printf(conn, "<tree is_file=\"");
  if (files[p]->stat.is_directory)
   (void) mg_printf(conn, "false");
  else
   (void) mg_printf(conn, "true");
  (void) mg_printf(conn, "\" filename=\"");
  convertxml(buff,path);
  (void) mg_write(conn, buff, mystrlen(buff));
  (void) mg_printf(conn,"\" icon=");

  if (files[p]->stat.is_directory)
   (void) mg_printf(conn, "\"folder.png\" mimestring=\"Directory\" is_image=\"0\"");
  else
  {
   int n = strlen(files[p]->name);
   int i = 0;
   int j;
   for (i = 0; i < 36; i++)
    if (n > ( j=strlen(filetypes[i]) ) && strcmp(files[p]->name +n- j,filetypes[i]) ==0)
    {
     if (strcmp(filetypes2[i],"image.png")==0)
      (void) mg_printf(conn, "\"%s\" mimestring=\"%s\" is_image=\"1\"",filetypes2[i],filetypes3[i]);
     else
      (void) mg_printf(conn, "\"%s\" mimestring=\"%s\" is_image=\"0\"",filetypes2[i],filetypes3[i]);
     break;
    }
   if (i == 36)
    (void) mg_printf(conn, "\"mime_empty.png\" mimestring=\"Unknown format\" is_image=\"0\"");
  }

  (void) mg_printf(conn," ajxp_modiftime=\"%d\" bytesize=\"%d\" filesize=\"",files[p]->stat.mtime,files[p]->stat.size);

  if (files[p]->stat.size < 1024)
   (void) mg_printf(conn, "%lu", (unsigned long) files[p]->stat.size);
  else if (files[p]->stat.size < 1024 * 1024)
   (void) mg_printf(conn, "%.1fk", (double) files[p]->stat.size/1024.0);
  else if (files[p]->stat.size < 1024 * 1024 * 1024)
   (void) mg_printf(conn, "%.1fM", (double) files[p]->stat.size/1048576);
  else
   (void) mg_printf(conn, "%.1fG", (double) files[p]->stat.size/1073741824);
  convertxml(buff,files[p]->name);
  mg_printf(conn,"\" text=\"%s\"/>",buff);
  delete[] files[p]->name;
 }
 (void) closedir(dirp);

 (void) mg_printf(conn, "</tree>");
 conn->request_info.status_code = 200;
 for (p=0;p<files.size();p++)
  delete files[p];
}



__u32 serverip = 0;
__u32 lastip = 0;

static void
backward_connection(struct mg_context *ctx,int s,char** server_username, char** server_random, bool* server, char* server_port)
{
 struct mg_connection conn;
 (void) memset(&conn, 0, sizeof(conn));
 conn.client.sock = s;
 conn.ctx = ctx;
 char tmp[512];
# 4929 "webkey-2.09/service/mongoose.cpp"
 strcpy(tmp,"WEBKEY ");
 strcat(tmp,*server_username);
 strcat(tmp,"/");
 strcat(tmp,*server_random);
 strcat(tmp,"/");
 strcat(tmp,"2.09");
 strcat(tmp,"/");
 strcat(tmp,server_port);
 strcat(tmp,"\r\n");

 if (conn.ssl != __null)
       (* (int (*)(SSL *, const void *,int)) ssl_sw[4].ptr)(conn.ssl, tmp, strlen(tmp));
 else
  send(s, tmp, strlen(tmp),0x4000);

 struct mg_request_info *ri = &conn.request_info;

 int request_len, nread;
 const char *cl;

 int buf_size = atoi(ctx->config[MAX_REQUEST_SIZE]);
 conn.buf_size = buf_size;
 conn.buf = (char*)calloc(1, buf_size);

 nread = 0;
 reset_per_request_attributes(&conn);
 bool first_read = true;

 int n = 0;

 if ((conn.request_len = get_request_len(conn.buf, (size_t) conn.data_len)) == 0)


 {
  conn.request_len = 0;
  while (nread < conn.buf_size && conn.request_len == 0) {
   bool timeout = false;
   int t = time(__null);

   int e;
   do{
    n = pull(__null, conn.client.sock, conn.ssl, conn.buf + nread, conn.buf_size - nread);
    e=(*__errno());

    ;
    ;
    ;
   }while(n == -1 && (e == 11 || e == 11 || e == 4) && time(__null) < t+898 && !ctx->stop_flag);
# 4986 "webkey-2.09/service/mongoose.cpp"
   if (n==-1 && (e == 11 || e == 11 || e == 4))
   {
    ;
    timeout = true;
    pthread_mutex_lock(&backmutex);
    backdecrease();
    pthread_mutex_unlock(&backmutex);
   }
   if (n == 4 && nread==0 && conn.buf[0]=='s' && conn.buf[1]=='t' && conn.buf[2]=='o' && conn.buf[3]=='p')
   {
    printf("we don't need webkey.cc, we can accept incoming connections.\n");
    pthread_mutex_lock(&backmutex);
    backstop = true;
    backnumconn--;
    pthread_cond_signal(&backcond);

    pthread_mutex_unlock(&backmutex);
    free(conn.buf);
    if (conn.ssl) {
     (* (void (*)(SSL *)) ssl_sw[0].ptr)(conn.ssl);
     conn.ssl = __null;
    }
    return;
   }



   ;
   if (first_read)
   {
    pthread_mutex_lock(&backmutex);
    ;
    ;
    ;
    if (n && n!=-1 && backactmaxconn < backmaxconn)
    {
        backactmaxconn++;
    }
    backnumconn--;
    pthread_cond_signal(&backcond);
    pthread_mutex_unlock(&backmutex);
    first_read = false;
   }

   if (*server == false)
   {





    free(conn.buf);
    if (conn.ssl) {
     (* (void (*)(SSL *)) ssl_sw[0].ptr)(conn.ssl);
     conn.ssl = __null;
    }
    return;
   }

   ;
   ;
   ;
   if (n <= 0 || strncmp(conn.buf,"HTTP",4)==0)
   {
    if (!timeout)
    {
     backporterror++;
    }
    free(conn.buf);
    if (conn.ssl) {
     (* (void (*)(SSL *)) ssl_sw[0].ptr)(conn.ssl);
     conn.ssl = __null;
    }
    return;
   }
          else
   {
    backporterror=0;
    conn.data_len += n;
    nread += n;
    conn.request_len = get_request_len(conn.buf, *&conn.data_len);
   }
  }
 }
 if (first_read)
 {
  pthread_mutex_lock(&backmutex);
  if (n&& n!=-1 && backactmaxconn < backmaxconn)
  {
   backactmaxconn++;
  }
  backnumconn--;
  pthread_cond_signal(&backcond);

  pthread_mutex_unlock(&backmutex);
  first_read = false;
 }
 ((conn.data_len >= conn.request_len) ? (void)0 : __assert2("webkey-2.09/service/mongoose.cpp", 5083, __PRETTY_FUNCTION__, "conn.data_len >= conn.request_len"));
 if (conn.request_len == 0 && conn.data_len == conn.buf_size) {
  send_http_error(&conn, 413, "Request Too Large", "");
  return;
 } if (conn.request_len <= 0) {
  free(conn.buf);
  if (conn.ssl) {
   (* (void (*)(SSL *)) ssl_sw[0].ptr)(conn.ssl);
   conn.ssl = __null;
  }
  return;
 }
 conn.buf[conn.request_len - 1] = '\0';
 if (!parse_http_request(conn.buf, ri) ||
   (!conn.client.is_proxy && ri->uri[0] != '/')) {

  send_http_error(&conn, 400, "Bad Request",
    "Cannot parse HTTP request: [%.*s]", conn.data_len, conn.buf);
 } else if (strcmp(ri->http_version, "1.0") &&
   strcmp(ri->http_version, "1.1")) {

  send_http_error(&conn, 505, "HTTP version not supported", "");

 } else {

  cl = get_header(ri, "Content-Length");
  conn.content_len = cl == __null ? -1 : strtoll(cl, __null, 10);
  conn.birth_time = time(__null);
  if (conn.client.is_proxy) {
   handle_proxy_request(&conn);
  } else {
   serverip = lastip;



   handle_request(&conn);
  }


 }



 free(conn.buf);
 if (conn.ssl) {
  (* (void (*)(SSL *)) ssl_sw[0].ptr)(conn.ssl);
  conn.ssl = __null;
 }
}

static
void* backnewconnection(void* param)
{
 backdata* p = ((backdata*)param);
 backward_connection(p->ctx,p->s,p->server_username,p->server_random,p->server,p->server_port);
 shutdown(p->s,SHUT_RDWR);
 close(p->s);
 delete (backdata*)param;
}

long int getnum2(const char* st)
{
 long int r = 0;
 long int i = 0;
 bool neg = false;
 if (st[i]=='-')
 {
  neg = true;
  i++;
 }
 while ('0'<=st[i] && '9'>=st[i])
 {
  r = r*10+(long int)(st[i]-'0');
  i++;
 }
 if (neg)
  return -r;
 else
  return r;
}
void* backserver(void* par)
{
 ;
 char** server_username = ((backserver_parameter*)par)->server_username;
 char** server_random = ((backserver_parameter*)par)->server_random;
 bool* server = ((backserver_parameter*)par)->server;
 int* server_changes = ((backserver_parameter*)par)->server_changes;
 char* server_port = ((backserver_parameter*)par)->server_port;
 int last_changes = -1;
 mg_context* ctx = ((backserver_parameter*)par)->ctx;
 if (pthread_mutex_init(&backmutex,0))
  return 0;
 if (pthread_cond_init(&backcond,0))
  return 0;
 struct hostent *hp = __null;
 backporterror = 0;
 int PORT1 = 110;
 int PORT2 = 80;
 int port;
 char serveraddress[128];
 __u32 fallbackip = 0;



 fallbackip = 1745908944;
 serverip = 1745908944;






 printf("using webkey.cc\n");
 strcpy(serveraddress,"webkey.cc");







 port = PORT1;

 FILE * f = fopen("/data/data/com.webkey/files/server.txt","r");
 if (f)
 {
  fgets(serveraddress, sizeof(serveraddress), f);
  if (serveraddress[strlen(serveraddress)-1]=='\n')
   serveraddress[strlen(serveraddress)-1]=0;
  if (serveraddress[strlen(serveraddress)-1]=='\r')
   serveraddress[strlen(serveraddress)-1]=0;
  int i = 0;
  while (serveraddress[i] && serveraddress[i] != ':')
   i++;
  if (serveraddress[i])
  {
   port = getnum2(serveraddress+i+1);
   serveraddress[i] = 0;
  }
  else
   port = 8080;
  printf("using %s as server\n",serveraddress);
  fclose(f);
 }

 while(1)
 {
  ;
  if (ctx->stop_flag)
  {
   pthread_mutex_destroy(&backmutex);
   pthread_cond_destroy(&backcond);
   printf("server stops from mongoose.c\n");
   return 0;
  }
# 5247 "webkey-2.09/service/mongoose.cpp"
  if (*server_changes != last_changes)
  {
   backstop = false;
  }
  last_changes = *server_changes;
  ;
  ;
  ;
  ;
  ;


  if (!*server_username || !*server_random || !*server || strlen(*server_username)==0 || backstop)
  {
   ;

   sleep(5);
   continue;
  }


  int s;
  if ((s = socket(2, 1, 0)) < 0) {

   printf("error opening socket from mongoose.c\n");

   sleep(10);
   continue;
  }

  int opt = 1;
  setsockopt(s,1,9,&opt,sizeof(opt));
  opt = 3;
  setsockopt(s,6,6,&opt,sizeof(opt));
  opt = 180;
  setsockopt(s,6,4,&opt,sizeof(opt));
  opt = 10;
  setsockopt(s,6,5,&opt,sizeof(opt));

  struct timeval tv;
  tv.tv_usec = 0;
  tv.tv_sec = 900;

  setsockopt(s,1,20,(char*)&tv,sizeof(struct timeval));
  struct sockaddr_in addr;
  if (!hp && serverip == 0)
  {
   if ((hp = gethostbyname(serveraddress)) == __null)
   {

    printf("unable to resolve server address from mongoose.c, never mind, we continue\n");


   }
  }
  if (hp)
   bcopy ( hp->h_addr_list[0], &(addr.sin_addr.s_addr), hp->h_length);
  else
  {
   addr.sin_addr.s_addr = serverip ? serverip : fallbackip;
  }
  ;
  ;
  if (backporterror > 5)
  {
   serverip = 0;
   if (port == PORT1)
    port = PORT2;
   else if (port == PORT2)
   {
    sleep(60);
    port = PORT1;
   }

   backporterror = 0;
  }
  ;
  ;
  addr.sin_port = __extension__({ __uint16_t __swap16gen_x = (port); (__uint16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); });
  addr.sin_family = 2;
  if (connect(s, (struct sockaddr *)&addr, sizeof(struct sockaddr_in))<0)
  {
   hp = __null;
   serverip = 0;
   close(s);
   printf("unable to connect to server from mongoose.c, ip = %u\n",addr.sin_addr.s_addr);
   backporterror++;


   addr.sin_addr.s_addr = fallbackip;
   if (connect(s, (struct sockaddr *)&addr, sizeof(struct sockaddr_in)) < 0)
   {
    printf("still can't even with ip = %u\n",addr.sin_addr.s_addr);
    sleep(15);
    continue;
   }
  }


  pthread_t backthread;
  backdata *param = new backdata;

  param->ctx = ctx;
  param->s = s;
  param->server_username = server_username;
  param->server_random = server_random;
  param->server_port = server_port;
  param->server = server;
  pthread_mutex_lock(&backmutex);
  lastip = addr.sin_addr.s_addr;
  backnumconn++;
  pthread_create(&backthread,__null,backnewconnection,(void*)param);
  if (backnumconn >= backactmaxconn)
  {

   pthread_cond_wait(&backcond,&backmutex);

  }
  pthread_mutex_unlock(&backmutex);
 }
}

int64_t contentlen(mg_connection* conn)
{
 return conn->content_len;
}
