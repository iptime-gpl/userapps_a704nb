/*
 * FLOW fwd - set/get default flow forwarding
 *
 * Copyright (C) 2015, Broadcom Corporation. All Rights Reserved.
 * 
 * Permission to use, copy, modify, and/or distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY
 * SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN ACTION
 * OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF OR IN
 * CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 *
 *
 * <<Broadcom-WL-IPTag/Open:>>
 *
 * $Id: flow_fwd.c,v 1.1.1.1 2016/04/25 00:47:40 bcmac Exp $
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>

#include <netdb.h>

#include "flow_api.h"

int main(int argc, char *argv[])
{
	int ret;
	ctf_fwd_t fwd;

	switch (argc) {
	case 1:
		ret = flow_default_forwarding_get(&fwd);

		if (ret == SUCCESS) {
			printf("Forwarding is %s\n",
			       (fwd == CTF_FWD_FASTPATH) ? "fastpath" : "host");
		}
		break;
	case 2:
		if (strcmp(argv[1], "fastpath") == 0) {
			fwd = CTF_FWD_FASTPATH;
		} else if (strcmp(argv[1], "host") == 0) {
			fwd = CTF_FWD_HOST;
		} else {
			fprintf(stderr, "Usage: %s [fastpath | host]\n", argv[0]);
			exit(EXIT_FAILURE);
		}
		ret = flow_default_forwarding_set(fwd);
		break;
	default:
		fprintf(stderr, "Usage: %s [fastpath | host]\n", argv[0]);
		exit(EXIT_FAILURE);
	}

	return ret;
}
