/*
 *
 *   Authors:
 *    Lars Fenneberg		<lf@elemental.net>
 *    Reuben Hawkins		<reubenhwk@gmail.com>
 *
 *   This software is Copyright 1996,1997 by the above mentioned author(s),
 *   All Rights Reserved.
 *
 *   The license which is distributed with this software in the file COPYRIGHT
 *   applies to this software. If your distribution is missing this file, you
 *   may request it from <reubenhwk@gmail.com>.
 *
 */

#pragma once

#include "radvd.h"

int netlink_get_device_addr_len(struct Interface *iface);
void process_netlink_msg(int sock, struct Interface *ifaces);
int netlink_socket(void);
