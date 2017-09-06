/*-
 * See the file LICENSE for redistribution information.
 *
 * Copyright (c) 2005, 2011 Oracle and/or its affiliates.  All rights reserved.
 *
 * $Id: os_abort.c,v 1.1.1.1 2012/04/24 01:43:06 thki81 Exp $
 */

#include "db_config.h"

#include "db_int.h"

/*
 * __os_abort --
 *
 * PUBLIC: void __os_abort __P((ENV *));
 */
void
__os_abort(env)
	ENV *env;
{
	__os_stack(env);		/* Try and get a stack trace. */

#ifdef HAVE_ABORT
	abort();			/* Try and drop core. */
	/* NOTREACHED */
#endif
#ifdef SIGABRT
	(void)raise(SIGABRT);		/* Try and drop core. */
#endif
	exit(1);			/* Quit anyway. */
	/* NOTREACHED */
}