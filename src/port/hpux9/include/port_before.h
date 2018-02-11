#ifndef PORT_BEFORE_H
#define PORT_BEFORE_H

#define WANT_IRS_NIS
#undef WANT_IRS_PW
#undef WANT_IRS_GR
#define SIG_FN void
#define ISC_SOCKLEN_T int

#if defined(HAS_PTHREADS) && defined(_REENTRANT)
#define DO_PTHREADS
#endif

#include <limits.h>
#define PATH_MAX _POSIX_PATH_MAX

#include <time.h>
struct timespec {
	time_t	tv_sec;		/* seconds */
	long	tv_nsec;	/* nanoseconds */
};

#define GETGROUPLIST_ARGS const char *name, gid_t basegid, gid_t *groups, \
		      int *ngroups
#endif /*PORT_BEFORE_H*/
#ifdef __GNUC__
#define ISC_FORMAT_PRINTF(fmt, args) \
	__attribute__((__format__(__printf__, fmt, args)))
#else
#define ISC_FORMAT_PRINTF(fmt, args)
#endif
