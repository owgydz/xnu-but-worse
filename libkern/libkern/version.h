// Taken from version.h-template
// XNUBW

#ifndef	LIBKERN_VERSION_H
#define LIBKERN_VERSION_H

/* Kernel versions conform to kext version strings, as described in:
 * http://developer.apple.com/technotes/tn/tn1132.html
 */

/* VERSION_MAJOR, version_major is an integer that represents that major version
 * of the kernel
 */
#define VERSION_MAJOR		2

/* VERSION_MINOR, version_minor is an integer that represents the minor version
 * of the kernel
 */
#define VERSION_MINOR		28

/* VERSION_VARIANT, version_variant is a string that contains the revision,
 * stage, and prerelease level of the kernel
 */
#define VERSION_VARIANT		"Release"

/* VERSION_REVISION, version_revision is an integer that represents the revision
 * of the kernel
 */
#define VERSION_REVISION	2025

/* VERSION_STAGE, version_stage, is an integer set to one of the following: */
#define VERSION_STAGE_DEV	0x20
#define VERSION_STAGE_ALPHA	0x40
#define VERSION_STAGE_BETA	0x60
#define VERSION_STAGE_RELEASE	0x80
#define VERSION_STAGE		VERSION_STAGE_RELEASE

/* VERSION_PRERELEASE_LEVEL, version_prerelease_level, is an integer sequence
 * number to distinguish between pre-release builds
 */
#define VERSION_PRERELEASE_LEVEL	8

/* OSBUILD_CONFIG, osbuild_config is a one-word string describing the build
 * configuration of the kernel, e.g., development or release */
#define OSBUILD_CONFIG  "Dev"

/* OSTYPE, ostype, is a string as returned by uname -s */
#define	OSTYPE		"XNUBW (XNU But Worse)"

/* OSRELEASE, osrelease, is a string as returned by uname -r */
#define OSRELEASE	"2.28.2025.8"

#ifndef ASSEMBLER

#if defined(__cplusplus)
extern "C" {
#endif

/* Build-time value of VERSION_MAJOR */
extern const int version_major;

/* Build-time value of VERSION_MINOR */
extern const int version_minor;

/* Build-time value of VERSION_VARIANT */
extern const char version_variant[];

/* Build-time value of VERSION_REVISION */
extern const int version_revision;

/* Build-time value of VERSION_STAGE */
extern const int version_stage;

/* Build-time value of VERSION_PRERELEASE_LEVEL */
extern const int version_prerelease_level;

/* Build-time value of CURRENT_KERNEL_CONFIG */
extern const char osbuild_config[];

/* Build-time value of OSTYPE */
extern const char ostype[];

/* Build-time value of OSRELEASE */
extern const char osrelease[];

/* osbuilder is a string as returned by uname -r */
extern const char osbuilder[];

/* version is a string of the following form, as returned by uname -v:
 * "Darwin Kernel Version <osrelease>: <build date>; <osbuilder>:<build root>"
 */

extern const char version[];

#define OSVERSIZE 256
extern char osversion[];


#if defined(__cplusplus)
}
#endif

#endif /* !ASSEMBLER */

#endif	/* LIBKERN_VERSION_H */
